#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class FantasticStoryBuffRow; }

#define RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_BUFFSLOT_OFFSET UNITYSDK_OFFSET(0xC434600)
#define RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_ISPRECHAPTERFINISH_OFFSET UNITYSDK_OFFSET(0xC43DDD0)
#define RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_ISSHOWTIPS_OFFSET UNITYSDK_OFFSET(0xC43E040)
#define RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC431430)
#define RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xC43DFF0)
#define RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_PARAGRAPHID_OFFSET UNITYSDK_OFFSET(0xC4349A0)
#define RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC432400)
#define RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_UNLOCKCHAPTERID_OFFSET UNITYSDK_OFFSET(0xC43DF30)
#define RPG_CLIENT_FANTASTICSTORYBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC43A040)

namespace RPG::Client
{
	inline static constexpr unsigned int FantasticStoryBuffData_TypeDefinitionIndex = 61057;

	class FantasticStoryBuffData : public ::System::Object
	{
	public:
		::RPG::GameCore::FantasticStoryBuffRow* Row; // 0x10
		::System::UInt32 BuffID; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsPreChapterFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_ISPRECHAPTERFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_UnlockChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_UNLOCKCHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_BuffSlot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_BUFFSLOT_OFFSET))(this);
		}

		::System::UInt32 get_MazebuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_MAZEBUFFID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ParagraphID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_PARAGRAPHID_OFFSET))(this);
		}

		::System::Boolean get_IsShowTips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFDATA_GET_ISSHOWTIPS_OFFSET))(this);
		}
	};
}
