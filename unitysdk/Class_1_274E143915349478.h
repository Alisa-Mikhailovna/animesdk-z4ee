#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_511;
class Class_1_43BD383C98B4C0C5_121;
namespace RPG::GameCore { class AISwitchDecisionGroupConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_274E143915349478_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AEE490)
#define CLASS_1_274E143915349478_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x14AEF2F0)
#define CLASS_1_274E143915349478_METHOD_1_33BB80EA12E7538A_OFFSET UNITYSDK_OFFSET(0x14AEE730)
#define CLASS_1_274E143915349478_METHOD_1_4A42324BF665864C_OFFSET UNITYSDK_OFFSET(0x14AEEC90)
#define CLASS_1_274E143915349478_METHOD_1_4F597CFED10625C3_OFFSET UNITYSDK_OFFSET(0x14AEF430)
#define CLASS_1_274E143915349478_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x14AEF000)
#define CLASS_1_274E143915349478_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x14AEF080)
#define CLASS_1_274E143915349478_METHOD_1_E67FA6A042436B76_OFFSET UNITYSDK_OFFSET(0x14AEE930)
#define CLASS_1_274E143915349478_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x14AEF1B0)
#define CLASS_1_274E143915349478__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEE2C0)

inline static constexpr unsigned int Class_1_274E143915349478_TypeDefinitionIndex = 51918;

class Class_1_274E143915349478 : public ::System::Object
{
public:
	::RPG::GameCore::AISwitchDecisionGroupConfig* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_511* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_511* Field_1_2; // 0x20
	::Il2CppArray<::Class_0_16E4307DCC419505_511*>* Field_1_3; // 0x28
	::Class_1_43BD383C98B4C0C5_121* Field_1_4; // 0x30
	::Class_0_16E4307DCC419505_511* Field_1_5; // 0x38
	::RPG::GameCore::TaskContext* Field_1_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::AISwitchDecisionGroupConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AISwitchDecisionGroupConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_33BB80EA12E7538A()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_33BB80EA12E7538A_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_511* Method_1_4A42324BF665864C(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_511*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_4A42324BF665864C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E67FA6A042436B76()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_E67FA6A042436B76_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::RPG::GameCore::TaskState Method_1_4F597CFED10625C3()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_4F597CFED10625C3_OFFSET))(this);
	}
};
