#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEAGEGATEERRORS_OFFSET UNITYSDK_OFFSET(0x19D7C6B0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGENERICPAYERRORS_OFFSET UNITYSDK_OFFSET(0x19D7C9A0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOODPLATFORMERROR_OFFSET UNITYSDK_OFFSET(0x19D7C560)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLECREATEORDERERRORS_OFFSET UNITYSDK_OFFSET(0x19D71830)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLERISKCONTROLERROR_OFFSET UNITYSDK_OFFSET(0x19D7C850)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLEVERIFYRECEIPTERRORS_OFFSET UNITYSDK_OFFSET(0x19D72B70)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYACCOUNTERROR_OFFSET UNITYSDK_OFFSET(0x19D7C2E0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYRISKERROR_OFFSET UNITYSDK_OFFSET(0x19D7C580)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLESTEAMCREATEORDERERRORS_OFFSET UNITYSDK_OFFSET(0x19D784F0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x19D7CA10)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWPAYAGELIMIT_OFFSET UNITYSDK_OFFSET(0x19D7BF30)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D71820)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__HANDLEPAYRISKERROR_B__9_0_OFFSET UNITYSDK_OFFSET(0x19D7CB30)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__SHOWPAYAGELIMIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x19D7CB10)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int PayErrorHandler_TypeDefinitionIndex = 8496;

	class PayErrorHandler : public ::System::Object
	{
	public:
		::System::Action* payFailHandler; // 0x10
		::System::Action* payCancelHandler; // 0x18

		::System::Void _ctor(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HandleGoogleCreateOrderErrors(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLECREATEORDERERRORS_OFFSET))(this, a1);
		}

		::System::Void HandleSteamCreateOrderErrors(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLESTEAMCREATEORDERERRORS_OFFSET))(this, a1);
		}

		::System::Void HandleGoogleVerifyReceiptErrors(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLEVERIFYRECEIPTERRORS_OFFSET))(this, a1);
		}

		::System::Void HandlePayAccountError(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYACCOUNTERROR_OFFSET))(this, a1);
		}

		::System::Void ShowPayAgeLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWPAYAGELIMIT_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void HandlePayRiskError(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYRISKERROR_OFFSET))(this, a1);
		}

		::System::Void HandleGoodPlatformError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOODPLATFORMERROR_OFFSET))(this);
		}

		::System::Void HandleAgeGateErrors(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEAGEGATEERRORS_OFFSET))(this, a1);
		}

		::System::Void HandleGoogleRiskControlError(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLERISKCONTROLERROR_OFFSET))(this, a1);
		}

		::System::Void HandleGenericPayErrors(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGENERICPAYERRORS_OFFSET))(this, a1);
		}

		::System::Void _ShowPayAgeLimit_b__7_0(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER__SHOWPAYAGELIMIT_B__7_0_OFFSET))(this, a1);
		}

		::System::Void _HandlePayRiskError_b__9_0(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER__HANDLEPAYRISKERROR_B__9_0_OFFSET))(this, a1);
		}
	};
}
