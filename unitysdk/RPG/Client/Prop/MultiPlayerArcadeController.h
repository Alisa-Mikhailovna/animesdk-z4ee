#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class SceneTV; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD19EFA0)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_GET_NEEDSCENETV_OFFSET UNITYSDK_OFFSET(0xD19FB80)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD19F4E0)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD19F020)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD19EFE0)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_SET_NEEDSCENETV_OFFSET UNITYSDK_OFFSET(0xD19FB90)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD19F210)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD19FBA0)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__FINDSCENETVS_OFFSET UNITYSDK_OFFSET(0xD19F260)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0xD19F520)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__ONSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0xD19FB30)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__UNREGISTERWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0xD19F070)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MultiPlayerArcadeController_TypeDefinitionIndex = 74230;

	class MultiPlayerArcadeController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _NeedSceneTV_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::SceneTV*>* sceneTVs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void _FindSceneTVs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__FINDSCENETVS_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__INIT_OFFSET))(this);
		}

		::System::Void _OnScheduleStart(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__ONSCHEDULESTART_OFFSET))(this, a1);
		}

		::System::Void _UnregisterWaitForOpenSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__UNREGISTERWAITFOROPENSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_NeedSceneTV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_GET_NEEDSCENETV_OFFSET))(this);
		}

		::System::Void set_NeedSceneTV(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_SET_NEEDSCENETV_OFFSET))(this, a1);
		}
	};
}
