#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_11.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_09751665EAC0FA4D_3;
class Class_1_1CBA230307F9C289_26;
class Class_1_2787ABBB14E52A15;
class Class_1_865954FC744EC5F0_1;
class Class_1_970473F02CD5F0AB;
class Class_1_B4F136441499BAFA_2;
class Class_1_B9AB25D8F16AABB2;
class Class_1_D17272E82AE804C2_326;
class Class_1_F3CA30716D4FAF92_7;
class Class_1_FBCD4FF549575A07_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class FateBuffTraitInfo; }
namespace RPG::Client { class FateGameBattleZoneInfo; }
namespace RPG::Client { class FateGameBroadcastInfo; }
namespace RPG::Client { class FateGameGameSettleInfo; }
namespace RPG::Client { class FateGameMasterBattleInfo; }
namespace RPG::Client { class FateGameMasterTalkInfo; }
namespace RPG::Client { class FateGamePhaseRoundInfo; }
namespace RPG::Client { class FateGameRoundSettleInfo; }
namespace RPG::Client { class FateHouguInfo; }
namespace RPG::Client { class FateReijuInfo; }
namespace RPG::Client { class FateShopInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC454DE0)
#define RPG_CLIENT_FATEGAMEDATA_GETGAMEMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xC4573F0)
#define RPG_CLIENT_FATEGAMEDATA_GETGAMETRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xC456E00)
#define RPG_CLIENT_FATEGAMEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xC457720)
#define RPG_CLIENT_FATEGAMEDATA_GET_AREANAME_OFFSET UNITYSDK_OFFSET(0xC4577D0)
#define RPG_CLIENT_FATEGAMEDATA_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xC4578B0)
#define RPG_CLIENT_FATEGAMEDATA_GET_BROADCASTINFO_OFFSET UNITYSDK_OFFSET(0xC4579E0)
#define RPG_CLIENT_FATEGAMEDATA_GET_BUFFTRAITINFO_OFFSET UNITYSDK_OFFSET(0xC4495F0)
#define RPG_CLIENT_FATEGAMEDATA_GET_CURBATTLEZONEINFO_OFFSET UNITYSDK_OFFSET(0xC454980)
#define RPG_CLIENT_FATEGAMEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC455590)
#define RPG_CLIENT_FATEGAMEDATA_GET_GAMECOUNT_OFFSET UNITYSDK_OFFSET(0xC457950)
#define RPG_CLIENT_FATEGAMEDATA_GET_HOUGUINFO_OFFSET UNITYSDK_OFFSET(0xC457AA0)
#define RPG_CLIENT_FATEGAMEDATA_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xC457760)
#define RPG_CLIENT_FATEGAMEDATA_GET_LASTGAMESETTLEINFO_OFFSET UNITYSDK_OFFSET(0xC457BA0)
#define RPG_CLIENT_FATEGAMEDATA_GET_LASTROUNDSETTLEINFO_OFFSET UNITYSDK_OFFSET(0xC457B60)
#define RPG_CLIENT_FATEGAMEDATA_GET_MASTERBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xC457A20)
#define RPG_CLIENT_FATEGAMEDATA_GET_MASTERTALKINFO_OFFSET UNITYSDK_OFFSET(0xC457A60)
#define RPG_CLIENT_FATEGAMEDATA_GET_PARAMETERINFO_OFFSET UNITYSDK_OFFSET(0xC457BE0)
#define RPG_CLIENT_FATEGAMEDATA_GET_PHASEROUNDINFO_OFFSET UNITYSDK_OFFSET(0xC44B2B0)
#define RPG_CLIENT_FATEGAMEDATA_GET_REIJUINFO_OFFSET UNITYSDK_OFFSET(0xC457AE0)
#define RPG_CLIENT_FATEGAMEDATA_GET_SERVERSTATUS_OFFSET UNITYSDK_OFFSET(0xC457990)
#define RPG_CLIENT_FATEGAMEDATA_GET_SHOPINFO_OFFSET UNITYSDK_OFFSET(0xC457B20)
#define RPG_CLIENT_FATEGAMEDATA_GET__AREAROW_OFFSET UNITYSDK_OFFSET(0xC457390)
#define RPG_CLIENT_FATEGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xC454D20)
#define RPG_CLIENT_FATEGAMEDATA_ISSERVERSTATUSPOSTBATTLE_OFFSET UNITYSDK_OFFSET(0xC4542B0)
#define RPG_CLIENT_FATEGAMEDATA_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC454D90)
#define RPG_CLIENT_FATEGAMEDATA_RESETINPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xC454ED0)
#define RPG_CLIENT_FATEGAMEDATA_SYNCGAMESETTLE_OFFSET UNITYSDK_OFFSET(0xC4568F0)
#define RPG_CLIENT_FATEGAMEDATA_SYNCMASTERBATTLEPAIRS_OFFSET UNITYSDK_OFFSET(0xC455960)
#define RPG_CLIENT_FATEGAMEDATA_SYNCONEMASTER_OFFSET UNITYSDK_OFFSET(0xC4556C0)
#define RPG_CLIENT_FATEGAMEDATA_SYNCONSERVERSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xC456C00)
#define RPG_CLIENT_FATEGAMEDATA_SYNCPARAMREMOVE_OFFSET UNITYSDK_OFFSET(0xC456D30)
#define RPG_CLIENT_FATEGAMEDATA_SYNCPARAMUPDATE_OFFSET UNITYSDK_OFFSET(0xC456C60)
#define RPG_CLIENT_FATEGAMEDATA_SYNCPHASEROUND_OFFSET UNITYSDK_OFFSET(0xC455310)
#define RPG_CLIENT_FATEGAMEDATA_SYNCROUNDSETTLE_OFFSET UNITYSDK_OFFSET(0xC455EE0)
#define RPG_CLIENT_FATEGAMEDATA_SYNCTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xC4555E0)
#define RPG_CLIENT_FATEGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC454F20)
#define RPG_CLIENT_FATEGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC454A30)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameData_TypeDefinitionIndex = 61112;

	class FateGameData : public ::System::Object
	{
	public:
		::RPG::Client::FateGameMasterTalkInfo* _MasterTalkInfo; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _GameTrialAvatarIDs; // 0x18
		::RPG::Client::FateShopInfo* _ShopInfo; // 0x20
		::RPG::Client::FateGameGameSettleInfo* _LastGameSettleInfo; // 0x28
		::RPG::Client::FateGameRoundSettleInfo* _LastRoundSettleInfo; // 0x30
		::Class_1_2787ABBB14E52A15* _ParameterInfo; // 0x38
		::RPG::Client::FateGamePhaseRoundInfo* _PhaseRoundInfo; // 0x40
		::RPG::Client::FateHouguInfo* _HouguInfo; // 0x48
		::RPG::Client::FateGameMasterBattleInfo* _MasterBattleInfo; // 0x50
		::RPG::Client::FateGameBroadcastInfo* _BroadcastInfo; // 0x58
		::RPG::Client::FateBuffTraitInfo* _BuffTraitInfo; // 0x60
		::RPG::Client::FateReijuInfo* _ReijuInfo; // 0x68
		::RPG::Client::FateGameBattleZoneInfo* _CurBattleZoneInfo; // 0x70
		::System::UInt32 _GameCount; // 0x78
		::System::UInt32 _AreaID; // 0x7C
		::System::UInt32 _Difficulty; // 0x80
		::Enum_3_71AA90D596A09AC8_11 _ServerStatus; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetInProgressInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_RESETINPROGRESSINFO_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FBCD4FF549575A07_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncPhaseRound(::Class_1_D17272E82AE804C2_326* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_326*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCPHASEROUND_OFFSET))(this, a1);
		}

		::System::Void SyncOneMaster(::Class_1_F3CA30716D4FAF92_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCONEMASTER_OFFSET))(this, a1);
		}

		::System::Void SyncMasterBattlePairs(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B4F136441499BAFA_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B4F136441499BAFA_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCMASTERBATTLEPAIRS_OFFSET))(this, a1);
		}

		::System::Void SyncRoundSettle(::Class_1_09751665EAC0FA4D_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_09751665EAC0FA4D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCROUNDSETTLE_OFFSET))(this, a1);
		}

		::System::Void SyncGameSettle(::Class_1_865954FC744EC5F0_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_865954FC744EC5F0_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCGAMESETTLE_OFFSET))(this, a1);
		}

		::System::Void SyncOnServerStatusChanged(::Enum_3_71AA90D596A09AC8_11 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_11))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCONSERVERSTATUSCHANGED_OFFSET))(this, a1);
		}

		::System::Void SyncParamUpdate(::Class_1_B9AB25D8F16AABB2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9AB25D8F16AABB2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCPARAMUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncParamRemove(::Class_1_1CBA230307F9C289_26* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCPARAMREMOVE_OFFSET))(this, a1);
		}

		::System::Void SyncTrialAvatars(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_SYNCTRIALAVATARS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetGameTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GETGAMETRIALAVATARS_OFFSET))(this);
		}

		::System::UInt32 GetGameMonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GETGAMEMONSTERLEVEL_OFFSET))(this);
		}

		::System::Boolean IsServerStatusPostBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_ISSERVERSTATUSPOSTBATTLE_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Boolean get_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_ISINPROGRESS_OFFSET))(this);
		}

		::RPG::Client::TextID get_AreaName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_AREANAME_OFFSET))(this);
		}

		::RPG::GameCore::FateAreaType get_AreaType()
		{
			return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_AREATYPE_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::UInt32 get_GameCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_GAMECOUNT_OFFSET))(this);
		}

		::Enum_3_71AA90D596A09AC8_11 get_ServerStatus()
		{
			return ((::Enum_3_71AA90D596A09AC8_11(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_SERVERSTATUS_OFFSET))(this);
		}

		::RPG::Client::FateGamePhaseRoundInfo* get_PhaseRoundInfo()
		{
			return ((::RPG::Client::FateGamePhaseRoundInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_PHASEROUNDINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameBattleZoneInfo* get_CurBattleZoneInfo()
		{
			return ((::RPG::Client::FateGameBattleZoneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_CURBATTLEZONEINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameBroadcastInfo* get_BroadcastInfo()
		{
			return ((::RPG::Client::FateGameBroadcastInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_BROADCASTINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameMasterBattleInfo* get_MasterBattleInfo()
		{
			return ((::RPG::Client::FateGameMasterBattleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_MASTERBATTLEINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameMasterTalkInfo* get_MasterTalkInfo()
		{
			return ((::RPG::Client::FateGameMasterTalkInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_MASTERTALKINFO_OFFSET))(this);
		}

		::RPG::Client::FateHouguInfo* get_HouguInfo()
		{
			return ((::RPG::Client::FateHouguInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_HOUGUINFO_OFFSET))(this);
		}

		::RPG::Client::FateReijuInfo* get_ReijuInfo()
		{
			return ((::RPG::Client::FateReijuInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_REIJUINFO_OFFSET))(this);
		}

		::RPG::Client::FateBuffTraitInfo* get_BuffTraitInfo()
		{
			return ((::RPG::Client::FateBuffTraitInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_BUFFTRAITINFO_OFFSET))(this);
		}

		::RPG::Client::FateShopInfo* get_ShopInfo()
		{
			return ((::RPG::Client::FateShopInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_SHOPINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameRoundSettleInfo* get_LastRoundSettleInfo()
		{
			return ((::RPG::Client::FateGameRoundSettleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_LASTROUNDSETTLEINFO_OFFSET))(this);
		}

		::RPG::Client::FateGameGameSettleInfo* get_LastGameSettleInfo()
		{
			return ((::RPG::Client::FateGameGameSettleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_LASTGAMESETTLEINFO_OFFSET))(this);
		}

		::Class_1_2787ABBB14E52A15* get_ParameterInfo()
		{
			return ((::Class_1_2787ABBB14E52A15*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET_PARAMETERINFO_OFFSET))(this);
		}

		::Class_1_970473F02CD5F0AB* get__AreaRow()
		{
			return ((::Class_1_970473F02CD5F0AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEDATA_GET__AREAROW_OFFSET))(this);
		}
	};
}
