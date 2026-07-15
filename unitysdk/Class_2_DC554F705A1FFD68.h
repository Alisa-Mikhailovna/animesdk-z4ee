#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RemoveShield; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DC554F705A1FFD68_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB29ED60)
#define CLASS_2_DC554F705A1FFD68_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB29EDA0)
#define CLASS_2_DC554F705A1FFD68_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB29F290)
#define CLASS_2_DC554F705A1FFD68_TICK_OFFSET UNITYSDK_OFFSET(0xB29F2E0)
#define CLASS_2_DC554F705A1FFD68__CTOR_OFFSET UNITYSDK_OFFSET(0xB29ED50)

inline static constexpr unsigned int Class_2_DC554F705A1FFD68_TypeDefinitionIndex = 52810;

class Class_2_DC554F705A1FFD68 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RemoveShield* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveShield*))((::PBYTE)hIl2Cpp + CLASS_2_DC554F705A1FFD68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC554F705A1FFD68_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC554F705A1FFD68_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC554F705A1FFD68_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC554F705A1FFD68_TICK_OFFSET))(this, a1);
	}
};
