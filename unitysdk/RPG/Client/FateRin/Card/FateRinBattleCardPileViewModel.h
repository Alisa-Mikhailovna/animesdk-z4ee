#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardPileType.h"

class Class_0_16E4307DCC419505_1289;
class Class_0_16E4307DCC419505_1290;
class Class_1_5F4D64A4B97E38F9;
class Class_1_B26E06FC40F846CD;
class Class_1_F4140148FE9021F9;
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardPileTypeViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC4AA890)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_GET_OPENTYPE_OFFSET UNITYSDK_OFFSET(0xC4AAAC0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_GET_PILETYPEVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xC4AAA80)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_SET_OPENTYPE_OFFSET UNITYSDK_OFFSET(0xC4AAAD0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC4AA0F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL__REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC4AAA40)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileViewModel_TypeDefinitionIndex = 76167;

	class FateRinBattleCardPileViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileTypeViewModel*>* _PileTypeViewModelList_ReadOnly; // 0x20
		::Class_0_16E4307DCC419505_1290* _CardVmFactory; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileTypeViewModel*>* _PileTypeViewModelList; // 0x30
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x38
		::Class_1_F4140148FE9021F9* _CardGameModel; // 0x40
		::Class_0_16E4307DCC419505_1289* _OwnerFactory; // 0x48
		::RPG::Client::FateRin::Card::FateRinBattleCardPileType _OpenType_k__BackingField; // 0x50

		::System::Void _ctor(::Class_1_B26E06FC40F846CD* a1, ::Class_0_16E4307DCC419505_1290* a2, ::Class_0_16E4307DCC419505_1289* a3, ::Class_1_5F4D64A4B97E38F9* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B26E06FC40F846CD*, ::Class_0_16E4307DCC419505_1290*, ::Class_0_16E4307DCC419505_1289*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Void _RefreshViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL__REFRESHVIEWMODEL_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileTypeViewModel*>* get_PileTypeViewModelList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileTypeViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_GET_PILETYPEVIEWMODELLIST_OFFSET))(this);
		}

		::RPG::Client::FateRin::Card::FateRinBattleCardPileType get_OpenType()
		{
			return ((::RPG::Client::FateRin::Card::FateRinBattleCardPileType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_GET_OPENTYPE_OFFSET))(this);
		}

		::System::Void set_OpenType(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILEVIEWMODEL_SET_OPENTYPE_OFFSET))(this, a1);
		}
	};
}
