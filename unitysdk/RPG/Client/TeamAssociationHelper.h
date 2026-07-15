#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TEAMASSOCIATIONHELPER_SWITCHTEAMASSOCIATIONSHOWSTATE_OFFSET UNITYSDK_OFFSET(0xD630EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamAssociationHelper_TypeDefinitionIndex = 65069;

	class TeamAssociationHelper : public ::System::Object
	{
	public:
		static ::System::Void SwitchTeamAssociationShowState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMASSOCIATIONHELPER_SWITCHTEAMASSOCIATIONSHOWSTATE_OFFSET))();
		}
	};
}
