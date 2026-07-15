#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_804;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class IGridFightGridItem; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ObservableCollection_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPCATEGORY_OFFSET UNITYSDK_OFFSET(0xC6E5550)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPID_OFFSET UNITYSDK_OFFSET(0xC6E51B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xC6E5380)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPCOUNTWITHOUTHACK_OFFSET UNITYSDK_OFFSET(0xC6E5970)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xC6E58F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xC6E6280)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_HACKEQUIP_OFFSET UNITYSDK_OFFSET(0xC6E5FD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_HASEQUIPCANUSEDTOCRAFT_OFFSET UNITYSDK_OFFSET(0xC6E5D90)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0xC6E5D00)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_NONEBASICEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xC6E5AC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_SHOWNEQUIPS_OFFSET UNITYSDK_OFFSET(0xC6E6120)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_HASEFFECTTRAITID_OFFSET UNITYSDK_OFFSET(0xC6E5720)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_INITEQUIPS_OFFSET UNITYSDK_OFFSET(0xC6E3A30)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEALLEQUIPS_OFFSET UNITYSDK_OFFSET(0xC6E4D90)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEEQUIP_OFFSET UNITYSDK_OFFSET(0xC6E4BB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0xC6E6290)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_UPDATEEQUIPS_OFFSET UNITYSDK_OFFSET(0xC6E4000)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CHECKEQUIPUPDATE_OFFSET UNITYSDK_OFFSET(0xC6E4970)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC6E39B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___CHECKEQUIPUPDATE_B__27_0_OFFSET UNITYSDK_OFFSET(0xC6E62A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipComponent_TypeDefinitionIndex = 62017;

	class GridFightEquipComponent : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x18
		::RPG::Client::IGridFightGridItem* _Owner; // 0x20
		::Class_0_16E4307DCC419505_804* _DataContext; // 0x28

		::System::Void _ctor(::RPG::Client::IGridFightGridItem* a1, ::Class_0_16E4307DCC419505_804* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightGridItem*, ::Class_0_16E4307DCC419505_804*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void InitEquips(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_INITEQUIPS_OFFSET))(this, a1);
		}

		::System::Void UpdateEquips(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_UPDATEEQUIPS_OFFSET))(this, a1);
		}

		::System::Void RemoveEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEEQUIP_OFFSET))(this, a1);
		}

		::System::Void RemoveAllEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_REMOVEALLEQUIPS_OFFSET))(this);
		}

		::System::Boolean ContainsEquipID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPID_OFFSET))(this, a1);
		}

		::System::Boolean ContainsEquipUniqueID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPUNIQUEID_OFFSET))(this, a1);
		}

		::System::Boolean ContainsEquipCategory(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_CONTAINSEQUIPCATEGORY_OFFSET))(this, a1);
		}

		::System::Boolean HasEffectTraitID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_HASEFFECTTRAITID_OFFSET))(this, a1);
		}

		::System::Int32 get_EquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPCOUNT_OFFSET))(this);
		}

		::System::Int32 get_EquipCountWithoutHack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPCOUNTWITHOUTHACK_OFFSET))(this);
		}

		::System::Int32 get_NoneBasicEquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_NONEBASICEQUIPCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_ISFULL_OFFSET))(this);
		}

		::System::Boolean get_HasEquipCanUsedToCraft()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_HASEQUIPCANUSEDTOCRAFT_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* get_HackEquip()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_HACKEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_ShownEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_SHOWNEQUIPS_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ObservableCollection_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT_SET_EQUIPS_OFFSET))(this, a1);
		}

		::System::Boolean _CheckEquipUpdate(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT__CHECKEQUIPUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean __CheckEquipUpdate_b__27_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___CHECKEQUIPUPDATE_B__27_0_OFFSET))(this, a1);
		}
	};
}
