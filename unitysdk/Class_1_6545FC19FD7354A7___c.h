#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_6545FC19FD7354A7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FD8700)
#define CLASS_1_6545FC19FD7354A7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11FD8730)
#define CLASS_1_6545FC19FD7354A7___C___ONFINALEND_B__369_0_OFFSET UNITYSDK_OFFSET(0x11FD88F0)
#define CLASS_1_6545FC19FD7354A7___C___PLAYSCREENCUT_B__154_0_OFFSET UNITYSDK_OFFSET(0x11FD8740)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex = 57999;

class Class_1_6545FC19FD7354A7___c : public ::System::Object
{
public:
	static ::Class_1_6545FC19FD7354A7___c** StaticGet___9()
	{
		return (::Class_1_6545FC19FD7354A7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex)->GetStaticField(0xD5F0);
	}
	static ::System::Action** StaticGet___9__369_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex)->GetStaticField(0xD5F8);
	}
	static ::System::Action** StaticGet___9__154_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6545FC19FD7354A7___c_TypeDefinitionIndex)->GetStaticField(0xD600);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__CTOR_OFFSET))(this);
	}

	::System::Void __PlayScreenCut_b__154_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C___PLAYSCREENCUT_B__154_0_OFFSET))(this);
	}

	::System::Void __OnFinalEnd_b__369_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C___ONFINALEND_B__369_0_OFFSET))(this);
	}
};
