#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7A6E49020D23C900_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xB2B6460)
#define CLASS_1_7A6E49020D23C900__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2B64B0)
#define CLASS_1_7A6E49020D23C900__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B6450)

inline static constexpr unsigned int Class_1_7A6E49020D23C900_TypeDefinitionIndex = 70535;

class Class_1_7A6E49020D23C900 : public ::System::Object
{
public:
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_0()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x10BB0);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_1()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x10BB8);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_2()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x10BC0);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_3()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x10BC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x10BD0);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_5()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x10BD8);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_6()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x10BE0);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_7()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x10BE8);
	}
	static ::Class_1_7A6E49020D23C900** StaticGet_Field_1_8()
	{
		return (::Class_1_7A6E49020D23C900**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A6E49020D23C900_TypeDefinitionIndex)->GetStaticField(0x10BF0);
	}
	::System::Int32 Field_1_9; // 0x10
	::System::Int32 Field_1_10; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A6E49020D23C900__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A6E49020D23C900__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7A6E49020D23C900_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}
};
