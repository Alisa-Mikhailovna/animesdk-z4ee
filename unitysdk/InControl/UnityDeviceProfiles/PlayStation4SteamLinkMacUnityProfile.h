#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4STEAMLINKMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19A87FE0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4STEAMLINKMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A892B0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4SteamLinkMacUnityProfile_TypeDefinitionIndex = 38869;

	class PlayStation4SteamLinkMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4STEAMLINKMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4STEAMLINKMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
