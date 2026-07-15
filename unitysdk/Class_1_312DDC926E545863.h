#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class BattleEventConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }

#define CLASS_1_312DDC926E545863__CTOR_OFFSET UNITYSDK_OFFSET(0x14735180)

inline static constexpr unsigned int Class_1_312DDC926E545863_TypeDefinitionIndex = 54341;

class Class_1_312DDC926E545863 : public ::System::Object
{
public:
	::RPG::GameCore::StageRow* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_382* Field_1_2; // 0x20
	::System::Object* Field_1_3; // 0x28
	::RPG::GameCore::BattleEventConfig* Field_1_4; // 0x30
	::RPG::GameCore::GameEntity* Field_1_5; // 0x38
	::RPG::GameCore::GameEntity* Field_1_6; // 0x40
	::RPG::GameCore::BattleEventCreateType Field_1_7; // 0x48
	::RPG::GameCore::FixPoint Field_1_8; // 0x50
	::RPG::GameCore::FixPoint Field_1_9; // 0x58
	::System::Boolean Field_1_10; // 0x60
	::System::UInt32 Field_1_11; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312DDC926E545863__CTOR_OFFSET))(this);
	}
};
