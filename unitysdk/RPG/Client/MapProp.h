#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapObjectState.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_298;
class Class_0_16E4307DCC419505_381;
class Class_1_6721BACDEDB5B76E;
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageObjectCapture; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MAPPROP_ASYNCLOAD_OFFSET UNITYSDK_OFFSET(0xCB12960)
#define RPG_CLIENT_MAPPROP_BEGINFADEOUT_OFFSET UNITYSDK_OFFSET(0xCB135C0)
#define RPG_CLIENT_MAPPROP_DEFERLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0xCB12010)
#define RPG_CLIENT_MAPPROP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB11800)
#define RPG_CLIENT_MAPPROP_GET_ANCHORGROUPID_OFFSET UNITYSDK_OFFSET(0xCB114A0)
#define RPG_CLIENT_MAPPROP_GET_ANCHORINSTANCEID_OFFSET UNITYSDK_OFFSET(0xCB11560)
#define RPG_CLIENT_MAPPROP_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCB113C0)
#define RPG_CLIENT_MAPPROP_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xCB11310)
#define RPG_CLIENT_MAPPROP_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xCB111F0)
#define RPG_CLIENT_MAPPROP_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCB11210)
#define RPG_CLIENT_MAPPROP_GET_ISCREATEONINITIAL_OFFSET UNITYSDK_OFFSET(0xCB11250)
#define RPG_CLIENT_MAPPROP_GET_ISDEFERLOAD_OFFSET UNITYSDK_OFFSET(0xCB11700)
#define RPG_CLIENT_MAPPROP_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xCB11430)
#define RPG_CLIENT_MAPPROP_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xCB11420)
#define RPG_CLIENT_MAPPROP_GET_ISTOBEREMOVED_OFFSET UNITYSDK_OFFSET(0xCB11440)
#define RPG_CLIENT_MAPPROP_GET_MAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0xCB11470)
#define RPG_CLIENT_MAPPROP_GET_MAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xCB111E0)
#define RPG_CLIENT_MAPPROP_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xCB11320)
#define RPG_CLIENT_MAPPROP_GET_PROPENTITY_OFFSET UNITYSDK_OFFSET(0xCB113B0)
#define RPG_CLIENT_MAPPROP_GET_PROPID_OFFSET UNITYSDK_OFFSET(0xCB11480)
#define RPG_CLIENT_MAPPROP_GET_ROTATIONFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xCB116E0)
#define RPG_CLIENT_MAPPROP_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xCB11350)
#define RPG_CLIENT_MAPPROP_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xCB11380)
#define RPG_CLIENT_MAPPROP_GET_SERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xCB11230)
#define RPG_CLIENT_MAPPROP_GET_STAGEOBJECTCAPTURE_OFFSET UNITYSDK_OFFSET(0xCB11620)
#define RPG_CLIENT_MAPPROP_GET_STATE_OFFSET UNITYSDK_OFFSET(0xCB11450)
#define RPG_CLIENT_MAPPROP_ONTARGETGOLOADED_OFFSET UNITYSDK_OFFSET(0xCB120A0)
#define RPG_CLIENT_MAPPROP_SETDEFERLOADCALLBACKWITHOUTPARAM_OFFSET UNITYSDK_OFFSET(0xCB11EE0)
#define RPG_CLIENT_MAPPROP_SETDEFERLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0xCB11DB0)
#define RPG_CLIENT_MAPPROP_SET_ROTATIONFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xCB116F0)
#define RPG_CLIENT_MAPPROP_SET_STATE_OFFSET UNITYSDK_OFFSET(0xCB11460)
#define RPG_CLIENT_MAPPROP_STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCB134B0)
#define RPG_CLIENT_MAPPROP_SYNCLOAD_OFFSET UNITYSDK_OFFSET(0xCB129D0)
#define RPG_CLIENT_MAPPROP_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCB13910)
#define RPG_CLIENT_MAPPROP__AFTERLOADEDPROCESS_OFFSET UNITYSDK_OFFSET(0xCB12690)
#define RPG_CLIENT_MAPPROP__BUILDPROPFRIENDLYNAMEBYMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xCB12180)
#define RPG_CLIENT_MAPPROP__BUILDPROPNAMEBYMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xCB12100)
#define RPG_CLIENT_MAPPROP__CALCPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0xCB121C0)
#define RPG_CLIENT_MAPPROP__CTOR_OFFSET UNITYSDK_OFFSET(0xCB117D0)
#define RPG_CLIENT_MAPPROP__GETENTITYCLASSIFYTYPE_OFFSET UNITYSDK_OFFSET(0xCB13A20)
#define RPG_CLIENT_MAPPROP__GETSTAGEOBJECTCAPTUREHANDLER_OFFSET UNITYSDK_OFFSET(0xCB124A0)
#define RPG_CLIENT_MAPPROP__ONASYNCLOADFINISH_OFFSET UNITYSDK_OFFSET(0xCB139B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapProp_TypeDefinitionIndex = 58154;

	class MapProp : public ::System::Object
	{
	public:
		::RPG::Client::MapPropDef* _mapPropDef; // 0x10
		::System::Action_1<::RPG::Client::MapProp*>* _DeferLoadCallback; // 0x18
		::RPG::GameCore::GameEntity* _PropEntity; // 0x20
		::Class_1_6721BACDEDB5B76E* _DelayDispose; // 0x28
		::System::Action* _DeferLoadCallback_withoutParam; // 0x30
		::UnityEngine::GameObject* _TargetGO; // 0x38
		::UnityEngine::Quaternion _RotationFromConfig_k__BackingField; // 0x40
		::RPG::Client::MapObjectState _State_k__BackingField; // 0x50

		::System::Void _ctor(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MapPropDef* get_MapPropDef()
		{
			return ((::RPG::Client::MapPropDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_MAPPROPDEF_OFFSET))(this);
		}

		::System::UInt32 get_GroupInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_GROUPINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ServerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_SERVERENTITYID_OFFSET))(this);
		}

		::System::Boolean get_IsCreateOnInitial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ISCREATEONINITIAL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ENTITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_SCALE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_PropEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_PROPENTITY_OFFSET))(this);
		}

		::System::UInt32 get_EntityRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ISLOADED_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Boolean get_IsToBeRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ISTOBEREMOVED_OFFSET))(this);
		}

		::RPG::Client::MapObjectState get_State()
		{
			return ((::RPG::Client::MapObjectState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::MapObjectState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapObjectState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::Client::MapEntityDef* get_MapEntityDef()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_MAPENTITYDEF_OFFSET))(this);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_PROPID_OFFSET))(this);
		}

		::System::UInt32 get_AnchorGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ANCHORGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_AnchorInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ANCHORINSTANCEID_OFFSET))(this);
		}

		::RPG::GameCore::StageObjectCapture* get_StageObjectCapture()
		{
			return ((::RPG::GameCore::StageObjectCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_STAGEOBJECTCAPTURE_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_RotationFromConfig()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ROTATIONFROMCONFIG_OFFSET))(this);
		}

		::System::Void set_RotationFromConfig(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_SET_ROTATIONFROMCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDeferLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_GET_ISDEFERLOAD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_DISPOSE_OFFSET))(this);
		}

		::System::Boolean SetDeferLoadCallback(::System::Action_1<::RPG::Client::MapProp*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::RPG::Client::MapProp*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_SETDEFERLOADCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetDeferLoadCallbackWithoutParam(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_SETDEFERLOADCALLBACKWITHOUTPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void DeferLoadCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_DEFERLOADCALLBACK_OFFSET))(this);
		}

		::System::Void OnTargetGOLoaded(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_ONTARGETGOLOADED_OFFSET))(this, a1, a2);
		}

		static ::System::String* _BuildPropNameByMapPropDef(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::String*(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__BUILDPROPNAMEBYMAPPROPDEF_OFFSET))(a1);
		}

		static ::System::String* _BuildPropFriendlyNameByMapPropDef(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::String*(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__BUILDPROPFRIENDLYNAMEBYMAPPROPDEF_OFFSET))(a1);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> _CalcPositionAndRotation(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__CALCPOSITIONANDROTATION_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::StreamingItemData* _GetStageObjectCaptureHandler()
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__GETSTAGEOBJECTCAPTUREHANDLER_OFFSET))(this);
		}

		::System::Void _AfterLoadedProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__AFTERLOADEDPROCESS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>* AsyncLoad()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_ASYNCLOAD_OFFSET))(this);
		}

		::System::Void SyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_SYNCLOAD_OFFSET))(this);
		}

		::System::Void StartLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_STARTLEVELGRAPH_OFFSET))(this);
		}

		::System::Void BeginFadeOut(::System::Action_1<::Class_0_16E4307DCC419505_381*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_381*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_BEGINFADEOUT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP_TOSTRING_OFFSET))(this);
		}

		::System::Void _OnAsyncLoadFinish(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__ONASYNCLOADFINISH_OFFSET))(this, a1);
		}

		::RPG::GameCore::EntityClassifyType _GetEntityClassifyType()
		{
			return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROP__GETENTITYCLASSIFYTYPE_OFFSET))(this);
		}
	};
}
