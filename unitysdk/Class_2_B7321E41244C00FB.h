#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Effect_GPUCrowdAnimation; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_B7321E41244C00FB_METHOD_2_3EB3238822BDBC3F_OFFSET UNITYSDK_OFFSET(0xACCA5A0)
#define CLASS_2_B7321E41244C00FB_METHOD_2_4D38898116B75561_OFFSET UNITYSDK_OFFSET(0xACC9F80)
#define CLASS_2_B7321E41244C00FB_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xACC87C0)
#define CLASS_2_B7321E41244C00FB_METHOD_2_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0xACCA8A0)
#define CLASS_2_B7321E41244C00FB_METHOD_2_92787DFA79753DD3_OFFSET UNITYSDK_OFFSET(0xACCA610)
#define CLASS_2_B7321E41244C00FB_METHOD_2_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xACC8770)
#define CLASS_2_B7321E41244C00FB_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xACC8700)
#define CLASS_2_B7321E41244C00FB__CTOR_OFFSET UNITYSDK_OFFSET(0xACCB630)

inline static constexpr unsigned int Class_2_B7321E41244C00FB_TypeDefinitionIndex = 67209;

class Class_2_B7321E41244C00FB : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* Field_2_5; // 0x40
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Single>*>* Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x50
	::UnityEngine::Vector2Int Field_2_8; // 0x54
	::System::Boolean Field_2_9; // 0x5C
	::System::Boolean Field_2_10; // 0x5D
	::System::Boolean Field_2_11; // 0x5E
	::UnityEngine::Matrix4x4 Field_2_12; // 0x60
	::UnityEngine::Matrix4x4 Field_2_13; // 0xA0
	::UnityEngine::Matrix4x4 Field_2_14; // 0xE0
	::UnityEngine::Vector3 Field_2_15; // 0x120
	::UnityEngine::Quaternion Field_2_16; // 0x12C
	::System::Single Field_2_17; // 0x13C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_4D38898116B75561()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_4D38898116B75561_OFFSET))(this);
	}

	::System::Void Method_2_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_2_92787DFA79753DD3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_92787DFA79753DD3_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Effect_GPUCrowdAnimation* Method_2_3EB3238822BDBC3F()
	{
		return ((::RPG::Client::Effect_GPUCrowdAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7321E41244C00FB_METHOD_2_3EB3238822BDBC3F_OFFSET))(this);
	}
};
