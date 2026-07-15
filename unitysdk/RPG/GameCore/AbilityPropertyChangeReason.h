#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_ABILITYPROPERTYCHANGEREASON__CCTOR_OFFSET UNITYSDK_OFFSET(0xD8F7510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPropertyChangeReason_TypeDefinitionIndex = 55157;

	class AbilityPropertyChangeReason : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_SyncProperty()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x25120);
		}
		static ::System::String** StaticGet_LoseHPByRatio()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x25128);
		}
		static ::System::String** StaticGet_LoseHP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x25130);
		}
		static ::System::String** StaticGet_SummonInit()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x25138);
		}
		static ::System::String** StaticGet_ByUseSkill()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x25140);
		}
		static ::System::String** StaticGet_Damage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x25148);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYCHANGEREASON__CCTOR_OFFSET))();
		}
	};
}
