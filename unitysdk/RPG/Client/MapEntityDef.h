#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapEntityType.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E30528F4CB67FD3D;
namespace RPG::GameCore { class LevelGraphValueSource; }

#define RPG_CLIENT_MAPENTITYDEF_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xCA8AB70)
#define RPG_CLIENT_MAPENTITYDEF_GET_GROUPANDINSTANCEID_OFFSET UNITYSDK_OFFSET(0xCA6C4A0)
#define RPG_CLIENT_MAPENTITYDEF_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xCA8AA70)
#define RPG_CLIENT_MAPENTITYDEF_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCA8AA90)
#define RPG_CLIENT_MAPENTITYDEF_GET_ISLOCAL_OFFSET UNITYSDK_OFFSET(0xCA8AB90)
#define RPG_CLIENT_MAPENTITYDEF_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xCA8ABE0)
#define RPG_CLIENT_MAPENTITYDEF_GET_LOCALENTITYID_OFFSET UNITYSDK_OFFSET(0xCA8AAD0)
#define RPG_CLIENT_MAPENTITYDEF_GET_OWNERGROUPDEF_OFFSET UNITYSDK_OFFSET(0xCA8AA60)
#define RPG_CLIENT_MAPENTITYDEF_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xCA8AAF0)
#define RPG_CLIENT_MAPENTITYDEF_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xCA8AB20)
#define RPG_CLIENT_MAPENTITYDEF_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xCA8AB40)
#define RPG_CLIENT_MAPENTITYDEF_GET_SERVERENTITIYID_OFFSET UNITYSDK_OFFSET(0xCA8AAB0)
#define RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNPOSITION_OFFSET UNITYSDK_OFFSET(0xCA8A8C0)
#define RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNROTATION_OFFSET UNITYSDK_OFFSET(0xCA8A920)
#define RPG_CLIENT_MAPENTITYDEF_SETCLASSIFYTYPE_OFFSET UNITYSDK_OFFSET(0xCA8AC00)
#define RPG_CLIENT_MAPENTITYDEF_SET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xCA8AB80)
#define RPG_CLIENT_MAPENTITYDEF_SET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xCA8AA80)
#define RPG_CLIENT_MAPENTITYDEF_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCA8AAA0)
#define RPG_CLIENT_MAPENTITYDEF_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xCA8ABF0)
#define RPG_CLIENT_MAPENTITYDEF_SET_LOCALENTITYID_OFFSET UNITYSDK_OFFSET(0xCA8AAE0)
#define RPG_CLIENT_MAPENTITYDEF_SET_OWNERGROUPDEF_OFFSET UNITYSDK_OFFSET(0xCA8AA50)
#define RPG_CLIENT_MAPENTITYDEF_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xCA8AB10)
#define RPG_CLIENT_MAPENTITYDEF_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xCA8AB30)
#define RPG_CLIENT_MAPENTITYDEF_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xCA8AB60)
#define RPG_CLIENT_MAPENTITYDEF_SET_SERVERENTITIYID_OFFSET UNITYSDK_OFFSET(0xCA8AAC0)
#define RPG_CLIENT_MAPENTITYDEF__APPLYGROUPINITOVERRIDEENTITYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCA8A7D0)
#define RPG_CLIENT_MAPENTITYDEF__CTOR_OFFSET UNITYSDK_OFFSET(0xCA8A750)
#define RPG_CLIENT_MAPENTITYDEF__TRYGETGROUPINITOVERRIDEVALUESOURCE_OFFSET UNITYSDK_OFFSET(0xCA8A980)

namespace RPG::Client
{
	inline static constexpr unsigned int MapEntityDef_TypeDefinitionIndex = 59352;

	class MapEntityDef : public ::System::Object
	{
	public:
		::Class_1_E30528F4CB67FD3D* _OwnerGroupDef_k__BackingField; // 0x10
		::System::UInt32 _LocalEntityID_k__BackingField; // 0x18
		::RPG::Client::MapEntityType _EntityType_k__BackingField; // 0x1C
		::System::Boolean _IsNew_k__BackingField; // 0x20
		::UnityEngine::Vector3 _Scale_k__BackingField; // 0x24
		::System::UInt32 _InstanceID_k__BackingField; // 0x30
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x34
		::System::UInt32 _GroupInstanceID_k__BackingField; // 0x44
		::System::UInt32 _ServerEntitiyID_k__BackingField; // 0x48
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x4C

		::System::Void _ctor(::Class_1_E30528F4CB67FD3D* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E30528F4CB67FD3D*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OverrideBornPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNPOSITION_OFFSET))(this, a1);
		}

		::System::Void OverrideBornRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNROTATION_OFFSET))(this, a1);
		}

		::System::Void _ApplyGroupInitOverrideEntityTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF__APPLYGROUPINITOVERRIDEENTITYTRANSFORM_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* _TryGetGroupInitOverrideValueSource()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF__TRYGETGROUPINITOVERRIDEVALUESOURCE_OFFSET))(this);
		}

		::System::Void set_OwnerGroupDef(::Class_1_E30528F4CB67FD3D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E30528F4CB67FD3D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_OWNERGROUPDEF_OFFSET))(this, a1);
		}

		::Class_1_E30528F4CB67FD3D* get_OwnerGroupDef()
		{
			return ((::Class_1_E30528F4CB67FD3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_OWNERGROUPDEF_OFFSET))(this);
		}

		::System::UInt32 get_GroupInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_GROUPINSTANCEID_OFFSET))(this);
		}

		::System::Void set_GroupInstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_GROUPINSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> get_GroupAndInstanceID()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_GROUPANDINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ServerEntitiyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_SERVERENTITIYID_OFFSET))(this);
		}

		::System::Void set_ServerEntitiyID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_SERVERENTITIYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LocalEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_LOCALENTITYID_OFFSET))(this);
		}

		::System::Void set_LocalEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_LOCALENTITYID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_ROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_SCALE_OFFSET))(this, a1);
		}

		::RPG::Client::MapEntityType get_EntityType()
		{
			return ((::RPG::Client::MapEntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ENTITYTYPE_OFFSET))(this);
		}

		::System::Void set_EntityType(::RPG::Client::MapEntityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_ENTITYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ISLOCAL_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::Void SetClassifyType(::RPG::GameCore::EntityClassifyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityClassifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SETCLASSIFYTYPE_OFFSET))(this, a1);
		}
	};
}
