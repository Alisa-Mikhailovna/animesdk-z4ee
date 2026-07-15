#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConflictType.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibleReason.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_381;
class Class_1_303D5A33D1401D59;
class Class_1_5878A2422EE7CDFB;
class Class_1_742452531DFCB28E;
class Class_1_777F514A924455D9;
class Class_1_B48FFE703050178A;
class Class_1_C58549E83E2A95B6;
class Class_1_C68F016107BCCDF0;
class Class_1_E7453BEE76EFCB54;
class Class_1_ED08D5C0F3E4BD73;
class Class_2_0748E0E1B406181B;
class Class_2_970E7BDC8ED43501;
class Conflict;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrict; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace RPG::Client { class Map_RefreshEntitiesExtraInfo; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MAP_ADDDISTRICTFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xCA55170)
#define RPG_CLIENT_MAP_ADDNPCSERIESIDENTITY_OFFSET UNITYSDK_OFFSET(0xCA54F70)
#define RPG_CLIENT_MAP_ADDPROPFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xCA55070)
#define RPG_CLIENT_MAP_BINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET UNITYSDK_OFFSET(0xCA58640)
#define RPG_CLIENT_MAP_CLEAROBJECTSFORENTERBATTLEMEMORYPERFORMANCEOPTIMIZE_OFFSET UNITYSDK_OFFSET(0xCA5F120)
#define RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_1_OFFSET UNITYSDK_OFFSET(0xCA62260)
#define RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_OFFSET UNITYSDK_OFFSET(0xCA621F0)
#define RPG_CLIENT_MAP_DISABLECONFLICTREFRESH_OFFSET UNITYSDK_OFFSET(0xCA55C80)
#define RPG_CLIENT_MAP_DISABLEUPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA5A4D0)
#define RPG_CLIENT_MAP_DISPOSESURFACEMANAGER_OFFSET UNITYSDK_OFFSET(0xCA63E60)
#define RPG_CLIENT_MAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA632A0)
#define RPG_CLIENT_MAP_ENABLEUPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA5A480)
#define RPG_CLIENT_MAP_ENDOFTICK_OFFSET UNITYSDK_OFFSET(0xCA639A0)
#define RPG_CLIENT_MAP_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xCA63640)
#define RPG_CLIENT_MAP_FILENPCLISTBYGROUP_OFFSET UNITYSDK_OFFSET(0xCA61170)
#define RPG_CLIENT_MAP_FILLNPCLISTBYGROUP_OFFSET UNITYSDK_OFFSET(0xCA60F50)
#define RPG_CLIENT_MAP_GETBATTLEAREADEF_OFFSET UNITYSDK_OFFSET(0xCA59520)
#define RPG_CLIENT_MAP_GETBATTLEBLOCK_OFFSET UNITYSDK_OFFSET(0xCA62190)
#define RPG_CLIENT_MAP_GETCHECKPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0xCA5FEE0)
#define RPG_CLIENT_MAP_GETDEFAULTBATTLEAREADEF_OFFSET UNITYSDK_OFFSET(0xCA59990)
#define RPG_CLIENT_MAP_GETDISTRICTALL_OFFSET UNITYSDK_OFFSET(0xCA603F0)
#define RPG_CLIENT_MAP_GETMAPHINTMANAGER_OFFSET UNITYSDK_OFFSET(0xCA642B0)
#define RPG_CLIENT_MAP_GETMAPOBJECTBYMAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0xCA5F8F0)
#define RPG_CLIENT_MAP_GETMAPOBJECTBYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xCA60600)
#define RPG_CLIENT_MAP_GETMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xCA60C60)
#define RPG_CLIENT_MAP_GETMAPPATHWAYDATA_OFFSET UNITYSDK_OFFSET(0xCA59130)
#define RPG_CLIENT_MAP_GETMONSTERNPCEVENTID_OFFSET UNITYSDK_OFFSET(0xCA608D0)
#define RPG_CLIENT_MAP_GETNEARESTCHECKPOINT_OFFSET UNITYSDK_OFFSET(0xCA5FCD0)
#define RPG_CLIENT_MAP_GETNPCALLBYGROUP_OFFSET UNITYSDK_OFFSET(0xCA60CF0)
#define RPG_CLIENT_MAP_GETPROPALLBYGROUP_OFFSET UNITYSDK_OFFSET(0xCA60190)
#define RPG_CLIENT_MAP_GET_ALLMAPOBJECTSCOUNT_OFFSET UNITYSDK_OFFSET(0xCA5D6E0)
#define RPG_CLIENT_MAP_GET_CACHEDREQUEST_OFFSET UNITYSDK_OFFSET(0xCA5A230)
#define RPG_CLIENT_MAP_GET_HASASYNCLOADINGMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA5A240)
#define RPG_CLIENT_MAP_GET_HASDISPOSED_OFFSET UNITYSDK_OFFSET(0xCA64250)
#define RPG_CLIENT_MAP_GET_HAVESTARTROOM_OFFSET UNITYSDK_OFFSET(0xCA642A0)
#define RPG_CLIENT_MAP_GET_ISLOADINGFINISH_OFFSET UNITYSDK_OFFSET(0xCA64330)
#define RPG_CLIENT_MAP_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xCA641F0)
#define RPG_CLIENT_MAP_GET_MARKDONTDESTROYSTAGE_OFFSET UNITYSDK_OFFSET(0xCA61560)
#define RPG_CLIENT_MAP_GET_MINIMAP_OFFSET UNITYSDK_OFFSET(0xCA627C0)
#define RPG_CLIENT_MAP_GET_SCENENAME_OFFSET UNITYSDK_OFFSET(0xCA64260)
#define RPG_CLIENT_MAP_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xCA61550)
#define RPG_CLIENT_MAP_GET_STARTROOMID_OFFSET UNITYSDK_OFFSET(0xCA64280)
#define RPG_CLIENT_MAP_GET__MAPDEF_OFFSET UNITYSDK_OFFSET(0xCA55450)
#define RPG_CLIENT_MAP_HIDESTAGE_OFFSET UNITYSDK_OFFSET(0xCA62110)
#define RPG_CLIENT_MAP_IFMAINMISSIONISOCCUPIED_OFFSET UNITYSDK_OFFSET(0xCA54D00)
#define RPG_CLIENT_MAP_INITLOADEDHOYOGROUPNOTIFY_OFFSET UNITYSDK_OFFSET(0xCA58CB0)
#define RPG_CLIENT_MAP_ISENTITYOCCUPIED_OFFSET UNITYSDK_OFFSET(0xCA55530)
#define RPG_CLIENT_MAP_ISGROUPOCCUPIED_OFFSET UNITYSDK_OFFSET(0xCA55270)
#define RPG_CLIENT_MAP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCA63900)
#define RPG_CLIENT_MAP_LEGACYCONFLICTFIRSTREFRESH_OFFSET UNITYSDK_OFFSET(0xCA55BC0)
#define RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHMODEL_OFFSET UNITYSDK_OFFSET(0xCA54CA0)
#define RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xCA54EB0)
#define RPG_CLIENT_MAP_LOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0xCA622D0)
#define RPG_CLIENT_MAP_LOADFORBATTLEWITHOUTPHASE_OFFSET UNITYSDK_OFFSET(0xCA62670)
#define RPG_CLIENT_MAP_LOADFORBATTLEWITHPROMISE_OFFSET UNITYSDK_OFFSET(0xCA62630)
#define RPG_CLIENT_MAP_LOADFORBATTLE_OFFSET UNITYSDK_OFFSET(0xCA625B0)
#define RPG_CLIENT_MAP_LOADFORPROFILE_OFFSET UNITYSDK_OFFSET(0xCA63A60)
#define RPG_CLIENT_MAP_LOADINITIALDYNAMICBLOCKENVPROFILEDATA_OFFSET UNITYSDK_OFFSET(0xCA617A0)
#define RPG_CLIENT_MAP_LOADONSTEP2_OFFSET UNITYSDK_OFFSET(0xCA57080)
#define RPG_CLIENT_MAP_LOADSTAGEONSTEP2_OFFSET UNITYSDK_OFFSET(0xCA55CD0)
#define RPG_CLIENT_MAP_ONADVENTUREPHASEINITIALIZESUBSYSTEMS_OFFSET UNITYSDK_OFFSET(0xCA590D0)
#define RPG_CLIENT_MAP_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0xCA63E10)
#define RPG_CLIENT_MAP_ONREQUESTFINISH_OFFSET UNITYSDK_OFFSET(0xCA5B150)
#define RPG_CLIENT_MAP_PREINIT_OFFSET UNITYSDK_OFFSET(0xCA63A10)
#define RPG_CLIENT_MAP_REFRESHEXCLUSIVENPCWITHTRANSFER_OFFSET UNITYSDK_OFFSET(0xCA54F10)
#define RPG_CLIENT_MAP_REMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0xCA61D70)
#define RPG_CLIENT_MAP_REMOVEDISTRICTFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xCA551F0)
#define RPG_CLIENT_MAP_REMOVENPCSERIESIDENTITY_OFFSET UNITYSDK_OFFSET(0xCA54FF0)
#define RPG_CLIENT_MAP_REMOVENPC_OFFSET UNITYSDK_OFFSET(0xCA5D730)
#define RPG_CLIENT_MAP_REMOVEPROPFORCONFLICT_OFFSET UNITYSDK_OFFSET(0xCA550F0)
#define RPG_CLIENT_MAP_REMOVEPROP_OFFSET UNITYSDK_OFFSET(0xCA5D7C0)
#define RPG_CLIENT_MAP_SETALLBLOCKVISIBLE_OFFSET UNITYSDK_OFFSET(0xCA61F30)
#define RPG_CLIENT_MAP_SETBLOCKFORCEHLODWITHTAGS_OFFSET UNITYSDK_OFFSET(0xCA61FA0)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYALIAS_OFFSET UNITYSDK_OFFSET(0xCA61EC0)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYHOYOTAG_OFFSET UNITYSDK_OFFSET(0xCA61E50)
#define RPG_CLIENT_MAP_SETBLOCKVISIBLEBYTAG_OFFSET UNITYSDK_OFFSET(0xCA61DD0)
#define RPG_CLIENT_MAP_SETLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xCA62340)
#define RPG_CLIENT_MAP_SETRUNTIMEMANAGERREF_OFFSET UNITYSDK_OFFSET(0xCA63020)
#define RPG_CLIENT_MAP_SET_MARKDONTDESTROYSTAGE_OFFSET UNITYSDK_OFFSET(0xCA61570)
#define RPG_CLIENT_MAP_SET_MINIMAP_OFFSET UNITYSDK_OFFSET(0xCA627D0)
#define RPG_CLIENT_MAP_SET_SCENENAME_OFFSET UNITYSDK_OFFSET(0xCA64270)
#define RPG_CLIENT_MAP_SET_STARTROOMID_OFFSET UNITYSDK_OFFSET(0xCA64290)
#define RPG_CLIENT_MAP_SET__MAPDEF_OFFSET UNITYSDK_OFFSET(0xCA62F70)
#define RPG_CLIENT_MAP_SHOWAREAONLY_OFFSET UNITYSDK_OFFSET(0xCA62010)
#define RPG_CLIENT_MAP_SHOWSTAGE_OFFSET UNITYSDK_OFFSET(0xCA620C0)
#define RPG_CLIENT_MAP_SHOWUNLOADSTREAMINGWHENENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xCA592D0)
#define RPG_CLIENT_MAP_STARTAIRSHIPSTREAMING_OFFSET UNITYSDK_OFFSET(0xCA629A0)
#define RPG_CLIENT_MAP_STARTLEVELGRAPHONLOADINGFINALSTEP_OFFSET UNITYSDK_OFFSET(0xCA58DD0)
#define RPG_CLIENT_MAP_STARTMUNICIPAL_OFFSET UNITYSDK_OFFSET(0xCA627E0)
#define RPG_CLIENT_MAP_SWAPSTAGECACHE_OFFSET UNITYSDK_OFFSET(0xCA619D0)
#define RPG_CLIENT_MAP_SYNCPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0xCA56EE0)
#define RPG_CLIENT_MAP_TRYGETANCHOR_OFFSET UNITYSDK_OFFSET(0xCA59B70)
#define RPG_CLIENT_MAP_TRYGETMAPDISTRICT_OFFSET UNITYSDK_OFFSET(0xCA600C0)
#define RPG_CLIENT_MAP_TRYGETMAPPROPBYFCVKEY_OFFSET UNITYSDK_OFFSET(0xCA5FB80)
#define RPG_CLIENT_MAP_TRYGETMAPPROP_OFFSET UNITYSDK_OFFSET(0xCA5D890)
#define RPG_CLIENT_MAP_TRYGETNPCBYGROUP_OFFSET UNITYSDK_OFFSET(0xCA60800)
#define RPG_CLIENT_MAP_TRYQUEUESTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0xCA623F0)
#define RPG_CLIENT_MAP_UNBINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET UNITYSDK_OFFSET(0xCA63090)
#define RPG_CLIENT_MAP_UNLOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0xCA61D20)
#define RPG_CLIENT_MAP_UNLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0xCA62070)
#define RPG_CLIENT_MAP_UPDATEMAPOBJECTS_OFFSET UNITYSDK_OFFSET(0xCA5AD30)
#define RPG_CLIENT_MAP_UPDATE_OFFSET UNITYSDK_OFFSET(0xCA63720)
#define RPG_CLIENT_MAP__ANALYSEMAPOBJECTSTYPES_OFFSET UNITYSDK_OFFSET(0xCA613A0)
#define RPG_CLIENT_MAP__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA643B0)
#define RPG_CLIENT_MAP__CLEAROBJECTS_OFFSET UNITYSDK_OFFSET(0xCA5E8B0)
#define RPG_CLIENT_MAP__CTOR_OFFSET UNITYSDK_OFFSET(0xCA62A60)
#define RPG_CLIENT_MAP__DESTROYMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xCA5D5B0)
#define RPG_CLIENT_MAP__DISPOSESAMEFADINGMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xCA5CC50)
#define RPG_CLIENT_MAP__DISPOSESTAGE_OFFSET UNITYSDK_OFFSET(0xCA61B30)
#define RPG_CLIENT_MAP__DODESTROYMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xCA5CDB0)
#define RPG_CLIENT_MAP__IFIXUSEUNIQUEADDFUNC_OFFSET UNITYSDK_OFFSET(0xCA5D960)
#define RPG_CLIENT_MAP__INITIALIZEMAPOBJECTSBYMAPDEF_OFFSET UNITYSDK_OFFSET(0xCA57F00)
#define RPG_CLIENT_MAP__INITLEGACYCONFLICTSYSTEM_OFFSET UNITYSDK_OFFSET(0xCA54B80)
#define RPG_CLIENT_MAP__INITSURFACEMAMAGER_OFFSET UNITYSDK_OFFSET(0xCA55F10)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xCA58BE0)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_REPEAT_OFFSET UNITYSDK_OFFSET(0xCA5E1C0)
#define RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_UNIQUE_OFFSET UNITYSDK_OFFSET(0xCA5D9B0)
#define RPG_CLIENT_MAP__INTERNAL_REMOVEMAPOBJECT_OFFSET UNITYSDK_OFFSET(0xCA5CF80)
#define RPG_CLIENT_MAP__ISHOYOGROUPOBJECT_OFFSET UNITYSDK_OFFSET(0xCA5BCB0)
#define RPG_CLIENT_MAP__ISLEGACYOBJECT_OFFSET UNITYSDK_OFFSET(0xCA5BB10)
#define RPG_CLIENT_MAP__LEAVEGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xCA5B3D0)
#define RPG_CLIENT_MAP__LOADALLENTITIESONSTEP2_OFFSET UNITYSDK_OFFSET(0xCA572E0)
#define RPG_CLIENT_MAP__LOADALLLEVELAREACONFIG_OFFSET UNITYSDK_OFFSET(0xCA575E0)
#define RPG_CLIENT_MAP__LOADFORBATTLEWITHOUTPHASE_B__145_0_OFFSET UNITYSDK_OFFSET(0xCA643F0)
#define RPG_CLIENT_MAP__LOADSTAGE_OFFSET UNITYSDK_OFFSET(0xCA56020)
#define RPG_CLIENT_MAP__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xCA63F00)
#define RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATERESULT_OFFSET UNITYSDK_OFFSET(0xCA5A140)
#define RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATE_OFFSET UNITYSDK_OFFSET(0xCA5A080)
#define RPG_CLIENT_MAP__ONEXCLUSIVEINFONEEDTOUPDATE_OFFSET UNITYSDK_OFFSET(0xCA557C0)
#define RPG_CLIENT_MAP__ONMAPDEFADD_OFFSET UNITYSDK_OFFSET(0xCA5A520)
#define RPG_CLIENT_MAP__ONMAPDEFREMOVE_OFFSET UNITYSDK_OFFSET(0xCA5A6B0)
#define RPG_CLIENT_MAP__ONMAPGROUPDEFLOAD_OFFSET UNITYSDK_OFFSET(0xCA5A880)
#define RPG_CLIENT_MAP__ONMAPGROUPDEFUNLOAD_OFFSET UNITYSDK_OFFSET(0xCA5A990)
#define RPG_CLIENT_MAP__ONMAPOBJECTFADINGOUTFINISH_OFFSET UNITYSDK_OFFSET(0xCA5CBE0)
#define RPG_CLIENT_MAP__ONREQUESTFINISHPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0xCA5B2F0)
#define RPG_CLIENT_MAP__PREINITSTAGE_OFFSET UNITYSDK_OFFSET(0xCA61580)
#define RPG_CLIENT_MAP__RECORDINITLOADEDGROUPS_OFFSET UNITYSDK_OFFSET(0xCA58460)
#define RPG_CLIENT_MAP__REMOVEALLNPCS_OFFSET UNITYSDK_OFFSET(0xCA5F420)
#define RPG_CLIENT_MAP__REMOVEALLPROPS_OFFSET UNITYSDK_OFFSET(0xCA5F170)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_DEFAULT_OFFSET UNITYSDK_OFFSET(0xCA5CAB0)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_NPC_OFFSET UNITYSDK_OFFSET(0xCA5C260)
#define RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_PROP_OFFSET UNITYSDK_OFFSET(0xCA5C970)
#define RPG_CLIENT_MAP__SHOULDMAPNPCDESTROYTRIGGERSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xCA5BE50)
#define RPG_CLIENT_MAP__STARTENTITYLEVELGRAPHONFINALSTEP_OFFSET UNITYSDK_OFFSET(0xCA58E90)
#define RPG_CLIENT_MAP__STARTLOADEDENTITIESLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCA58F10)
#define RPG_CLIENT_MAP__STARTREQUEST_OFFSET UNITYSDK_OFFSET(0xCA5ACD0)
#define RPG_CLIENT_MAP__TICKFRAMEBATCHENTITYREFRESHFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0xCA5D670)
#define RPG_CLIENT_MAP__UNINITLEGACYCONFLICTSYSTEM_OFFSET UNITYSDK_OFFSET(0xCA54C40)
#define RPG_CLIENT_MAP__UPDATEMAPOBJECTASYNC_OFFSET UNITYSDK_OFFSET(0xCA5AC20)
#define RPG_CLIENT_MAP__UPDATEMAPOBJECTSSYNC_OFFSET UNITYSDK_OFFSET(0xCA5AAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_TypeDefinitionIndex = 58131;

	class Map : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAirshipStreamingMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x46880);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateMunicipalManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x46888);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_ApplyVisionRangeGroupChangeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x46890);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__LoadBattleAreaBlockMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x46898);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateLoadingEntityBatchMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x468A0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateStageMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x468A8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateSurfaceManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x468B0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_ApplyRegionGroupChangeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x468B8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateStageMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x468C0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__UnloadBattleAreaBlockMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0x468C8);
		}
		static ::System::Boolean* StaticGet_IsLoadForBattle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Map_TypeDefinitionIndex)->GetStaticField(0xB700);
		}
		::Class_1_ED08D5C0F3E4BD73* _cityAtmosphereStreaming; // 0x10
		::RPG::Client::MapDef* _MapDefInternal; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* _PreShowRemoveObjectSet; // 0x20
		::System::String* _SceneName_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_381*>* _FadingOutMapObjects; // 0x30
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_381*>* _AllMapObjects; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _InitLoadedGroups; // 0x40
		::Conflict* _conflict; // 0x48
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_381*>* _MapObjectsByGroupInstanceID; // 0x50
		::Class_2_970E7BDC8ED43501* _Stage; // 0x58
		::RPG::Client::Promises::Promise* _LoadBattleFinish; // 0x60
		::Class_1_742452531DFCB28E* _surfaceManager; // 0x68
		::Class_1_B48FFE703050178A* _municipalManager; // 0x70
		::Class_2_970E7BDC8ED43501* _PreStage; // 0x78
		::Class_1_E7453BEE76EFCB54* _NpcRecycleBin; // 0x80
		::RPG::Client::RuntimeGroupManager* _RuntimeGroupManager; // 0x88
		::System::Collections::Generic::Queue_1<::RPG::Client::Map_MapObjectsUpdateRequest*>* RequestQueue; // 0x90
		::RPG::Client::Map_MapObjectsUpdateRequest* CurrentCacheRequest; // 0x98
		::Class_1_5878A2422EE7CDFB* _Minimap_k__BackingField; // 0xA0
		::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_381*>* _FinishLoadingNewMapObjects; // 0xA8
		::System::Boolean _CanProcessUpdateReq; // 0xB0
		::System::Boolean _EnableConflictRefresh; // 0xB1
		::System::Boolean _FrameBatchEntityRefreshFinishFlag; // 0xB2
		::System::Boolean _MarkDontDestroyStage_k__BackingField; // 0xB3
		::System::Boolean _HasDisposed; // 0xB4
		::System::UInt32 _StartRoomID_k__BackingField; // 0xB8

		::System::Void _ctor(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__CCTOR_OFFSET))();
		}

		::System::Void _InitLegacyConflictSystem(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INITLEGACYCONFLICTSYSTEM_OFFSET))(this, a1);
		}

		::System::Void _UnInitLegacyConflictSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UNINITLEGACYCONFLICTSYSTEM_OFFSET))(this);
		}

		::System::Void LegacyConflictRefreshModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHMODEL_OFFSET))(this);
		}

		::RPG::Client::ConflictType IfMainMissionIsOccupied(::System::UInt32 a1)
		{
			return ((::RPG::Client::ConflictType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_IFMAINMISSIONISOCCUPIED_OFFSET))(this, a1);
		}

		::System::Void LegacyConflictRefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LEGACYCONFLICTREFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshExclusiveNPCWithTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REFRESHEXCLUSIVENPCWITHTRANSFER_OFFSET))(this);
		}

		::System::Void AddNpcSeriesIdEntity(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDNPCSERIESIDENTITY_OFFSET))(this, a1);
		}

		::System::Void RemoveNpcSeriesIdEntity(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVENPCSERIESIDENTITY_OFFSET))(this, a1);
		}

		::System::Void AddPropForConflict(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDPROPFORCONFLICT_OFFSET))(this, a1);
		}

		::System::Void RemovePropForConflict(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEPROPFORCONFLICT_OFFSET))(this, a1);
		}

		::System::Void AddDistrictForConflict(::RPG::Client::MapDistrict* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ADDDISTRICTFORCONFLICT_OFFSET))(this, a1);
		}

		::System::Void RemoveDistrictForConflict(::RPG::Client::MapDistrict* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEDISTRICTFORCONFLICT_OFFSET))(this, a1);
		}

		::System::Boolean IsGroupOccupied(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ISGROUPOCCUPIED_OFFSET))(this, a1);
		}

		::System::Boolean IsEntityOccupied(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ISENTITYOCCUPIED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnExclusiveInfoNeedToUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONEXCLUSIVEINFONEEDTOUPDATE_OFFSET))(this, a1);
		}

		::System::Void LegacyConflictFirstRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LEGACYCONFLICTFIRSTREFRESH_OFFSET))(this);
		}

		::System::Void DisableConflictRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISABLECONFLICTREFRESH_OFFSET))(this);
		}

		::System::Void LoadStageOnStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADSTAGEONSTEP2_OFFSET))(this);
		}

		::System::Void LoadOnStep2(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADONSTEP2_OFFSET))(this, a1);
		}

		::System::Void _LoadAllEntitiesOnStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADALLENTITIESONSTEP2_OFFSET))(this);
		}

		::System::Void _InitializeMapObjectsByMapDef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INITIALIZEMAPOBJECTSBYMAPDEF_OFFSET))(this);
		}

		::System::Void _RecordInitLoadedGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__RECORDINITLOADEDGROUPS_OFFSET))(this);
		}

		::System::Void InitLoadedHoyoGroupNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_INITLOADEDHOYOGROUPNOTIFY_OFFSET))(this);
		}

		::System::Void StartLevelGraphOnLoadingFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_STARTLEVELGRAPHONLOADINGFINALSTEP_OFFSET))(this);
		}

		::System::Void _StartEntityLevelGraphOnFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__STARTENTITYLEVELGRAPHONFINALSTEP_OFFSET))(this);
		}

		::System::Void OnAdventurePhaseInitializeSubSystems(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONADVENTUREPHASEINITIALIZESUBSYSTEMS_OFFSET))(this, a1);
		}

		::Class_1_C58549E83E2A95B6* GetMapPathwayData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_C58549E83E2A95B6*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPPATHWAYDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean ShowUnloadStreamingWhenEnterBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWUNLOADSTREAMINGWHENENTERBATTLE_OFFSET))(this);
		}

		::Class_1_777F514A924455D9* GetBattleAreaDef(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_777F514A924455D9*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETBATTLEAREADEF_OFFSET))(this, a1, a2);
		}

		::Class_1_777F514A924455D9* GetDefaultBattleAreaDef()
		{
			return ((::Class_1_777F514A924455D9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETDEFAULTBATTLEAREADEF_OFFSET))(this);
		}

		::RPG::Client::MapAnchorDef* TryGetAnchor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadAllLevelAreaConfig(::RPG::GameCore::LevelAreaManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADALLLEVELAREACONFIG_OFFSET))(this, a1);
		}

		::System::Void _OnAdvServerTriggerTargetUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnAdvServerTriggerTargetUpdateResult(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVSERVERTRIGGERTARGETUPDATERESULT_OFFSET))(this, a1);
		}

		::RPG::Client::Map_MapObjectsUpdateRequest* get_CachedRequest()
		{
			return ((::RPG::Client::Map_MapObjectsUpdateRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_CACHEDREQUEST_OFFSET))(this);
		}

		::System::Boolean get_HasAsyncLoadingMapObjects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_HASASYNCLOADINGMAPOBJECTS_OFFSET))(this);
		}

		::System::Void EnableUpdateMapObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ENABLEUPDATEMAPOBJECTS_OFFSET))(this);
		}

		::System::Void DisableUpdateMapObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISABLEUPDATEMAPOBJECTS_OFFSET))(this);
		}

		::System::Void _OnMapDefAdd(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPDEFADD_OFFSET))(this, a1);
		}

		::System::Void _OnMapDefRemove(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPDEFREMOVE_OFFSET))(this, a1);
		}

		::System::Void _OnMapGroupDefLoad(::Class_2_0748E0E1B406181B* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0748E0E1B406181B*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPGROUPDEFLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMapGroupDefUnload(::Class_2_0748E0E1B406181B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0748E0E1B406181B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPGROUPDEFUNLOAD_OFFSET))(this, a1);
		}

		::System::Void _UpdateMapObjectsSync(::RPG::Client::Map_MapObjectsUpdateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UPDATEMAPOBJECTSSYNC_OFFSET))(this, a1);
		}

		::System::Void _UpdateMapObjectAsync(::RPG::Client::Map_MapObjectsUpdateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__UPDATEMAPOBJECTASYNC_OFFSET))(this, a1);
		}

		::System::Void _StartRequest(::RPG::Client::Map_MapObjectsUpdateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__STARTREQUEST_OFFSET))(this, a1);
		}

		::System::Void UpdateMapObjects(::RPG::Client::Map_RefreshEntitiesExtraInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_RefreshEntitiesExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UPDATEMAPOBJECTS_OFFSET))(this, a1);
		}

		::System::Void OnRequestFinish(::RPG::Client::Map_MapObjectsUpdateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONREQUESTFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnRequestFinishPostProcess(::RPG::Client::Map_MapObjectsUpdateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONREQUESTFINISHPOSTPROCESS_OFFSET))(this, a1);
		}

		::System::Void _LeaveGameWorld(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LEAVEGAMEWORLD_OFFSET))(this, a1);
		}

		::System::Boolean _IsLegacyObject(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ISLEGACYOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean _IsHoyoGroupObject(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ISHOYOGROUPOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean _ShouldMapNpcDestroyTriggerScreenTransfer(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__SHOULDMAPNPCDESTROYTRIGGERSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void _RemoveMapObjectEffect_NPC(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_NPC_OFFSET))(this, a1);
		}

		::System::Void _RemoveMapObjectEffect_Prop(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_PROP_OFFSET))(this, a1);
		}

		::System::Void _RemoveMapObjectEffect_Default(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEMAPOBJECTEFFECT_DEFAULT_OFFSET))(this, a1);
		}

		::System::Void _OnMapObjectFadingOutFinish(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONMAPOBJECTFADINGOUTFINISH_OFFSET))(this, a1);
		}

		::System::Void _DisposeSameFadingMapObject(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DISPOSESAMEFADINGMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Void _DoDestroyMapObject(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DODESTROYMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Void _DestroyMapObject(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DESTROYMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Void _TickFrameBatchEntityRefreshFinishNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__TICKFRAMEBATCHENTITYREFRESHFINISHNOTIFY_OFFSET))(this);
		}

		::System::Int32 get_AllMapObjectsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_ALLMAPOBJECTSCOUNT_OFFSET))(this);
		}

		::System::Void RemoveNpc(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVENPC_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveProp(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEPROP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Internal_AddMapObject(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean _IFixUseUniqueAddFunc(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__IFIXUSEUNIQUEADDFUNC_OFFSET))(this, a1);
		}

		::System::Void _Internal_AddMapObject_Repeat(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_REPEAT_OFFSET))(this, a1);
		}

		::System::Void _Internal_AddMapObject_Unique(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_ADDMAPOBJECT_UNIQUE_OFFSET))(this, a1);
		}

		::System::Void _Internal_RemoveMapObject(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INTERNAL_REMOVEMAPOBJECT_OFFSET))(this, a1);
		}

		::System::Void _ClearObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__CLEAROBJECTS_OFFSET))(this);
		}

		::System::Void ClearObjectsForEnterBattleMemoryPerformanceOptimize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_CLEAROBJECTSFORENTERBATTLEMEMORYPERFORMANCEOPTIMIZE_OFFSET))(this);
		}

		::System::Void _RemoveAllNpcs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEALLNPCS_OFFSET))(this);
		}

		::System::Void _RemoveAllProps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__REMOVEALLPROPS_OFFSET))(this);
		}

		::System::Void _StartLoadedEntitiesLevelGraph(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_381*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_381*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__STARTLOADEDENTITIESLEVELGRAPH_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_381* GetMapObjectByMapEntityDef(::RPG::Client::MapEntityDef* a1)
		{
			return ((::Class_0_16E4307DCC419505_381*(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECTBYMAPENTITYDEF_OFFSET))(this, a1);
		}

		::RPG::Client::MapProp* TryGetMapProp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPPROP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapProp* TryGetMapPropByFCVKey(::System::String* a1)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPPROPBYFCVKEY_OFFSET))(this, a1);
		}

		::RPG::Client::MapProp* GetNearestCheckPoint(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::MapProp*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETNEARESTCHECKPOINT_OFFSET))(this, a1);
		}

		::System::Boolean GetCheckpointPosition(::RPG::Client::MapProp* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapProp*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETCHECKPOINTPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MapDistrict* TryGetMapDistrict(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapDistrict*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETMAPDISTRICT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapProp*>* GetPropAllByGroup(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapProp*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETPROPALLBYGROUP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapDistrict*>* GetDistrictAll()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapDistrict*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETDISTRICTALL_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_381* GetMapObjectByServerEntityID(::System::UInt32 a1)
		{
			return ((::Class_0_16E4307DCC419505_381*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECTBYSERVERENTITYID_OFFSET))(this, a1);
		}

		::RPG::Client::MapNpc* TryGetNpcByGroup(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MapNpc*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYGETNPCBYGROUP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* GetMonsterNpcEventID()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMONSTERNPCEVENTID_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_381* GetMapObject(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_0_16E4307DCC419505_381*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapNpc*>* GetNpcAllByGroup(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapNpc*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETNPCALLBYGROUP_OFFSET))(this, a1);
		}

		::System::Void FillNpcListByGroup(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_FILLNPCLISTBYGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void FileNpcListByGroup(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::EntityType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_FILENPCLISTBYGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AnalyseMapObjectsTypes(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_381*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_381*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ANALYSEMAPOBJECTSTYPES_OFFSET))(this, a1);
		}

		::Class_2_970E7BDC8ED43501* get_Stage()
		{
			return ((::Class_2_970E7BDC8ED43501*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_STAGE_OFFSET))(this);
		}

		::System::Boolean get_MarkDontDestroyStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_MARKDONTDESTROYSTAGE_OFFSET))(this);
		}

		::System::Void set_MarkDontDestroyStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_MARKDONTDESTROYSTAGE_OFFSET))(this, a1);
		}

		::System::Void _PreInitStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__PREINITSTAGE_OFFSET))(this);
		}

		::System::Void _LoadStage(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADSTAGE_OFFSET))(this, a1, a2);
		}

		::System::Void LoadInitialDynamicBlockEnvProfileData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADINITIALDYNAMICBLOCKENVPROFILEDATA_OFFSET))(this);
		}

		::Class_2_970E7BDC8ED43501* SwapStageCache(::Class_2_970E7BDC8ED43501* a1)
		{
			return ((::Class_2_970E7BDC8ED43501*(*)(::PVOID, ::Class_2_970E7BDC8ED43501*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SWAPSTAGECACHE_OFFSET))(this, a1);
		}

		::System::Void _DisposeStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__DISPOSESTAGE_OFFSET))(this);
		}

		::System::Void UnloadBattleAreaBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UNLOADBATTLEAREABLOCK_OFFSET))(this);
		}

		::System::Void RemoveBlock(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_REMOVEBLOCK_OFFSET))(this, a1);
		}

		::System::Void SetBlockVisibleByTag(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYTAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockVisibleByHoyoTag(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYHOYOTAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockVisibleByAlias(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKVISIBLEBYALIAS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAllBlockVisible(::System::Boolean a1, ::RPG::Client::OpenWorld::BlockVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETALLBLOCKVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void SetBlockForceHLODWithTags(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETBLOCKFORCEHLODWITHTAGS_OFFSET))(this, a1, a2);
		}

		::System::Void ShowAreaOnly(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWAREAONLY_OFFSET))(this, a1);
		}

		::System::Void UnloadStreamingResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UNLOADSTREAMINGRESOURCE_OFFSET))(this);
		}

		::System::Void ShowStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SHOWSTAGE_OFFSET))(this);
		}

		::System::Void HideStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_HIDESTAGE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetBattleBlock(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETBATTLEBLOCK_OFFSET))(this, a1);
		}

		::System::Void CollectBlocksByTag(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_OFFSET))(this, a1, a2);
		}

		::System::Void CollectBlocksByTag_1(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_COLLECTBLOCKSBYTAG_1_OFFSET))(this, a1, a2);
		}

		::System::Void LoadBattleAreaBlock(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADBATTLEAREABLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLoadFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETLOADFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SyncPlayerPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SYNCPLAYERPOSITION_OFFSET))(this);
		}

		::System::Void TryQueueStreamingLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_TRYQUEUESTREAMINGLOADFINISH_OFFSET))(this);
		}

		::System::Void LoadForBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORBATTLE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* LoadForBattleWithPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORBATTLEWITHPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* LoadForBattleWithoutPhase()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORBATTLEWITHOUTPHASE_OFFSET))(this);
		}

		::Class_1_5878A2422EE7CDFB* get_Minimap()
		{
			return ((::Class_1_5878A2422EE7CDFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_MINIMAP_OFFSET))(this);
		}

		::System::Void set_Minimap(::Class_1_5878A2422EE7CDFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5878A2422EE7CDFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_MINIMAP_OFFSET))(this, a1);
		}

		::System::Void _InitSurfaceMamager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__INITSURFACEMAMAGER_OFFSET))(this);
		}

		::System::Void StartMunicipal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_STARTMUNICIPAL_OFFSET))(this);
		}

		::System::Void StartAirshipStreaming()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_STARTAIRSHIPSTREAMING_OFFSET))(this);
		}

		::System::Void SetRuntimeManagerRef(::RPG::Client::RuntimeGroupManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SETRUNTIMEMANAGERREF_OFFSET))(this, a1);
		}

		::System::Void BindMapObjectDynamicUpdateCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_BINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET))(this);
		}

		::System::Void UnbindMapObjectDynamicUpdateCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UNBINDMAPOBJECTDYNAMICUPDATECALLBACKS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISPOSE_OFFSET))(this);
		}

		::System::Void EnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ENTERBATTLE_OFFSET))(this);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_UPDATE_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void EndOfTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ENDOFTICK_OFFSET))(this, a1);
		}

		::System::Void PreInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_PREINIT_OFFSET))(this);
		}

		::System::Void LoadForProfile(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_LOADFORPROFILE_OFFSET))(this, a1);
		}

		::System::Void OnEnterMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONENTERMAP_OFFSET))(this);
		}

		::System::Void DisposeSurfaceManager(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_DISPOSESURFACEMANAGER_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::RPG::Client::MapDef* get__MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET__MAPDEF_OFFSET))(this);
		}

		::System::Void set__MapDef(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET__MAPDEF_OFFSET))(this, a1);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_MAPDEF_OFFSET))(this);
		}

		::System::Boolean get_HasDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_HASDISPOSED_OFFSET))(this);
		}

		::System::String* get_SceneName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_SCENENAME_OFFSET))(this);
		}

		::System::Void set_SceneName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_SCENENAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_StartRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_STARTROOMID_OFFSET))(this);
		}

		::System::Void set_StartRoomID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_SET_STARTROOMID_OFFSET))(this, a1);
		}

		::System::Boolean get_HaveStartRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_HAVESTARTROOM_OFFSET))(this);
		}

		::Class_1_C68F016107BCCDF0* GetMapHintManager()
		{
			return ((::Class_1_C68F016107BCCDF0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GETMAPHINTMANAGER_OFFSET))(this);
		}

		::System::Boolean get_IsLoadingFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_GET_ISLOADINGFINISH_OFFSET))(this);
		}

		::System::Void _LoadForBattleWithoutPhase_b__145_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP__LOADFORBATTLEWITHOUTPHASE_B__145_0_OFFSET))(this);
		}
	};
}
