#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB690D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBB69110)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__ONTRIGGER_B__5_0_OFFSET UNITYSDK_OFFSET(0xBB69120)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int FailGuideDungeonImpl___c_TypeDefinitionIndex = 71778;

	class FailGuideDungeonImpl___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FailGuideDungeonImpl___c_TypeDefinitionIndex)->GetStaticField(0x38180);
		}
		static ::RPG::Client::ActivityIdleLive::FailGuideDungeonImpl___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::FailGuideDungeonImpl___c**)Il2CppClass::FromTypeDefinitionIndex(FailGuideDungeonImpl___c_TypeDefinitionIndex)->GetStaticField(0x38188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnTrigger_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDEDUNGEONIMPL___C__ONTRIGGER_B__5_0_OFFSET))(this);
		}
	};
}
