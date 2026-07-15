#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D234421E04FD5BF4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74C0C0)

inline static constexpr unsigned int Class_1_D234421E04FD5BF4_TypeDefinitionIndex = 39470;

class Class_1_D234421E04FD5BF4 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x1D
	::System::UInt32 Field_1_4; // 0x20
	::System::Int32 Field_1_5; // 0x24
	::System::UInt32 Field_1_6; // 0x28
	::System::UInt32 Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D234421E04FD5BF4__CTOR_OFFSET))(this);
	}
};
