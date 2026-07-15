#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"

#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_ENABLEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xC184690)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xC184490)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xC184650)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC183620)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_ClockParkRandomEventState_TypeDefinitionIndex = 58736;

	class ClockParkInstance_ClockParkRandomEventState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean EnableDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_ENABLEDICEPLACEMENT_OFFSET))(this);
		}
	};
}
