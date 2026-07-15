#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

namespace Sofa { class BaseSofaWindow; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDD53FC0)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xDD54040)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_SETNAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0xDD53090)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xDD53B50)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDD52910)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xDD53BB0)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xDD53C70)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xDD53E10)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xDD53D40)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONTICK_OFFSET UNITYSDK_OFFSET(0xDD53EE0)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xDD53C10)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaWindow_SofaUIController_TypeDefinitionIndex = 45911;

	class BaseSofaWindow_SofaUIController : public ::RPG::Client::UIController
	{
	public:
		::Sofa::BaseSofaWindow* _View; // 0x180

		::System::Void _ctor(::Sofa::BaseSofaWindow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__CTOR_OFFSET))(this, a1);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONTICK_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_GET_NAME_OFFSET))(this);
		}

		::System::Void OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void SetNavigationTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_SETNAVIGATIONTARGET_OFFSET))(this, a1);
		}
	};
}
