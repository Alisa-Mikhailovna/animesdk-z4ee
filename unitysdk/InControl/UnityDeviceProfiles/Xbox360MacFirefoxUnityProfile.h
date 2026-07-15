#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACFIREFOXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19AAE7D0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360MACFIREFOXUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AAF960)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360MacFirefoxUnityProfile_TypeDefinitionIndex = 38894;

	class Xbox360MacFirefoxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACFIREFOXUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360MACFIREFOXUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
