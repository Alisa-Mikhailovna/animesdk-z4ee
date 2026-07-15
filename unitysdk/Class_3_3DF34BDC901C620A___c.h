#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_3DF34BDC901C620A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF1AE790)
#define CLASS_3_3DF34BDC901C620A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF1AE7D0)
#define CLASS_3_3DF34BDC901C620A___C___CALCCHENLINGEXTRACOINNUMTERM_B__5_0_OFFSET UNITYSDK_OFFSET(0xF1AE7F0)
#define CLASS_3_3DF34BDC901C620A___C___CALCCHENLINGEXTRAMULTIPLIERTERM_B__8_0_OFFSET UNITYSDK_OFFSET(0xF1AE810)
#define CLASS_3_3DF34BDC901C620A___C___CALCITEMEXTRACOINNUMTERM_B__4_0_OFFSET UNITYSDK_OFFSET(0xF1AE7E0)
#define CLASS_3_3DF34BDC901C620A___C___CALCITEMEXTRAMULTIPLIERTERM_B__7_0_OFFSET UNITYSDK_OFFSET(0xF1AE800)

inline static constexpr unsigned int Class_3_3DF34BDC901C620A___c_TypeDefinitionIndex = 50268;

class Class_3_3DF34BDC901C620A___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3DF34BDC901C620A___c_TypeDefinitionIndex)->GetStaticField(0x2AE70);
	}
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3DF34BDC901C620A___c_TypeDefinitionIndex)->GetStaticField(0x2AE78);
	}
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3DF34BDC901C620A___c_TypeDefinitionIndex)->GetStaticField(0x2AE80);
	}
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3DF34BDC901C620A___c_TypeDefinitionIndex)->GetStaticField(0x2AE88);
	}
	static ::Class_3_3DF34BDC901C620A___c** StaticGet___9()
	{
		return (::Class_3_3DF34BDC901C620A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3DF34BDC901C620A___c_TypeDefinitionIndex)->GetStaticField(0x2AE90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A___C__CTOR_OFFSET))(this);
	}

	::System::Single __CalcItemExtraCoinNumTerm_b__4_0(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A___C___CALCITEMEXTRACOINNUMTERM_B__4_0_OFFSET))(this, a1);
	}

	::System::Single __CalcChenLingExtraCoinNumTerm_b__5_0(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A___C___CALCCHENLINGEXTRACOINNUMTERM_B__5_0_OFFSET))(this, a1);
	}

	::System::Single __CalcItemExtraMultiplierTerm_b__7_0(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A___C___CALCITEMEXTRAMULTIPLIERTERM_B__7_0_OFFSET))(this, a1);
	}

	::System::Single __CalcChenLingExtraMultiplierTerm_b__8_0(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A___C___CALCCHENLINGEXTRAMULTIPLIERTERM_B__8_0_OFFSET))(this, a1);
	}
};
