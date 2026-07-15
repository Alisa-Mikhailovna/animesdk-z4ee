#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MappingInfoShowType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class MappingInfoRow; }

#define RPG_CLIENT_MAPTRACKMONSTERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCB1D870)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GETTRACKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCB1E280)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0xCB1EA00)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xCB1E840)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xCB1EA90)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCB1E9A0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xCB1DF40)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCB1E770)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCB1E0D0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0xCB1E090)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCB1E110)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xCB1EAE0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTELEPORT_OFFSET UNITYSDK_OFFSET(0xCB1E4A0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTRACKING_OFFSET UNITYSDK_OFFSET(0xCB1E520)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPAREATYPE_OFFSET UNITYSDK_OFFSET(0xCB1E8C0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xCB1DF80)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xCB1E020)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0xCB1E1E0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xCB1E240)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0xCB1E1A0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPNPCDEF_OFFSET UNITYSDK_OFFSET(0xCB1E800)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xCB1E150)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xCB1E460)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0xCB1E310)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0xCB1E370)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xCB1E400)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCB1E940)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xCB1E7C0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0xCB1E900)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xCB1E880)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0xCB1E2D0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xCB1EA40)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_TRYOVERRIDEMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0xCB1DEC0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB1D790)
#define RPG_CLIENT_MAPTRACKMONSTERDATA__INITMAPTRACKMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xCB1D9C0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0xCB1DCE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapTrackMonsterData_TypeDefinitionIndex = 60145;

	class MapTrackMonsterData : public ::System::Object
	{
	public:
		::RPG::Client::MapNpcDef* _MapNpcDef; // 0x10
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x18
		::RPG::Client::MapDataKey* _MapDataKey; // 0x20
		::RPG::Client::MapIconAreaData* _AreaData; // 0x28
		::RPG::Client::MappingInfoShowType _MappingInfoShowType; // 0x30
		::System::UInt32 _IdentificationID; // 0x34
		::System::UInt32 _OriginMappingInfoID; // 0x38
		::System::UInt32 _NearestTeleportMappingInfoID; // 0x3C
		::System::UInt32 _GroupID; // 0x40
		::System::Int32 _SectionID; // 0x44
		::System::Int32 _MapLayer; // 0x48
		::System::UInt32 _MapIconType; // 0x4C
		::System::UInt32 _InstanceId; // 0x50
		::System::Int32 _AreaID; // 0x54
		::UnityEngine::Vector3 _MapRotation; // 0x58
		::UnityEngine::Vector2 _PositionInAreaMap; // 0x64
		::System::UInt32 _EntranceID; // 0x6C
		::UnityEngine::Vector3 _MapPosition; // 0x70
		::RPG::GameCore::MinimapAreaType _MapAreaType; // 0x7C
		::UnityEngine::Color _MapIconColor; // 0x80
		::System::UInt32 _MappingInfoID; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MapTrackMonsterData* Create(::RPG::Client::MapDataKey* a1, ::System::UInt32 a2, ::RPG::Client::MapNpcDef* a3)
		{
			return ((::RPG::Client::MapTrackMonsterData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void _InitMapTrackMonsterData(::RPG::Client::MapDataKey* a1, ::System::UInt32 a2, ::RPG::Client::MapNpcDef* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA__INITMAPTRACKMONSTERDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TryOverrideMappingInfo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_TRYOVERRIDEMAPPINGINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ENTRANCEID_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMapDataSource* get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDATA_OFFSET))(this);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDEF_OFFSET))(this);
		}

		::System::UInt32 get_IdentificationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_IDENTIFICATIONID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPLAYER_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::RPG::Client::IMapIconTrackSnapshot* GetTrackSnapshot()
		{
			return ((::RPG::Client::IMapIconTrackSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GETTRACKSNAPSHOT_OFFSET))(this);
		}

		::RPG::Client::MappingInfoShowType get_ShowType()
		{
			return ((::RPG::Client::MappingInfoShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SHOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPROTATION_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::System::Boolean get_IsTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTELEPORT_OFFSET))(this);
		}

		::System::Boolean get_IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTRACKING_OFFSET))(this);
		}

		::System::UInt32 get_NearestTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::RPG::Client::MapNpcDef* get_MapNpcDef()
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPNPCDEF_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SECTIONID_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_MapAreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPAREATYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::MapIconAreaData* get_AreaData()
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREADATA_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void _UpdateMapIconAreaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA__UPDATEMAPICONAREADATA_OFFSET))(this);
		}
	};
}
