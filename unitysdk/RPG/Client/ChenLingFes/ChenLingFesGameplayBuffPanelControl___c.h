#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC08D100)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC08D140)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayBuffPanelControl___c_TypeDefinitionIndex = 76342;

	class ChenLingFesGameplayBuffPanelControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayBuffPanelControl___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplayBuffPanelControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayBuffPanelControl___c_TypeDefinitionIndex)->GetStaticField(0x5EC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
