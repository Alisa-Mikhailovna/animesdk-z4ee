#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/EmojiGenderEnum.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EmojiConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B3E0190)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETEMOJIIDBYGENDER_OFFSET UNITYSDK_OFFSET(0x1B3E1080)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B3E0060)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETGROUPEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x1B3E1190)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B3DFD50)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B3E0000)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B3E02E0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISGENDEREMOJI_1_OFFSET UNITYSDK_OFFSET(0x1B3E0BB0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISGENDEREMOJI_OFFSET UNITYSDK_OFFSET(0x1B3E0B70)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B3DFDD0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1B3E1250)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B3E0320)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDGENDEREMOJI_OFFSET UNITYSDK_OFFSET(0x1B3E15B0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDGROUPEMOJI_OFFSET UNITYSDK_OFFSET(0x1B3E13A0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B3E04F0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B3E0850)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3E1670)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B3E0450)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B3E03B0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3E0C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiConfigExcelTable_TypeDefinitionIndex = 12729;

	class EmojiConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__LinkedMaleEmojis()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33C80);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__GroupEmojis()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33C88);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33C90);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33C98);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__LinkedFemaleEmojis()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33CA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33CA8);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8950);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8951);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8952);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EmojiConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EmojiConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EmojiConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Boolean IsGenderEmoji(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISGENDEREMOJI_OFFSET))(a1);
		}

		static ::System::Boolean IsGenderEmoji_1(::RPG::GameCore::EmojiConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISGENDEREMOJI_1_OFFSET))(a1);
		}

		static ::System::UInt32 GetEmojiIDByGender(::System::UInt32 a1, ::RPG::GameCore::EmojiGenderEnum a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::EmojiGenderEnum))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETEMOJIIDBYGENDER_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetGroupEmojiIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETGROUPEMOJIIDS_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _AddGroupEmoji(::RPG::GameCore::EmojiConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDGROUPEMOJI_OFFSET))(a1);
		}

		static ::System::Void _AddGenderEmoji(::RPG::GameCore::EmojiConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDGENDEREMOJI_OFFSET))(a1);
		}
	};
}
