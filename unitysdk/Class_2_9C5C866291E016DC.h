#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroStunTargetArchive; }

#define CLASS_2_9C5C866291E016DC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2E9000)
#define CLASS_2_9C5C866291E016DC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2E9050)
#define CLASS_2_9C5C866291E016DC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2E9420)
#define CLASS_2_9C5C866291E016DC_TICK_OFFSET UNITYSDK_OFFSET(0xB2E9470)
#define CLASS_2_9C5C866291E016DC__CTOR_OFFSET UNITYSDK_OFFSET(0xB2E8FF0)

inline static constexpr unsigned int Class_2_9C5C866291E016DC_TypeDefinitionIndex = 56331;

class Class_2_9C5C866291E016DC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WolfBroStunTargetArchive* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::UInt32 Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroStunTargetArchive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroStunTargetArchive*))((::PBYTE)hIl2Cpp + CLASS_2_9C5C866291E016DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5C866291E016DC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5C866291E016DC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5C866291E016DC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C5C866291E016DC_TICK_OFFSET))(this, a1);
	}
};
