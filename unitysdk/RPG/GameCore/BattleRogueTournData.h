#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BATTLEROGUETOURNDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xD9BCDC0)
#define RPG_GAMECORE_BATTLEROGUETOURNDATA_GET_DIFFICULTYRATIO_OFFSET UNITYSDK_OFFSET(0xD9BD360)
#define RPG_GAMECORE_BATTLEROGUETOURNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD9BD490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleRogueTournData_TypeDefinitionIndex = 53785;

	class BattleRogueTournData : public ::System::Object
	{
	public:
		::System::Double RawDifficultyRatio; // 0x10
		::System::UInt32 StyleLevel; // 0x18
		::System::UInt32 StyleExp; // 0x1C
		::RPG::GameCore::RogueTournMode TournMode; // 0x20
		::System::UInt32 StyleID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUETOURNDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DifficultyRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUETOURNDATA_GET_DIFFICULTYRATIO_OFFSET))(this);
		}

		::RPG::GameCore::BattleRogueTournData* DeepClone()
		{
			return ((::RPG::GameCore::BattleRogueTournData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUETOURNDATA_DEEPCLONE_OFFSET))(this);
		}
	};
}
