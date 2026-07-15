#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_5D38E0A9AA20AF85__CTOR_OFFSET UNITYSDK_OFFSET(0xC9CD640)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_Class_1_5D38E0A9AA20AF85_TypeDefinitionIndex = 72890;

	class FourRotateVoxelGameStartCurve_Class_1_5D38E0A9AA20AF85 : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* Field_1_0; // 0x10
		::UnityEngine::Vector3 Field_1_1; // 0x18
		::System::Single Field_1_2; // 0x24
		::System::Single Field_1_3; // 0x28
		::System::UInt32 Field_1_4; // 0x2C
		::System::Boolean Field_1_5; // 0x30
		::System::Boolean Field_1_6; // 0x31
		::System::Boolean Field_1_7; // 0x32
		::System::Single Field_1_8; // 0x34
		::UnityEngine::Vector3 Field_1_9; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_5D38E0A9AA20AF85__CTOR_OFFSET))(this);
		}
	};
}
