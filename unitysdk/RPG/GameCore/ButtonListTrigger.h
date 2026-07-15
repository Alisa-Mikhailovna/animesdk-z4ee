#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29B23DDF98AF43AC.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_3E7CB4EB71D78E39;
namespace RPG::GameCore { class ButtonListTrigger_RuntimeButton; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BUTTONLISTTRIGGER_CHECKIFINOWNERFORWARDANGLELIMIT_OFFSET UNITYSDK_OFFSET(0xD9C40D0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9C3610)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xD9C37E0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xD9C3B50)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0xD9C4380)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_ENABLEBUTTONS_OFFSET UNITYSDK_OFFSET(0xD9C47E0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xD9C5050)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_ONUIBUTTONCONFIRM_OFFSET UNITYSDK_OFFSET(0xD9C4440)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_REFRESHRUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0xD9C4D00)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xD9C5060)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKALLLIMIT_OFFSET UNITYSDK_OFFSET(0xD9C3880)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKBUTTONIDUNIQUE_OFFSET UNITYSDK_OFFSET(0xD9C33D0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKCDLIMIT_OFFSET UNITYSDK_OFFSET(0xD9C3BB0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKIFININTERACTIONANGLELIMIT_OFFSET UNITYSDK_OFFSET(0xD9C3DB0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKINRANGE_OFFSET UNITYSDK_OFFSET(0xD9C3D60)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD9C3180)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__DISABLEUI_OFFSET UNITYSDK_OFFSET(0xD9C3660)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__ENABLEUI_OFFSET UNITYSDK_OFFSET(0xD9C3940)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__RESETCD_OFFSET UNITYSDK_OFFSET(0xD9C3C70)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__TICKCD_OFFSET UNITYSDK_OFFSET(0xD9C3C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ButtonListTrigger_TypeDefinitionIndex = 54932;

	class ButtonListTrigger : public ::Class_1_29B23DDF98AF43AC
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ButtonListTrigger_RuntimeButton*>* _RuntimeButtons; // 0x98
		::RPG::GameCore::GameEntity* _ContextOwner; // 0xA0
		::System::Boolean _IsInTriggerRegion; // 0xA8
		::System::Boolean _IsTriggerUIShowing; // 0xA9
		::System::Boolean ConsiderAngleLimit; // 0xAA
		::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xAB
		::System::Boolean ConsiderOwnerForwardAngleLimit; // 0xAC
		::System::Single _CD; // 0xB0
		::System::Single InteractAngleRange; // 0xB4
		::System::Single OwnerForwardAngleRange; // 0xB8

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CheckButtonIDUnique()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKBUTTONIDUNIQUE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void _EnableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__ENABLEUI_OFFSET))(this);
		}

		::System::Void _DisableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__DISABLEUI_OFFSET))(this);
		}

		::System::Boolean _CheckCDLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKCDLIMIT_OFFSET))(this);
		}

		::System::Void _TickCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__TICKCD_OFFSET))(this, a1);
		}

		::System::Void _ResetCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__RESETCD_OFFSET))(this);
		}

		::System::Boolean _CheckInRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKINRANGE_OFFSET))(this);
		}

		::System::Boolean _CheckAllLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKALLLIMIT_OFFSET))(this);
		}

		::System::Void DoOnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONTICK_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIfInInteractionAngleLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKIFININTERACTIONANGLELIMIT_OFFSET))(this);
		}

		::System::Boolean CheckIfInOwnerForwardAngleLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_CHECKIFINOWNERFORWARDANGLELIMIT_OFFSET))(this);
		}

		::System::Void OnUIButtonConfirm(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_ONUIBUTTONCONFIRM_OFFSET))(this, a1);
		}

		::System::Void EnableButtons(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_ENABLEBUTTONS_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshRuntimeConfig(::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_REFRESHRUNTIMECONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_DisableAfterTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableAfterTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET))(this, a1);
		}
	};
}
