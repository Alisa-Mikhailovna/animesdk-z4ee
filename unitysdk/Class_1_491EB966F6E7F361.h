#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterVisionConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_491EB966F6E7F361__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FB730)

inline static constexpr unsigned int Class_1_491EB966F6E7F361_TypeDefinitionIndex = 40326;

class Class_1_491EB966F6E7F361 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14
	::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_491EB966F6E7F361__CTOR_OFFSET))(this);
	}
};
