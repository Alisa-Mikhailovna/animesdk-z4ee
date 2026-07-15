#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_09751665EAC0FA4D_1;
class Class_1_D17272E82AE804C2_284;
namespace RPG::Client { class ElfRecipeEditor; }
namespace RPG::Client { class ElfRestaurantCustomerData; }
namespace RPG::Client { class ElfRestaurantDrinkRecipeData; }
namespace RPG::Client { class ElfRestaurantManageGameplayModel; }
namespace RPG::Client { class ElfRestaurantManageStatistics; }
namespace RPG::Client { class ElfRestaurantMediator; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client { class ElfRestaurantSpecialCustomerData; }
namespace RPG::Client { class ElfRestaurantTagData; }
namespace RPG::Client { class IElfRecipeEditable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTINFO_CHECKSELECTRECIPES_OFFSET UNITYSDK_OFFSET(0xC3A6160)
#define RPG_CLIENT_ELFRESTAURANTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3A23B0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLNEWUNLOCKRECIPES_OFFSET UNITYSDK_OFFSET(0xC3A33C0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLPRICEUPRECIPES_OFFSET UNITYSDK_OFFSET(0xC3A3730)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLPROGRESSUNLOCKRECIPES_OFFSET UNITYSDK_OFFSET(0xC3A3BF0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLRECIPES_OFFSET UNITYSDK_OFFSET(0xC3A4110)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETALLUNLOCKRECIPES_OFFSET UNITYSDK_OFFSET(0xC3A2F60)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xC3A2D50)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETMOSTEXPENSIVEUSABLERECIPE_OFFSET UNITYSDK_OFFSET(0xC3A6E00)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETNOFINISHEDTARGETRECIPE_OFFSET UNITYSDK_OFFSET(0xC3A6350)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xC3A2AD0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETSPECIALCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xC3A2E00)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETTAGDATA_OFFSET UNITYSDK_OFFSET(0xC3A2EB0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GETTODAYMENURECIPESTORAGE_OFFSET UNITYSDK_OFFSET(0xC3A43D0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_AVAILABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xC3A60B0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_COOKABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xC3A7500)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_DRINKINGRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xC3A75B0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_HASAVAILABLERECIPEDATA_OFFSET UNITYSDK_OFFSET(0xC3A73B0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_RECIPEEDITOR_OFFSET UNITYSDK_OFFSET(0xC3A25D0)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_SELECTRECIPEDICT_OFFSET UNITYSDK_OFFSET(0xC3A6000)
#define RPG_CLIENT_ELFRESTAURANTINFO_GET_SPECIALTY_OFFSET UNITYSDK_OFFSET(0xC3A7350)
#define RPG_CLIENT_ELFRESTAURANTINFO_HASEMPTYRECIPESLOT_OFFSET UNITYSDK_OFFSET(0xC3A6660)
#define RPG_CLIENT_ELFRESTAURANTINFO_HASEXPENSIVERECIPE_OFFSET UNITYSDK_OFFSET(0xC3A67E0)
#define RPG_CLIENT_ELFRESTAURANTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC3A1840)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISFOODLISTEMPTY_OFFSET UNITYSDK_OFFSET(0xC3A7720)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISMATERIALSUSEDUP_OFFSET UNITYSDK_OFFSET(0xC3A75F0)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_1_OFFSET UNITYSDK_OFFSET(0xC3A65C0)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_OFFSET UNITYSDK_OFFSET(0xC3A6560)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPEINSLOTS_OFFSET UNITYSDK_OFFSET(0xC3A63E0)
#define RPG_CLIENT_ELFRESTAURANTINFO_ISTODAYMENUEMPTY_OFFSET UNITYSDK_OFFSET(0xC3A2760)
#define RPG_CLIENT_ELFRESTAURANTINFO_RESETDRINKINGRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xC39EDB0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SETSELECTRECIPES_OFFSET UNITYSDK_OFFSET(0xC3A5A50)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_AVAILABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xC3A7360)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_COOKABLERECIPEDATADICT_OFFSET UNITYSDK_OFFSET(0xC3A74B0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_RECIPEEDITOR_OFFSET UNITYSDK_OFFSET(0xC3A2710)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_SELECTRECIPEDICT_OFFSET UNITYSDK_OFFSET(0xC3A72F0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SET_SPECIALTY_OFFSET UNITYSDK_OFFSET(0xC3A7340)
#define RPG_CLIENT_ELFRESTAURANTINFO_SYNCPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC3A4BD0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPELEVELUPGRADE_OFFSET UNITYSDK_OFFSET(0xC3A45F0)
#define RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPE_OFFSET UNITYSDK_OFFSET(0xC3A46E0)
#define RPG_CLIENT_ELFRESTAURANTINFO_TRYGETMANAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xC3A6FE0)
#define RPG_CLIENT_ELFRESTAURANTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC3A77C0)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xC3A1BA0)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITRECIPEDATA_OFFSET UNITYSDK_OFFSET(0xC3A18F0)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITSPECIALCUSTOMERDATA_OFFSET UNITYSDK_OFFSET(0xC3A1E50)
#define RPG_CLIENT_ELFRESTAURANTINFO__INITTAGDATA_OFFSET UNITYSDK_OFFSET(0xC3A2100)
#define RPG_CLIENT_ELFRESTAURANTINFO__ISPRICEEXPENSIVETHANSLOT_OFFSET UNITYSDK_OFFSET(0xC3A6BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantInfo_TypeDefinitionIndex = 60948;

	class ElfRestaurantInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantSpecialCustomerData*>* SpecialCustomerDataDict; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* RecentDayEarnedGolds; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* RecipeDataDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantCustomerData*>* CustomerDataDict; // 0x28
		::RPG::Client::ElfRecipeEditor* _RecipeEditor; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* _CookableRecipeDataDict; // 0x38
		::RPG::Client::ElfRestaurantDrinkRecipeData* _DrinkingRecipeData; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* _SelectRecipeDict; // 0x48
		::RPG::Client::ElfRestaurantRecipeData* _Specialty_k__BackingField; // 0x50
		::RPG::Client::ElfRestaurantMediator* Mediator; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantTagData*>* TagDataDict; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* _AvailableRecipeDataDict; // 0x68
		::RPG::Client::ElfRestaurantManageGameplayModel* ManageGameplayModel; // 0x70
		::RPG::Client::ElfRestaurantManageStatistics* _ManageStatistics; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsTodayMenuEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISTODAYMENUEMPTY_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantRecipeData* GetRecipeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETRECIPEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantCustomerData* GetCustomerData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantCustomerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETCUSTOMERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantSpecialCustomerData* GetSpecialCustomerData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantSpecialCustomerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETSPECIALCUSTOMERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantTagData* GetTagData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantTagData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETTAGDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllUnlockRecipes(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLUNLOCKRECIPES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllNewUnlockRecipes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLNEWUNLOCKRECIPES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllPriceUpRecipes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLPRICEUPRECIPES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllProgressUnlockRecipes(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLPROGRESSUNLOCKRECIPES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetAllRecipes(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETALLRECIPES_OFFSET))(this, a1);
		}

		::System::UInt32 GetTodayMenuRecipeStorage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETTODAYMENURECIPESTORAGE_OFFSET))(this);
		}

		::System::Void SyncRecipeLevelUpgrade(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPELEVELUPGRADE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncRecipe(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_284*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_284*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SYNCRECIPE_OFFSET))(this, a1);
		}

		::System::Void SyncPlayData(::Class_1_09751665EAC0FA4D_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_09751665EAC0FA4D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SYNCPLAYDATA_OFFSET))(this, a1);
		}

		::System::Void SetSelectRecipes(::System::Collections::Generic::List_1<::RPG::Client::IElfRecipeEditable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IElfRecipeEditable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SETSELECTRECIPES_OFFSET))(this, a1);
		}

		::System::Void CheckSelectRecipes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_CHECKSELECTRECIPES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNoFinishedTargetRecipe()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETNOFINISHEDTARGETRECIPE_OFFSET))(this);
		}

		::System::Boolean IsRecipeInSlots(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPEINSLOTS_OFFSET))(this, a1);
		}

		::System::Boolean IsRecipeCookable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_OFFSET))(this, a1);
		}

		::System::Boolean IsRecipeCookable_1(::RPG::Client::ElfRestaurantRecipeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISRECIPECOOKABLE_1_OFFSET))(this, a1);
		}

		::System::Boolean HasEmptyRecipeSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_HASEMPTYRECIPESLOT_OFFSET))(this);
		}

		::System::Boolean HasExpensiveRecipe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_HASEXPENSIVERECIPE_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantRecipeData* GetMostExpensiveUsableRecipe()
		{
			return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GETMOSTEXPENSIVEUSABLERECIPE_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantManageStatistics* TryGetManageStatistics()
		{
			return ((::RPG::Client::ElfRestaurantManageStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_TRYGETMANAGESTATISTICS_OFFSET))(this);
		}

		::System::Boolean _IsPriceExpensiveThanSlot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__ISPRICEEXPENSIVETHANSLOT_OFFSET))(this, a1);
		}

		::System::Void _InitRecipeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__INITRECIPEDATA_OFFSET))(this);
		}

		::System::Void _InitCustomerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__INITCUSTOMERDATA_OFFSET))(this);
		}

		::System::Void _InitSpecialCustomerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__INITSPECIALCUSTOMERDATA_OFFSET))(this);
		}

		::System::Void _InitTagData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO__INITTAGDATA_OFFSET))(this);
		}

		::System::Void set_RecipeEditor(::RPG::Client::ElfRecipeEditor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRecipeEditor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_RECIPEEDITOR_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRecipeEditor* get_RecipeEditor()
		{
			return ((::RPG::Client::ElfRecipeEditor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_RECIPEEDITOR_OFFSET))(this);
		}

		::System::Void set_SelectRecipeDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_SELECTRECIPEDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* get_SelectRecipeDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_SELECTRECIPEDICT_OFFSET))(this);
		}

		::System::Void set_Specialty(::RPG::Client::ElfRestaurantRecipeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_SPECIALTY_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantRecipeData* get_Specialty()
		{
			return ((::RPG::Client::ElfRestaurantRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_SPECIALTY_OFFSET))(this);
		}

		::System::Void set_AvailableRecipeDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_AVAILABLERECIPEDATADICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* get_AvailableRecipeDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_AVAILABLERECIPEDATADICT_OFFSET))(this);
		}

		::System::Boolean get_HasAvailableRecipeData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_HASAVAILABLERECIPEDATA_OFFSET))(this);
		}

		::System::Void set_CookableRecipeDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_SET_COOKABLERECIPEDATADICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>* get_CookableRecipeDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_COOKABLERECIPEDATADICT_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantDrinkRecipeData* get_DrinkingRecipeData()
		{
			return ((::RPG::Client::ElfRestaurantDrinkRecipeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_GET_DRINKINGRECIPEDATA_OFFSET))(this);
		}

		::System::Void ResetDrinkingRecipeData(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_RESETDRINKINGRECIPEDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsMaterialsUsedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISMATERIALSUSEDUP_OFFSET))(this);
		}

		::System::Boolean IsFoodListEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO_ISFOODLISTEMPTY_OFFSET))(this);
		}
	};
}
