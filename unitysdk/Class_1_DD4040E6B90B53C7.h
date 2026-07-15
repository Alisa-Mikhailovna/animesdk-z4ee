#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DD4040E6B90B53C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD0F2F0)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_16429620AD2514F5_OFFSET UNITYSDK_OFFSET(0xAD0FA50)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_2D93EB72799F321C_OFFSET UNITYSDK_OFFSET(0xAD0F4A0)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_3BB5D2EC283E3034_OFFSET UNITYSDK_OFFSET(0xAD0FBA0)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_8DCE8D68745FEBA0_OFFSET UNITYSDK_OFFSET(0xAD0F500)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_8EB914309F32E1BE_OFFSET UNITYSDK_OFFSET(0xAD0F710)
#define CLASS_1_DD4040E6B90B53C7_METHOD_1_E7955EC696E7ED3A_OFFSET UNITYSDK_OFFSET(0xAD0FAC0)
#define CLASS_1_DD4040E6B90B53C7__CTOR_OFFSET UNITYSDK_OFFSET(0xAD0FD10)

inline static constexpr unsigned int Class_1_DD4040E6B90B53C7_TypeDefinitionIndex = 55127;

class Class_1_DD4040E6B90B53C7 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Class_1_5F51D4049EA87B7B* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_4; // 0x30
	::RPG::GameCore::TeamActionType Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_2D93EB72799F321C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_2D93EB72799F321C_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_8EB914309F32E1BE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_8EB914309F32E1BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_16429620AD2514F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_16429620AD2514F5_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7955EC696E7ED3A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_E7955EC696E7ED3A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BB5D2EC283E3034(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_3BB5D2EC283E3034_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8DCE8D68745FEBA0(::RPG::GameCore::GameEntity* a1, ::Class_1_5F51D4049EA87B7B* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_1_DD4040E6B90B53C7_METHOD_1_8DCE8D68745FEBA0_OFFSET))(this, a1, a2);
	}
};
