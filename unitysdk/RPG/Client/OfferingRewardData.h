#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OfferingRewardUnlockState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_070964BB68D18B9F_1;
namespace RPG::Client { class OfferingUIData; }
namespace RPG::GameCore { class OfferingLevelConfigRow; }
namespace RPG::GameCore { class OfferingTypeConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OFFERINGREWARDDATA_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0xCEE5740)
#define RPG_CLIENT_OFFERINGREWARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xCEE50B0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETALLREWARDROW_OFFSET UNITYSDK_OFFSET(0xCEE6400)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLEVELLIMITBYPHASEID_OFFSET UNITYSDK_OFFSET(0xCEE6B20)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLIMITLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE6760)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLONGTAILREWARDNEEDNUM_OFFSET UNITYSDK_OFFSET(0xCEE7510)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMITPASTLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE6E40)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xCEE6CC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE75F0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETTAKENREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xCEE5510)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETTOTALITEMCOST_OFFSET UNITYSDK_OFFSET(0xCEE68C0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0xCEE70E0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xCEE6FE0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUPGRADEUNLOCKHINTMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE6960)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xCEE6350)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_CURRENTVERSIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE6AC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ISAUTOOFFER_OFFSET UNITYSDK_OFFSET(0xCEE7AA0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ISSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0xCEE8330)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCEE7D40)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xCEE5C10)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILLIMIT_OFFSET UNITYSDK_OFFSET(0xCEE7F70)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE61E0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE6090)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXSUBMITNUM_OFFSET UNITYSDK_OFFSET(0xCEE81D0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_NEEDNUM_OFFSET UNITYSDK_OFFSET(0xCEE6140)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_OFFERINGTYPE_OFFSET UNITYSDK_OFFSET(0xCEE7D60)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCEE8060)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCEE5BA0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDITEMID_OFFSET UNITYSDK_OFFSET(0xCEE7EC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0xCEE8020)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_TOTALSUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0xCEE8040)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0xCEE7D00)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_UIDATA_OFFSET UNITYSDK_OFFSET(0xCEE8350)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xCEE7E10)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET__NEXTLEVELCONFIGROW_OFFSET UNITYSDK_OFFSET(0xCEE5B30)
#define RPG_CLIENT_OFFERINGREWARDDATA_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xCEE5560)
#define RPG_CLIENT_OFFERINGREWARDDATA_HASLONGTAILREWARD_OFFSET UNITYSDK_OFFSET(0xCEE5F80)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISALLLEVELREWARDGOT_OFFSET UNITYSDK_OFFSET(0xCEE7590)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xCEE54B0)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCEE5960)
#define RPG_CLIENT_OFFERINGREWARDDATA_REFRESHAUTOOFFERSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE7950)
#define RPG_CLIENT_OFFERINGREWARDDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xCEE53E0)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_ISSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0xCEE8340)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCEE7D50)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_SUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0xCEE8030)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_TOTALSUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0xCEE8050)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_UIDATA_OFFSET UNITYSDK_OFFSET(0xCEE8360)
#define RPG_CLIENT_OFFERINGREWARDDATA_SHOULDSHOWMAPSHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xCEE4110)
#define RPG_CLIENT_OFFERINGREWARDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xCEE4A50)
#define RPG_CLIENT_OFFERINGREWARDDATA_TAKEALLAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xCEE5C70)
#define RPG_CLIENT_OFFERINGREWARDDATA_TAKEREWARDBYLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE6290)
#define RPG_CLIENT_OFFERINGREWARDDATA__CANGETSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE7690)
#define RPG_CLIENT_OFFERINGREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCEE49F0)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETAUTOOFFERSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE7700)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETCURRENTVERSIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE7B50)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETNEXTUNLOCKIDLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE6EE0)
#define RPG_CLIENT_OFFERINGREWARDDATA__REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0xCEE51D0)
#define RPG_CLIENT_OFFERINGREWARDDATA__REFRESHTAKENREWARDLEVELSET_OFFSET UNITYSDK_OFFSET(0xCEE5240)

namespace RPG::Client
{
	inline static constexpr unsigned int OfferingRewardData_TypeDefinitionIndex = 63438;

	class OfferingRewardData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _UseSeenGotRewardLevelOfferingIDs; // 0x10
		::RPG::Client::OfferingUIData* _UIData_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AlreadyTakenRewardLevelSet; // 0x20
		::RPG::GameCore::OfferingTypeConfigRow* _Row; // 0x28
		::System::UInt32 _CurrentVersionMaxLevel; // 0x30
		::System::Boolean _IsShowUpgradeHint_k__BackingField; // 0x34
		::System::Boolean _IsUnlockIDOpened; // 0x35
		::System::UInt32 _ID; // 0x38
		::System::UInt32 _Level_k__BackingField; // 0x3C
		::System::UInt32 _MaxSubmitNum; // 0x40
		::System::UInt32 _TotalSubmittedNum_k__BackingField; // 0x44
		::System::UInt32 _SubmittedNum_k__BackingField; // 0x48

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::OfferingRewardData* Clone(::RPG::Client::OfferingRewardData* a1)
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_CLONE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_070964BB68D18B9F_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_REFRESH_OFFSET))(this);
		}

		::System::Boolean IsRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_ISREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Int32 GetTakenRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETTAKENREWARDCOUNT_OFFSET))(this);
		}

		::System::Boolean ShouldShowMapShortCutHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SHOULDSHOWMAPSHORTCUTHINT_OFFSET))(this);
		}

		::System::Boolean CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_CANLEVELUP_OFFSET))(this);
		}

		::System::Boolean HasAnyRewardCanTake(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_HASANYREWARDCANTAKE_OFFSET))(this, a1);
		}

		::System::Boolean TakeAllAvailableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_TAKEALLAVAILABLEREWARD_OFFSET))(this);
		}

		::System::Void TakeRewardByLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_TAKEREWARDBYLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_ISUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::OfferingLevelConfigRow*>* GetAllRewardRow()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::OfferingLevelConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETALLREWARDROW_OFFSET))(this);
		}

		::System::UInt32 GetLimitLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETLIMITLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetTotalItemCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETTOTALITEMCOST_OFFSET))(this);
		}

		::System::UInt32 GetUpgradeUnlockHintMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETUPGRADEUNLOCKHINTMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetLevelLimitByPhaseID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETLEVELLIMITBYPHASEID_OFFSET))(this, a1);
		}

		::System::UInt32 GetNextLevelLimit(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetNextLevelLimitPastLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMITPASTLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::OfferingRewardUnlockState GetUnlockState()
		{
			return ((::RPG::Client::OfferingRewardUnlockState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKSTATE_OFFSET))(this);
		}

		::RPG::Client::TextID GetUnlockHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKHINT_OFFSET))(this);
		}

		::System::UInt32 GetLongTailRewardNeedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETLONGTAILREWARDNEEDNUM_OFFSET))(this);
		}

		::System::Boolean HasLongTailReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_HASLONGTAILREWARD_OFFSET))(this);
		}

		::System::Boolean IsAllLevelRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_ISALLLEVELREWARDGOT_OFFSET))(this);
		}

		::System::UInt32 GetSeenGotRewardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::Void RefreshAutoOfferSeenGotRewardLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_REFRESHAUTOOFFERSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::Boolean _CanGetSeenGotRewardLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__CANGETSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::UInt32 _GetAutoOfferSeenGotRewardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__GETAUTOOFFERSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::Void _RefreshLevel(::Class_1_070964BB68D18B9F_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__REFRESHLEVEL_OFFSET))(this, a1);
		}

		::System::Void _RefreshTakenRewardLevelSet(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__REFRESHTAKENREWARDLEVELSET_OFFSET))(this, a1);
		}

		::System::UInt32 _GetNextUnlockIDLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__GETNEXTUNLOCKIDLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCurrentVersionMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__GETCURRENTVERSIONMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_TypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_TYPEID_OFFSET))(this);
		}

		::RPG::GameCore::OfferingTypeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::OfferingTypeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_OfferingType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_OFFERINGTYPE_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::System::UInt32 get_SubmittedItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDITEMID_OFFSET))(this);
		}

		::System::UInt32 get_LongTailLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_SubmittedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDNUM_OFFSET))(this);
		}

		::System::Void set_SubmittedNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_SUBMITTEDNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalSubmittedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_TOTALSUBMITTEDNUM_OFFSET))(this);
		}

		::System::Void set_TotalSubmittedNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_TOTALSUBMITTEDNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_LongTailRewardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILREWARDLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Boolean get_IsAutoOffer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ISAUTOOFFER_OFFSET))(this);
		}

		::System::UInt32 get_NeedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_NEEDNUM_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_PROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_MaxSubmitNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXSUBMITNUM_OFFSET))(this);
		}

		::System::UInt32 get_CurrentVersionMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_CURRENTVERSIONMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_LongTailCanSubmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILCANSUBMIT_OFFSET))(this);
		}

		::System::Boolean get_IsShowUpgradeHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ISSHOWUPGRADEHINT_OFFSET))(this);
		}

		::System::Void set_IsShowUpgradeHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_ISSHOWUPGRADEHINT_OFFSET))(this, a1);
		}

		::RPG::Client::OfferingUIData* get_UIData()
		{
			return ((::RPG::Client::OfferingUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_UIDATA_OFFSET))(this);
		}

		::System::Void set_UIData(::RPG::Client::OfferingUIData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingUIData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_UIDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::OfferingLevelConfigRow* get__NextLevelConfigRow()
		{
			return ((::RPG::GameCore::OfferingLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET__NEXTLEVELCONFIGROW_OFFSET))(this);
		}
	};
}
