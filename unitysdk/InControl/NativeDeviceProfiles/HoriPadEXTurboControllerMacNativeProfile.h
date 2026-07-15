#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIPADEXTURBOCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1998A1A0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIPADEXTURBOCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1998A220)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriPadEXTurboControllerMacNativeProfile_TypeDefinitionIndex = 38979;

	class HoriPadEXTurboControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIPADEXTURBOCONTROLLERMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIPADEXTURBOCONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
