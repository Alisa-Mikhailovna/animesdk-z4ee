#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerQuantifyTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B3C95D0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B3C94A0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B3C9190)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B3C9440)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B3C9720)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B3C9210)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B3C9760)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B3C9930)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B3C9AF0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3C9E10)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B3C9890)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B3C97F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex = 12667;

	class DrinkMakerQuantifyTagExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x32B80);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x32B88);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x32B90);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x8820);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x8821);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerQuantifyTagRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerQuantifyTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerQuantifyTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerQuantifyTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
