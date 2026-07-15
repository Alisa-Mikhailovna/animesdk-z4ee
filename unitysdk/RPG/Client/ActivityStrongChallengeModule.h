#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_963E317C37FB5E9A_91;
namespace Proto { class StrongChallengeAvatar; }
namespace RPG::Client { class ActivityStrongChallengeBattleResultData; }
namespace RPG::Client { class ActivityStrongChallengeBossDetailData; }
namespace RPG::Client { class ActivityStrongChallengeBuffData; }
namespace RPG::Client { class ActivityStrongChallengeStageData; }
namespace RPG::Client { class MainMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GETSTAGE_OFFSET UNITYSDK_OFFSET(0xBC694A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xBC6C050)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGES_OFFSET UNITYSDK_OFFSET(0xBC6C0B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BOSSDETAILS_OFFSET UNITYSDK_OFFSET(0xBC6C0D0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BUFFS_OFFSET UNITYSDK_OFFSET(0xBC6C0F0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_FINISHEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xBC6C180)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xBC6C030)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGES_OFFSET UNITYSDK_OFFSET(0xBC6C090)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ISHARDMODEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xBC69CF0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_LASTENTEREDSTAGE_OFFSET UNITYSDK_OFFSET(0xBC6C160)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xBC6C010)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGES_OFFSET UNITYSDK_OFFSET(0xBC6C070)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBC67FF0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISINSTRONGCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0xBC69550)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISSTAGESHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xBC69D30)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHALLDATA_OFFSET UNITYSDK_OFFSET(0xBC691B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHHARDMODEUNLOCKMISSIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xBC692B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_RETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0xBC69770)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SAVETEAMCONFIG_OFFSET UNITYSDK_OFFSET(0xBC69700)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SENDGETSTRONGCHALLENGEACTIVITYDATACSREQ_OFFSET UNITYSDK_OFFSET(0xBC69200)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xBC6C060)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGES_OFFSET UNITYSDK_OFFSET(0xBC6C0C0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BOSSDETAILS_OFFSET UNITYSDK_OFFSET(0xBC6C0E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BUFFS_OFFSET UNITYSDK_OFFSET(0xBC6C100)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xBC6C040)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGES_OFFSET UNITYSDK_OFFSET(0xBC6C0A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ISHARDMODEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xBC6C110)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_LASTENTEREDSTAGE_OFFSET UNITYSDK_OFFSET(0xBC6C170)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xBC6C020)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGES_OFFSET UNITYSDK_OFFSET(0xBC6C080)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xBC69BA0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBC69050)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBC68EC0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBC6C3D0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xBC69E50)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBC6ADC0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBOSSDETAILDATA_OFFSET UNITYSDK_OFFSET(0xBC68A10)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBUFFDATA_OFFSET UNITYSDK_OFFSET(0xBC68C80)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xBC680E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__OPENRESULTPAGE_OFFSET UNITYSDK_OFFSET(0xBC6B6A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHFINISHEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xBC6BBA0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHHARDMODEUNLOCKMISSIONPROGRESS_B__4_0_OFFSET UNITYSDK_OFFSET(0xBC6C450)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0xBC6A250)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeModule_TypeDefinitionIndex = 59159;

	class ActivityStrongChallengeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>* _BossDetails_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _NormalStages_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _HardStageIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _LastBattleBuffIDs; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>* _Buffs_k__BackingField; // 0x30
		::Il2CppArray<::System::UInt32>* _AllStageIDs_k__BackingField; // 0x38
		::RPG::Client::ActivityStrongChallengeBattleResultData* _LastBattleResult; // 0x40
		::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>* _LastBattleAvatars; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestIDs_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _AllStages_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _HardStages_k__BackingField; // 0x60
		::Il2CppArray<::System::UInt32>* _NormalStageIDs_k__BackingField; // 0x68
		::RPG::Client::ActivityStrongChallengeStageData* _LastEnteredStage_k__BackingField; // 0x70
		::System::Boolean _IsHardModeUnlocked; // 0x78
		::System::Boolean _ShouldAutoShow; // 0x79

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void RefreshAllData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHALLDATA_OFFSET))(this);
		}

		::System::Void RefreshHardModeUnlockMissionProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHHARDMODEUNLOCKMISSIONPROGRESS_OFFSET))(this);
		}

		::RPG::Client::ActivityStrongChallengeStageData* GetStage(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityStrongChallengeStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GETSTAGE_OFFSET))(this, a1);
		}

		static ::System::Boolean IsInStrongChallengeBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISINSTRONGCHALLENGEBATTLE_OFFSET))();
		}

		::System::Void SaveTeamConfig(::RPG::Client::ActivityStrongChallengeStageData* a1, ::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityStrongChallengeStageData*, ::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SAVETEAMCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReturnToMaze()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_RETURNTOMAZE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SendGetStrongChallengeActivityDataCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SENDGETSTRONGCHALLENGEACTIVITYDATACSREQ_OFFSET))(this);
		}

		::System::Boolean IsStageShowRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISSTAGESHOWREDDOT_OFFSET))(this, a1);
		}

		::System::Void _HandleActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean _UpdateStage(::System::UInt32 a1, ::Class_1_963E317C37FB5E9A_91* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_963E317C37FB5E9A_91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__UPDATESTAGE_OFFSET))(this, a1, a2);
		}

		::System::Void _HandleBattleEndScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEBATTLEENDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OpenResultPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__OPENRESULTPAGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshFinishedQuestIDs(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHFINISHEDQUESTIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_NormalStageIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGEIDS_OFFSET))(this);
		}

		::System::Void set_NormalStageIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGEIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_HardStageIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGEIDS_OFFSET))(this);
		}

		::System::Void set_HardStageIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGEIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_AllStageIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGEIDS_OFFSET))(this);
		}

		::System::Void set_AllStageIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGEIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* get_NormalStages()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGES_OFFSET))(this);
		}

		::System::Void set_NormalStages(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* get_HardStages()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGES_OFFSET))(this);
		}

		::System::Void set_HardStages(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* get_AllStages()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGES_OFFSET))(this);
		}

		::System::Void set_AllStages(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>* get_BossDetails()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BOSSDETAILS_OFFSET))(this);
		}

		::System::Void set_BossDetails(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BOSSDETAILS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>* get_Buffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BUFFS_OFFSET))(this);
		}

		::System::Void set_Buffs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BUFFS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHardModeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ISHARDMODEUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsHardModeUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ISHARDMODEUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityStrongChallengeStageData* get_LastEnteredStage()
		{
			return ((::RPG::Client::ActivityStrongChallengeStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_LASTENTEREDSTAGE_OFFSET))(this);
		}

		::System::Void set_LastEnteredStage(::RPG::Client::ActivityStrongChallengeStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityStrongChallengeStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_LASTENTEREDSTAGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_FINISHEDQUESTIDS_OFFSET))(this);
		}

		::System::Void _InitStageData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITSTAGEDATA_OFFSET))(this);
		}

		::System::Void _InitBossDetailData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBOSSDETAILDATA_OFFSET))(this);
		}

		::System::Void _InitBuffData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBUFFDATA_OFFSET))(this);
		}

		::System::Void _RefreshHardModeUnlockMissionProgress_b__4_0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHHARDMODEUNLOCKMISSIONPROGRESS_B__4_0_OFFSET))(this, a1);
		}
	};
}
