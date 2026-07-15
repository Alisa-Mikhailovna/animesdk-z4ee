#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_PIXAIR_PIXAIRPREPARECONTENTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE0390)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPrepareContentViewModel_TypeDefinitionIndex = 75231;

	class PixAirPrepareContentViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPREPARECONTENTVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
