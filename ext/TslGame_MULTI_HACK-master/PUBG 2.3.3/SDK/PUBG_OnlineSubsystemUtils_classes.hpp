#pragma once

// PUBG (Beta) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState
{
	EBeaconConnectionState__Invalid = 0,
	EBeaconConnectionState__Closed = 1,
	EBeaconConnectionState__Pending = 2,
	EBeaconConnectionState__Open   = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX = 4
};


// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult
{
	EPartyReservationResult__NoResult = 0,
	EPartyReservationResult__RequestPending = 1,
	EPartyReservationResult__GeneralError = 2,
	EPartyReservationResult__PartyLimitReached = 3,
	EPartyReservationResult__IncorrectPlayerCount = 4,
	EPartyReservationResult__RequestTimedOut = 5,
	EPartyReservationResult__ReservationDuplicate = 6,
	EPartyReservationResult__ReservationNotFound = 7,
	EPartyReservationResult__ReservationAccepted = 8,
	EPartyReservationResult__ReservationDenied = 9,
	EPartyReservationResult__ReservationDenied_Banned = 10,
	EPartyReservationResult__ReservationRequestCanceled = 11,
	EPartyReservationResult__ReservationInvalid = 12,
	EPartyReservationResult__BadSessionId = 13,
	EPartyReservationResult__EPartyReservationResult_MAX = 14
};


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType
{
	EClientRequestType__NonePending = 0,
	EClientRequestType__ExistingSessionReservation = 1,
	EClientRequestType__ReservationUpdate = 2,
	EClientRequestType__EmptyServerReservation = 3,
	EClientRequestType__Reconnect  = 4,
	EClientRequestType__EClientRequestType_MAX = 5
};



//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return ptr;
	}


	void STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* Progress);
	void STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);
};


// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0038 (0x0060 - 0x0028)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                              		// 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return ptr;
	}


	class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                              		// 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return ptr;
	}


	class UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag);
};


// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0078 (0x00A0 - 0x0028)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x58];                              		// 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return ptr;
	}


	class UConnectionCallbackProxy* STATIC_ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x00C8 (0x00F0 - 0x0028)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0xA8];                              		// 0x0048(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		return ptr;
	}


	class UCreateSessionCallbackProxy* STATIC_CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN);
};


// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0078 (0x00A0 - 0x0028)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x58];                              		// 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		return ptr;
	}


	class UDestroySessionCallbackProxy* STATIC_DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                              		// 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		return ptr;
	}


	class UEndMatchCallbackProxy* STATIC_EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchID, TEnumAsByte<enum class EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<enum class EMPMatchOutcome> OtherPlayersOutcome);
};


// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                              		// 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		return ptr;
	}


	class UEndTurnCallbackProxy* STATIC_EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface);
};


// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0098 (0x00C0 - 0x0028)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x78];                              		// 0x0048(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		return ptr;
	}


	struct FString STATIC_GetServerName(const struct FBlueprintSessionResult& Result);
	int STATIC_GetPingInMs(const struct FBlueprintSessionResult& Result);
	int STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& Result);
	int STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
	class UFindSessionsCallbackProxy* STATIC_FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN);
};


// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0058 (0x0080 - 0x0028)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                              		// 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		return ptr;
	}


	class UFindTurnBasedMatchCallbackProxy* STATIC_FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches);
};


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0098 (0x00C0 - 0x0028)
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x78];                              		// 0x0048(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return ptr;
	}


	class UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
};


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x00A8 (0x00D0 - 0x0028)
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x88];                              		// 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return ptr;
	}


	class UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);
};


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x00A8 (0x00D0 - 0x0028)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x88];                              		// 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		return ptr;
	}


	class UInAppPurchaseRestoreCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.IpConnection
// 0x0020 (0x33708 - 0x336E8)
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x20];                              		// 0x336E8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.IpNetDriver
// 0x0020 (0x0428 - 0x0408)
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach : 1;                               		// 0x0408(0x0001) (CPF_Config)
	unsigned char                                      AllowPlayerPortUnreach : 1;                       		// 0x0408(0x0001) (CPF_Config)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0409(0x0003) MISSED OFFSET
	uint32_t                                           MaxPortCountToTry;                                		// 0x040C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                              		// 0x0410(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0138 (0x0160 - 0x0028)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x118];                             		// 0x0048(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		return ptr;
	}


	class UJoinSessionCallbackProxy* STATIC_JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};


// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return ptr;
	}


	bool STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue);
};


// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0078 (0x00A0 - 0x0028)
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x58];                              		// 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return ptr;
	}


	class ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName);
};


// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x00A8 (0x00D0 - 0x0028)
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x88];                              		// 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return ptr;
	}


	class ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName);
};


// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0038 (0x0060 - 0x0028)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                              		// 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		return ptr;
	}


	class ULogoutCallbackProxy* STATIC_Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0028 (0x03B0 - 0x0388)
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0388(0x0008) MISSED OFFSET
	float                                              BeaconConnectionInitialTimeout;                   		// 0x0390(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              BeaconConnectionTimeout;                          		// 0x0394(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                        		// 0x0398(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                              		// 0x03A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0070 (0x0420 - 0x03B0)
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                      		// 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNetConnection*                              BeaconConnection;                                 		// 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EBeaconConnectionState>     ConnectionState;                                  		// 0x03C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5F];                              		// 0x03C1(0x005F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}


	void ClientOnConnected();
};


// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0048 (0x0070 - 0x0028)
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                      		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumConsumedReservations;                          		// 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                MaxReservations;                                  		// 0x0034(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumTeams;                                         		// 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumPlayersPerTeam;                                		// 0x003C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FName                                       TeamAssignmentMethod;                             		// 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                ReservedHostTeamNum;                              		// 0x0048(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                ForceTeamNum;                                     		// 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<struct FPartyReservation>                   Reservations;                                     		// 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x0130 (0x0550 - 0x0420)
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0xC0];                              		// 0x0420(0x00C0) MISSED OFFSET
	struct FString                                     DestSessionId;                                    		// 0x04E0(0x0010) (CPF_ZeroConstructor)
	struct FPartyReservation                           PendingReservation;                               		// 0x04F0(0x0030)
	TEnumAsByte<enum class EClientRequestType>         RequestType;                                      		// 0x0520(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPendingReservationSent : 1;                      		// 0x0521(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCancelReservation : 1;                           		// 0x0522(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2D];                              		// 0x0523(0x002D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return ptr;
	}


	void ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<enum class EPartyReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<enum class EPartyReservationResult> ReservationResponse);
};


// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (0x0420 - 0x0420)
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return ptr;
	}


	void ServerPong();
	void ClientPing();
};


// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x00B8 (0x0468 - 0x03B0)
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                       		// 0x03B0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x03B4(0x0004) MISSED OFFSET
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                     		// 0x03B8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0xA0];                              		// 0x03C8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0028 (0x03B0 - 0x0388)
class AOnlineBeaconHostObject : public AActor
{
public:
	struct FString                                     BeaconTypeName;                                   		// 0x0388(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UClass*                                      ClientBeaconActorClass;                           		// 0x0398(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                     		// 0x03A0(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0160 (0x0510 - 0x03B0)
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                            		// 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x148];                             		// 0x03B8(0x0148) MISSED OFFSET
	unsigned char                                      bLogoutOnSessionTimeout : 1;                      		// 0x0500(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0501(0x0003) MISSED OFFSET
	float                                              SessionTimeoutSecs;                               		// 0x0504(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_Config, CPF_IsPlainOldData)
	float                                              TravelSessionTimeoutSecs;                         		// 0x0508(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (0x03B0 - 0x03B0)
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x00F8 (0x0120 - 0x0028)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	unsigned char                                      UnknownData00[0xF8];                              		// 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0018 (0x0050 - 0x0038)
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	unsigned char                                      bOnlinePIEEnabled : 1;                            		// 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0039(0x0007) MISSED OFFSET
	TArray<struct FPIELoginSettingsInternal>           Logins;                                           		// 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0298 (0x02C0 - 0x0028)
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData00[0x288];                             		// 0x0028(0x0288) MISSED OFFSET
	unsigned char                                      bIsFromInvite : 1;                                		// 0x02B0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bHandlingDisconnect : 1;                          		// 0x02B1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                               		// 0x02B2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                              		// 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		return ptr;
	}


	class UQuitMatchCallbackProxy* STATIC_QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<enum class EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);
};


// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0030 (0x0058 - 0x0028)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                        		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                        		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		return ptr;
	}


	class UShowLoginUICallbackProxy* STATIC_ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
};


// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		return ptr;
	}


	void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	void STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName);
	void STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex);
	void STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
