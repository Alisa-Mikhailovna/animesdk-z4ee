#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1141;
class Class_1_D40936EF3BF54118_94;
class Class_1_DE6E491FE63D8E69_6;
namespace RPG::Client::TrainParty { class TrainPartyCardData; }
namespace RPG::Client::TrainParty { template <typename T> class TrainPartyCacheDataList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ADDCARD_OFFSET UNITYSDK_OFFSET(0xD70B9C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD70B3B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETAVAILABLECARDLIST_OFFSET UNITYSDK_OFFSET(0xD70BDB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETCARDDATABYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD70BEE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0xD70BFA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET UNITYSDK_OFFSET(0xD70BFC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_LASTUSEDCARD_OFFSET UNITYSDK_OFFSET(0xD70BF80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xD70B370)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ONCARDUSED_OFFSET UNITYSDK_OFFSET(0xD70BC60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xD70B440)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_REMOVECARD_OFFSET UNITYSDK_OFFSET(0xD70BAF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_EXTRARATIO_OFFSET UNITYSDK_OFFSET(0xD70BFB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET UNITYSDK_OFFSET(0xD70BFD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_LASTUSEDCARD_OFFSET UNITYSDK_OFFSET(0xD70BF90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCCARDS_OFFSET UNITYSDK_OFFSET(0xD70B560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCEXTRARATIO_OFFSET UNITYSDK_OFFSET(0xD70B970)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xD70B4C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_USECARD_OFFSET UNITYSDK_OFFSET(0xD70BE30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD70BFE0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyCardManager_TypeDefinitionIndex = 70919;

	class TrainPartyCardManager : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyCardData* _LastUsedCard_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardData*>* _CurActionCardDatas; // 0x18
		::RPG::Client::TrainParty::TrainPartyCacheDataList_1<::RPG::Client::TrainParty::TrainPartyCardData*>* _CacheCardDataList; // 0x20
		::System::Int32 _ExtraRatio_k__BackingField; // 0x28
		::System::Boolean _HasModifyAllPassengerStatEffect_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ONEXITGAME_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_DE6E491FE63D8E69_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DE6E491FE63D8E69_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncExtraRatio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCEXTRARATIO_OFFSET))(this, a1);
		}

		::System::Void SyncCards(::Class_1_D40936EF3BF54118_94* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_94*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SYNCCARDS_OFFSET))(this, a1);
		}

		::System::Void AddCard(::Class_1_D17272E82AE804C2_1141* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1141*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ADDCARD_OFFSET))(this, a1);
		}

		::System::Void RemoveCard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_REMOVECARD_OFFSET))(this, a1);
		}

		::System::Void OnCardUsed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_ONCARDUSED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardData*>* GetAvailableCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETAVAILABLECARDLIST_OFFSET))(this);
		}

		::System::Void UseCard(::RPG::Client::TrainParty::TrainPartyCardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_USECARD_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyCardData* GetCardDataByUniqueID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GETCARDDATABYUNIQUEID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyCardData* get_LastUsedCard()
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_LASTUSEDCARD_OFFSET))(this);
		}

		::System::Void set_LastUsedCard(::RPG::Client::TrainParty::TrainPartyCardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_LASTUSEDCARD_OFFSET))(this, a1);
		}

		::System::Int32 get_ExtraRatio()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_EXTRARATIO_OFFSET))(this);
		}

		::System::Void set_ExtraRatio(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_EXTRARATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_HasModifyAllPassengerStatEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_GET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET))(this);
		}

		::System::Void set_HasModifyAllPassengerStatEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDMANAGER_SET_HASMODIFYALLPASSENGERSTATEFFECT_OFFSET))(this, a1);
		}
	};
}
