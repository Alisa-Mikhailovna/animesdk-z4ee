#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/MiHoYo/SDK/MHYSDKC_Console_JoinRestriction.h"
#include "unitysdk/RPG/Client/LobbyState.h"
#include "unitysdk/System/Object.h"

class Class_1_101A64CBB11918DF_3;
class Class_1_10F56A639581CEB1_18;
class Class_1_1DD6AC150642D284;
class Class_1_7B005A18003A04C3;
class Class_1_C50F5982E5600913;
class Class_1_C76F02504D23985E_3;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASELOBBY_CANCELMATCHPROMISE_OFFSET UNITYSDK_OFFSET(0xBE2BEE0)
#define RPG_CLIENT_BASELOBBY_CANCELMATCH_OFFSET UNITYSDK_OFFSET(0xBE2BC40)
#define RPG_CLIENT_BASELOBBY_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0xBE29EC0)
#define RPG_CLIENT_BASELOBBY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE29CE0)
#define RPG_CLIENT_BASELOBBY_GETCURMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xBE2A120)
#define RPG_CLIENT_BASELOBBY_GETINVITETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBE2A1D0)
#define RPG_CLIENT_BASELOBBY_GETMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xBE29FD0)
#define RPG_CLIENT_BASELOBBY_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xBE2E530)
#define RPG_CLIENT_BASELOBBY_GET_ID_OFFSET UNITYSDK_OFFSET(0xBE2E430)
#define RPG_CLIENT_BASELOBBY_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xBE2E690)
#define RPG_CLIENT_BASELOBBY_GET_ISINFIGHTING_OFFSET UNITYSDK_OFFSET(0xBE2E470)
#define RPG_CLIENT_BASELOBBY_GET_ISLOBBYMAX_OFFSET UNITYSDK_OFFSET(0xBE2E610)
#define RPG_CLIENT_BASELOBBY_GET_ISSELFLEADER_OFFSET UNITYSDK_OFFSET(0xBE2A540)
#define RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xBE2E4F0)
#define RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMULTIPLAYERINFOS_OFFSET UNITYSDK_OFFSET(0xBE2E510)
#define RPG_CLIENT_BASELOBBY_GET_MAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xBE298A0)
#define RPG_CLIENT_BASELOBBY_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xBE2E4D0)
#define RPG_CLIENT_BASELOBBY_GET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0xBE2E550)
#define RPG_CLIENT_BASELOBBY_GET_SELFMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xBE2D4A0)
#define RPG_CLIENT_BASELOBBY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBE2E450)
#define RPG_CLIENT_BASELOBBY_INIT_OFFSET UNITYSDK_OFFSET(0xBE295F0)
#define RPG_CLIENT_BASELOBBY_INVITEPROMISE_OFFSET UNITYSDK_OFFSET(0xBE2A9E0)
#define RPG_CLIENT_BASELOBBY_INVITE_OFFSET UNITYSDK_OFFSET(0xBE2A990)
#define RPG_CLIENT_BASELOBBY_ISALLMEMBERREADY_OFFSET UNITYSDK_OFFSET(0xBE2A070)
#define RPG_CLIENT_BASELOBBY_ISANYPLAYERINFIGHTING_OFFSET UNITYSDK_OFFSET(0xBE2A260)
#define RPG_CLIENT_BASELOBBY_KICKOUTPROMISE_OFFSET UNITYSDK_OFFSET(0xBE2A5A0)
#define RPG_CLIENT_BASELOBBY_KICKOUT_OFFSET UNITYSDK_OFFSET(0xBE2A300)
#define RPG_CLIENT_BASELOBBY_MODIFYSELFINFOPROMISE_OFFSET UNITYSDK_OFFSET(0xBE2B080)
#define RPG_CLIENT_BASELOBBY_MODIFYSELFINFO_OFFSET UNITYSDK_OFFSET(0xBE2AE50)
#define RPG_CLIENT_BASELOBBY_QUITPROMISE_OFFSET UNITYSDK_OFFSET(0xBE2C530)
#define RPG_CLIENT_BASELOBBY_QUIT_OFFSET UNITYSDK_OFFSET(0xBE2C2F0)
#define RPG_CLIENT_BASELOBBY_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xBE2E540)
#define RPG_CLIENT_BASELOBBY_SET_ID_OFFSET UNITYSDK_OFFSET(0xBE2E440)
#define RPG_CLIENT_BASELOBBY_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xBE2E6A0)
#define RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xBE2E500)
#define RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMULTIPLAYERINFOS_OFFSET UNITYSDK_OFFSET(0xBE2E520)
#define RPG_CLIENT_BASELOBBY_SET_MAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xBE2E570)
#define RPG_CLIENT_BASELOBBY_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xBE2E4E0)
#define RPG_CLIENT_BASELOBBY_SET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0xBE2E560)
#define RPG_CLIENT_BASELOBBY_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xBE2E460)
#define RPG_CLIENT_BASELOBBY_STARTGAME_OFFSET UNITYSDK_OFFSET(0xBE2B9A0)
#define RPG_CLIENT_BASELOBBY_STARTMATCHPROMISE_OFFSET UNITYSDK_OFFSET(0xBE2B610)
#define RPG_CLIENT_BASELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0xBE2B3E0)
#define RPG_CLIENT_BASELOBBY_SYNCFIGHTGAMESTATE_OFFSET UNITYSDK_OFFSET(0xBE2D120)
#define RPG_CLIENT_BASELOBBY_SYNCLOBBYINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBE2D230)
#define RPG_CLIENT_BASELOBBY_SYNCMATCHRESULT_OFFSET UNITYSDK_OFFSET(0xBE2C890)
#define RPG_CLIENT_BASELOBBY__CONTAINMEMBERINFO_OFFSET UNITYSDK_OFFSET(0xBE2DDB0)
#define RPG_CLIENT_BASELOBBY__CREATEPLAYUNITEXTINFO_OFFSET UNITYSDK_OFFSET(0xBE2D700)
#define RPG_CLIENT_BASELOBBY__CREATEPSSESSION_OFFSET UNITYSDK_OFFSET(0xBE2D750)
#define RPG_CLIENT_BASELOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2E6B0)
#define RPG_CLIENT_BASELOBBY__DOINVITEPROMISE_OFFSET UNITYSDK_OFFSET(0xBE2AAF0)
#define RPG_CLIENT_BASELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xBE2D5A0)
#define RPG_CLIENT_BASELOBBY__ONINVITERSP_OFFSET UNITYSDK_OFFSET(0xBE2E170)
#define RPG_CLIENT_BASELOBBY__ONKICKOUTRSP_OFFSET UNITYSDK_OFFSET(0xBE2E080)
#define RPG_CLIENT_BASELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xBE2DBF0)
#define RPG_CLIENT_BASELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xBE2D680)
#define RPG_CLIENT_BASELOBBY__ONPOSTINIT_OFFSET UNITYSDK_OFFSET(0xBE2D640)
#define RPG_CLIENT_BASELOBBY__ONROOMINIT_OFFSET UNITYSDK_OFFSET(0xBE2D5F0)
#define RPG_CLIENT_BASELOBBY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xBE2D6C0)
#define RPG_CLIENT_BASELOBBY__ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0xBE2E390)
#define RPG_CLIENT_BASELOBBY__REMOVEINVALIDMEMBERS_OFFSET UNITYSDK_OFFSET(0xBE2DC30)
#define RPG_CLIENT_BASELOBBY__SYNCLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0xBE2D520)
#define RPG_CLIENT_BASELOBBY__SYNCMATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xBE2C9C0)
#define RPG_CLIENT_BASELOBBY__SYNCMEMBERINFO_OFFSET UNITYSDK_OFFSET(0xBE2D9B0)
#define RPG_CLIENT_BASELOBBY__SYNCMEMBERS_OFFSET UNITYSDK_OFFSET(0xBE298E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby_TypeDefinitionIndex = 62845;

	class BaseLobby : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_C50F5982E5600913*>* _MatchResultMultiPlayerInfos_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _GameParamList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _Members_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _MatchResultMembers_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _UIDToInviteTimeStamp; // 0x30
		::RPG::Client::Promises::Promise* _CreateSessionPromise; // 0x38
		::RPG::Client::LobbyState _PreviousStatus_k__BackingField; // 0x40
		::Enum_3_01618AD0437C8486_2 _Type_k__BackingField; // 0x44
		::System::UInt32 _ChatInviteID; // 0x48
		::RPG::Client::LobbyState _CurrentStatus_k__BackingField; // 0x4C
		::System::UInt64 _ID_k__BackingField; // 0x50
		::System::Boolean _IsDestroyed_k__BackingField; // 0x58
		::System::Boolean _CreateSession; // 0x59
		::System::Int32 _MaxMemberCount; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::UInt64 a1, ::Enum_3_01618AD0437C8486_2 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a3, ::System::UInt32 a4, ::Class_1_1DD6AC150642D284* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Enum_3_01618AD0437C8486_2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*, ::System::UInt32, ::Class_1_1DD6AC150642D284*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_DISPOSE_OFFSET))(this);
		}

		::System::Void ChangeState(::RPG::Client::LobbyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CHANGESTATE_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyMemberData* GetMemberData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETMEMBERDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsAllMemberReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_ISALLMEMBERREADY_OFFSET))(this);
		}

		::System::Int32 GetCurMemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETCURMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetInviteTimeStamp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETINVITETIMESTAMP_OFFSET))(this, a1);
		}

		::System::Boolean IsAnyPlayerInFighting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_ISANYPLAYERINFIGHTING_OFFSET))(this);
		}

		::System::Void KickOut(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_KICKOUT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* KickOutPromise(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_KICKOUTPROMISE_OFFSET))(this, a1);
		}

		::System::Void Invite(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INVITE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* InvitePromise(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INVITEPROMISE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _DoInvitePromise(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__DOINVITEPROMISE_OFFSET))(this, a1);
		}

		::System::Void ModifySelfInfo(::Enum_3_63C076C405BE0674_1 a1, ::Class_1_7B005A18003A04C3* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_MODIFYSELFINFO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise* ModifySelfInfoPromise(::Enum_3_63C076C405BE0674_1 a1, ::Class_1_7B005A18003A04C3* a2)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::Enum_3_63C076C405BE0674_1, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_MODIFYSELFINFOPROMISE_OFFSET))(this, a1, a2);
		}

		::System::Void StartMatch(::Class_1_7B005A18003A04C3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTMATCH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* StartMatchPromise(::Class_1_7B005A18003A04C3* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTMATCHPROMISE_OFFSET))(this, a1);
		}

		::System::Void StartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTGAME_OFFSET))(this);
		}

		::System::Void CancelMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CANCELMATCH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CancelMatchPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CANCELMATCHPROMISE_OFFSET))(this);
		}

		::System::Void Quit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_QUIT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* QuitPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_QUITPROMISE_OFFSET))(this);
		}

		::System::Void SyncMatchResult(::Class_1_101A64CBB11918DF_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_101A64CBB11918DF_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCMATCHRESULT_OFFSET))(this, a1);
		}

		::System::Void SyncFightGameState(::Class_1_10F56A639581CEB1_18* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCFIGHTGAMESTATE_OFFSET))(this, a1);
		}

		::System::Void SyncLobbyInfoScNotify(::Class_1_C76F02504D23985E_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C76F02504D23985E_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCLOBBYINFOSCNOTIFY_OFFSET))(this, a1);
		}

		::System::Void _OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnRoomInit(::Class_1_1DD6AC150642D284* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1DD6AC150642D284*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONROOMINIT_OFFSET))(this, a1);
		}

		::System::Void _OnPostInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONPOSTINIT_OFFSET))(this);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _OnStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONSTATECHANGED_OFFSET))(this);
		}

		::Class_1_7B005A18003A04C3* _CreatePlayUnitExtInfo(::System::Object* a1)
		{
			return ((::Class_1_7B005A18003A04C3*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CREATEPLAYUNITEXTINFO_OFFSET))(this, a1);
		}

		::System::Void _CreatePSSession(::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CREATEPSSESSION_OFFSET))(this, a1);
		}

		::System::Void _SyncMatchResultMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMATCHRESULTMEMBERS_OFFSET))(this, a1);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _SyncMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMEMBERS_OFFSET))(this, a1);
		}

		::System::Void _SyncMemberInfo(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* a1, ::Class_1_C50F5982E5600913* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*, ::Class_1_C50F5982E5600913*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMEMBERINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveInvalidMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__REMOVEINVALIDMEMBERS_OFFSET))(this, a1);
		}

		::System::Boolean _ContainMemberInfo(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a1, ::RPG::Client::LobbyMemberData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CONTAINMEMBERINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncLobbyState(::Enum_3_F80BFD5B986D5503_3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCLOBBYSTATE_OFFSET))(this, a1);
		}

		::System::Void _OnKickOutRsp(::System::UInt16 a1, ::System::Object* a2, ::RPG::Client::Promises::Promise* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONKICKOUTRSP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnInviteRsp(::System::UInt16 a1, ::System::Object* a2, ::System::UInt32 a3, ::RPG::Client::Promises::Promise* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*, ::System::UInt32, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONINVITERSP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONTIMEOUT_OFFSET))(this);
		}

		::System::UInt64 get_ID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_ID_OFFSET))(this, a1);
		}

		::Enum_3_01618AD0437C8486_2 get_Type()
		{
			return ((::Enum_3_01618AD0437C8486_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_01618AD0437C8486_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyMemberData* get_SelfMemberData()
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_SELFMEMBERDATA_OFFSET))(this);
		}

		::System::Boolean get_IsSelfLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISSELFLEADER_OFFSET))(this);
		}

		::System::Boolean get_IsInFighting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISINFIGHTING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* get_Members()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MEMBERS_OFFSET))(this);
		}

		::System::Void set_Members(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MEMBERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* get_MatchResultMembers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMEMBERS_OFFSET))(this);
		}

		::System::Void set_MatchResultMembers(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMEMBERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_C50F5982E5600913*>* get_MatchResultMultiPlayerInfos()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C50F5982E5600913*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMULTIPLAYERINFOS_OFFSET))(this);
		}

		::System::Void set_MatchResultMultiPlayerInfos(::System::Collections::Generic::List_1<::Class_1_C50F5982E5600913*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C50F5982E5600913*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMULTIPLAYERINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyState get_CurrentStatus()
		{
			return ((::RPG::Client::LobbyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::RPG::Client::LobbyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_CURRENTSTATUS_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyState get_PreviousStatus()
		{
			return ((::RPG::Client::LobbyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_PREVIOUSSTATUS_OFFSET))(this);
		}

		::System::Void set_PreviousStatus(::RPG::Client::LobbyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_PREVIOUSSTATUS_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxMemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MAXMEMBERCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxMemberCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MAXMEMBERCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLobbyMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISLOBBYMAX_OFFSET))(this);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_ISDESTROYED_OFFSET))(this, a1);
		}
	};
}
