#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360WINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19AB35A0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360WINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB4E90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360WindowsUnityProfile_TypeDefinitionIndex = 38944;

	class Xbox360WindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360WINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360WINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
