#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8DE318908313772;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class GridFightScoreRewardConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKISALLRANKGOT_OFFSET UNITYSDK_OFFSET(0xC864050)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKISRANKCANTAKE_OFFSET UNITYSDK_OFFSET(0xC863F60)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKRANKREWARDCANBEDESTROY_OFFSET UNITYSDK_OFFSET(0xC864BA0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_DESTROYREWARDBYRANKS_OFFSET UNITYSDK_OFFSET(0xC863EA0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETALLREWARD_OFFSET UNITYSDK_OFFSET(0xC863530)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETCANTAKEREWARDSCORERANKLIST_OFFSET UNITYSDK_OFFSET(0xC863960)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETREWARDBYSCORERANK_OFFSET UNITYSDK_OFFSET(0xC863C70)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETREWARDDISPLAYDATABYRANKS_OFFSET UNITYSDK_OFFSET(0xC864ED0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC8651F0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CANDESTROYREWARDITEMID_OFFSET UNITYSDK_OFFSET(0xC864D70)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CONFIGLIST_OFFSET UNITYSDK_OFFSET(0xC863800)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CURRENTSCORERANK_OFFSET UNITYSDK_OFFSET(0xC864000)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CURRENTSCORE_OFFSET UNITYSDK_OFFSET(0xC865160)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC865210)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_HASGOTSCORERANK_OFFSET UNITYSDK_OFFSET(0xC8651D0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xC865230)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0xC865110)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0xC865180)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_WILLSCOREBEMERGED_OFFSET UNITYSDK_OFFSET(0xC865350)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xC863850)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xC864200)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SETCURWEEKSCORESEEN_OFFSET UNITYSDK_OFFSET(0xC8642D0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC865200)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_CURRENTSCORE_OFFSET UNITYSDK_OFFSET(0xC865170)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC865220)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_HASGOTSCORERANK_OFFSET UNITYSDK_OFFSET(0xC8651E0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_WILLSCOREBEMERGED_OFFSET UNITYSDK_OFFSET(0xC865360)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SYNCFINISHRANKS_OFFSET UNITYSDK_OFFSET(0xC863050)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SYNC_OFFSET UNITYSDK_OFFSET(0xC862BD0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0xC865370)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETALLREWARD_B__2_0_OFFSET UNITYSDK_OFFSET(0xC8653E0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCANTAKEREWARDSCORERANKLIST_B__4_0_OFFSET UNITYSDK_OFFSET(0xC8654E0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xC8643E0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCURRENTSCORERANK_OFFSET UNITYSDK_OFFSET(0xC864600)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0xC864780)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__HASANYREWARDCANTAKE_B__3_0_OFFSET UNITYSDK_OFFSET(0xC865460)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__ISNEARLYFINISH_OFFSET UNITYSDK_OFFSET(0xC864950)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightWeeklyScore_TypeDefinitionIndex = 62599;

	class GridFightWeeklyScore : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HasGotScoreRank_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightScoreRewardConfigRow*>* _ConfigList; // 0x18
		::System::Int64 _EndTimeStamp_k__BackingField; // 0x20
		::System::Int64 _BeginTimeStamp_k__BackingField; // 0x28
		::System::Boolean _WillScoreBeMerged_k__BackingField; // 0x30
		::System::UInt32 _CurrentScore_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_B8DE318908313772* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8DE318908313772*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncFinishRanks(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SYNCFINISHRANKS_OFFSET))(this, a1);
		}

		::System::Void GetAllReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETALLREWARD_OFFSET))(this);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCanTakeRewardScoreRankList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETCANTAKEREWARDSCORERANKLIST_OFFSET))(this);
		}

		::System::Void GetRewardByScoreRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETREWARDBYSCORERANK_OFFSET))(this, a1);
		}

		::System::Void DestroyRewardByRanks(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_DESTROYREWARDBYRANKS_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsRankCanTake(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKISRANKCANTAKE_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsAllRankGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKISALLRANKGOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Void SetCurWeekScoreSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SETCURWEEKSCORESEEN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightScoreRewardConfigRow*>* _GetConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightScoreRewardConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCONFIGLIST_OFFSET))(this);
		}

		::System::UInt32 _GetCurrentScoreRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCURRENTSCORERANK_OFFSET))(this);
		}

		::System::UInt32 _GetMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETMAXSCORE_OFFSET))(this);
		}

		::System::Boolean _IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__ISNEARLYFINISH_OFFSET))(this);
		}

		::System::Boolean CheckRankRewardCanBeDestroy(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_CHECKRANKREWARDCANBEDESTROY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardDisplayDataByRanks(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GETREWARDDISPLAYDATABYRANKS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNearlyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ISNEARLYFINISH_OFFSET))(this);
		}

		::System::UInt32 get_CurrentScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CURRENTSCORE_OFFSET))(this);
		}

		::System::Void set_CurrentScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_CURRENTSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_MAXSCORE_OFFSET))(this);
		}

		::System::UInt32 get_CurrentScoreRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CURRENTSCORERANK_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_HasGotScoreRank()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_HASGOTSCORERANK_OFFSET))(this);
		}

		::System::Void set_HasGotScoreRank(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_HASGOTSCORERANK_OFFSET))(this, a1);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_ENDTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Boolean get_WillScoreBeMerged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_WILLSCOREBEMERGED_OFFSET))(this);
		}

		::System::Void set_WillScoreBeMerged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_SET_WILLSCOREBEMERGED_OFFSET))(this, a1);
		}

		::System::UInt32 get_CanDestroyRewardItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CANDESTROYREWARDITEMID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightScoreRewardConfigRow*>* get_ConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightScoreRewardConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE_GET_CONFIGLIST_OFFSET))(this);
		}

		::System::Boolean _GetAllReward_b__2_0(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETALLREWARD_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasAnyRewardCanTake_b__3_0(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__HASANYREWARDCANTAKE_B__3_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCanTakeRewardScoreRankList_b__4_0(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE__GETCANTAKEREWARDSCORERANKLIST_B__4_0_OFFSET))(this, a1);
		}
	};
}
