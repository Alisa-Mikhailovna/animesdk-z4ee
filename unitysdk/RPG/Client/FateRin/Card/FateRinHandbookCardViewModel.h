#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinHandbookCardTabType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1269;
class Class_0_16E4307DCC419505_1289;
class Class_0_16E4307DCC419505_1304;
class Class_0_16E4307DCC419505_1305;
class Class_0_16E4307DCC419505_311;
class Class_1_4557C77922A20D8C;
class Class_1_5F4D64A4B97E38F9;
class Class_1_CC1C2BAFAFD12197;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Card { class IFateRinHandbookCardOwnerViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinHandbookCardTabViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
template <typename T> class Class_0_16E4307DCC419505_313;

#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ADD_ONTABCHANGE_OFFSET UNITYSDK_OFFSET(0xC4B6260)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC4B4C70)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GETCURTABCARDOWNERLIST_OFFSET UNITYSDK_OFFSET(0xC4B5660)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_ALLTABVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xC4B6200)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_CURTABREPORTNAME_OFFSET UNITYSDK_OFFSET(0xC4B6340)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SELECTTABACTION_OFFSET UNITYSDK_OFFSET(0xC4B6240)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SETHANDBOOKFUNCSEEN_OFFSET UNITYSDK_OFFSET(0xC4B6320)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_REMOVE_ONTABCHANGE_OFFSET UNITYSDK_OFFSET(0xC4B62C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SELECTTABACTION_OFFSET UNITYSDK_OFFSET(0xC4B6250)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SETHANDBOOKFUNCSEEN_OFFSET UNITYSDK_OFFSET(0xC4B6330)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B4350)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__GETCARDVIEWMODELLISTBYTABOWNERTYPE_OFFSET UNITYSDK_OFFSET(0xC4B58D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONCARDUNLOCKEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xC4B60B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSELECTTAB_OFFSET UNITYSDK_OFFSET(0xC4B6110)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSETHANDBOOKFUNCSEEN_OFFSET UNITYSDK_OFFSET(0xC4B6190)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHTABVIEWMODELSELECTSTATE_OFFSET UNITYSDK_OFFSET(0xC4B5E40)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC4B4D80)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinHandbookCardViewModel_TypeDefinitionIndex = 76232;

	class FateRinHandbookCardViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_0_16E4307DCC419505_1304* _CardVmFactory; // 0x20
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x28
		::Class_1_4557C77922A20D8C* _CardService; // 0x30
		::RPG::Client::FateRin::ViewModelEventHandler* OnTabChange; // 0x38
		::Class_0_16E4307DCC419505_1305* _TabVmFactory; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* _AllTabViewModelList; // 0x48
		::Class_0_16E4307DCC419505_1269* _RedDotService; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>* _AllCardOwnerViewModelList; // 0x58
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* _AllTabViewModelList_ReadOnly; // 0x60
		::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* _SelectTabAction_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::FateRin::Card::FateRinHandbookCardTabType, ::RPG::GameCore::FateRinHouguOwnerType>, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>*>* _CardOwnerViewModelCacheDict; // 0x70
		::Class_0_16E4307DCC419505_311* _SetHandbookFuncSeen_k__BackingField; // 0x78
		::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel* _CurSelectedTabVM; // 0x80

		::System::Void _ctor(::Class_1_4557C77922A20D8C* a1, ::Class_0_16E4307DCC419505_1304* a2, ::Class_0_16E4307DCC419505_1305* a3, ::Class_0_16E4307DCC419505_1289* a4, ::Class_0_16E4307DCC419505_1269* a5, ::Class_1_5F4D64A4B97E38F9* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4557C77922A20D8C*, ::Class_0_16E4307DCC419505_1304*, ::Class_0_16E4307DCC419505_1305*, ::Class_0_16E4307DCC419505_1289*, ::Class_0_16E4307DCC419505_1269*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>* GetCurTabCardOwnerList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GETCURTABCARDOWNERLIST_OFFSET))(this);
		}

		::System::Void _RefreshViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHVIEWMODEL_OFFSET))(this);
		}

		::System::Void _RefreshTabViewModelSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHTABVIEWMODELSELECTSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>* _GetCardViewModelListByTabOwnerType(::RPG::Client::FateRin::Card::FateRinHandbookCardTabType a1, ::RPG::GameCore::FateRinHouguOwnerType a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>*(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinHandbookCardTabType, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__GETCARDVIEWMODELLISTBYTABOWNERTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCardUnlockedMessage(::Class_1_CC1C2BAFAFD12197* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CC1C2BAFAFD12197*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONCARDUNLOCKEDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnSelectTab(::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSELECTTAB_OFFSET))(this, a1);
		}

		::System::Void _OnSetHandbookFuncSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSETHANDBOOKFUNCSEEN_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* get_AllTabViewModelList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_ALLTABVIEWMODELLIST_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* get_SelectTabAction()
		{
			return ((::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SELECTTABACTION_OFFSET))(this);
		}

		::System::Void set_SelectTabAction(::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SELECTTABACTION_OFFSET))(this, a1);
		}

		::System::Void add_OnTabChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ADD_ONTABCHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnTabChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_REMOVE_ONTABCHANGE_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_311* get_SetHandbookFuncSeen()
		{
			return ((::Class_0_16E4307DCC419505_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SETHANDBOOKFUNCSEEN_OFFSET))(this);
		}

		::System::Void set_SetHandbookFuncSeen(::Class_0_16E4307DCC419505_311* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_311*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SETHANDBOOKFUNCSEEN_OFFSET))(this, a1);
		}

		::System::String* get_CurTabReportName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_CURTABREPORTNAME_OFFSET))(this);
		}
	};
}
