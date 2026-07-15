#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_803;
class Class_0_16E4307DCC419505_818;
class Class_1_D17272E82AE804C2_417;
class Class_1_D17272E82AE804C2_453;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_CANUSECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0xC6CCBB0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6CA250)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEMBYGROUPID_OFFSET UNITYSDK_OFFSET(0xC6CA930)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEM_OFFSET UNITYSDK_OFFSET(0xC6CA370)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GET_CONSUMABLEITEMDATAS_OFFSET UNITYSDK_OFFSET(0xC6CCB20)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC6C9EF0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xC6C9F30)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0xC6CC000)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_1_OFFSET UNITYSDK_OFFSET(0xC6CB750)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xC6CAB00)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC6CAA70)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_USECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0xC6CD050)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0xC6CB3A0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_OFFSET UNITYSDK_OFFSET(0xC6CCC50)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0xC6CA2F0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC6C9280)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETFIRSTITEMBYITEMID_OFFSET UNITYSDK_OFFSET(0xC6CA3C0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETITEMBYGROUPID_OFFSET UNITYSDK_OFFSET(0xC6CA980)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAGROUPIDS_OFFSET UNITYSDK_OFFSET(0xC6CC060)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0xC6CCA90)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEMULTIPLEITEM_OFFSET UNITYSDK_OFFSET(0xC6CC570)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableInfo_TypeDefinitionIndex = 61977;

	class GridFightConsumableInfo : public ::System::Object
	{
	public:
		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightConsumableItemData*>* ConsumableItemDataDict; // 0x10
		::System::Action_2<::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*>* OnBeforeUseConsumable; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_818*>*>* _ConstraitsToRoleLUT; // 0x20
		::Class_0_16E4307DCC419505_803* _gridFightDataChangeCollector; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_818*>*>* _ConstraitsToEquipLUT; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_INIT_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_803* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_803*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* GetItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* GetItemByGroupID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEMBYGROUPID_OFFSET))(this, a1);
		}

		::System::Void Sync(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_417*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_417*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_417*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_417*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate_1(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_453*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_453*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_1_OFFSET))(this, a1);
		}

		::System::Void SyncRemove(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_453*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_453*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCREMOVE_OFFSET))(this, a1);
		}

		::System::Void _ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CLEARITEMS_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* _GetItemByGroupID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETITEMBYGROUPID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* _GetFirstItemByItemID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETFIRSTITEMBYITEMID_OFFSET))(this, a1);
		}

		::System::Void _RemoveMultiPleItem(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEMULTIPLEITEM_OFFSET))(this, a1);
		}

		::System::Void _RemoveItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void _AddItem(::RPG::Client::GridFightConsumableItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__ADDITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetServerDataGroupIDs(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_453*>* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_453*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAGROUPIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>* get_ConsumableItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GET_CONSUMABLEITEMDATAS_OFFSET))(this);
		}

		::System::Boolean CanUseConsumableItem(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::System::String*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_CANUSECONSUMABLEITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UseConsumableItem(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_USECONSUMABLEITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckConstraits(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_818*>*>* a3, ::System::String*& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_818*>*>*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
