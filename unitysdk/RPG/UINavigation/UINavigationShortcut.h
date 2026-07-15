#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationInControlAction.h"

namespace RPG::Client { class MonoInControlButton; }
namespace System { class String; }
namespace UnityEngine::UI { class Selectable; }

#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_AWAKE_OFFSET UNITYSDK_OFFSET(0xDC81B90)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xDC823C0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xDC824D0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ISSUBMITACTION_OFFSET UNITYSDK_OFFSET(0xDC82440)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ONINCONTROLACTIONSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xDC82520)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_SHOULDSHOWINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0xDC81F20)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC81E30)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__CTOR_OFFSET UNITYSDK_OFFSET(0xDC825A0)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__HASVALIDACTIONNAME_OFFSET UNITYSDK_OFFSET(0xDC82110)
#define RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__ISSHORTCUTINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xDC82180)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationShortcut_TypeDefinitionIndex = 49417;

	class UINavigationShortcut : public ::RPG::UINavigation::UINavigationInControlAction
	{
	public:
		// static const ::System::String* SUBMIT_ACTION_NAME; // 0x0
		::RPG::Client::MonoInControlButton* MonoInControlButton; // 0x58
		::UnityEngine::UI::Selectable* _TargetSelectable; // 0x60
		::System::Boolean _LastInteractable; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_UPDATE_OFFSET))(this);
		}

		::System::Boolean ShouldShowInControlActionHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_SHOULDSHOWINCONTROLACTIONHINT_OFFSET))(this);
		}

		::System::String* GetActionHintName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_GETACTIONHINTNAME_OFFSET))(this);
		}

		::System::Boolean IsSubmitAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ISSUBMITACTION_OFFSET))(this);
		}

		::System::Boolean IsInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ISINTERACTABLE_OFFSET))(this);
		}

		::System::Void OnInControlActionStatusChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT_ONINCONTROLACTIONSTATUSCHANGE_OFFSET))(this, a1);
		}

		::System::Boolean _HasValidActionName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__HASVALIDACTIONNAME_OFFSET))(this);
		}

		::System::Boolean _IsShortcutInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONSHORTCUT__ISSHORTCUTINTERACTABLE_OFFSET))(this);
		}
	};
}
