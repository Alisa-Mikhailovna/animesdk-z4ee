#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xBE772E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhaseInitParams_TypeDefinitionIndex = 58244;

	class BattleGamePhaseInitParams : public ::System::Object
	{
	public:
		::System::String* BattleSceneName; // 0x10
		::RPG::GameCore::BattleAreaReferenceInfo* BattleAreaInfo; // 0x18
		::RPG::Client::Map* ADVMap; // 0x20
		::System::Object* ExtraData; // 0x28
		::RPG::GameCore::BattleLineupData* LineupData; // 0x30
		::System::UInt32 PlanID; // 0x38
		::System::UInt32 RoundsLimit; // 0x3C
		::System::UInt32 BattleID; // 0x40
		::System::Int32 RestartCount; // 0x44
		::System::Int32 LogicRandomSeed; // 0x48
		::RPG::Client::GamePhaseType FromPhaseType; // 0x4C
		::UnityEngine::Vector3 CoordinatePos; // 0x50
		::System::UInt32 FloorID; // 0x5C
		::System::Boolean DirectKillBattle; // 0x60
		::System::Boolean TriggerBattleFromDevPage; // 0x61
		::System::Boolean Simulate; // 0x62
		::System::Boolean IsFromRestart; // 0x63
		::System::Boolean IsClientBattle; // 0x64
		::System::Boolean AutoBattleAtStart; // 0x65
		::System::Boolean EncryptTime; // 0x66
		::System::Boolean IsForceLoadScene; // 0x67
		::System::Boolean IsShowBattleUI; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASEINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
