#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_HARMONYHEROACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC8947F0)
#define RPG_CLIENT_HARMONYHEROACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xC894890)
#define RPG_CLIENT_HARMONYHEROACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8947E0)

namespace RPG::Client
{
	inline static constexpr unsigned int HarmonyHeroActivityData_TypeDefinitionIndex = 58889;

	class HarmonyHeroActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HARMONYHEROACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HARMONYHEROACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HARMONYHEROACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}
	};
}
