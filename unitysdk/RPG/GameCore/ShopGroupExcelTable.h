#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShopGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SHOPGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B8C5320)
#define RPG_GAMECORE_SHOPGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B8C51B0)
#define RPG_GAMECORE_SHOPGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B8C50D0)
#define RPG_GAMECORE_SHOPGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B8C5150)
#define RPG_GAMECORE_SHOPGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B8C4700)
#define RPG_GAMECORE_SHOPGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B8C4740)
#define RPG_GAMECORE_SHOPGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B8C4970)
#define RPG_GAMECORE_SHOPGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8C4B40)
#define RPG_GAMECORE_SHOPGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B8C4D60)
#define RPG_GAMECORE_SHOPGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8C54B0)
#define RPG_GAMECORE_SHOPGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B8C4AA0)
#define RPG_GAMECORE_SHOPGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B8C4A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGroupExcelTable_TypeDefinitionIndex = 14522;

	class ShopGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(ShopGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x5C660);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ShopGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x5C668);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ShopGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x5C670);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShopGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x10200);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ShopGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x10201);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ShopGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ShopGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ShopGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ShopGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
