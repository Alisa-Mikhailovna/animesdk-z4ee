#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_808;
class Class_1_A0F9A6CFA21CA68B;
namespace RPG::Client { class GridFightAugmentEffectData; }
namespace RPG::Client { class GridFightBattleResultBonus; }
namespace RPG::Client { class GridFightBonusResultData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_CLEARBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xC6C45F0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_CLEARELITERESULT_OFFSET UNITYSDK_OFFSET(0xC6C4640)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_DISTRIBUTEBONUS_OFFSET UNITYSDK_OFFSET(0xC6C41E0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_BATTLEAUGMENTBONUSES_OFFSET UNITYSDK_OFFSET(0xC6C47C0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_BATTLERESULTBONUSDATA_OFFSET UNITYSDK_OFFSET(0xC6C47A0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_ELITEBRANCHBONUS_OFFSET UNITYSDK_OFFSET(0xC6C47E0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASBATTLERESULTBONUS_OFFSET UNITYSDK_OFFSET(0xC6C4820)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASINITIALSUPPLYBONUS_OFFSET UNITYSDK_OFFSET(0xC6C4690)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASTRAITEFFECTBONUS_OFFSET UNITYSDK_OFFSET(0xC6C4700)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_INITIALSUPPLYBONUSRESULTDATA_OFFSET UNITYSDK_OFFSET(0xC6C4760)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_OUTERBONUSES_OFFSET UNITYSDK_OFFSET(0xC6C4800)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_TRAITBONUSES_OFFSET UNITYSDK_OFFSET(0xC6C4780)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ISBATTLEBONUSCONTAINSORB_OFFSET UNITYSDK_OFFSET(0xC6C4440)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_REGISTEDISTRIBUTOR_OFFSET UNITYSDK_OFFSET(0xC6C43A0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_BATTLEAUGMENTBONUSES_OFFSET UNITYSDK_OFFSET(0xC6C47D0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_BATTLERESULTBONUSDATA_OFFSET UNITYSDK_OFFSET(0xC6C47B0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_ELITEBRANCHBONUS_OFFSET UNITYSDK_OFFSET(0xC6C47F0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_INITIALSUPPLYBONUSRESULTDATA_OFFSET UNITYSDK_OFFSET(0xC6C4770)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_OUTERBONUSES_OFFSET UNITYSDK_OFFSET(0xC6C4810)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_TRAITBONUSES_OFFSET UNITYSDK_OFFSET(0xC6C4790)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6C4880)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusServerData_TypeDefinitionIndex = 61505;

	class GridFightBonusServerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_A0F9A6CFA21CA68B*>* _TraitBonuses_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentEffectData*>* _BattleAugmentBonuses_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusResultData*>* _OuterBonuses_k__BackingField; // 0x20
		::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_808*>* bonusDistributorQueue; // 0x28
		::RPG::Client::GridFightBattleResultBonus* _BattleResultBonusData_k__BackingField; // 0x30
		::RPG::Client::GridFightBonusResultData* _InitialSupplyBonusResultData_k__BackingField; // 0x38
		::RPG::Client::GridFightBonusResultData* _EliteBranchBonus_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA__CTOR_OFFSET))(this);
		}

		::System::Void DistributeBonus(::RPG::Client::GridFightBonusResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_DISTRIBUTEBONUS_OFFSET))(this, a1);
		}

		::System::Void RegisteDistributor(::Class_0_16E4307DCC419505_808* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_808*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_REGISTEDISTRIBUTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsBattleBonusContainsOrb(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ISBATTLEBONUSCONTAINSORB_OFFSET))(this, a1);
		}

		::System::Void ClearBattleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_CLEARBATTLERESULT_OFFSET))(this);
		}

		::System::Void ClearEliteResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_CLEARELITERESULT_OFFSET))(this);
		}

		::System::Boolean get_HasInitialSupplyBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASINITIALSUPPLYBONUS_OFFSET))(this);
		}

		::System::Boolean get_HasTraitEffectBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASTRAITEFFECTBONUS_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusResultData* get_InitialSupplyBonusResultData()
		{
			return ((::RPG::Client::GridFightBonusResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_INITIALSUPPLYBONUSRESULTDATA_OFFSET))(this);
		}

		::System::Void set_InitialSupplyBonusResultData(::RPG::Client::GridFightBonusResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_INITIALSUPPLYBONUSRESULTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_A0F9A6CFA21CA68B*>* get_TraitBonuses()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A0F9A6CFA21CA68B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_TRAITBONUSES_OFFSET))(this);
		}

		::System::Void set_TraitBonuses(::System::Collections::Generic::List_1<::Class_1_A0F9A6CFA21CA68B*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A0F9A6CFA21CA68B*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_TRAITBONUSES_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightBattleResultBonus* get_BattleResultBonusData()
		{
			return ((::RPG::Client::GridFightBattleResultBonus*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_BATTLERESULTBONUSDATA_OFFSET))(this);
		}

		::System::Void set_BattleResultBonusData(::RPG::Client::GridFightBattleResultBonus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleResultBonus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_BATTLERESULTBONUSDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentEffectData*>* get_BattleAugmentBonuses()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentEffectData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_BATTLEAUGMENTBONUSES_OFFSET))(this);
		}

		::System::Void set_BattleAugmentBonuses(::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentEffectData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentEffectData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_BATTLEAUGMENTBONUSES_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightBonusResultData* get_EliteBranchBonus()
		{
			return ((::RPG::Client::GridFightBonusResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_ELITEBRANCHBONUS_OFFSET))(this);
		}

		::System::Void set_EliteBranchBonus(::RPG::Client::GridFightBonusResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_ELITEBRANCHBONUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusResultData*>* get_OuterBonuses()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusResultData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_OUTERBONUSES_OFFSET))(this);
		}

		::System::Void set_OuterBonuses(::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusResultData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusResultData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_OUTERBONUSES_OFFSET))(this, a1);
		}

		::System::Boolean get_HasBattleResultBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASBATTLERESULTBONUS_OFFSET))(this);
		}
	};
}
