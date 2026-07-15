#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_57.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAnimState; }
namespace UnityEngine { class Animator; }

#define CLASS_2_DAB8355A2CB27364_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AB9520)
#define CLASS_2_DAB8355A2CB27364_METHOD_2_0F9BA4683D398D7A_OFFSET UNITYSDK_OFFSET(0x14ABA3F0)
#define CLASS_2_DAB8355A2CB27364_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x14ABA5B0)
#define CLASS_2_DAB8355A2CB27364_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14AB9560)
#define CLASS_2_DAB8355A2CB27364_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14ABA0B0)
#define CLASS_2_DAB8355A2CB27364_TICK_OFFSET UNITYSDK_OFFSET(0x14ABA170)
#define CLASS_2_DAB8355A2CB27364__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB9480)

inline static constexpr unsigned int Class_2_DAB8355A2CB27364_TypeDefinitionIndex = 53193;

class Class_2_DAB8355A2CB27364 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::UnityEngine::Animator* Field_2_2; // 0x28
	::Struct_2_CC45B4503679E14E_57 Field_2_3; // 0x30
	::RPG::GameCore::TriggerAnimState* Field_2_4; // 0x40
	::System::UInt32 Field_2_5; // 0x48
	::System::Int32 Field_2_6; // 0x4C
	::System::Boolean Field_2_7; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_DAB8355A2CB27364__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAB8355A2CB27364_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAB8355A2CB27364_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAB8355A2CB27364_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DAB8355A2CB27364_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DAB8355A2CB27364_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0F9BA4683D398D7A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAB8355A2CB27364_METHOD_2_0F9BA4683D398D7A_OFFSET))(this);
	}
};
