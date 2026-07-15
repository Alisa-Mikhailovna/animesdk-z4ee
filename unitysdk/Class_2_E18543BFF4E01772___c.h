#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_E18543BFF4E01772___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1494E7B0)
#define CLASS_2_E18543BFF4E01772___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1494E7F0)
#define CLASS_2_E18543BFF4E01772___C___CLOSEBGM_B__36_0_OFFSET UNITYSDK_OFFSET(0x1494E810)
#define CLASS_2_E18543BFF4E01772___C___HANDLEADVENTUREPHASEENTEREDEVENT_B__32_0_OFFSET UNITYSDK_OFFSET(0x1494E800)

inline static constexpr unsigned int Class_2_E18543BFF4E01772___c_TypeDefinitionIndex = 73767;

class Class_2_E18543BFF4E01772___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__36_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E18543BFF4E01772___c_TypeDefinitionIndex)->GetStaticField(0x62C40);
	}
	static ::Class_2_E18543BFF4E01772___c** StaticGet___9()
	{
		return (::Class_2_E18543BFF4E01772___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E18543BFF4E01772___c_TypeDefinitionIndex)->GetStaticField(0x62C48);
	}
	static ::System::Action** StaticGet___9__32_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E18543BFF4E01772___c_TypeDefinitionIndex)->GetStaticField(0x62C50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E18543BFF4E01772___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E18543BFF4E01772___C__CTOR_OFFSET))(this);
	}

	::System::Void __HandleAdventurePhaseEnteredEvent_b__32_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E18543BFF4E01772___C___HANDLEADVENTUREPHASEENTEREDEVENT_B__32_0_OFFSET))(this);
	}

	::System::Void __CloseBGM_b__36_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E18543BFF4E01772___C___CLOSEBGM_B__36_0_OFFSET))(this);
	}
};
