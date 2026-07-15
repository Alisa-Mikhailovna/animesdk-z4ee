#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_LEVELUPBLACKHAWKWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19A3C9F0)
#define INCONTROL_UNITYDEVICEPROFILES_LEVELUPBLACKHAWKWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3DB40)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int LevelUpBlackHawkWindowsUnityProfile_TypeDefinitionIndex = 38915;

	class LevelUpBlackHawkWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LEVELUPBLACKHAWKWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_LEVELUPBLACKHAWKWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
