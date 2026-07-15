#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LittleGameAbilityAttributeModifierType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A903ABC2202D622C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A750CF0)

inline static constexpr unsigned int Class_1_A903ABC2202D622C_TypeDefinitionIndex = 39541;

class Class_1_A903ABC2202D622C : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::RPG::Client::LittleGame::LittleGameAbilityAttributeModifierType Field_1_1; // 0x14
	::RPG::GameCore::FixPoint Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A903ABC2202D622C__CTOR_OFFSET))(this);
	}
};
