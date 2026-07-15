#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC067560)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC0675A0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTBUYSHOPITEM_B__9_0_OFFSET UNITYSDK_OFFSET(0xC0675C0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTFINISHSHOP_B__11_1_OFFSET UNITYSDK_OFFSET(0xC0675D0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTREFRESHSHOP_B__6_0_OFFSET UNITYSDK_OFFSET(0xC0675B0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTSELLHANDCARD_B__13_0_OFFSET UNITYSDK_OFFSET(0xC0675E0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopPhase___c_TypeDefinitionIndex = 72409;

	class ShopPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(ShopPhase___c_TypeDefinitionIndex)->GetStaticField(0x5DE30);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(ShopPhase___c_TypeDefinitionIndex)->GetStaticField(0x5DE38);
		}
		static ::RPG::Client::ChenLingBattle::ShopPhase___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::ShopPhase___c**)Il2CppClass::FromTypeDefinitionIndex(ShopPhase___c_TypeDefinitionIndex)->GetStaticField(0x5DE40);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(ShopPhase___c_TypeDefinitionIndex)->GetStaticField(0x5DE48);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__11_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(ShopPhase___c_TypeDefinitionIndex)->GetStaticField(0x5DE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestRefreshShop_b__6_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTREFRESHSHOP_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _RequestBuyShopItem_b__9_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTBUYSHOPITEM_B__9_0_OFFSET))(this, a1);
		}

		::System::Void _RequestFinishShop_b__11_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTFINISHSHOP_B__11_1_OFFSET))(this, a1);
		}

		::System::Void _RequestSellHandCard_b__13_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPPHASE___C__REQUESTSELLHANDCARD_B__13_0_OFFSET))(this, a1);
		}
	};
}
