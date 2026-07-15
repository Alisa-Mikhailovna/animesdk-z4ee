#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlayerReturnConfigRow; }
namespace RPG::GameCore { class PlayerReturnLoginRewardRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xBC4BF00)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETLOGINREWARDROWS_OFFSET UNITYSDK_OFFSET(0xBC4B9D0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETMULTIDROPIDLIST_OFFSET UNITYSDK_OFFSET(0xBC4BF90)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTID_OFFSET UNITYSDK_OFFSET(0xBC4BC40)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTITEMID_OFFSET UNITYSDK_OFFSET(0xBC4BE40)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTREWARDID_OFFSET UNITYSDK_OFFSET(0xBC4BD80)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINT_OFFSET UNITYSDK_OFFSET(0xBC4BCC0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETSORTEDSIGNREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xBC4CB70)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABQUESTGROUP_OFFSET UNITYSDK_OFFSET(0xBC4BBA0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABUNLOCKDAY_OFFSET UNITYSDK_OFFSET(0xBC4BBF0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTOTALDOUBLETIME_OFFSET UNITYSDK_OFFSET(0xBC4B870)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTOTALHCOINCOUNT_OFFSET UNITYSDK_OFFSET(0xBC4B8D0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_ISOLDVERSIONPLAYERRETURNDATA_OFFSET UNITYSDK_OFFSET(0xBC4CC10)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xBC4CBB0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIONNAIRELINK_OFFSET UNITYSDK_OFFSET(0xBC4CBF0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_VERSIONHOTPOINTLINK_OFFSET UNITYSDK_OFFSET(0xBC4CBD0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASAVAILABLEMULTIDROP_OFFSET UNITYSDK_OFFSET(0xBC4C4F0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASPOINTREWARDTOGET_OFFSET UNITYSDK_OFFSET(0xBC4C290)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASQUESTREWARDTOGET_OFFSET UNITYSDK_OFFSET(0xBC4C110)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLMULTIDROPFINISH_OFFSET UNITYSDK_OFFSET(0xBC4C9F0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLPOINTREWARDGOT_OFFSET UNITYSDK_OFFSET(0xBC4C7F0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLQUESTREWARDGOT_OFFSET UNITYSDK_OFFSET(0xBC4C670)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xBC4CBC0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIONNAIRELINK_OFFSET UNITYSDK_OFFSET(0xBC4CC00)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_VERSIONHOTPOINTLINK_OFFSET UNITYSDK_OFFSET(0xBC4CBE0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBC4A8C0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTGROUPS_OFFSET UNITYSDK_OFFSET(0xBC4AEA0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTIONNAIRELINK_OFFSET UNITYSDK_OFFSET(0xBC4AD20)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTKEYPOINTSANDREWARDS_OFFSET UNITYSDK_OFFSET(0xBC4B190)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETVERSIONHOTPOINTLINK_OFFSET UNITYSDK_OFFSET(0xBC4ABB0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__INITSORTEDSIGNREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xBC4B300)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnData_TypeDefinitionIndex = 59120;

	class ActivityPlayerReturnData : public ::System::Object
	{
	public:
		::RPG::GameCore::PlayerReturnConfigRow* _PlayerReturnConfigRow; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* MultiDropIDList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestIDList_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _QuestKeyPointRewardDict; // 0x28
		::System::String* _VersionHotPointLink_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _SortedTotalSignRewardItemList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _QuestKeyPointItemDict; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _QuestKeyPointDict; // 0x48
		::System::String* _QuestionnaireLink_k__BackingField; // 0x50

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetTotalDoubleTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTOTALDOUBLETIME_OFFSET))(this);
		}

		::System::UInt32 GetTotalHcoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTOTALHCOINCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::PlayerReturnLoginRewardRow*>* GetLoginRewardRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::PlayerReturnLoginRewardRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETLOGINREWARDROWS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTabQuestGroup(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABQUESTGROUP_OFFSET))(this, a1);
		}

		::System::UInt32 GetTabUnlockDay(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETTABUNLOCKDAY_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuestKeyPointID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuestKeyPoint(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINT_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuestKeyPointRewardID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTREWARDID_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuestKeyPointItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETQUESTKEYPOINTITEMID_OFFSET))(this, a1);
		}

		::System::String* GetConstValue(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETCONSTVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMultiDropIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETMULTIDROPIDLIST_OFFSET))(this);
		}

		::System::Boolean HasQuestRewardToGet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASQUESTREWARDTOGET_OFFSET))(this);
		}

		::System::Boolean HasPointRewardToGet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASPOINTREWARDTOGET_OFFSET))(this);
		}

		::System::Boolean HasAvailableMultiDrop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_HASAVAILABLEMULTIDROP_OFFSET))(this);
		}

		::System::Boolean IsAllQuestRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLQUESTREWARDGOT_OFFSET))(this);
		}

		::System::Boolean IsAllPointRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLPOINTREWARDGOT_OFFSET))(this);
		}

		::System::Boolean IsAllMultiDropFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_ISALLMULTIDROPFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSortedSignRewardItemList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GETSORTEDSIGNREWARDITEMLIST_OFFSET))(this);
		}

		::System::Void _GetVersionHotPointLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETVERSIONHOTPOINTLINK_OFFSET))(this);
		}

		::System::Void _GetQuestionnaireLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTIONNAIRELINK_OFFSET))(this);
		}

		::System::Void _GetQuestGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTGROUPS_OFFSET))(this);
		}

		::System::Void _GetQuestKeyPointsAndRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__GETQUESTKEYPOINTSANDREWARDS_OFFSET))(this);
		}

		::System::Void _InitSortedSignRewardItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA__INITSORTEDSIGNREWARDITEMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_QuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIDLIST_OFFSET))(this);
		}

		::System::Void set_QuestIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIDLIST_OFFSET))(this, a1);
		}

		::System::String* get_VersionHotPointLink()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_VERSIONHOTPOINTLINK_OFFSET))(this);
		}

		::System::Void set_VersionHotPointLink(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_VERSIONHOTPOINTLINK_OFFSET))(this, a1);
		}

		::System::String* get_QuestionnaireLink()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_QUESTIONNAIRELINK_OFFSET))(this);
		}

		::System::Void set_QuestionnaireLink(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_SET_QUESTIONNAIRELINK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOldVersionPlayerReturnData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNDATA_GET_ISOLDVERSIONPLAYERRETURNDATA_OFFSET))(this);
		}
	};
}
