#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GameSwitcherStatus_TypeDefinitionIndex = 69446;

	enum class GameSwitcherStatus : ::System::Int32
	{
		Internal = 0,
		External = 1,
	};
}
