#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD964130)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD9646B0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD964710)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD9646C0)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD964120)
#define RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177__CTOR_OFFSET UNITYSDK_OFFSET(0xD95D0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterController___TickWaitTurnInPlace_d__177_TypeDefinitionIndex = 54468;

	class AdventureCharacterController___TickWaitTurnInPlace_d__177 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::GameCore::GameEntity*>* predicate; // 0x10
		::RPG::GameCore::AdventureCharacterController* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Boolean _bRecoverToDefaultState_5__2; // 0x2C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERCONTROLLER___TICKWAITTURNINPLACE_D__177_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
