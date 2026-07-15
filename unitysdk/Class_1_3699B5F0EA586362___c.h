#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_48.h"
#include "unitysdk/System/Object.h"

class Class_1_3699B5F0EA586362;

#define CLASS_1_3699B5F0EA586362___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0F5000)
#define CLASS_1_3699B5F0EA586362___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F5030)
#define CLASS_1_3699B5F0EA586362___C___CCTOR_B__88_0_OFFSET UNITYSDK_OFFSET(0x1C0F5040)
#define CLASS_1_3699B5F0EA586362___C___CCTOR_B__88_1_OFFSET UNITYSDK_OFFSET(0x1C0F5070)
#define CLASS_1_3699B5F0EA586362___C___CCTOR_B__88_2_OFFSET UNITYSDK_OFFSET(0x1C0F5080)

inline static constexpr unsigned int Class_1_3699B5F0EA586362___c_TypeDefinitionIndex = 28875;

class Class_1_3699B5F0EA586362___c : public ::System::Object
{
public:
	static ::Class_1_3699B5F0EA586362___c** StaticGet___9()
	{
		return (::Class_1_3699B5F0EA586362___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3699B5F0EA586362___c_TypeDefinitionIndex)->GetStaticField(0xF1C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3699B5F0EA586362___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3699B5F0EA586362___C__CTOR_OFFSET))(this);
	}

	::Class_1_3699B5F0EA586362* __cctor_b__88_0()
	{
		return ((::Class_1_3699B5F0EA586362*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3699B5F0EA586362___C___CCTOR_B__88_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__88_1(::Enum_3_0A3761FE34514D6C_48 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_48))((::PBYTE)hIl2Cpp + CLASS_1_3699B5F0EA586362___C___CCTOR_B__88_1_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_48 __cctor_b__88_2(::System::Int32 a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_48(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3699B5F0EA586362___C___CCTOR_B__88_2_OFFSET))(this, a1);
	}
};
