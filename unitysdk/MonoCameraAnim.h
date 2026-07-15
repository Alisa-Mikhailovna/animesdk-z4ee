#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOCAMERAANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xB1EEBB0)

inline static constexpr unsigned int MonoCameraAnim_TypeDefinitionIndex = 45774;

class MonoCameraAnim : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single focalLength; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCAMERAANIM__CTOR_OFFSET))(this);
	}
};
