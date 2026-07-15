#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FightActivityGroupInfo.h"
#include "unitysdk/System/Object.h"

class Class_1_7E9AC8675DA072FB_1;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTACTIVITYUTILS_ENDLESSEXTRAREWARDALLRECEIVE_OFFSET UNITYSDK_OFFSET(0xC5C9FF0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETCURRENTBATTLEROUNDLIMIT_OFFSET UNITYSDK_OFFSET(0xC5C7D00)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSBOOSTWAVE_OFFSET UNITYSDK_OFFSET(0xC5CA0D0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xC5C5AF0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDWAVES_OFFSET UNITYSDK_OFFSET(0xC5C7B40)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWAVEOFFSET_OFFSET UNITYSDK_OFFSET(0xC5C9E60)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWINWAVE_OFFSET UNITYSDK_OFFSET(0xC5C9D30)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETEXTRAREWARDQUESTDATA_OFFSET UNITYSDK_OFFSET(0xC5C9720)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETFIGHTGROUPSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC5C9350)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETGOTOMISSIONID_OFFSET UNITYSDK_OFFSET(0xC5C99A0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETINFOTIPSTIME_OFFSET UNITYSDK_OFFSET(0xC5CA170)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETINSCHEDULEFIGHTGROUPS_OFFSET UNITYSDK_OFFSET(0xC5C8760)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xC5C9BB0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETMONSTERIDSBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xC5C9030)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETNEWREDDOTGROUPS_OFFSET UNITYSDK_OFFSET(0xC5C51E0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETPREPARESUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xC5C73C0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETTRIALAVATARDATABYGROUPID_OFFSET UNITYSDK_OFFSET(0xC5C9C60)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GETUNIQUEREDDOTIDBYGROUPID_OFFSET UNITYSDK_OFFSET(0xC5C9DF0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_GET_EXTRAREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xC5C97C0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSAVAILEXTRAREWARD_OFFSET UNITYSDK_OFFSET(0xC5C9F90)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xC5C56A0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISEXTRAREWARDAVAIL_OFFSET UNITYSDK_OFFSET(0xC5C96D0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYBATTLE_OFFSET UNITYSDK_OFFSET(0xC5C9460)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0xC5C79D0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISMESSAGESUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xC5C9850)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xC5C8EE0)
#define RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONTOOK_OFFSET UNITYSDK_OFFSET(0xC5C9A50)

namespace RPG::Client
{
	inline static constexpr unsigned int FightActivityUtils_TypeDefinitionIndex = 61252;

	class FightActivityUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::FightActivityGroupInfo>* GetInScheduleFightGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightActivityGroupInfo>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETINSCHEDULEFIGHTGROUPS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Class_1_7E9AC8675DA072FB_1*>* GetNewReddotGroups()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7E9AC8675DA072FB_1*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETNEWREDDOTGROUPS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetMonsterIDsByStageID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETMONSTERIDSBYSTAGEID_OFFSET))(a1);
		}

		static ::RPG::Client::ScheduleData* GetFightGroupScheduleData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETFIGHTGROUPSCHEDULEDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsInFightActivityBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYBATTLE_OFFSET))();
		}

		static ::System::Boolean IsInFightActivityEndlessBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISINFIGHTACTIVITYENDLESSBATTLE_OFFSET))();
		}

		static ::System::Boolean IsExtraRewardAvail()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISEXTRAREWARDAVAIL_OFFSET))();
		}

		static ::RPG::Client::QuestData* GetExtraRewardQuestData()
		{
			return ((::RPG::Client::QuestData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETEXTRAREWARDQUESTDATA_OFFSET))();
		}

		static ::System::UInt32 get_ExtraRewardQuestID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GET_EXTRAREWARDQUESTID_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPrepareSubmissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETPREPARESUBMISSIONLIST_OFFSET))();
		}

		static ::System::Boolean IsPremissionFinish()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONFINISH_OFFSET))();
		}

		static ::System::Boolean IsMessageSubmissionFinish()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISMESSAGESUBMISSIONFINISH_OFFSET))();
		}

		static ::System::UInt32 GetGoToMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETGOTOMISSIONID_OFFSET))();
		}

		static ::System::Boolean IsPremissionTook()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ISPREMISSIONTOOK_OFFSET))();
		}

		static ::System::UInt32 GetMessageGroupID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETMESSAGEGROUPID_OFFSET))();
		}

		static ::RPG::AvatarSystem::IAvatar* GetTrialAvatarDataByGroupID(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETTRIALAVATARDATABYGROUPID_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurrentBattleRoundLimit()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETCURRENTBATTLEROUNDLIMIT_OFFSET))();
		}

		static ::System::UInt32 GetEndlessWinWave()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWINWAVE_OFFSET))();
		}

		static ::System::UInt32 GetUniqueReddotIDByGroupID(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETUNIQUEREDDOTIDBYGROUPID_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetEndlessWaveOffset(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSWAVEOFFSET_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* GetEndlessRewardWaves(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDWAVES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetEndlessRewardQuest(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSREWARDQUEST_OFFSET))(a1);
		}

		static ::System::Boolean HasEndlessQuestReward(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSQUESTREWARD_OFFSET))(a1);
		}

		static ::System::Boolean HasEndlessAvailExtraReward(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_HASENDLESSAVAILEXTRAREWARD_OFFSET))(a1, a2);
		}

		static ::System::Boolean EndlessExtraRewardAllReceive(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_ENDLESSEXTRAREWARDALLRECEIVE_OFFSET))(a1);
		}

		static ::System::UInt32 GetEndlessBoostWave()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETENDLESSBOOSTWAVE_OFFSET))();
		}

		static ::System::Single GetInfoTipsTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTACTIVITYUTILS_GETINFOTIPSTIME_OFFSET))();
		}
	};
}
