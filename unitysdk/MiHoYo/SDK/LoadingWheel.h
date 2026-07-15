#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class String; }

#define MIHOYO_SDK_LOADINGWHEEL_HIDEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19D39490)
#define MIHOYO_SDK_LOADINGWHEEL_HIDE_OFFSET UNITYSDK_OFFSET(0x19D01300)
#define MIHOYO_SDK_LOADINGWHEEL_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x19D39390)
#define MIHOYO_SDK_LOADINGWHEEL_SHOW_OFFSET UNITYSDK_OFFSET(0x19CF1DF0)
#define MIHOYO_SDK_LOADINGWHEEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19D39590)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoadingWheel_TypeDefinitionIndex = 8198;

	class LoadingWheel : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(LoadingWheel_TypeDefinitionIndex)->GetStaticField(0x229C0);
		}
		// static const ::System::String* PrefabName; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL__CTOR_OFFSET))(this);
		}

		static ::System::Boolean ShowPluginUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_SHOWPLUGINUI_OFFSET))();
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_SHOW_OFFSET))();
		}

		static ::System::Boolean HidePluginUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_HIDEPLUGINUI_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_HIDE_OFFSET))();
		}
	};
}
