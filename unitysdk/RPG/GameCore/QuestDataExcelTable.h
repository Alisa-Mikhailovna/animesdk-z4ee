#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class QuestDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_QUESTDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B6F7D40)
#define RPG_GAMECORE_QUESTDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B6F7BD0)
#define RPG_GAMECORE_QUESTDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B6F78C0)
#define RPG_GAMECORE_QUESTDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B6F7B70)
#define RPG_GAMECORE_QUESTDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B6F7E90)
#define RPG_GAMECORE_QUESTDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B6F7940)
#define RPG_GAMECORE_QUESTDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B6F7ED0)
#define RPG_GAMECORE_QUESTDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B6F80A0)
#define RPG_GAMECORE_QUESTDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B6F84C0)
#define RPG_GAMECORE_QUESTDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6F87E0)
#define RPG_GAMECORE_QUESTDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B6F8000)
#define RPG_GAMECORE_QUESTDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B6F7F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestDataExcelTable_TypeDefinitionIndex = 13988;

	class QuestDataExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(QuestDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F720);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(QuestDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F728);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(QuestDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F730);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(QuestDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xDEA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(QuestDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xDEA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::QuestDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::QuestDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::QuestDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::QuestDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
