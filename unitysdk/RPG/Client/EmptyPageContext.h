#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

#define RPG_CLIENT_EMPTYPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC3C9E10)

namespace RPG::Client
{
	inline static constexpr unsigned int EmptyPageContext_TypeDefinitionIndex = 69458;

	class EmptyPageContext : public ::RPG::Client::UIController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
