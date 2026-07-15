#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_OUYAWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19A74DC0)
#define INCONTROL_UNITYDEVICEPROFILES_OUYAWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A75F20)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int OuyaWindowsUnityProfile_TypeDefinitionIndex = 38931;

	class OuyaWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYAWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYAWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
