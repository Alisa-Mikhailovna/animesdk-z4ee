#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::ActivityMarble { class MarblePVPRankInfo; }
namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CANBEINVITED_OFFSET UNITYSDK_OFFSET(0xBC13130)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CREATELOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xBC0C490)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CREATEOTHERPLAYER_OFFSET UNITYSDK_OFFSET(0xBC0C720)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GETMARBLESEALTEAM_OFFSET UNITYSDK_OFFSET(0xBC13270)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBC13A10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_MARBLEGAMEMODE_OFFSET UNITYSDK_OFFSET(0xBC13AB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0xBC13A70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_PLAYERNAMESTR_OFFSET UNITYSDK_OFFSET(0xBC139B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xBC13A90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_MARBLEGAMEMODE_OFFSET UNITYSDK_OFFSET(0xBC13AC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0xBC13A80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xBC13AA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0xBC0C610)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xBC130C0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPPlayer_TypeDefinitionIndex = 71298;

	class MarblePVPPlayer : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarbleSealTeamSelection* _TeamSelection; // 0x10
		::RPG::Client::LobbyMemberData* _PlayerInfo_k__BackingField; // 0x18
		::RPG::Client::ActivityMarble::MarblePVPRankInfo* _RankInfo_k__BackingField; // 0x20
		::Enum_3_01618AD0437C8486_2 _MarbleGameMode_k__BackingField; // 0x28
		::System::Boolean _IsLocal; // 0x2C

		::System::Void _ctor(::RPG::Client::LobbyMemberData* a1, ::Enum_3_01618AD0437C8486_2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPPlayer* CreateLocalPlayer(::RPG::Client::LobbyMemberData* a1, ::Enum_3_01618AD0437C8486_2 a2)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPPlayer*(*)(::RPG::Client::LobbyMemberData*, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CREATELOCALPLAYER_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPPlayer* CreateOtherPlayer(::RPG::Client::LobbyMemberData* a1, ::Enum_3_01618AD0437C8486_2 a2)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPPlayer*(*)(::RPG::Client::LobbyMemberData*, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CREATEOTHERPLAYER_OFFSET))(a1, a2);
		}

		::System::Void Update(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_UPDATE_OFFSET))(this, a1);
		}

		static ::System::Boolean CanBeInvited(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_CANBEINVITED_OFFSET))(a1);
		}

		::RPG::Client::ActivityMarble::MarbleSealTeamSelection* GetMarbleSealTeam()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GETMARBLESEALTEAM_OFFSET))(this);
		}

		::System::String* get_PlayerNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_PLAYERNAMESTR_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::LobbyMemberData* get_PlayerInfo()
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_PLAYERINFO_OFFSET))(this);
		}

		::System::Void set_PlayerInfo(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_PLAYERINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePVPRankInfo* get_RankInfo()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPRankInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_RANKINFO_OFFSET))(this);
		}

		::System::Void set_RankInfo(::RPG::Client::ActivityMarble::MarblePVPRankInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPRankInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_RANKINFO_OFFSET))(this, a1);
		}

		::Enum_3_01618AD0437C8486_2 get_MarbleGameMode()
		{
			return ((::Enum_3_01618AD0437C8486_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_GET_MARBLEGAMEMODE_OFFSET))(this);
		}

		::System::Void set_MarbleGameMode(::Enum_3_01618AD0437C8486_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPPLAYER_SET_MARBLEGAMEMODE_OFFSET))(this, a1);
		}
	};
}
