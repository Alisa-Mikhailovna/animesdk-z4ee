#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_96AA239AB4E18A9D.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_PossessionConfig.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_2_C26FCB07100301D1_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0xB994B30)
#define CLASS_2_C26FCB07100301D1_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB994B90)
#define CLASS_2_C26FCB07100301D1_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xB994B40)
#define CLASS_2_C26FCB07100301D1_GET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0xB994B60)
#define CLASS_2_C26FCB07100301D1_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0xB994B70)
#define CLASS_2_C26FCB07100301D1_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xB994B20)
#define CLASS_2_C26FCB07100301D1_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB994DF0)
#define CLASS_2_C26FCB07100301D1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB994CD0)
#define CLASS_2_C26FCB07100301D1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB994C80)
#define CLASS_2_C26FCB07100301D1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB994D10)
#define CLASS_2_C26FCB07100301D1_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB994BA0)
#define CLASS_2_C26FCB07100301D1__CTOR_OFFSET UNITYSDK_OFFSET(0xB994BB0)

inline static constexpr unsigned int Class_2_C26FCB07100301D1_TypeDefinitionIndex = 76796;

class Class_2_C26FCB07100301D1 : public ::Class_1_96AA239AB4E18A9D
{
public:
	::System::String* _PrefabPath_k__BackingField; // 0x20
	::UnityEngine::Rendering::BatchAnimationInstance* _Instance_k__BackingField; // 0x28
	::UnityEngine::Vector3 _LocalPosition_k__BackingField; // 0x30
	::UnityEngine::Vector3 _LocalScale_k__BackingField; // 0x3C
	::UnityEngine::Quaternion _LocalRotation_k__BackingField; // 0x48
	::System::Int32 _BoneIndex_k__BackingField; // 0x58

	::System::Void _ctor(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::RPG::Client::Subway::AirlineSubwayWay_PossessionConfig a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::RPG::Client::Subway::AirlineSubwayWay_PossessionConfig))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Int32 get_BoneIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1_GET_BONEINDEX_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_LocalPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1_GET_LOCALPOSITION_OFFSET))(this);
	}

	::UnityEngine::Quaternion get_LocalRotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1_GET_LOCALROTATION_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_LocalScale()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1_GET_LOCALSCALE_OFFSET))(this);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* get_Instance()
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1_GET_INSTANCE_OFFSET))(this);
	}

	::System::Void set_Instance(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1_SET_INSTANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C26FCB07100301D1_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
