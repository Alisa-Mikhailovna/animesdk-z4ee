#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_GETNATTYPEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6B150)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int GetNATTypeOptions_TypeDefinitionIndex = 43375;

	class GetNATTypeOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNATTYPEOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
