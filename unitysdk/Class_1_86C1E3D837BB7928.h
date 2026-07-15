#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_18;

#define CLASS_1_86C1E3D837BB7928__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78AEA0)

inline static constexpr unsigned int Class_1_86C1E3D837BB7928_TypeDefinitionIndex = 41128;

class Class_1_86C1E3D837BB7928 : public ::System::Object
{
public:
	::Class_1_7807B2B04302CD7B_18* Field_1_0; // 0x10
	::System::UInt64 Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::Single Field_1_7; // 0x40
	::RPG::GameCore::FixPoint Field_1_8; // 0x48
	::RPG::GameCore::FixPoint Field_1_9; // 0x50
	::RPG::GameCore::FixPoint Field_1_10; // 0x58
	::RPG::GameCore::FixPoint Field_1_11; // 0x60
	::RPG::GameCore::FixPoint Field_1_12; // 0x68
	::RPG::GameCore::FixPoint Field_1_13; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86C1E3D837BB7928__CTOR_OFFSET))(this);
	}
};
