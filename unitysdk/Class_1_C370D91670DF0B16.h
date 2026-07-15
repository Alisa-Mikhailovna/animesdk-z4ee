#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_2_56DCA1B58073717B;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C370D91670DF0B16__CTOR_OFFSET UNITYSDK_OFFSET(0x1A91B2B0)

inline static constexpr unsigned int Class_1_C370D91670DF0B16_TypeDefinitionIndex = 40631;

class Class_1_C370D91670DF0B16 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Action* Field_1_2; // 0x20
	::Class_2_56DCA1B58073717B* Field_1_3; // 0x28
	::RPG::GameCore::FourRotateVoxelFinishPointConfig* Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x39
	::System::Boolean Field_1_7; // 0x3A
	::System::Int32 Field_1_8; // 0x3C
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_9; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C370D91670DF0B16__CTOR_OFFSET))(this);
	}
};
