#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MonoClockParkStoryCharacter; }
namespace RPG::GameCore { class ClockParkStoryCharacterTriggerAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_47B96B4A8C7B4A85_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14A7DB50)
#define CLASS_2_47B96B4A8C7B4A85_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x14A7DBA0)
#define CLASS_2_47B96B4A8C7B4A85_METHOD_2_936773021FAF4D21_OFFSET UNITYSDK_OFFSET(0x14A7DFC0)
#define CLASS_2_47B96B4A8C7B4A85_ONSKIP_OFFSET UNITYSDK_OFFSET(0x14A7DBB0)
#define CLASS_2_47B96B4A8C7B4A85_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14A7E0D0)
#define CLASS_2_47B96B4A8C7B4A85_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14A7E2A0)
#define CLASS_2_47B96B4A8C7B4A85_TICK_OFFSET UNITYSDK_OFFSET(0x14A7DD00)
#define CLASS_2_47B96B4A8C7B4A85__CTOR_OFFSET UNITYSDK_OFFSET(0x14A7DB40)

inline static constexpr unsigned int Class_2_47B96B4A8C7B4A85_TypeDefinitionIndex = 50300;

class Class_2_47B96B4A8C7B4A85 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState* Field_2_1; // 0x20
	::RPG::Client::MonoClockParkStoryCharacter* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_47B96B4A8C7B4A85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47B96B4A8C7B4A85_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47B96B4A8C7B4A85_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47B96B4A8C7B4A85_ONSKIP_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47B96B4A8C7B4A85_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47B96B4A8C7B4A85_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47B96B4A8C7B4A85_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_936773021FAF4D21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47B96B4A8C7B4A85_METHOD_2_936773021FAF4D21_OFFSET))(this);
	}
};
