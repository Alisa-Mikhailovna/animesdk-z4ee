#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_424BA7743EFAAF86;

#define CLASS_1_0C0D3AB5675C3420__CTOR_OFFSET UNITYSDK_OFFSET(0x1A917980)

inline static constexpr unsigned int Class_1_0C0D3AB5675C3420_TypeDefinitionIndex = 40626;

class Class_1_0C0D3AB5675C3420 : public ::System::Object
{
public:
	::Class_1_424BA7743EFAAF86* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::System::Single Field_1_5; // 0x28
	::System::Boolean Field_1_6; // 0x2C
	::System::Boolean Field_1_7; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C0D3AB5675C3420__CTOR_OFFSET))(this);
	}
};
