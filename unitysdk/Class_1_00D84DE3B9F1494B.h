#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_00D84DE3B9F1494B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45EE30)

inline static constexpr unsigned int Class_1_00D84DE3B9F1494B_TypeDefinitionIndex = 35286;

class Class_1_00D84DE3B9F1494B : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::RPG::MVector2 Field_1_1; // 0x14
	::System::Single Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00D84DE3B9F1494B__CTOR_OFFSET))(this);
	}
};
