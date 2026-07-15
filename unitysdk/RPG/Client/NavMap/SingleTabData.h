#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::GameCore { class NavMapTabRow; }
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINSPACETYPE_OFFSET UNITYSDK_OFFSET(0xCE6EF40)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0xCE6ED70)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCE6EC00)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET UNITYSDK_OFFSET(0xCE6EC80)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETREGIONALMAPNODEID_OFFSET UNITYSDK_OFFSET(0xCE6EFA0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYFLOORID_OFFSET UNITYSDK_OFFSET(0xCE6ECD0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYINDEX_OFFSET UNITYSDK_OFFSET(0xCE6EEA0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0xCE6EFF0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCE6F630)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCE6EEF0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISCOMPOSEDTAB_OFFSET UNITYSDK_OFFSET(0xCE6F3E0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xCE6FC40)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0xCE6F820)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xCE6F7D0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MAPSPACETYPE_OFFSET UNITYSDK_OFFSET(0xCE6F440)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MENUICONPATH_OFFSET UNITYSDK_OFFSET(0xCE6F6F0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCE6F490)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SHOWSUBTABCOUNT_OFFSET UNITYSDK_OFFSET(0xCE6EDC0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xCE6F6A0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_UNLOCK_OFFSET UNITYSDK_OFFSET(0xCE6F780)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_WORLD_OFFSET UNITYSDK_OFFSET(0xCE6F420)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_INDEXOF_OFFSET UNITYSDK_OFFSET(0xCE6EE20)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_SET_WORLD_OFFSET UNITYSDK_OFFSET(0xCE6F430)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE6EC70)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int SingleTabData_TypeDefinitionIndex = 71201;

	class SingleTabData : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::SubTabData* SubTabData; // 0x10
		::RPG::Client::NavMap::WorldData* _World_k__BackingField; // 0x18
		::RPG::GameCore::NavMapTabRow* _Row; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::SingleTabData* Create(::RPG::Client::NavMap::WorldData* a1, ::RPG::GameCore::NavMapTabRow* a2)
		{
			return ((::RPG::Client::NavMap::SingleTabData*(*)(::RPG::Client::NavMap::WorldData*, ::RPG::GameCore::NavMapTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::NavMap::SubTabData* GetDefaultSubTabAndLayer(::System::Int32& a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByFloorID(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYFLOORID_OFFSET))(this, a1);
		}

		::System::Boolean Contains(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINS_OFFSET))(this, a1);
		}

		::System::Int32 get_ShowSubTabCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SHOWSUBTABCOUNT_OFFSET))(this);
		}

		::System::Int32 IndexOf(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_INDEXOF_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ID_OFFSET))(this);
		}

		::System::Boolean ContainSpaceType(::RPG::GameCore::MapSpaceType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MapSpaceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINSPACETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 GetRegionalMapNodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETREGIONALMAPNODEID_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* GetTrackingSubMissionForShow()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsComposedTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISCOMPOSEDTAB_OFFSET))(this);
		}

		::RPG::Client::NavMap::WorldData* get_World()
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_WORLD_OFFSET))(this);
		}

		::System::Void set_World(::RPG::Client::NavMap::WorldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_SET_WORLD_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapSpaceType get_MapSpaceType()
		{
			return ((::RPG::GameCore::MapSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MAPSPACETYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SORTID_OFFSET))(this);
		}

		::System::String* get_MenuIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MENUICONPATH_OFFSET))(this);
		}

		::System::Boolean get_Unlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_UNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISEARLYACCESS_OFFSET))(this);
		}
	};
}
