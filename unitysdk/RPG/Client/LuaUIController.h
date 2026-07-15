#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"

class Class_1_A0D6C293180538F5;
class Class_1_A167209E71412818;
namespace System { class Object; }
namespace System { class String; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LUAUICONTROLLER_CALLLUAFUNC_OFFSET UNITYSDK_OFFSET(0xCA350A0)
#define RPG_CLIENT_LUAUICONTROLLER_GET_LUATABLE_OFFSET UNITYSDK_OFFSET(0xCA38960)
#define RPG_CLIENT_LUAUICONTROLLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCA38870)
#define RPG_CLIENT_LUAUICONTROLLER_ISCONTROLLERVALID_OFFSET UNITYSDK_OFFSET(0xCA34D80)
#define RPG_CLIENT_LUAUICONTROLLER_LUAASYNCSHOW_OFFSET UNITYSDK_OFFSET(0xCA34F50)
#define RPG_CLIENT_LUAUICONTROLLER_LUASYNCSHOW_OFFSET UNITYSDK_OFFSET(0xCA34E30)
#define RPG_CLIENT_LUAUICONTROLLER_ONENTERZOOM_OFFSET UNITYSDK_OFFSET(0xCA37AE0)
#define RPG_CLIENT_LUAUICONTROLLER_ONEXITZOOM_OFFSET UNITYSDK_OFFSET(0xCA37E10)
#define RPG_CLIENT_LUAUICONTROLLER_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0xCA36E50)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONCLICK_OFFSET UNITYSDK_OFFSET(0xCA37620)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONPRESS_OFFSET UNITYSDK_OFFSET(0xCA377B0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLCLICK_OFFSET UNITYSDK_OFFSET(0xCA37140)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xCA34BE0)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLINPUTSWITCH_OFFSET UNITYSDK_OFFSET(0xCA36B30)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLPRESS_OFFSET UNITYSDK_OFFSET(0xCA37480)
#define RPG_CLIENT_LUAUICONTROLLER_ONINCONTRORELEASED_OFFSET UNITYSDK_OFFSET(0xCA372E0)
#define RPG_CLIENT_LUAUICONTROLLER_ONKEYBOARDCLICK_OFFSET UNITYSDK_OFFSET(0xCA37940)
#define RPG_CLIENT_LUAUICONTROLLER_ONLEFTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xCA38520)
#define RPG_CLIENT_LUAUICONTROLLER_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xCA36FD0)
#define RPG_CLIENT_LUAUICONTROLLER_ONLUAVIEWLOADED_OFFSET UNITYSDK_OFFSET(0xCA34DE0)
#define RPG_CLIENT_LUAUICONTROLLER_ONMOUSEWHEELROLL_OFFSET UNITYSDK_OFFSET(0xCA386C0)
#define RPG_CLIENT_LUAUICONTROLLER_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0xCA36CD0)
#define RPG_CLIENT_LUAUICONTROLLER_ONRIGHTSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xCA38380)
#define RPG_CLIENT_LUAUICONTROLLER_TONEXTZOOM_OFFSET UNITYSDK_OFFSET(0xCA380E0)
#define RPG_CLIENT_LUAUICONTROLLER_TOPREZOOM_OFFSET UNITYSDK_OFFSET(0xCA38230)
#define RPG_CLIENT_LUAUICONTROLLER_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xCA357A0)
#define RPG_CLIENT_LUAUICONTROLLER__BEFORELOADVIEW_OFFSET UNITYSDK_OFFSET(0xCA353F0)
#define RPG_CLIENT_LUAUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCA34B70)
#define RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEINANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xCA35DC0)
#define RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEOUTANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xCA35F30)
#define RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0xCA360A0)
#define RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0xCA35B40)
#define RPG_CLIENT_LUAUICONTROLLER__ENABLEASYNCINSTANTIATE_OFFSET UNITYSDK_OFFSET(0xCA366C0)
#define RPG_CLIENT_LUAUICONTROLLER__ONAFTERVIEWLOADED_OFFSET UNITYSDK_OFFSET(0xCA35510)
#define RPG_CLIENT_LUAUICONTROLLER__ONALLRESOURCESLOADED_OFFSET UNITYSDK_OFFSET(0xCA35630)
#define RPG_CLIENT_LUAUICONTROLLER__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xCA359D0)
#define RPG_CLIENT_LUAUICONTROLLER__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xCA36560)
#define RPG_CLIENT_LUAUICONTROLLER__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xCA36440)
#define RPG_CLIENT_LUAUICONTROLLER__ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCA36810)
#define RPG_CLIENT_LUAUICONTROLLER__ONSETVIEWACTIVE_OFFSET UNITYSDK_OFFSET(0xCA358A0)
#define RPG_CLIENT_LUAUICONTROLLER__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xCA36320)
#define RPG_CLIENT_LUAUICONTROLLER__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xCA36980)
#define RPG_CLIENT_LUAUICONTROLLER__ONVIEWSET_OFFSET UNITYSDK_OFFSET(0xCA352D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaUIController_TypeDefinitionIndex = 56783;

	class LuaUIController : public ::RPG::Client::UIController
	{
	public:
		::Class_1_A0D6C293180538F5* LuaUiControllerInfo; // 0x180

		::System::Void _ctor(::XLua::LuaTable* a1, ::RPG::Client::UILayer a2, ::Class_1_A167209E71412818* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UILayer, ::Class_1_A167209E71412818*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void OnLuaViewLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONLUAVIEWLOADED_OFFSET))(this);
		}

		::System::Void LuaSyncShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_LUASYNCSHOW_OFFSET))(this);
		}

		::System::Void LuaAsyncShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_LUAASYNCSHOW_OFFSET))(this);
		}

		::System::Void CallLuaFunc(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_CALLLUAFUNC_OFFSET))(this, a1, a2);
		}

		::System::Void _OnViewSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONVIEWSET_OFFSET))(this);
		}

		::System::Void _BeforeLoadView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__BEFORELOADVIEW_OFFSET))(this);
		}

		::System::Void _OnAfterViewLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONAFTERVIEWLOADED_OFFSET))(this);
		}

		::System::Void _OnAllResourcesLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONALLRESOURCESLOADED_OFFSET))(this);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _OnSetViewActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONSETVIEWACTIVE_OFFSET))(this, a1);
		}

		::System::Void _OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void _DoOnChildDialogOpen(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGOPEN_OFFSET))(this, a1);
		}

		::System::String* _CustomFadeInAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEINANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* _CustomFadeOutAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__CUSTOMFADEOUTANIMCLIPNAME_OFFSET))(this);
		}

		::System::Void _DoOnChildDialogClose(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__DOONCHILDDIALOGCLOSE_OFFSET))(this, a1);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Void _OnExitPreStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONEXITPRESTEP_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Boolean _EnableAsyncInstantiate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ENABLEASYNCINSTANTIATE_OFFSET))(this);
		}

		::System::Void _OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnUIScreenSizeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER__ONUISCREENSIZECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnInControlInputSwitch(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLINPUTSWITCH_OFFSET))(this, a1);
		}

		::System::Void OnReturnToTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONRETURNTOTOP_OFFSET))(this);
		}

		::System::Void OnGotFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONGOTFOCUS_OFFSET))(this);
		}

		::System::Void OnLostFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void OnInControlClick(::InControl::InputControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLCLICK_OFFSET))(this, a1);
		}

		::System::Void OnInControReleased(::InControl::InputControlType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTRORELEASED_OFFSET))(this, a1, a2);
		}

		::System::Void OnInControlPress(::InControl::InputControlType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLPRESS_OFFSET))(this, a1, a2);
		}

		::System::Void OnInControlActionClick(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONCLICK_OFFSET))(this, a1);
		}

		::System::Void OnInControlActionPress(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONINCONTROLACTIONPRESS_OFFSET))(this, a1);
		}

		::System::Void OnKeyboardClick(::InControl::Key a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONKEYBOARDCLICK_OFFSET))(this, a1);
		}

		::System::Void OnEnterZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONENTERZOOM_OFFSET))(this, a1);
		}

		::System::Void OnExitZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONEXITZOOM_OFFSET))(this, a1);
		}

		::System::Void ToNextZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_TONEXTZOOM_OFFSET))(this);
		}

		::System::Void ToPreZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_TOPREZOOM_OFFSET))(this);
		}

		::System::Void OnRightStickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONRIGHTSTICKRELEASE_OFFSET))(this);
		}

		::System::Void OnLeftStickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONLEFTSTICKRELEASE_OFFSET))(this);
		}

		::System::Void OnMouseWheelRoll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ONMOUSEWHEELROLL_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_GET_NAME_OFFSET))(this);
		}

		::XLua::LuaTable* get_LuaTable()
		{
			return ((::XLua::LuaTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_GET_LUATABLE_OFFSET))(this);
		}

		::System::Boolean IsControllerValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUAUICONTROLLER_ISCONTROLLERVALID_OFFSET))(this);
		}
	};
}
