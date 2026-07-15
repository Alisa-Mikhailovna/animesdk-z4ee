#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_INSTANCE_OFFSET UNITYSDK_OFFSET(0xAB392A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xAB395A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0xAB39690)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAB393D0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_SHOW_OFFSET UNITYSDK_OFFSET(0xAB39490)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB39350)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAlertWithTitle_TypeDefinitionIndex = 44966;

	class HoYoSDKAlertWithTitle : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAlertWithTitle** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAlertWithTitle**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAlertWithTitle_TypeDefinitionIndex)->GetStaticField(0x19A00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKAlertWithTitle* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKAlertWithTitle*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_SHOW_OFFSET))(this);
		}

		::System::Void OnConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKALERTWITHTITLE_ONCONFIRM_OFFSET))(this);
		}
	};
}
