#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19AA1620)
#define INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEWINDOWSUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA2870)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int SteelSeriesFreeWindowsUnityProfile_TypeDefinitionIndex = 38939;

	class SteelSeriesFreeWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEWINDOWSUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_STEELSERIESFREEWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
