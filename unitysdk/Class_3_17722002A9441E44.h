#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfTakeOutDelivery; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_17722002A9441E44_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFAF3A0)
#define CLASS_3_17722002A9441E44_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAFAEFF0)
#define CLASS_3_17722002A9441E44_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAFAF2F0)
#define CLASS_3_17722002A9441E44_TICK_OFFSET UNITYSDK_OFFSET(0xAFAF340)
#define CLASS_3_17722002A9441E44__CTOR_OFFSET UNITYSDK_OFFSET(0xAFAEFC0)

inline static constexpr unsigned int Class_3_17722002A9441E44_TypeDefinitionIndex = 49791;

class Class_3_17722002A9441E44 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfTakeOutDelivery*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery*))((::PBYTE)hIl2Cpp + CLASS_3_17722002A9441E44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17722002A9441E44_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17722002A9441E44_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_17722002A9441E44_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17722002A9441E44_DISPOSE_OFFSET))(this);
	}
};
