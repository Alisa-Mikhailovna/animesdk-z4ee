#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkDiceItem; }
namespace RPG::Client { class ClockParkInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKCARDINFO_ADDCARD_OFFSET UNITYSDK_OFFSET(0xC179550)
#define RPG_CLIENT_CLOCKPARKCARDINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xC1794B0)
#define RPG_CLIENT_CLOCKPARKCARDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1799D0)
#define RPG_CLIENT_CLOCKPARKCARDINFO_GET_CARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xC179D00)
#define RPG_CLIENT_CLOCKPARKCARDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC1791D0)
#define RPG_CLIENT_CLOCKPARKCARDINFO_ISALLCARDFILLEDWITHDICE_OFFSET UNITYSDK_OFFSET(0xC1792A0)
#define RPG_CLIENT_CLOCKPARKCARDINFO_REFRESHCARDACTIONEFFECT_OFFSET UNITYSDK_OFFSET(0xC179A70)
#define RPG_CLIENT_CLOCKPARKCARDINFO_SET_CARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xC179D10)
#define RPG_CLIENT_CLOCKPARKCARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC179D20)
#define RPG_CLIENT_CLOCKPARKCARDINFO__ONCARDITEMDICEDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xC179CB0)
#define RPG_CLIENT_CLOCKPARKCARDINFO__REFRESHCARDITEMACTIONEFFECTS_OFFSET UNITYSDK_OFFSET(0xC179C30)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkCardInfo_TypeDefinitionIndex = 58749;

	class ClockParkCardInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>* _CardItemList_k__BackingField; // 0x10
		::RPG::Client::ClockParkInstance* _OwnerInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ClockParkInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_INIT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllCardFilledWithDice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_ISALLCARDFILLEDWITHDICE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_CLEAR_OFFSET))(this);
		}

		::System::Void AddCard(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_ADDCARD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshCardActionEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_REFRESHCARDACTIONEFFECT_OFFSET))(this);
		}

		::System::Void _OnCardItemDiceDataRefresh(::RPG::Client::ClockParkCardItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO__ONCARDITEMDICEDATAREFRESH_OFFSET))(this, a1);
		}

		::System::Void _RefreshCardItemActionEffects(::RPG::Client::ClockParkCardItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO__REFRESHCARDITEMACTIONEFFECTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>* get_CardItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_GET_CARDITEMLIST_OFFSET))(this);
		}

		::System::Void set_CardItemList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_SET_CARDITEMLIST_OFFSET))(this, a1);
		}
	};
}
