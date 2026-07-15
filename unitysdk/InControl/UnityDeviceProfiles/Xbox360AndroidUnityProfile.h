#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19AAA7A0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360ANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AABA90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360AndroidUnityProfile_TypeDefinitionIndex = 38834;

	class Xbox360AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360ANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
