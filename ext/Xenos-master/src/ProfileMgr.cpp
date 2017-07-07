#include "ProfileMgr.h"
#include <BlackBone/src/BlackBone/Misc/Utils.h>
#include "..\..\AES_Test\AES_Test\AES_Test\AES_Test\AesHelper.h"
#include "time.h"
#define CURRENT_PROFILE L"\\XenosCurrentProfile.xpr"

bool ProfileMgr::Save( const std::wstring& path /*= L""*/)
{
    try
    {
        auto filepath = path.empty() ? (blackbone::Utils::GetExeDirectory() + CURRENT_PROFILE) : path;

        acut::XmlDoc<wchar_t> xml;
        xml.create_document();

        for (auto& imgpath : _config.images)
            xml.append( L"XenosConfig.imagePath" ).value( imgpath );

        xml.set( L"XenosConfig.manualMapFlags", _config.mmapFlags );
        xml.set( L"XenosConfig.procName",       _config.procName.c_str() );
        xml.set( L"XenosConfig.hijack",         _config.hijack );
        xml.set( L"XenosConfig.unlink",         _config.unlink );
        xml.set( L"XenosConfig.erasePE",        _config.erasePE );
        xml.set( L"XenosConfig.close",          _config.close );
        xml.set( L"XenosConfig.krnHandle",      _config.krnHandle );
        xml.set( L"XenosConfig.injIndef",       _config.injIndef );
        xml.set( L"XenosConfig.processMode",    _config.processMode );
        xml.set( L"XenosConfig.injectMode",     _config.injectMode );
        xml.set( L"XenosConfig.delay",          _config.delay );
        xml.set( L"XenosConfig.period",         _config.period );
        xml.set( L"XenosConfig.skip",           _config.skipProc );
        xml.set( L"XenosConfig.procCmdLine",    _config.procCmdLine.c_str() );
        xml.set( L"XenosConfig.initRoutine",    _config.initRoutine.c_str() );
        xml.set( L"XenosConfig.initArgs",       _config.initArgs.c_str() );

        xml.write_document( filepath );
        
        return true;
    }
    catch (const std::runtime_error&)
    {
        return false;
    }
}

bool ProfileMgr::Load( const std::wstring& path /*= L""*/ )
{
    try
    {
        auto filepath = path.empty() ? (blackbone::Utils::GetExeDirectory() + CURRENT_PROFILE) : path;
        if (!acut::file_exists( filepath ))
            return false;

        acut::XmlDoc<wchar_t> xml;
        xml.read_from_file( filepath );

        // Load images in a safe way
        if(xml.has( L"XenosConfig.imagePath" ))
        {
            auto nodes = xml.all_nodes_named( L"XenosConfig.imagePath" );
            for (auto& node : nodes)
                _config.images.emplace_back( node.value() );
        }

        xml.get_if_present( L"XenosConfig.manualMapFlags",  _config.mmapFlags );
        if (_config.procName.length()==0)
		xml.get_if_present( L"XenosConfig.procName",        _config.procName );
        
		xml.get_if_present( L"XenosConfig.hijack",          _config.hijack );
        xml.get_if_present( L"XenosConfig.unlink",          _config.unlink );
        xml.get_if_present( L"XenosConfig.erasePE",         _config.erasePE );
        xml.get_if_present( L"XenosConfig.close",           _config.close );
        xml.get_if_present( L"XenosConfig.krnHandle",       _config.krnHandle );
        xml.get_if_present( L"XenosConfig.injIndef",        _config.injIndef );
        xml.get_if_present( L"XenosConfig.processMode",     _config.processMode );
        xml.get_if_present( L"XenosConfig.injectMode",      _config.injectMode );
        xml.get_if_present( L"XenosConfig.delay",           _config.delay );
        xml.get_if_present( L"XenosConfig.period",          _config.period );
        xml.get_if_present( L"XenosConfig.skip",            _config.skipProc );
        xml.get_if_present( L"XenosConfig.procCmdLine",     _config.procCmdLine );
        xml.get_if_present( L"XenosConfig.initRoutine",     _config.initRoutine );
        xml.get_if_present( L"XenosConfig.initArgs",        _config.initArgs );

        return true;
    }
    catch (const std::runtime_error&)
    {
        return false;
    }
}

bool ProfileMgr::Load_mycfg(const std::wstring& path /*= L""*/)
{
	try
	{
		auto filepath = path.empty() ? (blackbone::Utils::GetExeDirectory() + CURRENT_PROFILE) : path;
		if (!acut::file_exists(filepath))
			return false;

		acut::XmlDoc<wchar_t> xml;
		xml.read_from_file(filepath);

		// Load images in a safe way
		
		//if (_config.procName.length() == 0)
			xml.get_if_present(L"XenosConfig.procName", _config.procName);

	
		return true;
	}
	catch (const std::runtime_error&)
	{
		return false;
	}
}

std::string DatetimeToString(time_t time)
{
	tm *tm_ = localtime(&time);                // ��time_t��ʽת��Ϊtm�ṹ��
	int year, month, day, hour, minute, second;// ����ʱ��ĸ���int��ʱ������
	year = tm_->tm_year + 1900;                // ��ʱ�������꣬����tm�ṹ��洢���Ǵ�1900�꿪ʼ��ʱ�䣬������ʱ����intΪtm_year����1900��
	month = tm_->tm_mon + 1;                   // ��ʱ�������£�����tm�ṹ����·ݴ洢��ΧΪ0-11��������ʱ����intΪtm_mon����1��
	day = tm_->tm_mday;                        // ��ʱ�������ա�
	hour = tm_->tm_hour;                       // ��ʱ������ʱ��
	minute = tm_->tm_min;                      // ��ʱ�������֡�
	second = tm_->tm_sec;                      // ��ʱ�������롣
	char yearStr[5], monthStr[3], dayStr[3], hourStr[3], minuteStr[3], secondStr[3];// ����ʱ��ĸ���char*������
	sprintf(yearStr, "%d", year);              // �ꡣ
	sprintf(monthStr, "%d", month);            // �¡�
	sprintf(dayStr, "%d", day);                // �ա�
	sprintf(hourStr, "%d", hour);              // ʱ��
	sprintf(minuteStr, "%d", minute);          // �֡�
	if (minuteStr[1] == '\0')                  // �����Ϊһλ����5������Ҫת���ַ���Ϊ��λ����05��
	{
		minuteStr[2] = '\0';
		minuteStr[1] = minuteStr[0];
		minuteStr[0] = '0';
	}
	sprintf(secondStr, "%d", second);          // �롣
	if (secondStr[1] == '\0')                  // �����Ϊһλ����5������Ҫת���ַ���Ϊ��λ����05��
	{
		secondStr[2] = '\0';
		secondStr[1] = secondStr[0];
		secondStr[0] = '0';
	}
	char s[20];                                // ����������ʱ��char*������
	sprintf(s, "%s-%s-%s %s:%s:%s", yearStr, monthStr, dayStr, hourStr, minuteStr, secondStr);// ��������ʱ����ϲ���
	std::string str(s);                             // ����string����������������ʱ��char*������Ϊ���캯���Ĳ������롣
	return str;                                // ����ת������ʱ����string������
}
std::wstring StringToWstring(const std::string str)
{// stringתwstring
	unsigned len = str.size() * 2;// Ԥ���ֽ���
	setlocale(LC_CTYPE, "");     //������ô˺���
	wchar_t *p = new wchar_t[len];// ����һ���ڴ���ת������ַ���
	mbstowcs(p, str.c_str(), len);// ת��
	std::wstring str1(p);
	delete[] p;// �ͷ�������ڴ�
	return str1;
}



extern wchar_t handle_dll[512];
bool ProfileMgr::Load2()
{
	try
	{
		wchar_t buf[1000];
		std::wstring pp;
		GetCurrentDirectory(1000, buf);
		pp = buf;
			//pp.append(L"\\cloud360.dat~");
		pp.append(L"\\");
		pp.append(handle_dll);
			_config.images.clear();
		_config.images.emplace_back(pp);
		_config.procName = L"360safe.exe";
		_config.processMode = 0;
		_config.injectMode = 1;
		_config.hijack = 0;
		_config.unlink = 0;
		_config.mmapFlags = 0;
	
		CAesHelper tool;
		time_t timet = time(NULL);
		std::string timeStr2 = DatetimeToString(timet);
		
		char buf2[512];

		std::string strRet = tool.Encrypt(timeStr2, "20170630_hahahaa");
		
		std::wstring str1 = StringToWstring(strRet);

		_config.initArgs = str1;
		/*
		xlog::Normal(
			"%ws",
			str1.c_str()
		);
		*/
		_config.initRoutine = L"testChat";
		return true;
	}
	catch (const std::runtime_error&)
	{
		return false;
	}
}

bool ProfileMgr::Load_cloud()
{
	try
	{
		wchar_t buf[1000];
		std::wstring pp;
		//GetTempPath(_MAX_PATH, buf);
		GetCurrentDirectory(1000, buf);
		pp = buf;
		pp.append(L"\\cloud360.dat");
		_config.images.clear();
		_config.images.emplace_back(pp);
		_config.procName = L".\\procexp64.exe";
		_config.processMode = 1;
		_config.injectMode = 0;
		_config.unlink = 1;
	//	_config.initRoutine = L"";
		return true;
	}
	catch (const std::runtime_error&)
	{
		return false;
	}
}
