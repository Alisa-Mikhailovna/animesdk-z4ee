#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_43BD383C98B4C0C5_122__CTOR_OFFSET UNITYSDK_OFFSET(0xCD8F4D0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_122_TypeDefinitionIndex = 51956;

class Class_1_43BD383C98B4C0C5_122 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_0; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::RPG::GameCore::FixPoint Field_1_5; // 0x38
	::RPG::GameCore::FixPoint Field_1_6; // 0x40
	::RPG::GameCore::FixPoint Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x50
	::System::Boolean Field_1_9; // 0x51
	::RPG::GameCore::HealFormulaType Field_1_10; // 0x54
	::RPG::GameCore::FixPoint Field_1_11; // 0x58
	::RPG::GameCore::FixPoint Field_1_12; // 0x60
	::RPG::GameCore::FixPoint Field_1_13; // 0x68
	::RPG::GameCore::FixPoint Field_1_14; // 0x70
	::RPG::GameCore::FixPoint Field_1_15; // 0x78
	::RPG::GameCore::FixPoint Field_1_16; // 0x80
	::RPG::GameCore::FixPoint Field_1_17; // 0x88
	::RPG::GameCore::AbilityLinearProperty Field_1_18; // 0x90
	::RPG::GameCore::FixPoint Field_1_19; // 0xD8
	::RPG::GameCore::FixPoint Field_1_20; // 0xE0
	::RPG::GameCore::FixPoint Field_1_21; // 0xE8
	::RPG::GameCore::FixPoint Field_1_22; // 0xF0
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_23; // 0xF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_122__CTOR_OFFSET))(this);
	}
};
