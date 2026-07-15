#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/RPG/Client/BaseLobby.h"

class Class_1_1DD6AC150642D284;
namespace RPG::Client { class CakeRaceFieldData; }
namespace RPG::Client { class CakeRaceParticipantData; }
namespace RPG::Client { class LobbyMemberData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACELOBBY_CHANGESELFSTATE_OFFSET UNITYSDK_OFFSET(0xBF2CCF0)
#define RPG_CLIENT_CAKERACELOBBY_GET_FIELDDATA_OFFSET UNITYSDK_OFFSET(0xBF2CFF0)
#define RPG_CLIENT_CAKERACELOBBY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xBF2D010)
#define RPG_CLIENT_CAKERACELOBBY_GET_LEADERPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0xBF2CFB0)
#define RPG_CLIENT_CAKERACELOBBY_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0xBF2CE10)
#define RPG_CLIENT_CAKERACELOBBY_GET_SELFPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0xBF2CFD0)
#define RPG_CLIENT_CAKERACELOBBY_SET_FIELDDATA_OFFSET UNITYSDK_OFFSET(0xBF2D000)
#define RPG_CLIENT_CAKERACELOBBY_SET_LEADERPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0xBF2CFC0)
#define RPG_CLIENT_CAKERACELOBBY_SET_SELFPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0xBF2CFE0)
#define RPG_CLIENT_CAKERACELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0xBF2CC90)
#define RPG_CLIENT_CAKERACELOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0xBF2D100)
#define RPG_CLIENT_CAKERACELOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0xBF2CD60)
#define RPG_CLIENT_CAKERACELOBBY__ISINMATCHEDSTATE_OFFSET UNITYSDK_OFFSET(0xBF2CF60)
#define RPG_CLIENT_CAKERACELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xBF2C400)
#define RPG_CLIENT_CAKERACELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xBF2CBF0)
#define RPG_CLIENT_CAKERACELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xBF2C610)
#define RPG_CLIENT_CAKERACELOBBY__ONROOMINIT_OFFSET UNITYSDK_OFFSET(0xBF2C460)
#define RPG_CLIENT_CAKERACELOBBY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xBF2CC40)
#define RPG_CLIENT_CAKERACELOBBY__SORTPARTICIPANTS_OFFSET UNITYSDK_OFFSET(0xBF2CE50)
#define RPG_CLIENT_CAKERACELOBBY__SYNCPARTICIPANTS_OFFSET UNITYSDK_OFFSET(0xBF2C660)
#define RPG_CLIENT_CAKERACELOBBY___SORTPARTICIPANTS_B__8_0_OFFSET UNITYSDK_OFFSET(0xBF2D160)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceLobby_TypeDefinitionIndex = 60271;

	class CakeRaceLobby : public ::RPG::Client::BaseLobby
	{
	public:
		::RPG::Client::CakeRaceFieldData* _FieldData_k__BackingField; // 0x60
		::RPG::Client::CakeRaceParticipantData* _LeaderParticipantData_k__BackingField; // 0x68
		::RPG::Client::CakeRaceParticipantData* _SelfParticipantData_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>* _Participants; // 0x78
		::System::Boolean _IsSorted; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__CTOR_OFFSET))(this);
		}

		::System::Void _OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnRoomInit(::Class_1_1DD6AC150642D284* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1DD6AC150642D284*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONROOMINIT_OFFSET))(this, a1);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _OnStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONSTATECHANGED_OFFSET))(this);
		}

		::System::Void StartMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_STARTMATCH_OFFSET))(this);
		}

		::System::Void ChangeSelfState(::Enum_3_63C076C405BE0674_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_CHANGESELFSTATE_OFFSET))(this, a1);
		}

		::System::Void _SyncParticipants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__SYNCPARTICIPANTS_OFFSET))(this);
		}

		::System::Void _SortParticipants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__SORTPARTICIPANTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _GetMembersByLobbyState()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET))(this);
		}

		::System::Boolean _IsInMatchedState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ISINMATCHEDSTATE_OFFSET))(this);
		}

		::RPG::Client::CakeRaceParticipantData* get_LeaderParticipantData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_LEADERPARTICIPANTDATA_OFFSET))(this);
		}

		::System::Void set_LeaderParticipantData(::RPG::Client::CakeRaceParticipantData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_SET_LEADERPARTICIPANTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceParticipantData* get_SelfParticipantData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_SELFPARTICIPANTDATA_OFFSET))(this);
		}

		::System::Void set_SelfParticipantData(::RPG::Client::CakeRaceParticipantData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_SET_SELFPARTICIPANTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>* get_Participants()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_PARTICIPANTS_OFFSET))(this);
		}

		::RPG::Client::CakeRaceFieldData* get_FieldData()
		{
			return ((::RPG::Client::CakeRaceFieldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_FIELDDATA_OFFSET))(this);
		}

		::System::Void set_FieldData(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_SET_FIELDDATA_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceLobby* get_Instance()
		{
			return ((::RPG::Client::CakeRaceLobby*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_INSTANCE_OFFSET))();
		}

		::System::Int32 __SortParticipants_b__8_0(::RPG::Client::CakeRaceParticipantData* a1, ::RPG::Client::CakeRaceParticipantData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___SORTPARTICIPANTS_B__8_0_OFFSET))(this, a1, a2);
		}
	};
}
