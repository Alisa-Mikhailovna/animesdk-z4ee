#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B119C70)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11A1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFindTrotterConfigRow_TypeDefinitionIndex = 11199;

	class ActivityFindTrotterConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 MissionID; // 0x10
		::System::UInt32 RewardQuestID; // 0x14
		::System::UInt32 ActivityModuleID; // 0x18
		::System::UInt32 StartSubMissionID; // 0x1C
		::RPG::Client::TextID Result02; // 0x20
		::RPG::Client::TextID Result01; // 0x30
		::RPG::Client::TextID Aim02; // 0x40
		::System::UInt32 Order; // 0x50
		::System::UInt32 ActivityID; // 0x54
		::System::UInt32 FinishSubMissionID; // 0x58
		::RPG::Client::TextID Title; // 0x60
		::RPG::Client::TextID Aim01; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityFindTrotterConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFindTrotterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
