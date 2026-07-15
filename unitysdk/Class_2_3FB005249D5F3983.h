#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueDialogue; }

#define CLASS_2_3FB005249D5F3983_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFFA2D0)
#define CLASS_2_3FB005249D5F3983_METHOD_2_037C311A6A40E4BC_OFFSET UNITYSDK_OFFSET(0xAFFA730)
#define CLASS_2_3FB005249D5F3983_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0xAFFAB80)
#define CLASS_2_3FB005249D5F3983_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAFFA310)
#define CLASS_2_3FB005249D5F3983_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAFFAAD0)
#define CLASS_2_3FB005249D5F3983_TICK_OFFSET UNITYSDK_OFFSET(0xAFFAB20)
#define CLASS_2_3FB005249D5F3983__CTOR_OFFSET UNITYSDK_OFFSET(0xAFFA2C0)
#define CLASS_2_3FB005249D5F3983__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xAFFAEC0)

inline static constexpr unsigned int Class_2_3FB005249D5F3983_TypeDefinitionIndex = 56166;

class Class_2_3FB005249D5F3983 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerRogueDialogue* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::LevelGraphComponent* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueDialogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueDialogue*))((::PBYTE)hIl2Cpp + CLASS_2_3FB005249D5F3983__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FB005249D5F3983_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FB005249D5F3983_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FB005249D5F3983_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3FB005249D5F3983_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_037C311A6A40E4BC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3FB005249D5F3983_METHOD_2_037C311A6A40E4BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FB005249D5F3983_METHOD_2_3BFE3B9EF8374F61_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FB005249D5F3983__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
