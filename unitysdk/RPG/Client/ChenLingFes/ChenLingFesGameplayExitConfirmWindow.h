#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayExitConfirmViewModel; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC090940)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xC08F310)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__ONBACKPRESSEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC090B60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC08FAC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xC090A20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC08F3F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__ONREQUESTCLOSE_OFFSET UNITYSDK_OFFSET(0xC090C00)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayExitConfirmWindow_TypeDefinitionIndex = 76349;

	class ChenLingFesGameplayExitConfirmWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::UI::Text* _TextStar; // 0x40
		::UnityEngine::UI::Button* _BtnSettleAndExit; // 0x48
		::UnityEngine::UI::Text* _TextScore; // 0x50
		::UnityEngine::UI::Button* _BtnEmptyClose; // 0x58
		::UnityEngine::Transform* _NodeStar; // 0x60
		::UnityEngine::UI::Button* _BtnSaveAndExit; // 0x68
		::UnityEngine::UI::Button* _BtnClose; // 0x70
		::UnityEngine::UI::Text* _TextDay; // 0x78
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x80
		::UnityEngine::UI::Button* _BtnSetting; // 0x88

		::System::Void _ctor(::RPG::Client::ChenLingFes::ChenLingFesGameplayExitConfirmViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGameplayExitConfirmViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Boolean _OnBackPressedCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__ONBACKPRESSEDCALLBACK_OFFSET))(this);
		}

		::System::Void _OnRequestClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW__ONREQUESTCLOSE_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayExitConfirmViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayExitConfirmViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
