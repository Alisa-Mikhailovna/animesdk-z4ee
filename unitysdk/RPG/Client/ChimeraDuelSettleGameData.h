#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraDuelGameModeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_C5CE7B51AFDD139B;
namespace RPG::Client { class ChimeraDuelGameSession; }
namespace RPG::Client { class ChimeraDuelPlayerRankData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }

#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0xC13D1E0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_EXTRAREWARD_OFFSET UNITYSDK_OFFSET(0xC13D080)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEID_OFFSET UNITYSDK_OFFSET(0xC13D060)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0xC13D000)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0xC13D020)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISSHOWREWARD_OFFSET UNITYSDK_OFFSET(0xC13D1C0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xC13CE90)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_LIFECOUNT_OFFSET UNITYSDK_OFFSET(0xC13CFC0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0xC13CDF0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xC13CFE0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0xC13CE70)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_OLDRANKDATA_OFFSET UNITYSDK_OFFSET(0xC13CE30)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0xC13CED0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xC13CF60)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_REWARDITEMID_OFFSET UNITYSDK_OFFSET(0xC13D170)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xC13CEB0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xC13CF80)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SHOULDEXITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC13D040)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_TONEXTRANKSCORE_OFFSET UNITYSDK_OFFSET(0xC13CFA0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNTGOAL_OFFSET UNITYSDK_OFFSET(0xC13CE50)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0xC13CE10)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0xC13D1F0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEID_OFFSET UNITYSDK_OFFSET(0xC13D070)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0xC13D010)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0xC13D030)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISSHOWREWARD_OFFSET UNITYSDK_OFFSET(0xC13D1D0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xC13CEA0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_LIFECOUNT_OFFSET UNITYSDK_OFFSET(0xC13CFD0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MASTERID_OFFSET UNITYSDK_OFFSET(0xC13CE00)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xC13CFF0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0xC13CE80)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_OLDRANKDATA_OFFSET UNITYSDK_OFFSET(0xC13CE40)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0xC13CF70)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xC13CEC0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xC13CF90)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SHOULDEXITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC13D050)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_TONEXTRANKSCORE_OFFSET UNITYSDK_OFFSET(0xC13CFB0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNTGOAL_OFFSET UNITYSDK_OFFSET(0xC13CE60)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0xC13CE20)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC13CC40)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC1384D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelSettleGameData_TypeDefinitionIndex = 60537;

	class ChimeraDuelSettleGameData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelPlayerRankData* _OldRankData_k__BackingField; // 0x10
		::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _Chimeras_k__BackingField; // 0x18
		::System::UInt32 _ToNextRankScore_k__BackingField; // 0x20
		::System::UInt32 _MasterID_k__BackingField; // 0x24
		::System::UInt32 _WinCountGoal_k__BackingField; // 0x28
		::System::UInt32 _WinCount_k__BackingField; // 0x2C
		::System::UInt32 _LifeCount_k__BackingField; // 0x30
		::System::UInt32 _RoundCount_k__BackingField; // 0x34
		::System::UInt32 _Score_k__BackingField; // 0x38
		::RPG::Client::ChimeraDuelGameModeType _GameModeType_k__BackingField; // 0x3C
		::System::UInt32 _MaxLifeCount_k__BackingField; // 0x40
		::System::UInt32 _Rank_k__BackingField; // 0x44
		::System::UInt32 _GameID_k__BackingField; // 0x48
		::System::UInt32 _MaxWinCount_k__BackingField; // 0x4C
		::System::Boolean _IsWin_k__BackingField; // 0x50
		::System::Boolean _IsInLongTail_k__BackingField; // 0x51
		::System::Boolean _ShouldExitPuzzle_k__BackingField; // 0x52
		::System::Boolean _IsShowReward_k__BackingField; // 0x53

		::System::Void _ctor(::Class_1_C5CE7B51AFDD139B* a1, ::RPG::Client::ChimeraDuelGameSession* a2, ::RPG::Client::ChimeraDuelPlayerRankData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C5CE7B51AFDD139B*, ::RPG::Client::ChimeraDuelGameSession*, ::RPG::Client::ChimeraDuelPlayerRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA__CTOR_1_OFFSET))(this);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MASTERID_OFFSET))(this);
		}

		::System::Void set_MasterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MASTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_WinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNT_OFFSET))(this);
		}

		::System::Void set_WinCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelPlayerRankData* get_OldRankData()
		{
			return ((::RPG::Client::ChimeraDuelPlayerRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_OLDRANKDATA_OFFSET))(this);
		}

		::System::Void set_OldRankData(::RPG::Client::ChimeraDuelPlayerRankData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPlayerRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_OLDRANKDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_WinCountGoal()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNTGOAL_OFFSET))(this);
		}

		::System::Void set_WinCountGoal(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNTGOAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxWinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXWINCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxWinCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXWINCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_RoundCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ROUNDCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANKNAME_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_RANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ToNextRankScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_TONEXTRANKSCORE_OFFSET))(this);
		}

		::System::Void set_ToNextRankScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_TONEXTRANKSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LifeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_LIFECOUNT_OFFSET))(this);
		}

		::System::Void set_LifeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_LIFECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLifeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXLIFECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxLifeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXLIFECOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameModeType get_GameModeType()
		{
			return ((::RPG::Client::ChimeraDuelGameModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEMODETYPE_OFFSET))(this);
		}

		::System::Void set_GameModeType(::RPG::Client::ChimeraDuelGameModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEMODETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInLongTail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISINLONGTAIL_OFFSET))(this);
		}

		::System::Void set_IsInLongTail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISINLONGTAIL_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldExitPuzzle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SHOULDEXITPUZZLE_OFFSET))(this);
		}

		::System::Void set_ShouldExitPuzzle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SHOULDEXITPUZZLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_GameID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEID_OFFSET))(this);
		}

		::System::Void set_GameID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEID_OFFSET))(this, a1);
		}

		::RPG::Client::ItemDisplayData* get_ExtraReward()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_EXTRAREWARD_OFFSET))(this);
		}

		::System::Boolean get_IsShowReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISSHOWREWARD_OFFSET))(this);
		}

		::System::Void set_IsShowReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISSHOWREWARD_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_REWARDITEMID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_Chimeras()
		{
			return ((::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_CHIMERAS_OFFSET))(this);
		}

		::System::Void set_Chimeras(::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_CHIMERAS_OFFSET))(this, a1);
		}
	};
}
