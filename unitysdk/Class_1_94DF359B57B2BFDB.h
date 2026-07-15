#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_94DF359B57B2BFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7828B0)

inline static constexpr unsigned int Class_1_94DF359B57B2BFDB_TypeDefinitionIndex = 41155;

class Class_1_94DF359B57B2BFDB : public ::System::Object
{
public:
	::UnityEngine::Quaternion Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x20
	::RPG::GameCore::FixPoint Field_1_2; // 0x30
	::RPG::GameCore::FixPoint Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94DF359B57B2BFDB__CTOR_OFFSET))(this);
	}
};
