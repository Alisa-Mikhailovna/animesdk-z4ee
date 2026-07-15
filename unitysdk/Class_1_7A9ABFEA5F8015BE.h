#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_1_DFF28B1BAA582E14;

#define CLASS_1_7A9ABFEA5F8015BE_CLEAR_OFFSET UNITYSDK_OFFSET(0xADEAA80)
#define CLASS_1_7A9ABFEA5F8015BE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xADEAF90)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_586EB3004CA81B57_OFFSET UNITYSDK_OFFSET(0xADEA980)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_88B639C4254BEB6F_OFFSET UNITYSDK_OFFSET(0xADEACD0)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0xADEAFC0)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0xADEAFB0)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_D5AC44B0CC3F3063_OFFSET UNITYSDK_OFFSET(0xADEAB20)
#define CLASS_1_7A9ABFEA5F8015BE_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xADEAFA0)
#define CLASS_1_7A9ABFEA5F8015BE__CTOR_OFFSET UNITYSDK_OFFSET(0xADEAFD0)

inline static constexpr unsigned int Class_1_7A9ABFEA5F8015BE_TypeDefinitionIndex = 51554;

class Class_1_7A9ABFEA5F8015BE : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_450* _Owner_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_450* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_450* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::RPG::GameCore::FixPoint Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_586EB3004CA81B57(::Class_0_16E4307DCC419505_450* a1, ::Class_0_16E4307DCC419505_450* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_450*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_586EB3004CA81B57_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_D5AC44B0CC3F3063(::RPG::GameCore::FixPoint& a1, ::Struct_2_87C8F594A107C13B& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::Struct_2_87C8F594A107C13B&))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_D5AC44B0CC3F3063_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_88B639C4254BEB6F(::Class_1_DFF28B1BAA582E14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFF28B1BAA582E14*))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_88B639C4254BEB6F_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_450* get_Owner()
	{
		return ((::Class_0_16E4307DCC419505_450*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::Class_0_16E4307DCC419505_450* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_SET_OWNER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}
};
