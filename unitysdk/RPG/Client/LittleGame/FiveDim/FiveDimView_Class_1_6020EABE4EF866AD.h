#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FiveDimRenderingItem;
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD_CLEAR_OFFSET UNITYSDK_OFFSET(0xC9BD510)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD__CTOR_OFFSET UNITYSDK_OFFSET(0xC9BD570)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimView_Class_1_6020EABE4EF866AD_TypeDefinitionIndex = 73246;

	class FiveDimView_Class_1_6020EABE4EF866AD : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Field_1_0; // 0x10
		::UnityEngine::Renderer* Field_1_1; // 0x18
		::System::String* Field_1_2; // 0x20
		::UnityEngine::Transform* Field_1_3; // 0x28
		::FiveDimRenderingItem* Field_1_4; // 0x30
		::System::Boolean Field_1_5; // 0x38
		::System::Boolean Field_1_6; // 0x39
		::System::Boolean Field_1_7; // 0x3A
		::System::Boolean Field_1_8; // 0x3B
		::System::Boolean Field_1_9; // 0x3C
		::System::Boolean Field_1_10; // 0x3D
		::UnityEngine::Vector3 Field_1_11; // 0x40
		::UnityEngine::Quaternion Field_1_12; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_CLASS_1_6020EABE4EF866AD_CLEAR_OFFSET))(this);
		}
	};
}
