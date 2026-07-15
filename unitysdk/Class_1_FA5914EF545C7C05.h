#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FA5914EF545C7C05__CTOR_OFFSET UNITYSDK_OFFSET(0xB251560)

inline static constexpr unsigned int Class_1_FA5914EF545C7C05_TypeDefinitionIndex = 74578;

class Class_1_FA5914EF545C7C05 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA5914EF545C7C05__CTOR_OFFSET))(this);
	}
};
