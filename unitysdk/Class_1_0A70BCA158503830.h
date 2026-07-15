#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0A70BCA158503830__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9CB090)

inline static constexpr unsigned int Class_1_0A70BCA158503830_TypeDefinitionIndex = 39609;

class Class_1_0A70BCA158503830 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x1C
	::System::Single Field_1_2; // 0x28
	::System::Single Field_1_3; // 0x2C
	::System::Int32 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A70BCA158503830__CTOR_OFFSET))(this);
	}
};
