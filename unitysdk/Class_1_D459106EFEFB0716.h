#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleAnimMoveOption.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }

#define CLASS_1_D459106EFEFB0716_METHOD_1_0B2B6008BD1006E8_OFFSET UNITYSDK_OFFSET(0x155BB6C0)
#define CLASS_1_D459106EFEFB0716_METHOD_1_948A43AE709EF68A_OFFSET UNITYSDK_OFFSET(0x155BB4E0)
#define CLASS_1_D459106EFEFB0716_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x155BBC60)
#define CLASS_1_D459106EFEFB0716_METHOD_1_B5EA5DD8B4C0957C_OFFSET UNITYSDK_OFFSET(0x155BB460)
#define CLASS_1_D459106EFEFB0716_METHOD_1_E29A6A61C6FD21D1_OFFSET UNITYSDK_OFFSET(0x155BB820)
#define CLASS_1_D459106EFEFB0716__CTOR_OFFSET UNITYSDK_OFFSET(0x155BBF10)

inline static constexpr unsigned int Class_1_D459106EFEFB0716_TypeDefinitionIndex = 51723;

class Class_1_D459106EFEFB0716 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::RPG::MVector3 Field_1_4; // 0x2C
	::System::Single Field_1_5; // 0x38
	::RPG::MVector3 Field_1_6; // 0x3C
	::System::Single Field_1_7; // 0x48
	::System::Single Field_1_8; // 0x4C
	::System::Single Field_1_9; // 0x50
	::System::Single Field_1_10; // 0x54
	::RPG::GameCore::RtBattleAnimMoveOption Field_1_11; // 0x58
	::System::Boolean Field_1_12; // 0x5C
	::RPG::MVector3 Field_1_13; // 0x60
	::System::Single Field_1_14; // 0x6C
	::RPG::MVector3 Field_1_15; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716__CTOR_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_B5EA5DD8B4C0957C()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716_METHOD_1_B5EA5DD8B4C0957C_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_0B2B6008BD1006E8()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716_METHOD_1_0B2B6008BD1006E8_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_948A43AE709EF68A(::RPG::MVector3 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716_METHOD_1_948A43AE709EF68A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E29A6A61C6FD21D1(::RPG::GameCore::TransformComponent* a1, ::RPG::MVector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716_METHOD_1_E29A6A61C6FD21D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}
};
