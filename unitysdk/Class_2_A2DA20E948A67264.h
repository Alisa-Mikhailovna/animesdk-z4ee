#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_97545AF7A561103B;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_A2DA20E948A67264_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB43B640)
#define CLASS_2_A2DA20E948A67264_METHOD_2_2ADBA02EC0F7C432_1_OFFSET UNITYSDK_OFFSET(0xB43C110)
#define CLASS_2_A2DA20E948A67264_METHOD_2_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0xB43BDD0)
#define CLASS_2_A2DA20E948A67264_METHOD_2_38E05EB633150F5F_OFFSET UNITYSDK_OFFSET(0xB43BF70)
#define CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_1_OFFSET UNITYSDK_OFFSET(0xB43C480)
#define CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_2_OFFSET UNITYSDK_OFFSET(0xB43C650)
#define CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0xB43C2B0)
#define CLASS_2_A2DA20E948A67264_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB43BD20)
#define CLASS_2_A2DA20E948A67264_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB43BB40)
#define CLASS_2_A2DA20E948A67264_TICK_OFFSET UNITYSDK_OFFSET(0xB43BD70)
#define CLASS_2_A2DA20E948A67264__CTOR_OFFSET UNITYSDK_OFFSET(0xB43B250)

inline static constexpr unsigned int Class_2_A2DA20E948A67264_TypeDefinitionIndex = 50557;

class Class_2_A2DA20E948A67264 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_97545AF7A561103B* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::RPG::GameCore::TaskContext* Field_2_6; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_97545AF7A561103B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_97545AF7A561103B*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_METHOD_2_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ADBA02EC0F7C432_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_METHOD_2_2ADBA02EC0F7C432_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_38E05EB633150F5F(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_METHOD_2_38E05EB633150F5F_OFFSET))(this, a1);
	}
};
