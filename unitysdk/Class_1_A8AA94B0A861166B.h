#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::Client { class SpecialVisionSystem; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_A8AA94B0A861166B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9FABB0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_0772661406F51ADB_OFFSET UNITYSDK_OFFSET(0xB9F9FF0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_1B7FE474DC0310B3_OFFSET UNITYSDK_OFFSET(0xB9FAA90)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_46FADA273D811721_OFFSET UNITYSDK_OFFSET(0xB9F9960)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_6173AF17811AED4B_1_OFFSET UNITYSDK_OFFSET(0xB9FAB30)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0xB9FA670)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_7C43CA1991671A41_OFFSET UNITYSDK_OFFSET(0xB9F9770)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_7FA4071B282207B3_OFFSET UNITYSDK_OFFSET(0xB9FABF0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xB9FA790)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0xB9FA460)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB9F99C0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_D12268C88ECA46C9_OFFSET UNITYSDK_OFFSET(0xB9FA6F0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_D4DA5D82D6238D9E_OFFSET UNITYSDK_OFFSET(0xB9F9ED0)
#define CLASS_1_A8AA94B0A861166B_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xB9F9BC0)
#define CLASS_1_A8AA94B0A861166B__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9FAEC0)
#define CLASS_1_A8AA94B0A861166B__CTOR_OFFSET UNITYSDK_OFFSET(0xB9FAEB0)

inline static constexpr unsigned int Class_1_A8AA94B0A861166B_TypeDefinitionIndex = 65616;

class Class_1_A8AA94B0A861166B : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2D2F0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2D2F8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2D300);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2D308);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2D310);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2D318);
	}
	static ::Class_1_A8AA94B0A861166B** StaticGet_Field_1_6()
	{
		return (::Class_1_A8AA94B0A861166B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2D320);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2D328);
	}
	static ::System::String** StaticGet_Field_1_8()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2D330);
	}
	static ::System::String** StaticGet_Field_1_9()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2D338);
	}
	static ::System::String** StaticGet_Field_1_10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8AA94B0A861166B_TypeDefinitionIndex)->GetStaticField(0x2D340);
	}
	::RPG::Client::SpecialVisionSystem* Field_1_11; // 0x10
	::RPG::GameCore::GameEntity* Field_1_12; // 0x18
	::RPG::GameCore::EventManager* Field_1_13; // 0x20
	::RPG::GameCore::GameEntity* Field_1_14; // 0x28
	::System::String* Field_1_15; // 0x30
	::System::Boolean Field_1_16; // 0x38
	::System::Boolean Field_1_17; // 0x39
	::System::Boolean Field_1_18; // 0x3A
	::System::Boolean Field_1_19; // 0x3B
	::System::Int32 Field_1_20; // 0x3C
	::System::Single Field_1_21; // 0x40
	::System::UInt32 Field_1_22; // 0x44
	::System::UInt32 Field_1_23; // 0x48
	::System::UInt32 Field_1_24; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_7C43CA1991671A41(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_7C43CA1991671A41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46FADA273D811721(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_46FADA273D811721_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Boolean Method_1_0772661406F51ADB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_0772661406F51ADB_OFFSET))(this);
	}

	::System::Boolean Method_1_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_97285E397E8F5091_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_6173AF17811AED4B_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1B7FE474DC0310B3(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_1B7FE474DC0310B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D12268C88ECA46C9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_D12268C88ECA46C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA4071B282207B3(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_7FA4071B282207B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_D4DA5D82D6238D9E(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_D4DA5D82D6238D9E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8AA94B0A861166B_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}
};
