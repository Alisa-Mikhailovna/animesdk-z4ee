#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IActivityQuestRewardTabGroupInfo; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityQuestRewardConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_ADDTABGROUP_OFFSET UNITYSDK_OFFSET(0xC19A200)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0xC19A400)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_GET_FINALREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xC19A420)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_GET_TABGROUPINFOLIST_OFFSET UNITYSDK_OFFSET(0xC19A410)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_GET_UNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC19A440)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_REFRESHALLQUESTDATA_OFFSET UNITYSDK_OFFSET(0xC19A0D0)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_SET_FINALREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xC19A430)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC199FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityQuestRewardData_TypeDefinitionIndex = 58988;

	class CommonActivityQuestRewardData : public ::System::Object
	{
	public:
		::RPG::Client::QuestData* _FinalRewardQuest_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IActivityQuestRewardTabGroupInfo*>* _TabGroupInfoList_k__BackingField; // 0x18
		::RPG::Client::ScheduleData* _UnlockSchedule_k__BackingField; // 0x20
		::System::UInt32 _FinalRewardQuestID; // 0x28
		::System::UInt32 _ActivityRewardID_k__BackingField; // 0x2C

		::System::Void _ctor(::RPG::GameCore::ActivityQuestRewardConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityQuestRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddTabGroup(::RPG::Client::IActivityQuestRewardTabGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IActivityQuestRewardTabGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_ADDTABGROUP_OFFSET))(this, a1);
		}

		::System::Void RefreshAllQuestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_REFRESHALLQUESTDATA_OFFSET))(this);
		}

		::System::UInt32 get_ActivityRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_GET_ACTIVITYREWARDID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IActivityQuestRewardTabGroupInfo*>* get_TabGroupInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IActivityQuestRewardTabGroupInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_GET_TABGROUPINFOLIST_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_FinalRewardQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_GET_FINALREWARDQUEST_OFFSET))(this);
		}

		::System::Void set_FinalRewardQuest(::RPG::Client::QuestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_SET_FINALREWARDQUEST_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_UnlockSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATA_GET_UNLOCKSCHEDULE_OFFSET))(this);
		}
	};
}
