#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x199D3C90)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWSNATIVEPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x199D4DC0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxOneWindowsNativeProfile_TypeDefinitionIndex = 39176;

	class XboxOneWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWSNATIVEPROFILE__CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}
	};
}
