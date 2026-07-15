#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Map_MapObjectsUpdateRequestState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_298;
class Class_0_16E4307DCC419505_381;
class Class_2_0748E0E1B406181B;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class Map; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class Map_OnMapObjectsUpdateRequestFinish; }
namespace RPG::Client { class Map_RefreshEntitiesExtraInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CANCEL_OFFSET UNITYSDK_OFFSET(0xCA5ECA0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTBYMAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0xCA5A580)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTSBYMAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0xCA5A8F0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTBYMAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0xCA5A710)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTSBYMAPGROUPDEF_OFFSET UNITYSDK_OFFSET(0xCA5AA30)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEHOYOGROUPOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA67040)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA64480)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYHOYOGROUPOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA67160)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA670D0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_HASASYNCLOADINGMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA5A410)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xCA671F0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISFINISH_OFFSET UNITYSDK_OFFSET(0xCA673F0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_PROCESS_OFFSET UNITYSDK_OFFSET(0xCA5AB00)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ADDMAPOBJECTSTOMAP_OFFSET UNITYSDK_OFFSET(0xCA66ED0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CHECKALLOBJECTALIVE_OFFSET UNITYSDK_OFFSET(0xCA65F60)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA66A80)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xCA66870)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xCA5AEE0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOADDMAPGROUPDEFTOCONTAINER_OFFSET UNITYSDK_OFFSET(0xCA67440)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOREMOVEMAPGROUPDEFTOCONTAINER_OFFSET UNITYSDK_OFFSET(0xCA67600)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESALLCREATEDNOTIFY_OFFSET UNITYSDK_OFFSET(0xCA65890)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESCREATEDNOTIFY_OFFSET UNITYSDK_OFFSET(0xCA65AA0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__INCREASEGROUPOPERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xCA67780)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONGROUPCHANGESCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCA64DD0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONMAPOBJECTSCREATED_OFFSET UNITYSDK_OFFSET(0xCA65310)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONREQUESTFINISH_OFFSET UNITYSDK_OFFSET(0xCA65EF0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSASYNC_OFFSET UNITYSDK_OFFSET(0xCA662B0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSSYNC_OFFSET UNITYSDK_OFFSET(0xCA650E0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_CREATEOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA64CE0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_DESTROYOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA644F0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__STARTMAPOBJECTSLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCA655B0)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__TRYRECOVERFROMNPCRECYCLEBIN_OFFSET UNITYSDK_OFFSET(0xCA65420)
#define RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__WAITFORENTITYLOADED_OFFSET UNITYSDK_OFFSET(0xCA66800)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_MapObjectsUpdateRequest_TypeDefinitionIndex = 58135;

	class Map_MapObjectsUpdateRequest : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_0748E0E1B406181B*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* _MapGroupDefsToBeDestroy; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_0748E0E1B406181B*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* _MapGroupDefsToBeCreated; // 0x18
		::RPG::Client::Map_RefreshEntitiesExtraInfo* ExtraInfo; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* _MapEntityDefToBeDestroy; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_381*>* _MapObjectsCreated; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GroupLoadVersionStamp; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GroupOperationCount; // 0x40
		::RPG::Client::Map_OnMapObjectsUpdateRequestFinish* OnUpdateRequestFinish; // 0x48
		::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_381*>* _DeferDeletingMapObjects; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* _MapEntityDefsToBeCreated; // 0x58
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_381*>* _MapObjectsCreating; // 0x60
		::RPG::Client::Map* _Map; // 0x68
		::RPG::Client::Map_MapObjectsUpdateRequestState _State; // 0x70

		::System::Void _ctor(::RPG::Client::Map* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CTOR_OFFSET))(this, a1);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_PROCESS_OFFSET))(this);
		}

		::System::Void _Process_DestroyObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_DESTROYOBJECTS_OFFSET))(this);
		}

		::System::Void _OnGroupChangeScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONGROUPCHANGESCREENTRANSFER_OFFSET))(this);
		}

		::System::Void _ProcessCreateObjectsSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSSYNC_OFFSET))(this);
		}

		::System::Void _TryRecoverFromNpcRecycleBin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__TRYRECOVERFROMNPCRECYCLEBIN_OFFSET))(this);
		}

		::System::Void _OnMapObjectsCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONMAPOBJECTSCREATED_OFFSET))(this);
		}

		::System::Boolean _CheckAllObjectAlive(::Class_2_0748E0E1B406181B* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_0748E0E1B406181B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CHECKALLOBJECTALIVE_OFFSET))(this, a1);
		}

		::System::Void _HoyoGroupEntitiesAllCreatedNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESALLCREATEDNOTIFY_OFFSET))(this);
		}

		::System::Void _HoyoGroupEntitiesCreatedNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__HOYOGROUPENTITIESCREATEDNOTIFY_OFFSET))(this);
		}

		::System::Void _StartMapObjectsLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__STARTMAPOBJECTSLEVELGRAPH_OFFSET))(this);
		}

		::System::Void _ProcessCreateObjectsAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESSCREATEOBJECTSASYNC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>* _WaitForEntityLoaded(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__WAITFORENTITYLOADED_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_381* _ConvertToMapObject(::RPG::Client::MapEntityDef* a1)
		{
			return ((::Class_0_16E4307DCC419505_381*(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Void _ConvertToMapObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__CONVERTTOMAPOBJECTS_OFFSET))(this);
		}

		::System::Void _AddMapObjectsToMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ADDMAPOBJECTSTOMAP_OFFSET))(this);
		}

		::System::Void _Process_CreateObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__PROCESS_CREATEOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeCreateObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeCreateHoyoGroupObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBECREATEHOYOGROUPOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeDestroyObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYOBJECTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* get_ToBeDestroyHoyoGroupObjects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_GET_TOBEDESTROYHOYOGROUPOBJECTS_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISEMPTY_OFFSET))(this);
		}

		::System::Void _OnRequestFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__ONREQUESTFINISH_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_ISFINISH_OFFSET))(this);
		}

		::System::Boolean HasAsyncLoadingMapObjects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_HASASYNCLOADINGMAPOBJECTS_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CANCEL_OFFSET))(this);
		}

		::System::Void CreateObjectByMapEntityDef(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTBYMAPENTITYDEF_OFFSET))(this, a1);
		}

		::System::Void DestroyObjectByMapEntityDef(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTBYMAPENTITYDEF_OFFSET))(this, a1);
		}

		::System::Void _DoAddMapGroupDefToContainer(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_0748E0E1B406181B*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* a1, ::Class_2_0748E0E1B406181B* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_0748E0E1B406181B*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>*, ::Class_2_0748E0E1B406181B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOADDMAPGROUPDEFTOCONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Void _DoRemoveMapGroupDefToContainer(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_0748E0E1B406181B*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>* a1, ::Class_2_0748E0E1B406181B* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_0748E0E1B406181B*, ::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*>>*, ::Class_2_0748E0E1B406181B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__DOREMOVEMAPGROUPDEFTOCONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Void _IncreaseGroupOperationCount(::Class_2_0748E0E1B406181B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0748E0E1B406181B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST__INCREASEGROUPOPERATIONCOUNT_OFFSET))(this, a1);
		}

		::System::Void CreateObjectsByMapGroupDef(::Class_2_0748E0E1B406181B* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0748E0E1B406181B*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_CREATEOBJECTSBYMAPGROUPDEF_OFFSET))(this, a1, a2);
		}

		::System::Void DestroyObjectsByMapGroupDef(::Class_2_0748E0E1B406181B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0748E0E1B406181B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_MAPOBJECTSUPDATEREQUEST_DESTROYOBJECTSBYMAPGROUPDEF_OFFSET))(this, a1);
		}
	};
}
