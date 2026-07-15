#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"

class Class_1_89C8B004269BF563;
class Class_1_D40936EF3BF54118_8;
class Class_1_F3494824EE6E19ED;
class Class_1_FE48ABD01C0AD9E4;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class LittleWheelSelectConfig; }
namespace RPG::Client { class OnlinePlayRoomModule_PendingVisitUIDInfo; }
namespace RPG::Client { class OnlinePlayRoomRecentVisitorInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE_CLEARPENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xCEEF930)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_DISBANDONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xCEEE8A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEEA120)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ENTERONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xCEEE4F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCHATMESSAGEDATALIST_OFFSET UNITYSDK_OFFSET(0xCEEEF50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xCEEDDF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERCAPACITY_OFFSET UNITYSDK_OFFSET(0xCEEE390)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xCEEEC00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETPENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xCEEF8F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETRECENTVISITORLIST_OFFSET UNITYSDK_OFFSET(0xCEEFBB0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMNAME_OFFSET UNITYSDK_OFFSET(0xCEECDC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMPOPULARITYVALUE_OFFSET UNITYSDK_OFFSET(0xCEEEFC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_CURRENTROOMOWNERUID_OFFSET UNITYSDK_OFFSET(0xCEF0C90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISINSESSION_OFFSET UNITYSDK_OFFSET(0xCED0310)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0xCEF0CE0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__CURRENTSESSION_OFFSET UNITYSDK_OFFSET(0xCEF0D00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__ONLINEPLAYERINFOLISTINROOM_OFFSET UNITYSDK_OFFSET(0xCEF0D20)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xCEF0D80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGTARGETUID_OFFSET UNITYSDK_OFFSET(0xCEF0D40)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITDICT_OFFSET UNITYSDK_OFFSET(0xCEF0DA0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITREASON_OFFSET UNITYSDK_OFFSET(0xCEF0D60)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCEE99A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISANYONEVISITING_OFFSET UNITYSDK_OFFSET(0xCEEEB20)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISINSELFROOM_OFFSET UNITYSDK_OFFSET(0xCEEEA60)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISPLAYERVISITING_OFFSET UNITYSDK_OFFSET(0xCEEEB80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_KICKOUTONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xCEEE7F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCEE9FE0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_QUITONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xCEEE740)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SENDLIKEROOMDIY_OFFSET UNITYSDK_OFFSET(0xCEEE950)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SETVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0xCEEF9A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET_ISVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0xCEF0CF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__CURRENTSESSION_OFFSET UNITYSDK_OFFSET(0xCEF0D10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__ONLINEPLAYERINFOLISTINROOM_OFFSET UNITYSDK_OFFSET(0xCEF0D30)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xCEF0D90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGTARGETUID_OFFSET UNITYSDK_OFFSET(0xCEF0D50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITDICT_OFFSET UNITYSDK_OFFSET(0xCEF0DB0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITREASON_OFFSET UNITYSDK_OFFSET(0xCEF0D70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TOGGLEONLINEPLAYROOMGUESTVISIBLE_OFFSET UNITYSDK_OFFSET(0xCEEFA00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRANSFERTOARRANGEPAGE_OFFSET UNITYSDK_OFFSET(0xCEEF010)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETGUESTPLAYERINFOBYPETENTITY_OFFSET UNITYSDK_OFFSET(0xCEEE470)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xCEEE410)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xCEEF240)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYONLINEROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xCEED770)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYRECENTVISITOR_OFFSET UNITYSDK_OFFSET(0xCEEFA70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCEE9F00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCEE99F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CACHEOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xCEEB970)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0xCEF0070)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCEF0DC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_0_OFFSET UNITYSDK_OFFSET(0xCEF0FC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ISVALIDSESSIONFORROOM_OFFSET UNITYSDK_OFFSET(0xCEEB200)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xCEEB490)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xCEED6A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONENTERSCENESCRSP_OFFSET UNITYSDK_OFFSET(0xCEECB10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERINFOCHANGED_OFFSET UNITYSDK_OFFSET(0xCEED610)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERLEAVEROOM_OFFSET UNITYSDK_OFFSET(0xCEEB3E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCEEA330)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYPRECHECKENTERROOMSCRSP_OFFSET UNITYSDK_OFFSET(0xCEEBFC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYQUERYRECENTVISITORSSCRSP_OFFSET UNITYSDK_OFFSET(0xCEED6F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYROOMPLAYERMOVESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCEEBEA0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYTALKSCRSP_OFFSET UNITYSDK_OFFSET(0xCEED450)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHDIYLIKESCRSP_OFFSET UNITYSDK_OFFSET(0xCEECBE0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xCEECE90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__SETONLINEPLAYROOMLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0xCEEB260)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYCREATESESSION_OFFSET UNITYSDK_OFFSET(0xCEEAEA0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYDISPOSESESSION_OFFSET UNITYSDK_OFFSET(0xCEEA170)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYENTERONLINEFUNCTION_OFFSET UNITYSDK_OFFSET(0xCEEE660)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYINSERTVISITTOAST_OFFSET UNITYSDK_OFFSET(0xCEF0280)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTOREONLINESESSION_OFFSET UNITYSDK_OFFSET(0xCEED3B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTORESESSION_OFFSET UNITYSDK_OFFSET(0xCEF0220)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__UPDATEONLINEPLAYERINFO_OFFSET UNITYSDK_OFFSET(0xCEEB090)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_0_OFFSET UNITYSDK_OFFSET(0xCEF0EF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_1_OFFSET UNITYSDK_OFFSET(0xCEF0FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule_TypeDefinitionIndex = 63449;

	class OnlinePlayRoomModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* __PendingOperationRecordList_k__BackingField; // 0x10
		::Class_1_F3494824EE6E19ED* __CurrentSession_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* __PendingVisitDict_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_89C8B004269BF563*>* __OnlinePlayerInfoListInRoom_k__BackingField; // 0x28
		::System::UInt32 __PendingVisitReason_k__BackingField; // 0x30
		::System::UInt32 __PendingTargetUid_k__BackingField; // 0x34
		::System::Boolean _IsVisitToastActive_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnSocialPlayGameplayOperationScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayRoomPlayerMoveScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYROOMPLAYERMOVESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayPreCheckEnterRoomScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYPRECHECKENTERROOMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterSceneScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONENTERSCENESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainCakeCatchDiyLikeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHDIYLIKESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainCakeCatchGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayTalkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYTALKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerInfoChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERINFOCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void _OnSocialPlayQueryRecentVisitorsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYQUERYRECENTVISITORSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void TryqueryOnlineRoomStatus(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYONLINEROOMSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>* GetOnlineRoomPlayerBriefDisplayDataList(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_OFFSET))(this, a1);
		}

		::System::UInt32 GetOnlineRoomPlayerCapacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERCAPACITY_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* TryGetOnlineRoomPlayerBriefDisplayData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::Boolean TryGetGuestPlayerInfoByPetEntity(::RPG::GameCore::GameEntity* a1, ::Class_1_89C8B004269BF563*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_89C8B004269BF563*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETGUESTPLAYERINFOBYPETENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void EnterOnlinePlayRoom(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ENTERONLINEPLAYROOM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void QuitOnlinePlayRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_QUITONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void KickOutOnlinePlayRoom(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_KICKOUTONLINEPLAYROOM_OFFSET))(this, a1);
		}

		::System::Void DisbandOnlinePlayRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_DISBANDONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void SendLikeRoomDIY()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SENDLIKEROOMDIY_OFFSET))(this);
		}

		::System::Boolean IsInSelfRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISINSELFROOM_OFFSET))(this);
		}

		::System::Boolean IsAnyoneVisiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISANYONEVISITING_OFFSET))(this);
		}

		::System::Boolean IsPlayerVisiting(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISPLAYERVISITING_OFFSET))(this, a1);
		}

		::System::UInt32 GetOnlineRoomPlayerIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* GetChatMessageDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCHATMESSAGEDATALIST_OFFSET))(this);
		}

		::System::String* GetRoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMNAME_OFFSET))(this);
		}

		::System::UInt32 GetRoomPopularityValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMPOPULARITYVALUE_OFFSET))(this);
		}

		::System::Void TransferToArrangePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRANSFERTOARRANGEPAGE_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* TryGetPendingVisitPlayerBriefDisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetPendingOperationRecordList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETPENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void ClearPendingOperationRecordList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_CLEARPENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void SetVisitToastActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SETVISITTOASTACTIVE_OFFSET))(this, a1);
		}

		::System::Void ToggleOnlinePlayRoomGuestVisible(::System::Boolean a1, ::RPG::GameCore::CharacterVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TOGGLEONLINEPLAYROOMGUESTVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void TryQueryRecentVisitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYRECENTVISITOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>* GetRecentVisitorList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETRECENTVISITORLIST_OFFSET))(this);
		}

		::System::Boolean _IsValidSessionForRoom(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ISVALIDSESSIONFORROOM_OFFSET))(this, a1);
		}

		::System::Void _TryCreateSession(::Class_1_FE48ABD01C0AD9E4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE48ABD01C0AD9E4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYCREATESESSION_OFFSET))(this, a1);
		}

		::System::Void _TryRestoreSession(::Class_1_FE48ABD01C0AD9E4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE48ABD01C0AD9E4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTORESESSION_OFFSET))(this, a1);
		}

		::System::Void _TryDisposeSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYDISPOSESESSION_OFFSET))(this);
		}

		::System::Void _TryRestoreOnlineSession(::Class_1_FE48ABD01C0AD9E4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE48ABD01C0AD9E4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTOREONLINESESSION_OFFSET))(this, a1);
		}

		::System::Void _UpdateOnlinePlayerInfo(::Class_1_89C8B004269BF563* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_89C8B004269BF563*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__UPDATEONLINEPLAYERINFO_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerLeaveRoom(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERLEAVEROOM_OFFSET))(this, a1);
		}

		::System::Void _CacheOperationRecordList(::Class_1_D40936EF3BF54118_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CACHEOPERATIONRECORDLIST_OFFSET))(this, a1);
		}

		::System::Void _NotifyOperationRecordList(::Class_1_D40936EF3BF54118_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYOPERATIONRECORDLIST_OFFSET))(this, a1);
		}

		::System::Void _SetOnlinePlayRoomLoadingStrategy(::System::Boolean a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__SETONLINEPLAYROOMLOADINGSTRATEGY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _TryEnterOnlineFunction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYENTERONLINEFUNCTION_OFFSET))(this);
		}

		::System::Void _TryInsertVisitToast(::Class_1_89C8B004269BF563* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_89C8B004269BF563*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYINSERTVISITTOAST_OFFSET))(this, a1);
		}

		::RPG::Client::LittleWheelSelectConfig* _CreateLittleWheelSelectConfig()
		{
			return ((::RPG::Client::LittleWheelSelectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsInSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISINSESSION_OFFSET))(this);
		}

		::System::UInt32 get_CurrentRoomOwnerUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_CURRENTROOMOWNERUID_OFFSET))(this);
		}

		::System::Boolean get_IsVisitToastActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISVISITTOASTACTIVE_OFFSET))(this);
		}

		::System::Void set_IsVisitToastActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET_ISVISITTOASTACTIVE_OFFSET))(this, a1);
		}

		::Class_1_F3494824EE6E19ED* get__CurrentSession()
		{
			return ((::Class_1_F3494824EE6E19ED*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__CURRENTSESSION_OFFSET))(this);
		}

		::System::Void set__CurrentSession(::Class_1_F3494824EE6E19ED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3494824EE6E19ED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__CURRENTSESSION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_89C8B004269BF563*>* get__OnlinePlayerInfoListInRoom()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_89C8B004269BF563*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__ONLINEPLAYERINFOLISTINROOM_OFFSET))(this);
		}

		::System::Void set__OnlinePlayerInfoListInRoom(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_89C8B004269BF563*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_89C8B004269BF563*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__ONLINEPLAYERINFOLISTINROOM_OFFSET))(this, a1);
		}

		::System::UInt32 get__PendingTargetUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGTARGETUID_OFFSET))(this);
		}

		::System::Void set__PendingTargetUid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGTARGETUID_OFFSET))(this, a1);
		}

		::System::UInt32 get__PendingVisitReason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITREASON_OFFSET))(this);
		}

		::System::Void set__PendingVisitReason(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITREASON_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get__PendingOperationRecordList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void set__PendingOperationRecordList(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOPERATIONRECORDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* get__PendingVisitDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITDICT_OFFSET))(this);
		}

		::System::Void set__PendingVisitDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITDICT_OFFSET))(this, a1);
		}

		::System::Void __OnSocialPlayPreCheckEnterRoomScRsp_b__7_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_0_OFFSET))(this, a1);
		}

		::System::Void __OnSocialPlayPreCheckEnterRoomScRsp_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_1_OFFSET))(this);
		}

		::System::Int32 _GetOnlineRoomPlayerBriefDisplayDataList_b__16_0(::RPG::Client::PlayerBriefDisplayData* a1, ::RPG::Client::PlayerBriefDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_0_OFFSET))(this, a1, a2);
		}
	};
}
