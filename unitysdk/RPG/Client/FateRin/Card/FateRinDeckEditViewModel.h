#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1266;
class Class_0_16E4307DCC419505_1269;
class Class_0_16E4307DCC419505_1289;
class Class_0_16E4307DCC419505_1304;
class Class_0_16E4307DCC419505_311;
class Class_1_0950A81C001CB7BF;
class Class_1_4557C77922A20D8C;
class Class_1_5F4D64A4B97E38F9;
class Class_1_800F39F6EDBF75D7;
class Class_1_AE2EBF12D2D8D8EB;
class Class_1_E79EE3670D2EC49A;
class Class_1_F21160E71E8406C6;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Card { class FateRinSingleDeckEditViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_ADD_ONCURRENTDECKREFRESH_OFFSET UNITYSDK_OFFSET(0xC4B22F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_ADD_ONPAGEEXITCONFIRMED_OFFSET UNITYSDK_OFFSET(0xC4B23B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_CURRENTDECKINDEX_OFFSET UNITYSDK_OFFSET(0xC4B22B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_DECKS_OFFSET UNITYSDK_OFFSET(0xC4B1810)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_ISINPLOTMODE_OFFSET UNITYSDK_OFFSET(0xC4B22D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_TRYSAVEDECKSANDEXIT_OFFSET UNITYSDK_OFFSET(0xC4B2470)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_REMOVE_ONCURRENTDECKREFRESH_OFFSET UNITYSDK_OFFSET(0xC4B2350)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_REMOVE_ONPAGEEXITCONFIRMED_OFFSET UNITYSDK_OFFSET(0xC4B2410)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_SET_CURRENTDECKINDEX_OFFSET UNITYSDK_OFFSET(0xC4B22C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_SET_ISINPLOTMODE_OFFSET UNITYSDK_OFFSET(0xC4B22E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B04E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__DOSAVEDECKSANDEXIT_OFFSET UNITYSDK_OFFSET(0xC4B1850)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__GETCURRENTDECKINDEX_OFFSET UNITYSDK_OFFSET(0xC4B0E50)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__ONCURRENTDECKCHANGE_OFFSET UNITYSDK_OFFSET(0xC4B2240)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__TRYSAVEDECKSANDEXIT_OFFSET UNITYSDK_OFFSET(0xC4B0FB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL___TRYSAVEDECKSANDEXIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xC4B2480)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinDeckEditViewModel_TypeDefinitionIndex = 76204;

	class FateRinDeckEditViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::ViewModelEventHandler* OnPageExitConfirmed; // 0x20
		::RPG::Client::FateRin::ViewModelEventHandler* OnCurrentDeckRefresh; // 0x28
		::Class_1_800F39F6EDBF75D7* _DeckService; // 0x30
		::Class_0_16E4307DCC419505_1269* _RedDotService; // 0x38
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x40
		::Class_0_16E4307DCC419505_311* _TrySaveDecksAndExit_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::FateRinSingleDeckEditViewModel*>* _Decks; // 0x50
		::System::UInt32 _CurrentDeckIndex_k__BackingField; // 0x58
		::System::Boolean _IsInPlotMode_k__BackingField; // 0x5C

		::System::Void _ctor(::Class_0_16E4307DCC419505_1266* a1, ::Class_1_4557C77922A20D8C* a2, ::Class_1_800F39F6EDBF75D7* a3, ::Class_1_0950A81C001CB7BF* a4, ::Class_1_F21160E71E8406C6* a5, ::Class_1_E79EE3670D2EC49A* a6, ::Class_0_16E4307DCC419505_1269* a7, ::Class_0_16E4307DCC419505_1304* a8, ::Class_0_16E4307DCC419505_1289* a9, ::Class_1_5F4D64A4B97E38F9* a10)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1266*, ::Class_1_4557C77922A20D8C*, ::Class_1_800F39F6EDBF75D7*, ::Class_1_0950A81C001CB7BF*, ::Class_1_F21160E71E8406C6*, ::Class_1_E79EE3670D2EC49A*, ::Class_0_16E4307DCC419505_1269*, ::Class_0_16E4307DCC419505_1304*, ::Class_0_16E4307DCC419505_1289*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void _TrySaveDecksAndExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__TRYSAVEDECKSANDEXIT_OFFSET))(this);
		}

		::System::Void _DoSaveDecksAndExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__DOSAVEDECKSANDEXIT_OFFSET))(this);
		}

		::System::Void _OnCurrentDeckChange(::Class_1_AE2EBF12D2D8D8EB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AE2EBF12D2D8D8EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__ONCURRENTDECKCHANGE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCurrentDeckIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL__GETCURRENTDECKINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::FateRinSingleDeckEditViewModel*>* get_Decks()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::FateRinSingleDeckEditViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_DECKS_OFFSET))(this);
		}

		::System::UInt32 get_CurrentDeckIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_CURRENTDECKINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentDeckIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_SET_CURRENTDECKINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInPlotMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_ISINPLOTMODE_OFFSET))(this);
		}

		::System::Void set_IsInPlotMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_SET_ISINPLOTMODE_OFFSET))(this, a1);
		}

		::System::Void add_OnCurrentDeckRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_ADD_ONCURRENTDECKREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnCurrentDeckRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_REMOVE_ONCURRENTDECKREFRESH_OFFSET))(this, a1);
		}

		::System::Void add_OnPageExitConfirmed(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_ADD_ONPAGEEXITCONFIRMED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPageExitConfirmed(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_REMOVE_ONPAGEEXITCONFIRMED_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_311* get_TrySaveDecksAndExit()
		{
			return ((::Class_0_16E4307DCC419505_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL_GET_TRYSAVEDECKSANDEXIT_OFFSET))(this);
		}

		::System::Void __TrySaveDecksAndExit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL___TRYSAVEDECKSANDEXIT_B__1_0_OFFSET))(this);
		}
	};
}
