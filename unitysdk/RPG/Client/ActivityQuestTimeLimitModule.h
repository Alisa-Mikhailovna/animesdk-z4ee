#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ActivityQuestTimeLimitModuleData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_CHECKHASFINISHQUESTBYACTIVITYID_OFFSET UNITYSDK_OFFSET(0xBC61060)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_CHECKISALLQUESTAWARDGOTBYACTIVITYID_OFFSET UNITYSDK_OFFSET(0xBC61260)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC60F20)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xBC60FD0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_GETGOTOWORLDID_OFFSET UNITYSDK_OFFSET(0xBC61550)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBC60960)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_TRYTRACKQUESTMONSTER_OFFSET UNITYSDK_OFFSET(0xBC61470)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBC61A10)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0xBC615D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityQuestTimeLimitModule_TypeDefinitionIndex = 59152;

	class ActivityQuestTimeLimitModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityQuestTimeLimitModuleData*>* _DataDict; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _AllQuestTimeLimitGroupID; // 0x18
		::System::UInt32 _TrackMonsterQuestID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivityQuestTimeLimitModuleData* GetActivityData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityQuestTimeLimitModuleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_GETACTIVITYDATA_OFFSET))(this, a1);
		}

		::System::Boolean CheckHasFinishQuestByActivityID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_CHECKHASFINISHQUESTBYACTIVITYID_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsAllQuestAwardGotByActivityID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_CHECKISALLQUESTAWARDGOTBYACTIVITYID_OFFSET))(this, a1);
		}

		::System::Void TryTrackQuestMonster(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_TRYTRACKQUESTMONSTER_OFFSET))(this, a1);
		}

		::System::UInt32 GetGotoWorldID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_GETGOTOWORLDID_OFFSET))(this, a1);
		}

		::System::Void _OnQuestUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE__ONQUESTUPDATED_OFFSET))(this, a1);
		}
	};
}
