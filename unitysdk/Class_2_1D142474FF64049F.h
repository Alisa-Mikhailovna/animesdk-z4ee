#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AddGlobalDynamicOffset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1D142474FF64049F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC000280)
#define CLASS_2_1D142474FF64049F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0002C0)
#define CLASS_2_1D142474FF64049F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0007D0)
#define CLASS_2_1D142474FF64049F_TICK_OFFSET UNITYSDK_OFFSET(0xC000820)
#define CLASS_2_1D142474FF64049F__CTOR_OFFSET UNITYSDK_OFFSET(0xC000270)

inline static constexpr unsigned int Class_2_1D142474FF64049F_TypeDefinitionIndex = 55289;

class Class_2_1D142474FF64049F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AddGlobalDynamicOffset* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddGlobalDynamicOffset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddGlobalDynamicOffset*))((::PBYTE)hIl2Cpp + CLASS_2_1D142474FF64049F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D142474FF64049F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D142474FF64049F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D142474FF64049F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1D142474FF64049F_TICK_OFFSET))(this, a1);
	}
};
