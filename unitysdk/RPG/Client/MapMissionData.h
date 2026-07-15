#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_656B4378A6148CC6;
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class MappingInfoRow; }

#define RPG_CLIENT_MAPMISSIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCA92A70)
#define RPG_CLIENT_MAPMISSIONDATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0xCA93ED0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xCA93BD0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xCA93DE0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCA93450)
#define RPG_CLIENT_MAPMISSIONDATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xCA930F0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCA93E80)
#define RPG_CLIENT_MAPMISSIONDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCA93B00)
#define RPG_CLIENT_MAPMISSIONDATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0xCA93130)
#define RPG_CLIENT_MAPMISSIONDATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCA93B50)
#define RPG_CLIENT_MAPMISSIONDATA_GET_ISCONNECTID_OFFSET UNITYSDK_OFFSET(0xCA938C0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xCA93E30)
#define RPG_CLIENT_MAPMISSIONDATA_GET_ISTRACKING_OFFSET UNITYSDK_OFFSET(0xCA93A60)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPAREATYPE_OFFSET UNITYSDK_OFFSET(0xCA93C50)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0xCA931F0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xCA937D0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0xCA93170)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xCA93B90)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xCA931B0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0xCA93900)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0xCA93970)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xCA93A00)
#define RPG_CLIENT_MAPMISSIONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCA93250)
#define RPG_CLIENT_MAPMISSIONDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xCA93D50)
#define RPG_CLIENT_MAPMISSIONDATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0xCA93C90)
#define RPG_CLIENT_MAPMISSIONDATA_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0xCA93C10)
#define RPG_CLIENT_MAPMISSIONDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xCA93D10)
#define RPG_CLIENT_MAPMISSIONDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xCA93D90)
#define RPG_CLIENT_MAPMISSIONDATA_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0xCA93CD0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_SUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCA93410)
#define RPG_CLIENT_MAPMISSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCA92970)
#define RPG_CLIENT_MAPMISSIONDATA__INITMAPMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCA92C20)
#define RPG_CLIENT_MAPMISSIONDATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0xCA92F00)

namespace RPG::Client
{
	inline static constexpr unsigned int MapMissionData_TypeDefinitionIndex = 60141;

	class MapMissionData : public ::System::Object
	{
	public:
		::RPG::Client::MapIconAreaData* _AreaData; // 0x10
		::RPG::Client::SubMissionData* _SubMissionData; // 0x18
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x20
		::RPG::Client::MapDataKey* _MapDataKey; // 0x28
		::System::UInt32 _RegionID; // 0x30
		::UnityEngine::Vector2 _PositionInAreaMap; // 0x34
		::System::Boolean _IsConnect; // 0x3C
		::System::UInt32 _MappingInfoID; // 0x40
		::System::UInt32 _NearestTeleportMappingInfoID; // 0x44
		::System::UInt32 _EntranceID; // 0x48
		::System::UInt32 _MapIconType; // 0x4C
		::System::Int32 _AreaID; // 0x50
		::System::UInt32 _IdentificationID; // 0x54
		::System::Int32 _SectionID; // 0x58
		::RPG::GameCore::MinimapAreaType _MapAreaType; // 0x5C
		::UnityEngine::Vector3 _MapRotation; // 0x60
		::System::Int32 _MapLayer; // 0x6C
		::System::UInt32 _InstanceId; // 0x70
		::System::UInt32 _SubMapID; // 0x74
		::UnityEngine::Color _MapIconColor; // 0x78
		::UnityEngine::Vector3 _MapPosition; // 0x88
		::System::UInt32 _GroupID; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MapMissionData* Create(::RPG::Client::MapDataKey* a1, ::System::UInt32 a2, ::RPG::Client::SubMissionData* a3, ::Class_1_656B4378A6148CC6* a4)
		{
			return ((::RPG::Client::MapMissionData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::SubMissionData*, ::Class_1_656B4378A6148CC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void _InitMapMissionData(::RPG::Client::MapDataKey* a1, ::System::UInt32 a2, ::RPG::Client::SubMissionData* a3, ::Class_1_656B4378A6148CC6* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::SubMissionData*, ::Class_1_656B4378A6148CC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA__INITMAPMISSIONDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_IdentificationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_IDENTIFICATIONID_OFFSET))(this);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPLAYER_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPROTATION_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* get_SubMissionData()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_SUBMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_ISTRACKING_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_AREAID_OFFSET))(this);
		}

		::System::UInt32 get_RegionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_REGIONID_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_MapAreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPAREATYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::System::UInt32 get_SubMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_SUBMAPID_OFFSET))(this);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_SECTIONID_OFFSET))(this);
		}

		::System::UInt32 get_NearestTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Boolean get_IsConnectID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_ISCONNECTID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_FLOORID_OFFSET))(this);
		}

		::RPG::Client::MapIconAreaData* get_AreaData()
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_AREADATA_OFFSET))(this);
		}

		::System::Void _UpdateMapIconAreaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA__UPDATEMAPICONAREADATA_OFFSET))(this);
		}
	};
}
