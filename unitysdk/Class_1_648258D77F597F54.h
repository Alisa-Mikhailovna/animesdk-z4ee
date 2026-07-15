#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_648258D77F597F54_GET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0x14C2C2B0)
#define CLASS_1_648258D77F597F54_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14C2C150)
#define CLASS_1_648258D77F597F54_METHOD_1_7039A94DE2FD3433_OFFSET UNITYSDK_OFFSET(0x14C2BF90)
#define CLASS_1_648258D77F597F54_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x14C2C090)
#define CLASS_1_648258D77F597F54_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14C2C270)
#define CLASS_1_648258D77F597F54_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C2C230)
#define CLASS_1_648258D77F597F54_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x14C2BDB0)
#define CLASS_1_648258D77F597F54_SET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0x14C2C2C0)
#define CLASS_1_648258D77F597F54__CTOR_OFFSET UNITYSDK_OFFSET(0x14C2C2D0)

inline static constexpr unsigned int Class_1_648258D77F597F54_TypeDefinitionIndex = 67471;

class Class_1_648258D77F597F54 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_1_1; // 0x18
	::UnityEngine::ComputeBuffer* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean _EnableRuntimeTick_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Method_1_7039A94DE2FD3433()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_7039A94DE2FD3433_OFFSET))(this);
	}

	::System::Boolean get_EnableRuntimeTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_GET_ENABLERUNTIMETICK_OFFSET))(this);
	}

	::System::Void set_EnableRuntimeTick(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_SET_ENABLERUNTIMETICK_OFFSET))(this, a1);
	}
};
