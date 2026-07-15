#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class LinearWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define CLASS_2_5AD61C7CF3A287C1_GET_FIRSTFRAMEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x151E3B60)
#define CLASS_2_5AD61C7CF3A287C1_METHOD_2_1A24AA3B4EA4A88E_OFFSET UNITYSDK_OFFSET(0x151E34D0)
#define CLASS_2_5AD61C7CF3A287C1_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x151E3280)
#define CLASS_2_5AD61C7CF3A287C1_METHOD_2_6617E33D0A2EDC18_OFFSET UNITYSDK_OFFSET(0x151E33A0)
#define CLASS_2_5AD61C7CF3A287C1_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x151E2E50)
#define CLASS_2_5AD61C7CF3A287C1_SET_FIRSTFRAMEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x151E3B70)
#define CLASS_2_5AD61C7CF3A287C1__CTOR_OFFSET UNITYSDK_OFFSET(0x151E2DF0)

inline static constexpr unsigned int Class_2_5AD61C7CF3A287C1_TypeDefinitionIndex = 52266;

class Class_2_5AD61C7CF3A287C1 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::LinearWithDetectProjectileData* Field_2_0; // 0x48
	::UnityEngine::Collider* Field_2_1; // 0x50
	::System::Single Field_2_2; // 0x58
	::UnityEngine::Vector3 Field_2_3; // 0x5C
	::System::Single Field_2_4; // 0x68
	::System::Single Field_2_5; // 0x6C
	::System::Boolean Field_2_6; // 0x70
	::System::Boolean _FirstFrameOcclusion_k__BackingField; // 0x71
	::System::Single Field_2_8; // 0x74

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_6617E33D0A2EDC18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_METHOD_2_6617E33D0A2EDC18_OFFSET))(this, a1);
	}

	::System::Void Method_2_1A24AA3B4EA4A88E(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_METHOD_2_1A24AA3B4EA4A88E_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_FirstFrameOcclusion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_GET_FIRSTFRAMEOCCLUSION_OFFSET))(this);
	}

	::System::Void set_FirstFrameOcclusion(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AD61C7CF3A287C1_SET_FIRSTFRAMEOCCLUSION_OFFSET))(this, a1);
	}
};
