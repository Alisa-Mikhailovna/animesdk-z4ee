#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GENERICANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19A29290)
#define INCONTROL_UNITYDEVICEPROFILES_GENERICANDROIDUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A2A500)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GenericAndroidUnityProfile_TypeDefinitionIndex = 38804;

	class GenericAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GENERICANDROIDUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GENERICANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
