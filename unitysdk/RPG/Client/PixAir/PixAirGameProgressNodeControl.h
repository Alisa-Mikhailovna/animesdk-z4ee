#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSNODECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFC6550)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameProgressNodeControl_TypeDefinitionIndex = 75207;

	class PixAirGameProgressNodeControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSNODECONTROL__CTOR_OFFSET))(this);
		}
	};
}
