#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleItem; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD1C0630)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1C0AA0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1C0B00)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD1C0AB0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1C0620)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B9C40)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard___StartRotateAction_d__79_TypeDefinitionIndex = 74756;

	class OpticalIllusionPuzzleBoard___StartRotateAction_d__79 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* item; // 0x10
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTROTATEACTION_D__79_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
