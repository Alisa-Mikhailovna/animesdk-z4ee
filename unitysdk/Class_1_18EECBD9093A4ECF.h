#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class Class_1_6BB3CCD14C3350D4;
class Class_2_602372D0AB20C657;
namespace System { class String; }
namespace System::Diagnostics { class StackTrace; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_18EECBD9093A4ECF_METHOD_1_2F8EE4CE9D104762_OFFSET UNITYSDK_OFFSET(0xB18E420)
#define CLASS_1_18EECBD9093A4ECF_METHOD_1_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0xB18D250)
#define CLASS_1_18EECBD9093A4ECF__CTOR_OFFSET UNITYSDK_OFFSET(0xB18D170)

inline static constexpr unsigned int Class_1_18EECBD9093A4ECF_TypeDefinitionIndex = 47699;

class Class_1_18EECBD9093A4ECF : public ::System::Object
{
public:
	static ::Class_1_6BB3CCD14C3350D4** StaticGet_Field_1_0()
	{
		return (::Class_1_6BB3CCD14C3350D4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18EECBD9093A4ECF_TypeDefinitionIndex)->GetStaticField(0x5D2B0);
	}
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::String* Field_1_3; // 0x20
	::UnityEngine::RenderTexture* Field_1_4; // 0x28
	::UnityEngine::RenderTexture* Field_1_5; // 0x30
	::System::Diagnostics::StackTrace* Field_1_6; // 0x38
	::System::String* Field_1_7; // 0x40
	::System::String* Field_1_8; // 0x48
	::System::String* Field_1_9; // 0x50
	::System::String* Field_1_10; // 0x58
	::UnityEngine::RenderTexture* Field_1_11; // 0x60
	::System::String* Field_1_12; // 0x68
	::System::Int32 Field_1_13; // 0x70
	::System::Int32 Field_1_14; // 0x74
	::System::Int32 Field_1_15; // 0x78
	::System::DateTime Field_1_16; // 0x80
	::System::Single Field_1_17; // 0x88
	::System::Boolean Field_1_18; // 0x8C
	::System::Boolean Field_1_19; // 0x8D
	::System::Boolean Field_1_20; // 0x8E

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18EECBD9093A4ECF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F8EE4CE9D104762(::Class_2_602372D0AB20C657* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_602372D0AB20C657*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_18EECBD9093A4ECF_METHOD_1_2F8EE4CE9D104762_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E9E3E0D1D6E6E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18EECBD9093A4ECF_METHOD_1_8E9E3E0D1D6E6E24_OFFSET))(this);
	}
};
