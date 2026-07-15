#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19A19D00)
#define INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1AF90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int ExecutionerXMacUnityProfile_TypeDefinitionIndex = 38857;

	class ExecutionerXMacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EXECUTIONERXMACUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
