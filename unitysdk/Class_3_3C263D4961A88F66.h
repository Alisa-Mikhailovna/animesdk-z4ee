#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Side_ElfInteractCurrentSlot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3C263D4961A88F66_METHOD_3_DE21204480B88394_OFFSET UNITYSDK_OFFSET(0xB761170)
#define CLASS_3_3C263D4961A88F66_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB760C30)
#define CLASS_3_3C263D4961A88F66_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB761470)
#define CLASS_3_3C263D4961A88F66_TICK_OFFSET UNITYSDK_OFFSET(0xB7614C0)
#define CLASS_3_3C263D4961A88F66__CTOR_OFFSET UNITYSDK_OFFSET(0xB760C00)

inline static constexpr unsigned int Class_3_3C263D4961A88F66_TypeDefinitionIndex = 49804;

class Class_3_3C263D4961A88F66 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::UnityEngine::Vector3 Field_3_1; // 0x30
	::System::Single Field_3_2; // 0x3C
	::UnityEngine::Quaternion Field_3_3; // 0x40
	::System::Single Field_3_4; // 0x50
	::UnityEngine::Vector3 Field_3_5; // 0x54
	::UnityEngine::Quaternion Field_3_6; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_DE21204480B88394(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_METHOD_3_DE21204480B88394_OFFSET))(this, a1);
	}
};
