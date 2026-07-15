#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACUSBUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19A86AC0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACUSBUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A87EF0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4MacUSBUnityProfile_TypeDefinitionIndex = 38868;

	class PlayStation4MacUSBUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACUSBUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACUSBUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
