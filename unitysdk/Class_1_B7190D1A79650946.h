#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_B7190D1A79650946__CTOR_OFFSET UNITYSDK_OFFSET(0x1A77AD90)

inline static constexpr unsigned int Class_1_B7190D1A79650946_TypeDefinitionIndex = 40619;

class Class_1_B7190D1A79650946 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::UnityEngine::Quaternion Field_1_2; // 0x1C
	::UnityEngine::Vector3 Field_1_3; // 0x2C
	::System::Boolean Field_1_4; // 0x38
	::UnityEngine::Vector3 Field_1_5; // 0x3C
	::System::Single Field_1_6; // 0x48
	::UnityEngine::Quaternion Field_1_7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7190D1A79650946__CTOR_OFFSET))(this);
	}
};
