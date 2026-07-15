#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_775;
class Class_1_7F6A638FBAAEC90B_3;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBossFriendLineupRecommendation; }
namespace RPG::Client { class ChallengePeakBossStatisticsLineupRecommendation; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakNormalFriendLineupRecommendation; }
namespace RPG::Client { class ChallengePeakNormalStatisticsLineupRecommendation; }
namespace RPG::Client { class ChallengePeakTeam; }
namespace RPG::Client { class ChallengePeakTeamApplier; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_APPLYTEAM_OFFSET UNITYSDK_OFFSET(0xBFC1940)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMHASCHANGED_OFFSET UNITYSDK_OFFSET(0xBFC0E90)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMISEMPTY_OFFSET UNITYSDK_OFFSET(0xBFC0CB0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMNEEDFORCESAVE_OFFSET UNITYSDK_OFFSET(0xBFC1070)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0xBFC16D0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARRECOMMENDATIONS_OFFSET UNITYSDK_OFFSET(0xBFC18B0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xBFAFA20)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_FILLLINEUPCONFLICTCHALLENGEPEAKSTO_OFFSET UNITYSDK_OFFSET(0xBFC0550)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETALLAVATARSOFNORMALLEVEL_OFFSET UNITYSDK_OFFSET(0xBFC1AE0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETBOSSTEAM_OFFSET UNITYSDK_OFFSET(0xBFC1AA0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAMBYID_OFFSET UNITYSDK_OFFSET(0xBFC1250)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAM_OFFSET UNITYSDK_OFFSET(0xBFC0C20)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xBFC0020)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xBFC0000)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0xBFBFF20)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFTEAMSLOTS_OFFSET UNITYSDK_OFFSET(0xBFBFF70)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xBFBFFE0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xBFBFFC0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETBOSSTEAM_OFFSET UNITYSDK_OFFSET(0xBFC15E0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0xBFC13C0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xBFC0030)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xBFC0010)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xBFBFFF0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xBFBFFD0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKEQUIPMENTSOFSNAPSHOTAREEQUIPPEDBYTEAM_OFFSET UNITYSDK_OFFSET(0xBFC1B40)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKHAVEEQUIPMENTCONFLICT_OFFSET UNITYSDK_OFFSET(0xBFC0880)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CREATENORMALAVATARSOURCE_OFFSET UNITYSDK_OFFSET(0xBFC0140)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC0040)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0xBFC01B0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITRECOMMENDATIONS_OFFSET UNITYSDK_OFFSET(0xBFC03A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeamContext_TypeDefinitionIndex = 60408;

	class ChallengePeakTeamContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTeam*>* _NormalTeams; // 0x10
		::RPG::Client::ChallengePeakGroup* _PeakGroup; // 0x18
		::Class_0_16E4307DCC419505_775* _NormalAvatarSource; // 0x20
		::RPG::Client::ChallengePeakTeam* _BossTeam; // 0x28
		::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation* _BossStatisticRecommendation_k__BackingField; // 0x30
		::RPG::Client::ChallengePeakNormalFriendLineupRecommendation* _NormalFriendRecommendation_k__BackingField; // 0x38
		::RPG::Client::ChallengePeakBossFriendLineupRecommendation* _BossFriendRecommendation_k__BackingField; // 0x40
		::Class_0_16E4307DCC419505_775* _BossAvatarSource; // 0x48
		::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation* _NormalStatisticRecommendation_k__BackingField; // 0x50

		::System::Void _ctor(::RPG::Client::ChallengePeakGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CountOfNormalTeams()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFNORMALTEAMS_OFFSET))(this);
		}

		::System::Int32 get_CountOfTeamSlots()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFTEAMSLOTS_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation* get_NormalStatisticRecommendation()
		{
			return ((::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALSTATISTICRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_NormalStatisticRecommendation(::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALSTATISTICRECOMMENDATION_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakNormalFriendLineupRecommendation* get_NormalFriendRecommendation()
		{
			return ((::RPG::Client::ChallengePeakNormalFriendLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALFRIENDRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_NormalFriendRecommendation(::RPG::Client::ChallengePeakNormalFriendLineupRecommendation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakNormalFriendLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALFRIENDRECOMMENDATION_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation* get_BossStatisticRecommendation()
		{
			return ((::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSSTATISTICRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_BossStatisticRecommendation(::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSSTATISTICRECOMMENDATION_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakBossFriendLineupRecommendation* get_BossFriendRecommendation()
		{
			return ((::RPG::Client::ChallengePeakBossFriendLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSFRIENDRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_BossFriendRecommendation(::RPG::Client::ChallengePeakBossFriendLineupRecommendation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBossFriendLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSFRIENDRECOMMENDATION_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengePeakTeamContext* Create(::RPG::Client::ChallengePeakGroup* a1)
		{
			return ((::RPG::Client::ChallengePeakTeamContext*(*)(::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CREATE_OFFSET))(a1);
		}

		::System::Void FillLineupConflictChallengePeaksTo(::RPG::Client::ChallengePeak* a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::ChallengePeak*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*, ::System::Collections::Generic::ICollection_1<::RPG::Client::ChallengePeak*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_FILLLINEUPCONFLICTCHALLENGEPEAKSTO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengePeakTeam* GetNormalTeam(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAM_OFFSET))(this, a1);
		}

		::System::Boolean CheckAnyNormalTeamIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMISEMPTY_OFFSET))(this);
		}

		::System::Boolean CheckAnyNormalTeamHasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMHASCHANGED_OFFSET))(this);
		}

		::System::Boolean CheckAnyNormalTeamNeedForceSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMNEEDFORCESAVE_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakTeam* GetNormalTeamByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAMBYID_OFFSET))(this, a1);
		}

		::System::Void ResetNormalTeams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETNORMALTEAMS_OFFSET))(this);
		}

		::System::Void ResetBossTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETBOSSTEAM_OFFSET))(this);
		}

		::System::Void ClearNormalTeams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARNORMALTEAMS_OFFSET))(this);
		}

		::System::Void ClearRecommendations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARRECOMMENDATIONS_OFFSET))(this);
		}

		::System::Void ApplyTeam(::RPG::Client::ChallengePeakTeamApplier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakTeamApplier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_APPLYTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakTeam* GetBossTeam()
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETBOSSTEAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllAvatarsOfNormalLevel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETALLAVATARSOFNORMALLEVEL_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_775* _CreateNormalAvatarSource()
		{
			return ((::Class_0_16E4307DCC419505_775*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CREATENORMALAVATARSOURCE_OFFSET))(this);
		}

		::System::Void _InitNormalTeams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITNORMALTEAMS_OFFSET))(this);
		}

		::System::Boolean _CheckHaveEquipmentConflict(::RPG::Client::ChallengePeak* a1, ::RPG::Client::ChallengePeak* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKHAVEEQUIPMENTCONFLICT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckEquipmentsOfSnapshotAreEquippedByTeam(::Class_1_7F6A638FBAAEC90B_3* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_3*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKEQUIPMENTSOFSNAPSHOTAREEQUIPPEDBYTEAM_OFFSET))(this, a1, a2);
		}

		::System::Void _InitRecommendations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITRECOMMENDATIONS_OFFSET))(this);
		}
	};
}
