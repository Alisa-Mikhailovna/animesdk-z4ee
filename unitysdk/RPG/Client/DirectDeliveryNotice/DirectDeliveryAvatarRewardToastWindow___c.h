#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2A9BF0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC2A9C30)

namespace RPG::Client::DirectDeliveryNotice
{
	inline static constexpr unsigned int DirectDeliveryAvatarRewardToastWindow___c_TypeDefinitionIndex = 76283;

	class DirectDeliveryAvatarRewardToastWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DirectDeliveryNotice::DirectDeliveryAvatarRewardToastWindow___c** StaticGet___9()
		{
			return (::RPG::Client::DirectDeliveryNotice::DirectDeliveryAvatarRewardToastWindow___c**)Il2CppClass::FromTypeDefinitionIndex(DirectDeliveryAvatarRewardToastWindow___c_TypeDefinitionIndex)->GetStaticField(0x66C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
