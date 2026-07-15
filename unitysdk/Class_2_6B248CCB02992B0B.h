#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7807B2B04302CD7B_31.h"

#define CLASS_2_6B248CCB02992B0B_CLEAR_OFFSET UNITYSDK_OFFSET(0x14A9EDC0)
#define CLASS_2_6B248CCB02992B0B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14A9EE10)
#define CLASS_2_6B248CCB02992B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9EE80)

inline static constexpr unsigned int Class_2_6B248CCB02992B0B_TypeDefinitionIndex = 64558;

class Class_2_6B248CCB02992B0B : public ::Class_1_7807B2B04302CD7B_31
{
public:
	::System::UInt32 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B248CCB02992B0B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B248CCB02992B0B_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B248CCB02992B0B_DISPOSE_OFFSET))(this);
	}
};
