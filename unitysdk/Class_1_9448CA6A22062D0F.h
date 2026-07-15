#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9448CA6A22062D0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45F8F0)

inline static constexpr unsigned int Class_1_9448CA6A22062D0F_TypeDefinitionIndex = 35015;

class Class_1_9448CA6A22062D0F : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::RPG::MVector3 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9448CA6A22062D0F__CTOR_OFFSET))(this);
	}
};
