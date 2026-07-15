#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_10C1CA4432641F33_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15668590)
#define CLASS_1_10C1CA4432641F33_METHOD_1_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x15668720)
#define CLASS_1_10C1CA4432641F33_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x15668680)
#define CLASS_1_10C1CA4432641F33_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x156685E0)
#define CLASS_1_10C1CA4432641F33__CCTOR_OFFSET UNITYSDK_OFFSET(0x15668820)
#define CLASS_1_10C1CA4432641F33__CTOR_OFFSET UNITYSDK_OFFSET(0x156683A0)

inline static constexpr unsigned int Class_1_10C1CA4432641F33_TypeDefinitionIndex = 75028;

class Class_1_10C1CA4432641F33 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0x49300);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0xC490);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0xC494);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0xC498);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0xC49C);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10C1CA4432641F33_TypeDefinitionIndex)->GetStaticField(0xC4A0);
	}
	::UnityEngine::Animator* Field_1_6; // 0x10

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_10C1CA4432641F33_METHOD_1_1CD1133DC003C11C_OFFSET))(this, a1);
	}
};
