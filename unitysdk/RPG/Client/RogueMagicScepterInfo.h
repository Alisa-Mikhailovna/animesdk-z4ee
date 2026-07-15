#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_926;
class Class_1_245F843833EA3F6E;
class Class_1_A0F414D2CF643E56_6;
class Class_1_F11CBE4D3C7DF06D_2;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class BattleRogueMagicData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0xD3CB100)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xD3CB5D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CHECKISMAGICUNITCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0xD3CE020)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARALLUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0xD3C0590)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0xD3CE120)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COMPAREUNITPOWEREQUIPPEDONSCEPTER_OFFSET UNITYSDK_OFFSET(0xD3CDA70)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COUNTALLUNITITEMS_OFFSET UNITYSDK_OFFSET(0xD3CC9E0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CREATEFROMBATTLE_OFFSET UNITYSDK_OFFSET(0xD3CBAE0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3B7500)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_FINDASSOCIATEDMAGICSCEPTERS_OFFSET UNITYSDK_OFFSET(0xD3CA260)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLSCEPTERITEMS_OFFSET UNITYSDK_OFFSET(0xD3CC6D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNEQUIPPEDUNITITEMS_OFFSET UNITYSDK_OFFSET(0xD3CC750)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITITEMS_OFFSET UNITYSDK_OFFSET(0xD3CC710)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITSHOWNEWMARKLIST_OFFSET UNITYSDK_OFFSET(0xD3CE1F0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETATTACHUNITBASICPOWER_OFFSET UNITYSDK_OFFSET(0xD3CCF40)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERBASICPOWER_OFFSET UNITYSDK_OFFSET(0xD3C9300)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERTOTALPOWER_OFFSET UNITYSDK_OFFSET(0xD3C8DC0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNTINFO_OFFSET UNITYSDK_OFFSET(0xD3CA570)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNT_OFFSET UNITYSDK_OFFSET(0xD3CA0C0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETPASSIVEUNITPERCENT_OFFSET UNITYSDK_OFFSET(0xD3CD470)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERCOUNTBYFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xD3CA9C0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERITEM_OFFSET UNITYSDK_OFFSET(0xD3CB420)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPEFUNC_OFFSET UNITYSDK_OFFSET(0xD3CDDD0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPESTYLE_OFFSET UNITYSDK_OFFSET(0xD3CDB80)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEMLISTBYMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xD3CC400)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEM_OFFSET UNITYSDK_OFFSET(0xD3C8480)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_ISAUTODRESSINMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xD3CAB20)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0xD3CE260)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_UNITCOMPOSENEEDNUM_OFFSET UNITYSDK_OFFSET(0xD3C9F30)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_HASANYMAGICUNITCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0xD3C9D90)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISMAGICUNITCANUPGRADEWITHONEMORE_OFFSET UNITYSDK_OFFSET(0xD3CA160)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISRECOMPRESERVEMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xD3CA770)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITEQUIPPED_OFFSET UNITYSDK_OFFSET(0xD3CC980)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0xD3CE190)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_LEVELUPMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0xD3CB520)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0xD3CB390)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xD3CB890)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0xD3CB1E0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xD3CB6D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SCEPTERHASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xD3CA6F0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SETUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0xD3CE0B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_ISAUTODRESSINMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xD3CAB30)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0xD3CE270)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCALL_OFFSET UNITYSDK_OFFSET(0xD3B7EB0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCAUTODRESSINMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xD3C6630)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCRECORD_OFFSET UNITYSDK_OFFSET(0xD3B5F00)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_TRYGETBELONGSCEPTERDATAITEMBYUNITUID_OFFSET UNITYSDK_OFFSET(0xD3CC5D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__ADDMAGICUNITINBUCKET_OFFSET UNITYSDK_OFFSET(0xD3CADA0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3CE280)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B5820)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__GETALLSCEPTERITEMSASPOWERINTERFACEPOOLLIST_OFFSET UNITYSDK_OFFSET(0xD3CCA30)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__HASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xD3CA040)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REFRESHALLBUCKETS_OFFSET UNITYSDK_OFFSET(0xD3CAB40)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REMOVEMAGICUNITINBUCKET_OFFSET UNITYSDK_OFFSET(0xD3CAEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterInfo_TypeDefinitionIndex = 64431;

	class RogueMagicScepterInfo : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__MAX_UNIT_LEVEL()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RogueMagicScepterInfo_TypeDefinitionIndex)->GetStaticField(0x74A0);
		}
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* _MagicUnitBuckets; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _ComposeConsumeUnits; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* _ScepterItems; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _UnitItems; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ShowNewMarkUnitUIDSet; // 0x30
		::System::UInt32 _UnitComposeNeedNum; // 0x38
		::RPG::GameCore::RogueMagicStyleType _StyleType_k__BackingField; // 0x3C
		::System::Boolean _IsAutoDressInMagicUnit_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CCTOR_OFFSET))();
		}

		::System::Boolean HasAnyMagicUnitCanCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_HASANYMAGICUNITCANCOMPOSE_OFFSET))(this);
		}

		::System::UInt32 GetMagicUnitCount(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsMagicUnitCanUpgradeWithOneMore(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISMAGICUNITCANUPGRADEWITHONEMORE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* FindAssociatedMagicScepters(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_FINDASSOCIATEDMAGICSCEPTERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetMagicUnitCountInfo(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNTINFO_OFFSET))(this, a1);
		}

		::System::Boolean ScepterHasNextLevel(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SCEPTERHASNEXTLEVEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsRecomPreserveMagicUnit(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISRECOMPRESERVEMAGICUNIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetScepterCountByFuncType(::RPG::GameCore::RogueMagicScepterFuncType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERCOUNTBYFUNCTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAutoDressInMagicUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_ISAUTODRESSINMAGICUNIT_OFFSET))(this);
		}

		::System::Void set_IsAutoDressInMagicUnit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_ISAUTODRESSINMAGICUNIT_OFFSET))(this, a1);
		}

		::System::Void _RefreshAllBuckets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REFRESHALLBUCKETS_OFFSET))(this);
		}

		::System::Void _AddMagicUnitInBucket(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__ADDMAGICUNITINBUCKET_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveMagicUnitInBucket(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REMOVEMAGICUNITINBUCKET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasNextLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__HASNEXTLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Class_1_A0F414D2CF643E56_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A0F414D2CF643E56_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCALL_OFFSET))(this, a1);
		}

		::System::Void SyncRecord(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F11CBE4D3C7DF06D_2*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_245F843833EA3F6E*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F11CBE4D3C7DF06D_2*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_245F843833EA3F6E*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCRECORD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncAutoDressInMagicUnit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCAUTODRESSINMAGICUNIT_OFFSET))(this, a1);
		}

		::System::Void AddMagicSpector(::Class_1_245F843833EA3F6E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_245F843833EA3F6E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICSPECTOR_OFFSET))(this, a1);
		}

		::System::Void RemoveMagicSpector(::Class_1_245F843833EA3F6E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_245F843833EA3F6E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICSPECTOR_OFFSET))(this, a1);
		}

		::System::Void RefreshMagicSpector(::Class_1_245F843833EA3F6E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_245F843833EA3F6E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICSPECTOR_OFFSET))(this, a1);
		}

		::System::Void LevelUpMagicSpector(::Class_1_245F843833EA3F6E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_245F843833EA3F6E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_LEVELUPMAGICSPECTOR_OFFSET))(this, a1);
		}

		::System::Void AddMagicUnit(::Class_1_F11CBE4D3C7DF06D_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICUNIT_OFFSET))(this, a1);
		}

		::System::Void RemoveMagicUnit(::Class_1_F11CBE4D3C7DF06D_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICUNIT_OFFSET))(this, a1);
		}

		::System::Void RefreshMagicUnit(::Class_1_F11CBE4D3C7DF06D_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICUNIT_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueMagicScepterInfo* CreateFromBattle(::RPG::GameCore::BattleRogueMagicData* a1)
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::RPG::GameCore::BattleRogueMagicData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CREATEFROMBATTLE_OFFSET))(a1);
		}

		::RPG::Client::RogueMagicScepterDataItem* GetScepterItem(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueMagicUnitDataItem* GetUnitDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetUnitDataItemListByMagicUnit(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEMLISTBYMAGICUNIT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueMagicScepterDataItem* TryGetBelongScepterDataItemByUnitUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_TRYGETBELONGSCEPTERDATAITEMBYUNITUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* GetAllScepterItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLSCEPTERITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetAllUnitItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetAllUnequippedUnitItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNEQUIPPEDUNITITEMS_OFFSET))(this);
		}

		::System::UInt32 CountAllUnitItems()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COUNTALLUNITITEMS_OFFSET))(this);
		}

		::System::Boolean IsUnitEquipped(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITEQUIPPED_OFFSET))(this, a1);
		}

		::System::UInt32 GetMagicScpterTotalPower(::Class_0_16E4307DCC419505_926* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_926*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERTOTALPOWER_OFFSET))(this, a1);
		}

		::System::UInt32 GetMagicScpterBasicPower(::Class_0_16E4307DCC419505_926* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_926*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERBASICPOWER_OFFSET))(this, a1);
		}

		::System::UInt32 GetAttachUnitBasicPower(::RPG::Client::RogueMagicUnitDataItem* a1, ::Class_0_16E4307DCC419505_926* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_926*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETATTACHUNITBASICPOWER_OFFSET))(this, a1, a2);
		}

		::System::Single GetPassiveUnitPercent(::RPG::Client::RogueMagicUnitDataItem* a1, ::Class_0_16E4307DCC419505_926* a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_926*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETPASSIVEUNITPERCENT_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareUnitPowerEquippedOnScepter(::RPG::Client::RogueMagicUnitDataItem* a1, ::System::UInt32 a2, ::RPG::Client::RogueMagicScepterDataItem* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::System::UInt32, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COMPAREUNITPOWEREQUIPPEDONSCEPTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetUnequippedRecomMagicUnitsByMountTypeStyle(::RPG::GameCore::RogueMagicMountType a1, ::RPG::GameCore::RogueMagicStyleType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPESTYLE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetUnequippedRecomMagicUnitsByMountTypeFunc(::RPG::GameCore::RogueMagicMountType a1, ::RPG::GameCore::RogueMagicScepterFuncType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPEFUNC_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckIsMagicUnitCanCompose(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CHECKISMAGICUNITCANCOMPOSE_OFFSET))(this, a1, a2);
		}

		::System::Void SetUnitShowNewMark(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SETUNITSHOWNEWMARK_OFFSET))(this, a1);
		}

		::System::Void ClearUnitShowNewMark(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARUNITSHOWNEWMARK_OFFSET))(this, a1);
		}

		::System::Void ClearAllUnitShowNewMark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARALLUNITSHOWNEWMARK_OFFSET))(this);
		}

		::System::Boolean IsUnitShowNewMark(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITSHOWNEWMARK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllUnitShowNewMarkList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITSHOWNEWMARKLIST_OFFSET))(this);
		}

		::RPG::PoolList_1<::Class_0_16E4307DCC419505_926*>* _GetAllScepterItemsAsPowerInterfacePoolList(::Class_0_16E4307DCC419505_926* a1)
		{
			return ((::RPG::PoolList_1<::Class_0_16E4307DCC419505_926*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_926*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__GETALLSCEPTERITEMSASPOWERINTERFACEPOOLLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnitComposeNeedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_UNITCOMPOSENEEDNUM_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicStyleType get_StyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_STYLETYPE_OFFSET))(this);
		}

		::System::Void set_StyleType(::RPG::GameCore::RogueMagicStyleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_STYLETYPE_OFFSET))(this, a1);
		}
	};
}
