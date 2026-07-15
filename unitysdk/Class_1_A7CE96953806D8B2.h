#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_A7CE96953806D8B2__CTOR_OFFSET UNITYSDK_OFFSET(0xBD59E50)

inline static constexpr unsigned int Class_1_A7CE96953806D8B2_TypeDefinitionIndex = 55079;

class Class_1_A7CE96953806D8B2 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14
	::System::Single Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x24

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A7CE96953806D8B2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
