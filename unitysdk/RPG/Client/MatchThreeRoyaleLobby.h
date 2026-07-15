#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/RPG/Client/BaseLobby.h"

namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client { class MatchThreeOpponentData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFBIRD_OFFSET UNITYSDK_OFFSET(0xCB61F90)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFSTATE_OFFSET UNITYSDK_OFFSET(0xCB623B0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GETCUROPPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0xCB628D0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GETOPPONENTDATABYUID_OFFSET UNITYSDK_OFFSET(0xCB62620)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GETPROCESSEDOPPONENTS_OFFSET UNITYSDK_OFFSET(0xCB629F0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0xCB63220)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_GET_SELFOPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xCB62330)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_SAVECURUSEBIRD_OFFSET UNITYSDK_OFFSET(0xCB62720)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_SET_OPPONENTS_OFFSET UNITYSDK_OFFSET(0xCB63230)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0xCB620D0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0xCB63240)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0xCB63120)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ISINMATCHEDSTATE_OFFSET UNITYSDK_OFFSET(0xCB631D0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xCB62D10)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xCB630D0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xCB62E00)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY__SYNCOPPONENTS_OFFSET UNITYSDK_OFFSET(0xCB62E50)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeRoyaleLobby_TypeDefinitionIndex = 63127;

	class MatchThreeRoyaleLobby : public ::RPG::Client::BaseLobby
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* _Opponents_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__CTOR_OFFSET))(this);
		}

		::System::Void ChangeSelfBird(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFBIRD_OFFSET))(this, a1);
		}

		::System::Void StartMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_STARTMATCH_OFFSET))(this);
		}

		::System::Void ChangeSelfState(::Enum_3_63C076C405BE0674_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_CHANGESELFSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeOpponentData* GetOpponentDataByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_GETOPPONENTDATABYUID_OFFSET))(this, a1);
		}

		::System::Void SaveCurUseBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_SAVECURUSEBIRD_OFFSET))(this);
		}

		::System::Int32 GetCurOpponentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_GETCUROPPONENTCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* GetProcessedOpponents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_GETPROCESSEDOPPONENTS_OFFSET))(this);
		}

		::System::Void _OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _SyncOpponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__SYNCOPPONENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _GetMembersByLobbyState()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET))(this);
		}

		::System::Boolean _IsInMatchedState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY__ISINMATCHEDSTATE_OFFSET))(this);
		}

		::RPG::Client::MatchThreeOpponentData* get_SelfOpponentData()
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_GET_SELFOPPONENTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* get_Opponents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_GET_OPPONENTS_OFFSET))(this);
		}

		::System::Void set_Opponents(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeOpponentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY_SET_OPPONENTS_OFFSET))(this, a1);
		}
	};
}
