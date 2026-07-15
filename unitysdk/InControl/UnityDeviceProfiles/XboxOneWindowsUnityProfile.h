#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19ABEBA0)
#define INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABFE40)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XboxOneWindowsUnityProfile_TypeDefinitionIndex = 38947;

	class XboxOneWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOXONEWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
