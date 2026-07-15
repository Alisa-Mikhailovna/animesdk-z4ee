#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_0A6AEAAB98E550F1_3;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_2504DFD00442E50D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x151911A0)
#define CLASS_2_2504DFD00442E50D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15190F80)
#define CLASS_2_2504DFD00442E50D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x151910C0)
#define CLASS_2_2504DFD00442E50D_TICK_OFFSET UNITYSDK_OFFSET(0x151911F0)
#define CLASS_2_2504DFD00442E50D__CTOR_OFFSET UNITYSDK_OFFSET(0x15190F10)

inline static constexpr unsigned int Class_2_2504DFD00442E50D_TypeDefinitionIndex = 55496;

class Class_2_2504DFD00442E50D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_0A6AEAAB98E550F1_3* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::Client::Stage* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0A6AEAAB98E550F1_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0A6AEAAB98E550F1_3*))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_TICK_OFFSET))(this, a1);
	}
};
