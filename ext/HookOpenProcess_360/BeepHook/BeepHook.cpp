// BeepHook.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include <string>
#include <iostream>
#include <Windows.h>
#include <string>
#include <wincrypt.h>
#include <vector>
#include "..\..\AES_Test\AES_Test\AES_Test\AES_Test\AesHelper.h"
#include "time.h"
#include <windows.h>  
#include <winbase.h>  
#include <process.h> 

FILE* out;
HANDLE game_handle = 0;
static DWORD dwID=0;
extern int my_recv(void);
static HANDLE(WINAPI * TrueOpenProcess)(
	_In_ DWORD dwDesiredAccess,
	_In_ BOOL  bInheritHandle,
	_In_ DWORD dwProcessId
	) = OpenProcess;
// Detour function that replaces the Sleep API.  
HANDLE WINAPI myOpenProcessHook(
	_In_ DWORD dwDesiredAccess,
	_In_ BOOL  bInheritHandle,
	_In_ DWORD dwProcessId
) {
	HANDLE h;
	if (dwProcessId == dwID) {
		h = TrueOpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_QUERY_INFORMATION, bInheritHandle, dwProcessId);
		WCHAR szBuffer[100];
		//===============do what you want here===================
		wsprintfW(szBuffer, L"Hooked Game Handle = %d", h);
		MessageBox(NULL, szBuffer, L"hook", MB_OK);
		//=======================================================
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		//unhook
		DetourDetach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
		DetourDetach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
		DetourDetach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
		DetourDetach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
		DetourTransactionCommit();
		game_handle = h;
		fprintf(out, "get game process%d\n", h);
		fflush(out);
		h = 0;
	}
	else {
		h = TrueOpenProcess(dwDesiredAccess, bInheritHandle, dwProcessId);
		WCHAR szBuffer[100];
		wsprintfW(szBuffer, L"Hooked Handle = %d", dwProcessId);
		
		//MessageBox(NULL, szBuffer, L"hook", MB_OK);	
	}

	return h;
}

extern "C" __declspec(dllexport) BOOL DeepScan() {
	//MessageBox(NULL, L"dll attached via process", L"h", MB_OK);
	HWND sa = FindWindowW(NULL, L"PLAYERUNKNOWN'S BATTLEGROUNDS ");
	GetWindowThreadProcessId(sa, &dwID);

	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
	DetourTransactionCommit();
	return 0;
}

bool GetPid() {
	//bool ret = true;
	HWND sa = FindWindowW(NULL, L"PLAYERUNKNOWN'S BATTLEGROUNDS ");
	if (sa == NULL) {
		return false;
	}
	GetWindowThreadProcessId(sa, &dwID);
	if (dwID == NULL || dwID == 999999) {
		return false;
	}
	/*WCHAR szBuffer[100];
	wsprintfW(szBuffer, L"Game Pid = %d", dwID);
	MessageBox(NULL, szBuffer, L"h", MB_OK);*/
	return true;
}

unsigned int __stdcall func(void *)
{
	
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
	DetourTransactionCommit();

	while (!GetPid()) {
		Sleep(500);
	}
	WCHAR szBuffer[100];
	wsprintfW(szBuffer, L"Game Pid = %d", dwID);
	MessageBox(NULL, szBuffer, L"h", MB_OK);


	fprintf(out, "find game process\n");
	fflush(out);
	
	fprintf(out, "go recv\n");
	fflush(out);
	my_recv();
	return 0;
}


time_t StringToDatetime(std::string str)
{
	char *cha = (char*)str.data();             // ��stringת����char*��
	tm tm_;                                    // ����tm�ṹ�塣
	int year, month, day, hour, minute, second;// ����ʱ��ĸ���int��ʱ������
	sscanf_s(cha, "%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);// ��string�洢������ʱ�䣬ת��Ϊint��ʱ������
	tm_.tm_year = year - 1900;                 // �꣬����tm�ṹ��洢���Ǵ�1900�꿪ʼ��ʱ�䣬����tm_yearΪint��ʱ������ȥ1900��
	tm_.tm_mon = month - 1;                    // �£�����tm�ṹ����·ݴ洢��ΧΪ0-11������tm_monΪint��ʱ������ȥ1��
	tm_.tm_mday = day;                         // �ա�
	tm_.tm_hour = hour;                        // ʱ��
	tm_.tm_min = minute;                       // �֡�
	tm_.tm_sec = second;                       // �롣
	tm_.tm_isdst = 0;                          // ������ʱ��
	time_t t_ = mktime(&tm_);                  // ��tm�ṹ��ת����time_t��ʽ��
	return t_;                                 // ����ֵ�� 
}

std::string WstringToString(const std::wstring str)
{// wstringתstring
	unsigned len = str.size() * 4;
	setlocale(LC_CTYPE, "");
	char *p = new char[len];
	wcstombs(p, str.c_str(), len);
	std::string str1(p);
	delete[] p;
	return str1;
}


extern "C" __declspec(dllexport) void testChat(wchar_t * str)
{

	CAesHelper tool;
	std::string strRet;

	//MessageBox(NULL, str, NULL, MB_OK);
	out = fopen("./_Kofw.dat2.log", "w");
	strRet = tool.Decrypt(WstringToString(str), "20170630_hahahaa");
	time_t timet = StringToDatetime(strRet);

	time_t t2 = time(NULL);
	char  bb[512];
	sprintf_s(bb, "%d", t2 - timet);
	//MessageBoxA(NULL, bb, NULL, MB_OK);
	if ((t2 - timet) < 30) {

		_beginthreadex(NULL, 0, func, NULL, 0, NULL);
		fprintf(out, "begin thread\n");
		fflush(out);
	}
	return;
}

