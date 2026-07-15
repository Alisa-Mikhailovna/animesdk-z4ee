#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xCE5C7C0)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xCE5C7E0)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xCE5C800)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xCE5C7D0)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xCE5C7F0)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xCE5C820)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE5C830)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MappingInfoNode_TypeDefinitionIndex = 71153;

	class MappingInfoNode : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _WorldPosition_k__BackingField; // 0x10
		::System::UInt32 _EntryID_k__BackingField; // 0x1C
		::System::UInt32 _MappingInfoID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_ENTRYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Void set_MappingInfoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_MAPPINGINFOID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_WorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_WORLDPOSITION_OFFSET))(this);
		}

		::System::Void set_WorldPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_WORLDPOSITION_OFFSET))(this, a1);
		}
	};
}
