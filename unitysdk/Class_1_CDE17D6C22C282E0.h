#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9F0C37987749F22F;
namespace RPG::Client::CrowdAnimator { class CrowdInstance; }
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace RPG::Client::CrowdAnimator { class CrowdVariant; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class CapsuleCollider; }

#define CLASS_1_CDE17D6C22C282E0_CLEAR_OFFSET UNITYSDK_OFFSET(0x14A5A320)
#define CLASS_1_CDE17D6C22C282E0_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x14A5A1F0)
#define CLASS_1_CDE17D6C22C282E0_GET_CROWDPROTOTYPEPATH_OFFSET UNITYSDK_OFFSET(0x14A5A1B0)
#define CLASS_1_CDE17D6C22C282E0_GET_CROWDVARIANTPATH_OFFSET UNITYSDK_OFFSET(0x14A5A190)
#define CLASS_1_CDE17D6C22C282E0_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x14A5A210)
#define CLASS_1_CDE17D6C22C282E0_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x14A5A1D0)
#define CLASS_1_CDE17D6C22C282E0_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x14A5A860)
#define CLASS_1_CDE17D6C22C282E0_METHOD_1_16754B72079A3F59_OFFSET UNITYSDK_OFFSET(0x14A5A7D0)
#define CLASS_1_CDE17D6C22C282E0_METHOD_1_3BEA12FC15D28ED7_OFFSET UNITYSDK_OFFSET(0x14A5A780)
#define CLASS_1_CDE17D6C22C282E0_METHOD_1_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x14A5A410)
#define CLASS_1_CDE17D6C22C282E0_METHOD_1_73F5F67BE05AA492_OFFSET UNITYSDK_OFFSET(0x14A5A230)
#define CLASS_1_CDE17D6C22C282E0_METHOD_1_A4821937B7F1F2D4_OFFSET UNITYSDK_OFFSET(0x14A5A3C0)
#define CLASS_1_CDE17D6C22C282E0_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x14A5A200)
#define CLASS_1_CDE17D6C22C282E0_SET_CROWDPROTOTYPEPATH_OFFSET UNITYSDK_OFFSET(0x14A5A1C0)
#define CLASS_1_CDE17D6C22C282E0_SET_CROWDVARIANTPATH_OFFSET UNITYSDK_OFFSET(0x14A5A1A0)
#define CLASS_1_CDE17D6C22C282E0_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x14A5A220)
#define CLASS_1_CDE17D6C22C282E0_SET_PREFAB_OFFSET UNITYSDK_OFFSET(0x14A5A1E0)
#define CLASS_1_CDE17D6C22C282E0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5A8D0)

inline static constexpr unsigned int Class_1_CDE17D6C22C282E0_TypeDefinitionIndex = 66185;

class Class_1_CDE17D6C22C282E0 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::CrowdAnimator::CrowdPrototype* _Config_k__BackingField; // 0x18
	::System::String* _CrowdPrototypePath_k__BackingField; // 0x20
	::System::Action* Field_1_3; // 0x28
	::Class_2_9F0C37987749F22F* Field_1_4; // 0x30
	::RPG::Client::CrowdAnimator::CrowdInstance* _Instance_k__BackingField; // 0x38
	::UnityEngine::CapsuleCollider* Field_1_6; // 0x40
	::System::String* _CrowdVariantPath_k__BackingField; // 0x48
	::RPG::Client::CrowdAnimator::CrowdVariant* _Prefab_k__BackingField; // 0x50
	::UnityEngine::Vector3 Field_1_9; // 0x58
	::UnityEngine::Quaternion Field_1_10; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0__CTOR_OFFSET))(this);
	}

	::System::String* get_CrowdVariantPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_GET_CROWDVARIANTPATH_OFFSET))(this);
	}

	::System::Void set_CrowdVariantPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_SET_CROWDVARIANTPATH_OFFSET))(this, a1);
	}

	::System::String* get_CrowdPrototypePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_GET_CROWDPROTOTYPEPATH_OFFSET))(this);
	}

	::System::Void set_CrowdPrototypePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_SET_CROWDPROTOTYPEPATH_OFFSET))(this, a1);
	}

	::RPG::Client::CrowdAnimator::CrowdVariant* get_Prefab()
	{
		return ((::RPG::Client::CrowdAnimator::CrowdVariant*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_GET_PREFAB_OFFSET))(this);
	}

	::System::Void set_Prefab(::RPG::Client::CrowdAnimator::CrowdVariant* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_SET_PREFAB_OFFSET))(this, a1);
	}

	::RPG::Client::CrowdAnimator::CrowdPrototype* get_Config()
	{
		return ((::RPG::Client::CrowdAnimator::CrowdPrototype*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::CrowdAnimator::CrowdPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_SET_CONFIG_OFFSET))(this, a1);
	}

	::RPG::Client::CrowdAnimator::CrowdInstance* get_Instance()
	{
		return ((::RPG::Client::CrowdAnimator::CrowdInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_GET_INSTANCE_OFFSET))(this);
	}

	::System::Void set_Instance(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_SET_INSTANCE_OFFSET))(this, a1);
	}

	::System::Void Method_1_73F5F67BE05AA492(::System::String* a1, ::Class_2_9F0C37987749F22F* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::String* a5, ::System::String* a6, ::System::Action* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_9F0C37987749F22F*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_METHOD_1_73F5F67BE05AA492_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_A4821937B7F1F2D4(::RPG::Client::CrowdAnimator::CrowdVariant* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_METHOD_1_A4821937B7F1F2D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BEA12FC15D28ED7(::RPG::Client::CrowdAnimator::CrowdPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_METHOD_1_3BEA12FC15D28ED7_OFFSET))(this, a1);
	}

	::System::Void Method_1_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_METHOD_1_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Boolean Method_1_16754B72079A3F59(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_METHOD_1_16754B72079A3F59_OFFSET))(this, a1);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDE17D6C22C282E0_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}
};
