#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GENERICBLACKBERRYUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19A2A5F0)
#define INCONTROL_UNITYDEVICEPROFILES_GENERICBLACKBERRYUNITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A2B870)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GenericBlackBerryUnityProfile_TypeDefinitionIndex = 38883;

	class GenericBlackBerryUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GENERICBLACKBERRYUNITYPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GENERICBLACKBERRYUNITYPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
