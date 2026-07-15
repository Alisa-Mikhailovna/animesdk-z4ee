#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_32_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A7E2810)
#define CLASS_1_43BD383C98B4C0C5_32_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A7E2850)
#define CLASS_1_43BD383C98B4C0C5_32_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A7E2890)
#define CLASS_1_43BD383C98B4C0C5_32__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E28D0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_32_TypeDefinitionIndex = 40944;

class Class_1_43BD383C98B4C0C5_32 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_32__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_32_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_32_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_32_ONRECYCLE_OFFSET))(this);
	}
};
