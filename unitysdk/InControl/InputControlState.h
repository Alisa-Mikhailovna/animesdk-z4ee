#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define INCONTROL_INPUTCONTROLSTATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x199618C0)
#define INCONTROL_INPUTCONTROLSTATE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x199618B0)
#define INCONTROL_INPUTCONTROLSTATE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x199618A0)
#define INCONTROL_INPUTCONTROLSTATE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19961900)
#define INCONTROL_INPUTCONTROLSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x39C7AF0)
#define INCONTROL_INPUTCONTROLSTATE_SET_1_OFFSET UNITYSDK_OFFSET(0x39C7B30)
#define INCONTROL_INPUTCONTROLSTATE_SET_2_OFFSET UNITYSDK_OFFSET(0x39C7B60)
#define INCONTROL_INPUTCONTROLSTATE_SET_OFFSET UNITYSDK_OFFSET(0x39C7B00)

namespace InControl
{
	inline static constexpr unsigned int InputControlState_TypeDefinitionIndex = 38668;

	struct alignas(4) InputControlState
	{
		::System::Boolean State; // 0x10
		::System::Single Value; // 0x14
		::System::Single RawValue; // 0x18

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_RESET_OFFSET))(this);
		}

		::System::Void Set(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_SET_1_OFFSET))(this, a1, a2);
		}

		::System::Void Set_2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_SET_2_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Implicit(::InControl::InputControlState a1)
		{
			return ((::System::Boolean(*)(::InControl::InputControlState))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Single op_Implicit_1(::InControl::InputControlState a1)
		{
			return ((::System::Single(*)(::InControl::InputControlState))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::InControl::InputControlState a1, ::InControl::InputControlState a2)
		{
			return ((::System::Boolean(*)(::InControl::InputControlState, ::InControl::InputControlState))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::InControl::InputControlState a1, ::InControl::InputControlState a2)
		{
			return ((::System::Boolean(*)(::InControl::InputControlState, ::InControl::InputControlState))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLSTATE_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
