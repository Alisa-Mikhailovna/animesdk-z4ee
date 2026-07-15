#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoRotatingBlockControl; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_057C3FE8F02A318D_METHOD_2_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0xCAC6700)
#define CLASS_2_057C3FE8F02A318D_METHOD_2_450252B9487A83AF_OFFSET UNITYSDK_OFFSET(0xCAC66B0)
#define CLASS_2_057C3FE8F02A318D_METHOD_2_6F7A31748A3BE99F_OFFSET UNITYSDK_OFFSET(0xCAC5DC0)
#define CLASS_2_057C3FE8F02A318D_METHOD_2_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0xCAC6FB0)
#define CLASS_2_057C3FE8F02A318D_METHOD_2_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0xCAC6F10)
#define CLASS_2_057C3FE8F02A318D__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC8C90)

inline static constexpr unsigned int Class_2_057C3FE8F02A318D_TypeDefinitionIndex = 67222;

class Class_2_057C3FE8F02A318D : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::UnityEngine::MaterialPropertyBlock* Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x38
	::UnityEngine::Vector3 Field_2_5; // 0x3C
	::UnityEngine::Quaternion Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x58
	::System::Single Field_2_8; // 0x5C
	::UnityEngine::Vector3 Field_2_9; // 0x60
	::System::Single Field_2_10; // 0x6C
	::UnityEngine::Vector3 Field_2_11; // 0x70
	::UnityEngine::Vector3 Field_2_12; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6F7A31748A3BE99F(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D_METHOD_2_6F7A31748A3BE99F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D_METHOD_2_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_2_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D_METHOD_2_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_2_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D_METHOD_2_00DC6C482249EA10_OFFSET))(this);
	}

	::RPG::Client::MonoRotatingBlockControl* Method_2_450252B9487A83AF()
	{
		return ((::RPG::Client::MonoRotatingBlockControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D_METHOD_2_450252B9487A83AF_OFFSET))(this);
	}
};
