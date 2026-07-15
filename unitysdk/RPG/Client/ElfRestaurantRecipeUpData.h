#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantRecipeUpRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC3BA5E0)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_COOKTIME_OFFSET UNITYSDK_OFFSET(0xC3BAF40)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC3BAEB0)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xC3B8D30)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_RECIPEID_OFFSET UNITYSDK_OFFSET(0xC3BAE90)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_UPGRADEMATERIALS_OFFSET UNITYSDK_OFFSET(0xC3B9030)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC3BAED0)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC3BAEC0)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_SET_RECIPEID_OFFSET UNITYSDK_OFFSET(0xC3BAEA0)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3BAE80)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantRecipeUpData_TypeDefinitionIndex = 60963;

	class ElfRestaurantRecipeUpData : public ::System::Object
	{
	public:
		::System::UInt32 _Level_k__BackingField; // 0x10
		::System::UInt32 _RecipeID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantRecipeUpData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ElfRestaurantRecipeUpData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_RecipeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_RECIPEID_OFFSET))(this);
		}

		::System::Void set_RecipeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_SET_RECIPEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_UpgradeMaterials()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_UPGRADEMATERIALS_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_PRICE_OFFSET))(this);
		}

		::System::UInt32 get_CookTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_COOKTIME_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantRecipeUpRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantRecipeUpRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET__ROW_OFFSET))(this);
		}
	};
}
