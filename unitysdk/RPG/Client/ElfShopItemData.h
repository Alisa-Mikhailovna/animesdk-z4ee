#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_288;
namespace RPG::GameCore { class RestaurantShopItemRow; }

#define RPG_CLIENT_ELFSHOPITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC3C1E80)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_AVAILABLEREMAINDAYS_OFFSET UNITYSDK_OFFSET(0xC3C2FD0)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC3C2C30)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_ISDISCOUNT_OFFSET UNITYSDK_OFFSET(0xC3C2F30)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_ISLIMITED_OFFSET UNITYSDK_OFFSET(0xC3C3010)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_ISREFRESHBYDAY_OFFSET UNITYSDK_OFFSET(0xC3C30B0)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_ISSHOPONLYPRODUCT_OFFSET UNITYSDK_OFFSET(0xC3C2080)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xC3C2E90)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_PRODUCTCOUNT_OFFSET UNITYSDK_OFFSET(0xC3C2D50)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xC3C2CB0)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_SHOPITEMLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0xC3C2DF0)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET_SHOPITEMREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xC3C2FF0)
#define RPG_CLIENT_ELFSHOPITEMDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC3C2C50)
#define RPG_CLIENT_ELFSHOPITEMDATA_SET_AVAILABLEREMAINDAYS_OFFSET UNITYSDK_OFFSET(0xC3C2FE0)
#define RPG_CLIENT_ELFSHOPITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC3C2C40)
#define RPG_CLIENT_ELFSHOPITEMDATA_SET_SHOPITEMREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xC3C3000)
#define RPG_CLIENT_ELFSHOPITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC3C1E20)
#define RPG_CLIENT_ELFSHOPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3C2C20)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfShopItemData_TypeDefinitionIndex = 60968;

	class ElfShopItemData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::UInt32 _AvailableRemainDays_k__BackingField; // 0x14
		::System::UInt32 _ShopItemRemainCount_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfShopItemData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfShopItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_288* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_288*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RestaurantShopItemRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantShopItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ProductID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_PRODUCTID_OFFSET))(this);
		}

		::System::UInt32 get_ProductCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_PRODUCTCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ShopItemLimitCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_SHOPITEMLIMITCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_PRICE_OFFSET))(this);
		}

		::System::Boolean get_IsDiscount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_ISDISCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AvailableRemainDays()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_AVAILABLEREMAINDAYS_OFFSET))(this);
		}

		::System::Void set_AvailableRemainDays(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_SET_AVAILABLEREMAINDAYS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShopItemRemainCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_SHOPITEMREMAINCOUNT_OFFSET))(this);
		}

		::System::Void set_ShopItemRemainCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_SET_SHOPITEMREMAINCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLimited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_ISLIMITED_OFFSET))(this);
		}

		::System::Boolean get_IsRefreshByDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_ISREFRESHBYDAY_OFFSET))(this);
		}

		::System::Boolean get_IsShopOnlyProduct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPITEMDATA_GET_ISSHOPONLYPRODUCT_OFFSET))(this);
		}
	};
}
