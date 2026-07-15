#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKVXMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1998A0D0)
#define INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKVXMACNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1998A190)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int HoriFightingStickVXMacNativeProfile_TypeDefinitionIndex = 38978;

	class HoriFightingStickVXMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKVXMACNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_HORIFIGHTINGSTICKVXMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
