#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideQuestTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B18A9A0)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B18A830)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B18A520)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B18A7D0)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B18AAF0)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B18A5A0)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B18AB30)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B18AD00)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B18AE60)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B18B180)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B18AC60)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B18ABC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideQuestTypeExcelTable_TypeDefinitionIndex = 10576;

	class AetherDivideQuestTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideQuestTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x232A0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideQuestTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x232A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideQuestTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideQuestTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideQuestTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x232B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideQuestTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x6DA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideQuestTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x6DA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideQuestTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideQuestTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideQuestTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideQuestTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideQuestTypeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideQuestTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideQuestTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideQuestTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
