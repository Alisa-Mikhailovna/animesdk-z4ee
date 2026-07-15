#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_029EED7218516331__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A60D0)

inline static constexpr unsigned int Class_1_029EED7218516331_TypeDefinitionIndex = 40188;

class Class_1_029EED7218516331 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::RPG::MVector3 Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x24
	::RPG::MVector3 Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x34
	::System::Single Field_1_6; // 0x38
	::RPG::MVector3 Field_1_7; // 0x3C
	::System::Single Field_1_8; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029EED7218516331__CTOR_OFFSET))(this);
	}
};
