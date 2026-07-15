#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8789FE9A7EA728A4_3;
class Class_1_BBFC2502164D3D92_2;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildManager; }
namespace RPG::Client::TrainParty { class TrainPartyCardAnimInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingCategoryInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingData; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingPassengerCardInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingRankInfo; }
namespace RPG::Client::TrainParty { class TrainPartySkillAnimInfo; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_ADDNEWCARDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD717530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_CHECKISUSEDBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD71A9B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETPLAYCARDBRIEFINFOLIST_OFFSET UNITYSDK_OFFSET(0xD71AB10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETPLAYSKILLBRIEFINFOLIST_OFFSET UNITYSDK_OFFSET(0xD71AB50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xD71AB90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETUNLOCKSTEPIDLIST_OFFSET UNITYSDK_OFFSET(0xD71ABD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETUSEDPASSENGERCARDLIST_OFFSET UNITYSDK_OFFSET(0xD71AAD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_BUILDMGR_OFFSET UNITYSDK_OFFSET(0xD71AD70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_FINALBUILDCOINTCNT_OFFSET UNITYSDK_OFFSET(0xD71AE90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_GOTBUILDCOINCNT_OFFSET UNITYSDK_OFFSET(0xD71ADF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_MATCHCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0xD71AD50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_OLDSCORE_OFFSET UNITYSDK_OFFSET(0xD71AD30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_ORIGINBUILDCOINCNT_OFFSET UNITYSDK_OFFSET(0xD71AE10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xD71AEF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xD71AD10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_ISNEWCARD_OFFSET UNITYSDK_OFFSET(0xD71AC50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SETUSEDPASSENGERCARDINFOS_OFFSET UNITYSDK_OFFSET(0xD7183C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_GOTBUILDCOINCNT_OFFSET UNITYSDK_OFFSET(0xD71AE00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_MATCHCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0xD71AD60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_OLDSCORE_OFFSET UNITYSDK_OFFSET(0xD71AD40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xD71AD20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD717130)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD7182F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO__REFRESHSETTLEINFO_OFFSET UNITYSDK_OFFSET(0xD71A920)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingResultInfo_TypeDefinitionIndex = 70942;

	class TrainPartyMeetingResultInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _UnlockStepIDList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* _UsedPassengerCardList; // 0x18
		::RPG::Client::TrainParty::TrainPartyMeetingData* _Owner; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _NewCardUniqueIDList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* _PlaySkillAnimList; // 0x30
		::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo* _MatchCategoryInfo_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardAnimInfo*>* _PlayCardAnimList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItemDataList; // 0x48
		::System::UInt32 _OldScore_k__BackingField; // 0x50
		::System::UInt32 _Score_k__BackingField; // 0x54
		::System::UInt32 _GotBuildCoinCnt_k__BackingField; // 0x58

		::System::Void _ctor(::RPG::Client::TrainParty::TrainPartyMeetingData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_BBFC2502164D3D92_2* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BBFC2502164D3D92_2*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SetUsedPassengerCardInfos(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SETUSEDPASSENGERCARDINFOS_OFFSET))(this, a1);
		}

		::System::Void AddNewCardUniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_ADDNEWCARDUNIQUEID_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsUsedByUniqueID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_CHECKISUSEDBYUNIQUEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* GetUsedPassengerCardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETUSEDPASSENGERCARDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardAnimInfo*>* GetPlayCardBriefInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyCardAnimInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETPLAYCARDBRIEFINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>* GetPlaySkillBriefInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartySkillAnimInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETPLAYSKILLBRIEFINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETREWARDITEMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* GetUnlockStepIDList()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GETUNLOCKSTEPIDLIST_OFFSET))(this);
		}

		::System::Boolean IsNewCard(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_ISNEWCARD_OFFSET))(this, a1);
		}

		::System::Void _RefreshSettleInfo(::Class_1_8789FE9A7EA728A4_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8789FE9A7EA728A4_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO__REFRESHSETTLEINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_SCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_OldScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_OLDSCORE_OFFSET))(this);
		}

		::System::Void set_OldScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_OLDSCORE_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo* get_MatchCategoryInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_MATCHCATEGORYINFO_OFFSET))(this);
		}

		::System::Void set_MatchCategoryInfo(::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_MATCHCATEGORYINFO_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildManager* get_BuildMgr()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_BUILDMGR_OFFSET))(this);
		}

		::System::UInt32 get_GotBuildCoinCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_GOTBUILDCOINCNT_OFFSET))(this);
		}

		::System::Void set_GotBuildCoinCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_SET_GOTBUILDCOINCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_OriginBuildCoinCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_ORIGINBUILDCOINCNT_OFFSET))(this);
		}

		::System::UInt32 get_FinalBuildCointCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_FINALBUILDCOINTCNT_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* get_RankInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGRESULTINFO_GET_RANKINFO_OFFSET))(this);
		}
	};
}
