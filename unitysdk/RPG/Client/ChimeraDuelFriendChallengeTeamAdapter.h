#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_827FD69C8A8AE28F;
namespace RPG::Client { class ChimeraDuelChallengeGameSession; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC11B850)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_DOCHALLENGE_OFFSET UNITYSDK_OFFSET(0xC11AF50)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0xC11B7F0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC11B2F0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_FRIENDCHALLENGEMASTERICON_OFFSET UNITYSDK_OFFSET(0xC11B690)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0xC11B250)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERFIGURE_OFFSET UNITYSDK_OFFSET(0xC11B540)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0xC115520)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC11B200)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xC11B4F0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKICON_OFFSET UNITYSDK_OFFSET(0xC11B770)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0xC115580)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0xC11B430)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_UID_OFFSET UNITYSDK_OFFSET(0xC1154B0)
#define RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC116B70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelFriendChallengeTeamAdapter_TypeDefinitionIndex = 60510;

	class ChimeraDuelFriendChallengeTeamAdapter : public ::System::Object
	{
	public:
		::Class_1_827FD69C8A8AE28F* _FriendData; // 0x10
		::RPG::Client::ChimeraDuelChallengeGameSession* _Session; // 0x18

		::System::Void _ctor(::Class_1_827FD69C8A8AE28F* a1, ::RPG::Client::ChimeraDuelChallengeGameSession* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_827FD69C8A8AE28F*, ::RPG::Client::ChimeraDuelChallengeGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DoChallenge(::RPG::Client::ChimeraDuelPvpTeamSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_DOCHALLENGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_UID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_HEADICON_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERID_OFFSET))(this);
		}

		::System::String* get_MasterFigure()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_MASTERFIGURE_OFFSET))(this);
		}

		::System::String* get_FriendChallengeMasterIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_FRIENDCHALLENGEMASTERICON_OFFSET))(this);
		}

		::System::UInt32 get_RankLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKLEVEL_OFFSET))(this);
		}

		::System::String* get_RankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_RANKNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_Chimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_GET_CHIMERAS_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::ChimeraDuelFriendChallengeTeamAdapter* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelFriendChallengeTeamAdapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDCHALLENGETEAMADAPTER_COMPARETO_OFFSET))(this, a1);
		}
	};
}
