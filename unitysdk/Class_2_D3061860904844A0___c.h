#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1050;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_D3061860904844A0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1470B950)
#define CLASS_2_D3061860904844A0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1470B980)
#define CLASS_2_D3061860904844A0___C___SORTSUBPANELS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1470B990)

inline static constexpr unsigned int Class_2_D3061860904844A0___c_TypeDefinitionIndex = 68517;

class Class_2_D3061860904844A0___c : public ::System::Object
{
public:
	static ::Class_2_D3061860904844A0___c** StaticGet___9()
	{
		return (::Class_2_D3061860904844A0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3061860904844A0___c_TypeDefinitionIndex)->GetStaticField(0x50960);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_1050*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_1050*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3061860904844A0___c_TypeDefinitionIndex)->GetStaticField(0x50968);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SortSubPanels_b__8_0(::Class_0_16E4307DCC419505_1050* a1, ::Class_0_16E4307DCC419505_1050* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_1050*, ::Class_0_16E4307DCC419505_1050*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0___C___SORTSUBPANELS_B__8_0_OFFSET))(this, a1, a2);
	}
};
