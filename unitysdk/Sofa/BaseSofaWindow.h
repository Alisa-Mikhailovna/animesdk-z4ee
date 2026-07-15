#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/System/Object.h"

class Class_1_1554F99FCC043827;
namespace RPG::Client { class OnBackPressedCallback; }
namespace Sofa { class BaseSofaControl; }
namespace Sofa { class BaseSofaWindow_SofaUIController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_534BBA4C76709F67;

#define SOFA_BASESOFAWINDOW_ADDENTRANCEANIMATIONENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xDD52C80)
#define SOFA_BASESOFAWINDOW_ADDEXITCALLBACK_OFFSET UNITYSDK_OFFSET(0xDD52D50)
#define SOFA_BASESOFAWINDOW_ADDONBACKPRESSEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xDD532F0)
#define SOFA_BASESOFAWINDOW_ASYNCLOADPREFAB_OFFSET UNITYSDK_OFFSET(0xDD52DF0)
#define SOFA_BASESOFAWINDOW_BINDINCONTROLCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xDD53210)
#define SOFA_BASESOFAWINDOW_BINDINCONTROLPRESSEVENT_OFFSET UNITYSDK_OFFSET(0xDD531A0)
#define SOFA_BASESOFAWINDOW_BINDINCONTROLRELEASEEVENT_OFFSET UNITYSDK_OFFSET(0xDD53280)
#define SOFA_BASESOFAWINDOW_BINDMOUSEWHEELROLLEVENT_OFFSET UNITYSDK_OFFSET(0xDD53140)
#define SOFA_BASESOFAWINDOW_BINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDD53610)
#define SOFA_BASESOFAWINDOW_DESTROYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xDD52EE0)
#define SOFA_BASESOFAWINDOW_EXIT_OFFSET UNITYSDK_OFFSET(0xDD529D0)
#define SOFA_BASESOFAWINDOW_GETCONTINUETIME_OFFSET UNITYSDK_OFFSET(0xDD530F0)
#define SOFA_BASESOFAWINDOW_GET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xDD533E0)
#define SOFA_BASESOFAWINDOW_GET_VIEWTRANSFORM_OFFSET UNITYSDK_OFFSET(0xDD52C20)
#define SOFA_BASESOFAWINDOW_INITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDD53470)
#define SOFA_BASESOFAWINDOW_INSTANTIATEOBJECT_OFFSET UNITYSDK_OFFSET(0xDD52F80)
#define SOFA_BASESOFAWINDOW_ISTOPMOST_OFFSET UNITYSDK_OFFSET(0xDD53380)
#define SOFA_BASESOFAWINDOW_SAFEFIND_OFFSET UNITYSDK_OFFSET(0xDD53870)
#define SOFA_BASESOFAWINDOW_SETENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xDD52CF0)
#define SOFA_BASESOFAWINDOW_SETNAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0xDD53000)
#define SOFA_BASESOFAWINDOW_SET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xDD53420)
#define SOFA_BASESOFAWINDOW_SHOW_OFFSET UNITYSDK_OFFSET(0xDD52850)
#define SOFA_BASESOFAWINDOW_SYNCLOADPREFAB_OFFSET UNITYSDK_OFFSET(0xDD52E70)
#define SOFA_BASESOFAWINDOW__ADDCHILD_OFFSET UNITYSDK_OFFSET(0xDD53910)
#define SOFA_BASESOFAWINDOW__ADDTICK_OFFSET UNITYSDK_OFFSET(0xDD52B80)
#define SOFA_BASESOFAWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xDD53AF0)
#define SOFA_BASESOFAWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDD537F0)
#define SOFA_BASESOFAWINDOW__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xDD52AA0)
#define SOFA_BASESOFAWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xDD52B00)
#define SOFA_BASESOFAWINDOW__ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xDD52A30)
#define SOFA_BASESOFAWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDD537B0)
#define SOFA_BASESOFAWINDOW__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xDD53830)
#define SOFA_BASESOFAWINDOW__ONTICK_OFFSET UNITYSDK_OFFSET(0xDD52B40)
#define SOFA_BASESOFAWINDOW__REMOVECHILD_OFFSET UNITYSDK_OFFSET(0xDD53A40)
#define SOFA_BASESOFAWINDOW__REMOVETICK_OFFSET UNITYSDK_OFFSET(0xDD52BD0)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaWindow_TypeDefinitionIndex = 45910;

	class BaseSofaWindow : public ::System::Object
	{
	public:
		::Sofa::BaseSofaWindow_SofaUIController* _UIController; // 0x10
		::System::Object* _DataContext; // 0x18
		::Class_1_1554F99FCC043827* _Config; // 0x20
		::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* _ChildUIControls; // 0x28
		::System::Action* _EntranceAnimEndCallback; // 0x30
		::System::Single _OpenTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__CTOR_OFFSET))(this);
		}

		::System::Void Show(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SHOW_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_EXIT_OFFSET))(this);
		}

		::System::Void _OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void _OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONTICK_OFFSET))(this);
		}

		::System::Void _AddTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ADDTICK_OFFSET))(this);
		}

		::System::Void _RemoveTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__REMOVETICK_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ViewTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_GET_VIEWTRANSFORM_OFFSET))(this);
		}

		::System::Void AddEntranceAnimationEndCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_ADDENTRANCEANIMATIONENDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetEnterCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SETENTERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddExitCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_ADDEXITCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AsyncLoadPrefab(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_ASYNCLOADPREFAB_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* SyncLoadPrefab(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SYNCLOADPREFAB_OFFSET))(this, a1, a2);
		}

		::System::Void DestroyGameObject(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_DESTROYGAMEOBJECT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* InstantiateObject(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_INSTANTIATEOBJECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetNavigationTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SETNAVIGATIONTARGET_OFFSET))(this, a1);
		}

		::System::Int32 GetContinueTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_GETCONTINUETIME_OFFSET))(this);
		}

		::System::Void BindMouseWheelRollEvent(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_BINDMOUSEWHEELROLLEVENT_OFFSET))(this, a1);
		}

		::System::Void BindInControlPressEvent(::InControl::InputControlType a1, ::System::Action_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_BINDINCONTROLPRESSEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void BindInControlClickEvent(::InControl::InputControlType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_BINDINCONTROLCLICKEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void BindInControlReleaseEvent(::InControl::InputControlType a1, ::System::Action_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_BINDINCONTROLRELEASEEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void AddOnBackPressedCallback(::RPG::Client::OnBackPressedCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnBackPressedCallback*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_ADDONBACKPRESSEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean IsTopmost(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_ISTOPMOST_OFFSET))(this, a1);
		}

		::System::Object* get_DataContext()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_GET_DATACONTEXT_OFFSET))(this);
		}

		::System::Void set_DataContext(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SET_DATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void InitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_INITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void BindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_BINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONSTARTEXIT_OFFSET))(this);
		}

		::UnityEngine::Transform* SafeFind(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SAFEFIND_OFFSET))(this, a1, a2);
		}

		::System::Void _AddChild(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ADDCHILD_OFFSET))(this, a1);
		}

		::System::Void _RemoveChild(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__REMOVECHILD_OFFSET))(this, a1);
		}
	};
}
