#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_1CBA230307F9C289_53;
class Class_1_D17272E82AE804C2_625;
namespace RPG::Client { class ActivityLocalLegendData; }
namespace RPG::Client { class ActivityLocalLegendRewardData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_CLEARNEWGROUP_OFFSET UNITYSDK_OFFSET(0xBC00090)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATALIST_OFFSET UNITYSDK_OFFSET(0xBBFF4A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATA_OFFSET UNITYSDK_OFFSET(0xBBFF3F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETALLEASYANDHARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0xBC00290)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETFINISHEDSTARNUM_OFFSET UNITYSDK_OFFSET(0xBBFF4E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETNEWUNLOCKANIMGROUPS_OFFSET UNITYSDK_OFFSET(0xBBFF620)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GET_ACTIVITYLOCALLEGENDREWARDDATA_OFFSET UNITYSDK_OFFSET(0xBC00470)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENEASYANDHARDREWARD_OFFSET UNITYSDK_OFFSET(0xBC007A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENFEARLESSREWARD_OFFSET UNITYSDK_OFFSET(0xBC00620)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0xBC003E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBBFEDD0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_ISSHOWTIMELIMITREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xBC00840)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_RESTARTENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xBBFFC30)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_SHOWNEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xBC00140)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRIGGERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xBBFF830)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xBBFFE00)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBBFF3B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBBFF220)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC00F00)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBC00EA0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__INITGROUPDATA_OFFSET UNITYSDK_OFFSET(0xBBFEF10)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDGETLOCALLEGENDDATASCRSP_OFFSET UNITYSDK_OFFSET(0xBC00900)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDLOCALLEGENDDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xBC00E20)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__SYNGROUPINFO_OFFSET UNITYSDK_OFFSET(0xBC00CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendModule_TypeDefinitionIndex = 58823;

	class ActivityLocalLegendModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_ACTIVITY_REWARD_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendModule_TypeDefinitionIndex)->GetStaticField(0xA680);
		}
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_53*>* _LastBattleAvatar; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendData*>* _ActivityLocalLegendGroupDataList; // 0x18
		::RPG::Client::ActivityLocalLegendRewardData* _ActivityLocalLegendRewardData; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityLocalLegendData*>* _ActivityLocalLegendGroupDataDic; // 0x28
		::System::UInt32 BattleGroupID; // 0x30
		::RPG::Client::TextID BattleTitle; // 0x38
		::System::Int32 _AutoShowGroupID; // 0x48
		::System::UInt32 BattleLevel; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::Client::ActivityLocalLegendData* GetActivityLocalLegendData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityLocalLegendData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendData*>* GetActivityLocalLegendDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATALIST_OFFSET))(this);
		}

		::System::UInt32 GetFinishedStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETFINISHEDSTARNUM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewUnlockAnimGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETNEWUNLOCKANIMGROUPS_OFFSET))(this);
		}

		::System::Void TriggerEnterBattle(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRIGGERENTERBATTLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RestartEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_RESTARTENTERBATTLE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void ClearNewGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_CLEARNEWGROUP_OFFSET))(this);
		}

		::System::Boolean ShowNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_SHOWNEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean GetAllEasyAndHardChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETALLEASYANDHARDCHALLENGED_OFFSET))(this);
		}

		::System::Boolean HasUntakenResidentReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENRESIDENTREWARD_OFFSET))(this);
		}

		::System::Boolean HasUntakenFearlessReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENFEARLESSREWARD_OFFSET))(this);
		}

		::System::Boolean HasUntakenEasyAndHardReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENEASYANDHARDREWARD_OFFSET))(this);
		}

		::System::Boolean IsShowTimeLimitRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_ISSHOWTIMELIMITREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _OnCmdGetLocalLegendDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDGETLOCALLEGENDDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLocalLegendDataChangeNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDLOCALLEGENDDATACHANGENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SynGroupInfo(::Class_1_D17272E82AE804C2_625* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_625*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__SYNGROUPINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _InitGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__INITGROUPDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityLocalLegendRewardData* get_ActivityLocalLegendRewardData()
		{
			return ((::RPG::Client::ActivityLocalLegendRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GET_ACTIVITYLOCALLEGENDREWARDDATA_OFFSET))(this);
		}
	};
}
