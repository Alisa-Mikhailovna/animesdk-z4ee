#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class GridFightOrbEntityData; }
namespace UnityEngine { class SphereCollider; }

#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_ORBTYPE_OFFSET UNITYSDK_OFFSET(0xC775690)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xC7756B0)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_UID_OFFSET UNITYSDK_OFFSET(0xC775670)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET__ORBDATA_OFFSET UNITYSDK_OFFSET(0xC775650)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC775870)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETORBDATA_OFFSET UNITYSDK_OFFSET(0xC7757A0)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETORBTYPE_OFFSET UNITYSDK_OFFSET(0xC775750)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xC775810)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETUID_OFFSET UNITYSDK_OFFSET(0xC775700)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET_ORBTYPE_OFFSET UNITYSDK_OFFSET(0xC7756A0)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET_UID_OFFSET UNITYSDK_OFFSET(0xC775680)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET__ORBDATA_OFFSET UNITYSDK_OFFSET(0xC775660)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB__CTOR_OFFSET UNITYSDK_OFFSET(0xC7758C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightInteractableOrb_TypeDefinitionIndex = 61534;

	class GridFightInteractableOrb : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::GridFightOrbEntityData* __OrbData_k__BackingField; // 0x18
		::System::UInt32 _UID_k__BackingField; // 0x20
		::RPG::GameCore::GridFightOrbType _OrbType_k__BackingField; // 0x24
		::UnityEngine::Vector3 _pos; // 0x28
		::UnityEngine::SphereCollider* _boundingBox; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightOrbEntityData* get__OrbData()
		{
			return ((::RPG::Client::GridFightOrbEntityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET__ORBDATA_OFFSET))(this);
		}

		::System::Void set__OrbData(::RPG::Client::GridFightOrbEntityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET__ORBDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET_UID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightOrbType get_OrbType()
		{
			return ((::RPG::GameCore::GridFightOrbType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_ORBTYPE_OFFSET))(this);
		}

		::System::Void set_OrbType(::RPG::GameCore::GridFightOrbType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET_ORBTYPE_OFFSET))(this, a1);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_RADIUS_OFFSET))(this);
		}

		::System::Void SetUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETUID_OFFSET))(this, a1);
		}

		::System::Void SetOrbType(::RPG::GameCore::GridFightOrbType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETORBTYPE_OFFSET))(this, a1);
		}

		::System::Void SetOrbData(::RPG::Client::GridFightOrbEntityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETORBDATA_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_ONDESTROY_OFFSET))(this);
		}
	};
}
