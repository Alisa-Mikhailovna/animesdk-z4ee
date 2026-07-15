#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19A698E0)
#define INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A6AAB0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NexusPlayerMacUnityProfile_TypeDefinitionIndex = 38865;

	class NexusPlayerMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NEXUSPLAYERMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
