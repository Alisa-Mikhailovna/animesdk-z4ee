#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationStateControllerBase.h"

#define RPG_CLIENT_PROP_CHIMERAGOALSSTATECONTROLLER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xD12CDE0)
#define RPG_CLIENT_PROP_CHIMERAGOALSSTATECONTROLLER_ONENTER_OFFSET UNITYSDK_OFFSET(0xD12CE30)
#define RPG_CLIENT_PROP_CHIMERAGOALSSTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD12D000)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraGoalsStateController_TypeDefinitionIndex = 74541;

	class ChimeraGoalsStateController : public ::RPG::Client::Prop::ChimeraPreparationStateControllerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGOALSSTATECONTROLLER__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraPreparationState get_State()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGOALSSTATECONTROLLER_GET_STATE_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGOALSSTATECONTROLLER_ONENTER_OFFSET))(this);
		}
	};
}
