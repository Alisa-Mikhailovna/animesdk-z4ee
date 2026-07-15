#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityNewbiePromoteRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B121930)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B121800)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B1214F0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B1217A0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B121AC0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B121570)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B121B00)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B121CD0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B121F40)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B122260)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B121C30)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B121B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityNewbiePromoteExcelTable_TypeDefinitionIndex = 10835;

	class ActivityNewbiePromoteExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x1C950);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x1C958);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x1C960);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x6660);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x6661);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityNewbiePromoteRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityNewbiePromoteRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityNewbiePromoteRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityNewbiePromoteRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
