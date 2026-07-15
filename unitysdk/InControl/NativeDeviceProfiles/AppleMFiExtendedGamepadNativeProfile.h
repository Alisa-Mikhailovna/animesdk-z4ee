#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIEXTENDEDGAMEPADNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19976D50)
#define INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIEXTENDEDGAMEPADNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19978030)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int AppleMFiExtendedGamepadNativeProfile_TypeDefinitionIndex = 39090;

	class AppleMFiExtendedGamepadNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIEXTENDEDGAMEPADNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_APPLEMFIEXTENDEDGAMEPADNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
