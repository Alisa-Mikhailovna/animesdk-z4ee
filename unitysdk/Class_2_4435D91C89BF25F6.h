#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayAndWaitSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_4435D91C89BF25F6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1478E9C0)
#define CLASS_2_4435D91C89BF25F6_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1478F860)
#define CLASS_2_4435D91C89BF25F6_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x1478F580)
#define CLASS_2_4435D91C89BF25F6_METHOD_2_32FE792EB1B0F498_OFFSET UNITYSDK_OFFSET(0x1478F810)
#define CLASS_2_4435D91C89BF25F6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1478F380)
#define CLASS_2_4435D91C89BF25F6_METHOD_2_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x1478EA70)
#define CLASS_2_4435D91C89BF25F6_METHOD_2_E239382DD8D3653B_OFFSET UNITYSDK_OFFSET(0x1478F0E0)
#define CLASS_2_4435D91C89BF25F6_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1478F780)
#define CLASS_2_4435D91C89BF25F6_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1478F530)
#define CLASS_2_4435D91C89BF25F6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1478EB60)
#define CLASS_2_4435D91C89BF25F6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1478F410)
#define CLASS_2_4435D91C89BF25F6_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x1478EB10)
#define CLASS_2_4435D91C89BF25F6_TICK_OFFSET UNITYSDK_OFFSET(0x1478F4D0)
#define CLASS_2_4435D91C89BF25F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1478E9B0)

inline static constexpr unsigned int Class_2_4435D91C89BF25F6_TypeDefinitionIndex = 55682;

class Class_2_4435D91C89BF25F6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::RPG::GameCore::PlayAndWaitSimpleTalk* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAndWaitSimpleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAndWaitSimpleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E239382DD8D3653B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_METHOD_2_E239382DD8D3653B_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_METHOD_2_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_2_32FE792EB1B0F498(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_METHOD_2_32FE792EB1B0F498_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_GET_FORCESKIP_OFFSET))(this);
	}
};
