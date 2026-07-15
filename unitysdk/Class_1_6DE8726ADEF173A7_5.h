#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CE0E0)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_5_TypeDefinitionIndex = 40289;

class Class_1_6DE8726ADEF173A7_5 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::UnityEngine::Vector3 Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x24
	::UnityEngine::Vector3 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_5__CTOR_OFFSET))(this);
	}
};
