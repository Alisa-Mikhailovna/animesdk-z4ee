#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1262;
class Class_0_16E4307DCC419505_1269;
class Class_0_16E4307DCC419505_1289;
class Class_0_16E4307DCC419505_1304;
class Class_0_16E4307DCC419505_311;
class Class_1_4557C77922A20D8C;
class Class_1_5F4D64A4B97E38F9;
class Class_1_800F39F6EDBF75D7;
class Class_1_E79EE3670D2EC49A;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Card { class IFateRinCardDeckViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_313;

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_ADD_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0xC4B9AB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CANREPLACECARD_OFFSET UNITYSDK_OFFSET(0xC4B9A30)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0xC4B9A50)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_INCOMINGCARD_OFFSET UNITYSDK_OFFSET(0xC4B9A10)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_REPLACECARD_OFFSET UNITYSDK_OFFSET(0xC4B9A80)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SELECTCARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0xC4B9A70)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SHOWDECKVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0xC4B9AA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SKIPREPLACECARD_OFFSET UNITYSDK_OFFSET(0xC4B9A90)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET__CURRENTDECK_OFFSET UNITYSDK_OFFSET(0xC4B9B70)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xC4B7E90)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_REMOVE_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0xC4B9B10)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CANREPLACECARD_OFFSET UNITYSDK_OFFSET(0xC4B9A40)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0xC4B9A60)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_INCOMINGCARD_OFFSET UNITYSDK_OFFSET(0xC4B9A20)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET__CURRENTDECK_OFFSET UNITYSDK_OFFSET(0xC4B9B80)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4B9B90)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B7B00)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__FINDRECOMMENDEDCARD_OFFSET UNITYSDK_OFFSET(0xC4B84F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__INITCANREPLACECARD_OFFSET UNITYSDK_OFFSET(0xC4B80C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPLACECARD_OFFSET UNITYSDK_OFFSET(0xC4B8FB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPORTREPLACECARD_OFFSET UNITYSDK_OFFSET(0xC4B9340)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SELECTCARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0xC4B8C00)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SETINCOMINGCOLLECTABLECARDSEEN_OFFSET UNITYSDK_OFFSET(0xC4B9800)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SHOWDECKVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0xC4B9970)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SKIPREPLACECARD_OFFSET UNITYSDK_OFFSET(0xC4B92C0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinReplaceCardViewModel_TypeDefinitionIndex = 76211;

	class FateRinReplaceCardViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_DefaultReplacementCardIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinReplaceCardViewModel_TypeDefinitionIndex)->GetStaticField(0xBAD0);
		}
		::Class_1_800F39F6EDBF75D7* _DeckService; // 0x20
		::Class_0_16E4307DCC419505_311* _SkipReplaceCard_k__BackingField; // 0x28
		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* __CurrentDeck_k__BackingField; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _CanReplaceCard_k__BackingField; // 0x38
		::Class_0_16E4307DCC419505_311* _ShowDeckViewDialog_k__BackingField; // 0x40
		::Class_0_16E4307DCC419505_1304* _CardVmFactory; // 0x48
		::RPG::Client::FateRin::ViewModelEventHandler* OnNotifyExit; // 0x50
		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* _IncomingCard_k__BackingField; // 0x58
		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* _CardToBeReplaced_k__BackingField; // 0x60
		::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _SelectCardToBeReplaced_k__BackingField; // 0x68
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x70
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x78
		::Class_0_16E4307DCC419505_311* _ReplaceCard_k__BackingField; // 0x80
		::Class_1_4557C77922A20D8C* _CardService; // 0x88
		::Class_0_16E4307DCC419505_1269* _RedDotService; // 0x90
		::Class_0_16E4307DCC419505_1289* _OwnerVmFactory; // 0x98
		::Class_0_16E4307DCC419505_1262* _DeckRepository; // 0xA0
		::System::Boolean _HasReported; // 0xA8

		::System::Void _ctor(::Class_0_16E4307DCC419505_1262* a1, ::Class_1_4557C77922A20D8C* a2, ::Class_1_800F39F6EDBF75D7* a3, ::Class_1_E79EE3670D2EC49A* a4, ::Class_0_16E4307DCC419505_1304* a5, ::Class_0_16E4307DCC419505_1289* a6, ::Class_0_16E4307DCC419505_1269* a7, ::Class_1_5F4D64A4B97E38F9* a8)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1262*, ::Class_1_4557C77922A20D8C*, ::Class_1_800F39F6EDBF75D7*, ::Class_1_E79EE3670D2EC49A*, ::Class_0_16E4307DCC419505_1304*, ::Class_0_16E4307DCC419505_1289*, ::Class_0_16E4307DCC419505_1269*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__CCTOR_OFFSET))();
		}

		::System::Void Init(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_INIT_OFFSET))(this, a1);
		}

		::System::Void _InitCanReplaceCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__INITCANREPLACECARD_OFFSET))(this);
		}

		::System::Void _SelectCardToBeReplaced(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SELECTCARDTOBEREPLACED_OFFSET))(this, a1);
		}

		::System::Void _ReplaceCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPLACECARD_OFFSET))(this);
		}

		::System::Void _SkipReplaceCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SKIPREPLACECARD_OFFSET))(this);
		}

		::System::Void _ReportReplaceCard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPORTREPLACECARD_OFFSET))(this, a1);
		}

		::System::Void _SetIncomingCollectableCardSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SETINCOMINGCOLLECTABLECARDSEEN_OFFSET))(this);
		}

		::System::Void _ShowDeckViewDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SHOWDECKVIEWDIALOG_OFFSET))(this);
		}

		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* _FindRecommendedCard(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__FINDRECOMMENDEDCARD_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* get_IncomingCard()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_INCOMINGCARD_OFFSET))(this);
		}

		::System::Void set_IncomingCard(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_INCOMINGCARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_CanReplaceCard()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CANREPLACECARD_OFFSET))(this);
		}

		::System::Void set_CanReplaceCard(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CANREPLACECARD_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* get_CardToBeReplaced()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CARDTOBEREPLACED_OFFSET))(this);
		}

		::System::Void set_CardToBeReplaced(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CARDTOBEREPLACED_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_SelectCardToBeReplaced()
		{
			return ((::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SELECTCARDTOBEREPLACED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_311* get_ReplaceCard()
		{
			return ((::Class_0_16E4307DCC419505_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_REPLACECARD_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_311* get_SkipReplaceCard()
		{
			return ((::Class_0_16E4307DCC419505_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SKIPREPLACECARD_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_311* get_ShowDeckViewDialog()
		{
			return ((::Class_0_16E4307DCC419505_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SHOWDECKVIEWDIALOG_OFFSET))(this);
		}

		::System::Void add_OnNotifyExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_ADD_ONNOTIFYEXIT_OFFSET))(this, a1);
		}

		::System::Void remove_OnNotifyExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_REMOVE_ONNOTIFYEXIT_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* get__CurrentDeck()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET__CURRENTDECK_OFFSET))(this);
		}

		::System::Void set__CurrentDeck(::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET__CURRENTDECK_OFFSET))(this, a1);
		}
	};
}
