#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerCheersGroupData; }
namespace RPG::Client { class DrinkMakerCheersGuestDrinkRecordData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC2CCF90)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_GUESTDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC2CD190)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_GUESTICON_OFFSET UNITYSDK_OFFSET(0xC2CD110)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_GUESTNAME_OFFSET UNITYSDK_OFFSET(0xC2CCFB0)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC2CD240)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_ONEMOREDRINKPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xC2CD460)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_PERFORMANCEIDBEFOREMAKEDRINK_OFFSET UNITYSDK_OFFSET(0xC2CD440)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_RECORDS_OFFSET UNITYSDK_OFFSET(0xC2CD480)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET__GROUPDATA_OFFSET UNITYSDK_OFFSET(0xC2CD060)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC2CCFA0)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_SET_ONEMOREDRINKPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xC2CD470)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_SET_PERFORMANCEIDBEFOREMAKEDRINK_OFFSET UNITYSDK_OFFSET(0xC2CD450)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_SET_RECORDS_OFFSET UNITYSDK_OFFSET(0xC2CD490)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC2C7120)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersGuestData_TypeDefinitionIndex = 60830;

	class DrinkMakerCheersGuestData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*>* _Records_k__BackingField; // 0x10
		::System::UInt32 _GroupID_k__BackingField; // 0x18
		::System::UInt32 _PerformanceIdBeforeMakeDrink_k__BackingField; // 0x1C
		::System::UInt32 _OneMoreDrinkPerformanceID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_GuestName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_GUESTNAME_OFFSET))(this);
		}

		::System::String* get_GuestIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_GUESTICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_GuestDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_GUESTDESCRIPTION_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::UInt32 get_PerformanceIdBeforeMakeDrink()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_PERFORMANCEIDBEFOREMAKEDRINK_OFFSET))(this);
		}

		::System::Void set_PerformanceIdBeforeMakeDrink(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_SET_PERFORMANCEIDBEFOREMAKEDRINK_OFFSET))(this, a1);
		}

		::System::UInt32 get_OneMoreDrinkPerformanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_ONEMOREDRINKPERFORMANCEID_OFFSET))(this);
		}

		::System::Void set_OneMoreDrinkPerformanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_SET_ONEMOREDRINKPERFORMANCEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*>* get_Records()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET_RECORDS_OFFSET))(this);
		}

		::System::Void set_Records(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerCheersGuestDrinkRecordData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_SET_RECORDS_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerCheersGroupData* get__GroupData()
		{
			return ((::RPG::Client::DrinkMakerCheersGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTDATA_GET__GROUPDATA_OFFSET))(this);
		}
	};
}
