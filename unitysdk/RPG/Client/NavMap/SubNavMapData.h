#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/MazeAreaCartographerIdentifier.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChestAndRaidInfoCollector; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class ICartographerIdentifier; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class SubNavMapNameRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_CLEARCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xCE70010)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCE6FD60)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xCE702E0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xCE70910)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETMAPDATA_OFFSET UNITYSDK_OFFSET(0xCE6FF40)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETSYNCEDCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xCE70700)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xCE71460)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xCE70F60)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xCE70B60)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xCE71480)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCE70BB0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xCE71750)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCE71140)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_IS3DMAP_OFFSET UNITYSDK_OFFSET(0xCE70F10)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xCE715B0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISOTHERFLOOR_OFFSET UNITYSDK_OFFSET(0xCE70570)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0xCE709A0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xCE70F80)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISSUBNAVMAP_OFFSET UNITYSDK_OFFSET(0xCE71710)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xCE702C0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCE71160)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_NEARBYTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xCE716F0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_OVERRIDEDEFAULTLAYER_OFFSET UNITYSDK_OFFSET(0xCE716D0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xCE710E0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xCE712A0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xCE70B10)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_SUBTABFLOORID_OFFSET UNITYSDK_OFFSET(0xCE71650)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_UNLOCK_OFFSET UNITYSDK_OFFSET(0xCE70FF0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xCE714F0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_WORLD_OFFSET UNITYSDK_OFFSET(0xCE714A0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_HAVEMAP_OFFSET UNITYSDK_OFFSET(0xCE70CB0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHERE_1_OFFSET UNITYSDK_OFFSET(0xCE70C00)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHERE_OFFSET UNITYSDK_OFFSET(0xCE62CA0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHIDEONMAINMAP_OFFSET UNITYSDK_OFFSET(0xCE70600)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ONMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0xCE70060)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_RPG_CLIENT_NAVMAP_ISUBNAVMAP_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xCE71100)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xCE71470)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xCE70F70)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xCE71490)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xCE71770)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xCE71150)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xCE702D0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_NEARBYTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xCE71700)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_OVERRIDEDEFAULTLAYER_OFFSET UNITYSDK_OFFSET(0xCE716E0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_PARENT_OFFSET UNITYSDK_OFFSET(0xCE710F0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xCE70190)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE6FF30)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__GETSYNCEDCARTOGRAPHYDATA_B__11_0_OFFSET UNITYSDK_OFFSET(0xCE71780)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__PREPAREMAPDATA_OFFSET UNITYSDK_OFFSET(0xCE70410)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int SubNavMapData_TypeDefinitionIndex = 71203;

	class SubNavMapData : public ::System::Object
	{
	public:
		::RPG::Client::MapDataKey* _MapDataKey_k__BackingField; // 0x10
		::RPG::GameCore::SubNavMapNameRow* _OverrideNameRow; // 0x18
		::RPG::Client::NavMap::ICartography* _Cartography; // 0x20
		::RPG::Client::NavMap::SubTabData* _Parent_k__BackingField; // 0x28
		::System::UInt32 _EntryID_k__BackingField; // 0x30
		::System::UInt32 _NearbyTeleportMappingInfoID_k__BackingField; // 0x34
		::System::UInt32 _ID_k__BackingField; // 0x38
		::System::UInt32 _OverrideDefaultLayer_k__BackingField; // 0x3C
		::RPG::Client::NavMap::MazeAreaCartographerIdentifier _Identifier_k__BackingField; // 0x40
		::RPG::GameCore::MinimapAreaType _AreaType_k__BackingField; // 0x54
		::System::UInt32 _AreaID_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::SubNavMapData* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::GameCore::MinimapAreaType a5, ::System::UInt32 a6, ::System::UInt32 a7, ::RPG::Client::NavMap::SubTabData* a8)
		{
			return ((::RPG::Client::NavMap::SubNavMapData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::MinimapAreaType, ::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::RPG::Client::NavMap::IMapDataSource* GetMapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETMAPDATA_OFFSET))(this);
		}

		::System::Void ClearCartographyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_CLEARCARTOGRAPHYDATA_OFFSET))(this);
		}

		::System::Void OnMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ONMAPDATADIRTY_OFFSET))(this);
		}

		::System::Void UpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_UPDATEDATA_OFFSET))(this);
		}

		::RPG::Client::MapDataKey* get_MapDataKey()
		{
			return ((::RPG::Client::MapDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_MAPDATAKEY_OFFSET))(this);
		}

		::System::Void set_MapDataKey(::RPG::Client::MapDataKey* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_MAPDATAKEY_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::ICartography* GetCartographyData()
		{
			return ((::RPG::Client::NavMap::ICartography*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETCARTOGRAPHYDATA_OFFSET))(this);
		}

		::System::Boolean IsHideOnMainMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHIDEONMAINMAP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>* GetSyncedCartographyData(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETSYNCEDCARTOGRAPHYDATA_OFFSET))(this, a1);
		}

		::System::Void _PrepareMapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__PREPAREMAPDATA_OFFSET))(this);
		}

		::RPG::Client::ChestAndRaidInfoCollector* GetChestAndRaidInfoCollector()
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::System::Boolean IsHere(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHERE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsHere_1(::RPG::Client::NavMap::ICartographerIdentifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHERE_1_OFFSET))(this, a1);
		}

		::System::Boolean HaveMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_HAVEMAP_OFFSET))(this);
		}

		::System::Boolean get_Is3DMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_IS3DMAP_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_AreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_AREATYPE_OFFSET))(this);
		}

		::System::Void set_AreaType(::RPG::GameCore::MinimapAreaType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MinimapAreaType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_AREATYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_Unlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_UNLOCK_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubTabData* get_Parent()
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_PARENT_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::ICartographer* RPG_Client_NavMap_ISubNavMap_get_Parent()
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_RPG_CLIENT_NAVMAP_ISUBNAVMAP_GET_PARENT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_FLOORID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_PLANEID_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_AREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_ENTRYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_CONTENTID_OFFSET))(this);
		}

		::RPG::Client::NavMap::WorldData* get_World()
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_WORLD_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_VERSEPARAM_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISEARLYACCESS_OFFSET))(this);
		}

		::System::UInt32 get_SubTabFloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_SUBTABFLOORID_OFFSET))(this);
		}

		::System::UInt32 get_OverrideDefaultLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_OVERRIDEDEFAULTLAYER_OFFSET))(this);
		}

		::System::Void set_OverrideDefaultLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_OVERRIDEDEFAULTLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 get_NearbyTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_NEARBYTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::System::Void set_NearbyTeleportMappingInfoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_NEARBYTELEPORTMAPPINGINFOID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOtherFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISOTHERFLOOR_OFFSET))(this);
		}

		::System::Boolean get_IsSubNavMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISSUBNAVMAP_OFFSET))(this);
		}

		::RPG::Client::NavMap::MazeAreaCartographerIdentifier get_Identifier()
		{
			return ((::RPG::Client::NavMap::MazeAreaCartographerIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::RPG::Client::NavMap::MazeAreaCartographerIdentifier a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MazeAreaCartographerIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::ICartography* _GetSyncedCartographyData_b__11_0(::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>* a1)
		{
			return ((::RPG::Client::NavMap::ICartography*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__GETSYNCEDCARTOGRAPHYDATA_B__11_0_OFFSET))(this, a1);
		}
	};
}
