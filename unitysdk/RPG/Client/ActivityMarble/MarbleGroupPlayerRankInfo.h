#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }
namespace RPG::GameCore { class MarbleMatchGroupStageRankRow; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBC04CB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_CREATEPLAYERRANKINFO_OFFSET UNITYSDK_OFFSET(0xBC04C10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBC04DA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_GET_LOSSCOUNT_OFFSET UNITYSDK_OFFSET(0xBC04F50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0xBC04DF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0xBC04EB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_GET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0xBC04F00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBC04C90)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleGroupPlayerRankInfo_TypeDefinitionIndex = 71279;

	class MarbleGroupPlayerRankInfo : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarblePvePlayer* _Player; // 0x10
		::RPG::GameCore::MarbleMatchGroupStageRankRow* _Row; // 0x18
		::System::UInt32 _PlayerID; // 0x20

		::System::Void _ctor(::RPG::GameCore::MarbleMatchGroupStageRankRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleMatchGroupStageRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo* CreatePlayerRankInfo(::RPG::GameCore::MarbleMatchGroupStageRankRow* a1)
		{
			return ((::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*(*)(::RPG::GameCore::MarbleMatchGroupStageRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_CREATEPLAYERRANKINFO_OFFSET))(a1);
		}

		::System::Int32 CompareTo(::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_COMPARETO_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePvePlayer* get_Player()
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_GET_PLAYER_OFFSET))(this);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_GET_INDEX_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_WinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_GET_WINCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_LossCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPPLAYERRANKINFO_GET_LOSSCOUNT_OFFSET))(this);
		}
	};
}
