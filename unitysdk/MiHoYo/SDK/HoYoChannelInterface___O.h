#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }
namespace MiHoYo::SDK { class HoYoChannelSDK_LogHandler; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___O_TypeDefinitionIndex = 44783;

	class HoYoChannelInterface___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__2___OnLoginCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0xBF40);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__4___OnProductsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0xBF48);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__6___OnEntitlementsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0xBF50);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__1___OnInitCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0xBF58);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__5___OnCheckoutCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0xBF60);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__9___OnGameOverlayCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0xBF68);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__3___OnAuthTokenCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0xBF70);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__8___OnMicroTxnCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0xBF78);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_LogHandler** StaticGet__0___LogHandler()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_LogHandler**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0xBF80);
		}
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__7___OnConsumeCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___O_TypeDefinitionIndex)->GetStaticField(0xBF88);
		}
	};
}
