#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraDuelGameSessionState.h"
#include "unitysdk/System/Object.h"

class Class_1_0319A031DCA9B495_11;
class Class_1_3E24FF02038E726C;
class Class_1_9934272986626D43;
class Class_1_AB73914F11091999_1;
namespace RPG::Client { class ChimeraDuelGameData; }
namespace RPG::Client { class ChimeraDuelGameSessionBattle; }
namespace RPG::Client { class ChimeraDuelGameSessionCache; }
namespace RPG::Client { class ChimeraDuelGameSessionCurrentRound; }
namespace RPG::Client { class ChimeraDuelGameSessionShop; }
namespace RPG::Client { class ChimeraDuelGameSessionTeam; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSION_CONSUMEDELAYEDCHANGES_OFFSET UNITYSDK_OFFSET(0xC11FE00)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0xC11F310)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_CREATELOCALGAMESESSION_OFFSET UNITYSDK_OFFSET(0xC11B170)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC11F520)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0xC11EFB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CACHE_OFFSET UNITYSDK_OFFSET(0xC11EF30)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTCOINCOUNT_OFFSET UNITYSDK_OFFSET(0xC11EF10)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xC11EEF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTROUND_OFFSET UNITYSDK_OFFSET(0xC11EF50)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTWINCOUNT_OFFSET UNITYSDK_OFFSET(0xC11EED0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_GAMEDATA_OFFSET UNITYSDK_OFFSET(0xC113A20)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_GAMEID_OFFSET UNITYSDK_OFFSET(0xC11EE50)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISGAMEINFOFEATUREUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC113930)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISLOCALGAMESESSION_OFFSET UNITYSDK_OFFSET(0xC11F030)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISNEWRARITYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC11EE60)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_SHOP_OFFSET UNITYSDK_OFFSET(0xC11EF90)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC11EFD0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xC11EF70)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_HANDLECHANGES_OFFSET UNITYSDK_OFFSET(0xC11FEA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_ISCHANGERELEVANT_OFFSET UNITYSDK_OFFSET(0xC11FCA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_ONENDROUNDBATTLESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xC11FAE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_ONENDROUNDSHOPSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xC11F820)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_ONNOTIFYCOINUPDATE_OFFSET UNITYSDK_OFFSET(0xC120930)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SAVEDELAYEDCHANGES_OFFSET UNITYSDK_OFFSET(0xC11FD10)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_BATTLE_OFFSET UNITYSDK_OFFSET(0xC11EFC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CACHE_OFFSET UNITYSDK_OFFSET(0xC11EF40)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTCOINCOUNT_OFFSET UNITYSDK_OFFSET(0xC11EF20)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xC11EF00)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTROUND_OFFSET UNITYSDK_OFFSET(0xC11EF60)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTWINCOUNT_OFFSET UNITYSDK_OFFSET(0xC11EEE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_ISLOCALGAMESESSION_OFFSET UNITYSDK_OFFSET(0xC11F040)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_SHOP_OFFSET UNITYSDK_OFFSET(0xC11EFA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_TEAM_OFFSET UNITYSDK_OFFSET(0xC11EF80)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xC11F050)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_TRYENDGAME_OFFSET UNITYSDK_OFFSET(0xC11F6B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION__CTOR_OFFSET UNITYSDK_OFFSET(0xC11F220)
#define RPG_CLIENT_CHIMERADUELGAMESESSION__SYNCGAMEINFO_OFFSET UNITYSDK_OFFSET(0xC11F890)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSession_TypeDefinitionIndex = 60513;

	class ChimeraDuelGameSession : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionCurrentRound* _CurrentRound_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Class_1_3E24FF02038E726C*>* _DelayedChanges; // 0x18
		::RPG::Client::ChimeraDuelGameSessionBattle* _Battle_k__BackingField; // 0x20
		::RPG::Client::ChimeraDuelGameSessionShop* _Shop_k__BackingField; // 0x28
		::RPG::Client::ChimeraDuelGameSessionCache* _Cache_k__BackingField; // 0x30
		::RPG::Client::ChimeraDuelGameSessionTeam* _Team_k__BackingField; // 0x38
		::System::UInt32 _GameID_k__BackingField; // 0x40
		::System::Boolean _IsLocalGameSession_k__BackingField; // 0x44
		::System::Int32 _CurrentLifeCount_k__BackingField; // 0x48
		::System::Int32 _CurrentWinCount_k__BackingField; // 0x4C
		::System::Int32 _CurrentCoinCount_k__BackingField; // 0x50

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_GameID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_GAMEID_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameData* get_GameData()
		{
			return ((::RPG::Client::ChimeraDuelGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_GAMEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsGameInfoFeatureUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISGAMEINFOFEATUREUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsNewRarityUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISNEWRARITYUNLOCKED_OFFSET))(this);
		}

		::System::Int32 get_CurrentWinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTWINCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentWinCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTWINCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentLifeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTLIFECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentLifeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTLIFECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentCoinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTCOINCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentCoinCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTCOINCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionCache* get_Cache()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CACHE_OFFSET))(this);
		}

		::System::Void set_Cache(::RPG::Client::ChimeraDuelGameSessionCache* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionCache*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CACHE_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionCurrentRound* get_CurrentRound()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionCurrentRound*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTROUND_OFFSET))(this);
		}

		::System::Void set_CurrentRound(::RPG::Client::ChimeraDuelGameSessionCurrentRound* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionCurrentRound*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTROUND_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionTeam* get_Team()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_TEAM_OFFSET))(this);
		}

		::System::Void set_Team(::RPG::Client::ChimeraDuelGameSessionTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_TEAM_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionShop* get_Shop()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShop*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_SHOP_OFFSET))(this);
		}

		::System::Void set_Shop(::RPG::Client::ChimeraDuelGameSessionShop* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionShop*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_SHOP_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionBattle* get_Battle()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_BATTLE_OFFSET))(this);
		}

		::System::Void set_Battle(::RPG::Client::ChimeraDuelGameSessionBattle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionBattle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_BATTLE_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionState get_State()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_IsLocalGameSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISLOCALGAMESESSION_OFFSET))(this);
		}

		::System::Void set_IsLocalGameSession(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_ISLOCALGAMESESSION_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChimeraDuelGameSession* TryCreate(::Class_1_AB73914F11091999_1* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSession*(*)(::Class_1_AB73914F11091999_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_TRYCREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraDuelGameSession* CreateFake(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSession*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_CREATEFAKE_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraDuelGameSession* CreateLocalGameSession(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSession*(*)(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_CREATELOCALGAMESESSION_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_DISPOSE_OFFSET))(this);
		}

		::System::Void TryEndGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_TRYENDGAME_OFFSET))(this);
		}

		::System::Void OnEndRoundShopStageScRsp(::Class_1_0319A031DCA9B495_11* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_ONENDROUNDSHOPSTAGESCRSP_OFFSET))(this, a1);
		}

		::System::Void OnEndRoundBattleStageScRsp(::Class_1_9934272986626D43* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9934272986626D43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_ONENDROUNDBATTLESTAGESCRSP_OFFSET))(this, a1);
		}

		::System::Void _SyncGameInfo(::Class_1_AB73914F11091999_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AB73914F11091999_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION__SYNCGAMEINFO_OFFSET))(this, a1);
		}

		::System::Boolean IsChangeRelevant(::Class_1_3E24FF02038E726C* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_3E24FF02038E726C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_ISCHANGERELEVANT_OFFSET))(this, a1);
		}

		::System::Void SaveDelayedChanges(::System::Collections::Generic::IEnumerable_1<::Class_1_3E24FF02038E726C*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_3E24FF02038E726C*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SAVEDELAYEDCHANGES_OFFSET))(this, a1);
		}

		::System::Void ConsumeDelayedChanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_CONSUMEDELAYEDCHANGES_OFFSET))(this);
		}

		::System::Void HandleChanges(::System::Collections::Generic::IEnumerable_1<::Class_1_3E24FF02038E726C*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_3E24FF02038E726C*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_HANDLECHANGES_OFFSET))(this, a1);
		}

		::System::Void OnNotifyCoinUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_ONNOTIFYCOINUPDATE_OFFSET))(this, a1);
		}
	};
}
