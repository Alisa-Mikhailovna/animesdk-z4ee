#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248_CLEAR_OFFSET UNITYSDK_OFFSET(0xB103760)
#define CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248__CTOR_OFFSET UNITYSDK_OFFSET(0xB1037B0)

inline static constexpr unsigned int Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248_TypeDefinitionIndex = 54878;

class Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::UnityEngine::Quaternion Field_1_1; // 0x14
	::UnityEngine::Vector3 Field_1_2; // 0x24
	::System::Single Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248_CLEAR_OFFSET))(this);
	}
};
