#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x19D6DBF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6DC00)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEntitlementsParams_TypeDefinitionIndex = 8464;

	class HoYoChannelEntitlementsParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELENTITLEMENTSPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
