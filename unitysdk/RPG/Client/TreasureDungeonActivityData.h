#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class TreasureDungeonLevelData; }
namespace RPG::Client { class TreasureDungeonModule; }
namespace RPG::GameCore { class TreasureDungeoActivityQuestConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__GUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0xD748070)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__TREASUREDUNGEONMODULE_OFFSET UNITYSDK_OFFSET(0xD747C90)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xD747F30)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDALLSEENDUNGEON_OFFSET UNITYSDK_OFFSET(0xD747B30)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDSEENDUNGEON_OFFSET UNITYSDK_OFFSET(0xD747EA0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_REFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0xD747710)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD7476F0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__RECORDSEENDUNGEONLEVEL_OFFSET UNITYSDK_OFFSET(0xD747D40)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHFINALREWARD_OFFSET UNITYSDK_OFFSET(0xD748180)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHHASREWARDDUNGEON_OFFSET UNITYSDK_OFFSET(0xD748290)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLISTBYLEVELDATA_OFFSET UNITYSDK_OFFSET(0xD7483E0)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLIST_OFFSET UNITYSDK_OFFSET(0xD747A30)
#define RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHREWARD_OFFSET UNITYSDK_OFFSET(0xD7478A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonActivityData_TypeDefinitionIndex = 58928;

	class TreasureDungeonActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NewDungeonList; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* HasRewardDungeonList; // 0xA8
		::System::Boolean _IsInited; // 0xB0
		::System::Boolean IsFinalRewardCanTake; // 0xB1

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void RefreshRedDot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_REFRESHREDDOT_OFFSET))(this, a1);
		}

		::System::Void RecordAllSeenDungeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDALLSEENDUNGEON_OFFSET))(this);
		}

		::System::Void RecordSeenDungeon(::RPG::Client::TreasureDungeonLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_RECORDSEENDUNGEON_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHREWARD_OFFSET))(this);
		}

		::System::Void _RefreshHasRewardDungeon(::RPG::GameCore::TreasureDungeoActivityQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHHASREWARDDUNGEON_OFFSET))(this, a1);
		}

		::System::Void _RefreshNewDungeonListByLevelData(::RPG::Client::TreasureDungeonLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLISTBYLEVELDATA_OFFSET))(this, a1);
		}

		::System::Void _RefreshNewDungeonList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHNEWDUNGEONLIST_OFFSET))(this);
		}

		::System::Void _RefreshFinalReward(::RPG::GameCore::TreasureDungeoActivityQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__REFRESHFINALREWARD_OFFSET))(this, a1);
		}

		::System::Void _RecordSeenDungeonLevel(::RPG::Client::TreasureDungeonLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA__RECORDSEENDUNGEONLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::TreasureDungeonModule* get__TreasureDungeonModule()
		{
			return ((::RPG::Client::TreasureDungeonModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__TREASUREDUNGEONMODULE_OFFSET))(this);
		}

		::System::UInt32 get__GuideMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONACTIVITYDATA_GET__GUIDEMISSIONID_OFFSET))(this);
		}
	};
}
