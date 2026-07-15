#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_1_5D89E5E082F40A4C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4634D0)
#define CLASS_1_5D89E5E082F40A4C_GET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0xB463910)
#define CLASS_1_5D89E5E082F40A4C_GET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0xB463930)
#define CLASS_1_5D89E5E082F40A4C_GET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0xB463970)
#define CLASS_1_5D89E5E082F40A4C_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0xB463950)
#define CLASS_1_5D89E5E082F40A4C_METHOD_1_2613D9528D1056D5_OFFSET UNITYSDK_OFFSET(0xB463510)
#define CLASS_1_5D89E5E082F40A4C_METHOD_1_BD5F1AF5661A4E98_OFFSET UNITYSDK_OFFSET(0xB463750)
#define CLASS_1_5D89E5E082F40A4C_METHOD_1_F6D71BB9DFA2BE91_OFFSET UNITYSDK_OFFSET(0xB4635A0)
#define CLASS_1_5D89E5E082F40A4C_SET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0xB463920)
#define CLASS_1_5D89E5E082F40A4C_SET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0xB463940)
#define CLASS_1_5D89E5E082F40A4C_SET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0xB463980)
#define CLASS_1_5D89E5E082F40A4C_SET_STATENAME_OFFSET UNITYSDK_OFFSET(0xB463960)
#define CLASS_1_5D89E5E082F40A4C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB463990)
#define CLASS_1_5D89E5E082F40A4C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4634A0)

inline static constexpr unsigned int Class_1_5D89E5E082F40A4C_TypeDefinitionIndex = 57497;

class Class_1_5D89E5E082F40A4C : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D89E5E082F40A4C_TypeDefinitionIndex)->GetStaticField(0x145F0);
	}
	::System::String* _StateName_k__BackingField; // 0x10
	::System::String* _EntityName_k__BackingField; // 0x18
	::System::String* _LayerName_k__BackingField; // 0x20
	::UnityEngine::Animator* Field_1_4; // 0x28
	::System::String* _ParamName_k__BackingField; // 0x30
	::System::Single Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x3C
	::System::Single Field_1_8; // 0x40

	::System::Void _ctor(::UnityEngine::Animator* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2613D9528D1056D5(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_METHOD_1_2613D9528D1056D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6D71BB9DFA2BE91(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_METHOD_1_F6D71BB9DFA2BE91_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD5F1AF5661A4E98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_METHOD_1_BD5F1AF5661A4E98_OFFSET))(this, a1);
	}

	::System::String* get_EntityName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_GET_ENTITYNAME_OFFSET))(this);
	}

	::System::Void set_EntityName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_SET_ENTITYNAME_OFFSET))(this, a1);
	}

	::System::String* get_LayerName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_GET_LAYERNAME_OFFSET))(this);
	}

	::System::Void set_LayerName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_SET_LAYERNAME_OFFSET))(this, a1);
	}

	::System::String* get_StateName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_GET_STATENAME_OFFSET))(this);
	}

	::System::Void set_StateName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_SET_STATENAME_OFFSET))(this, a1);
	}

	::System::String* get_ParamName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_GET_PARAMNAME_OFFSET))(this);
	}

	::System::Void set_ParamName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_SET_PARAMNAME_OFFSET))(this, a1);
	}
};
