#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_3;
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakTag; }
namespace RPG::Client { class ChallengePeakTarget; }
namespace RPG::Client { class ChallengePeak_IServerAgent; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ChallengePeakConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAK_CHECKTARGETHASFINISHED_OFFSET UNITYSDK_OFFSET(0xBFA6110)
#define RPG_CLIENT_CHALLENGEPEAK_CREATE_OFFSET UNITYSDK_OFFSET(0xBFA5A50)
#define RPG_CLIENT_CHALLENGEPEAK_FILLAVATARSNAPSHOTSTO_OFFSET UNITYSDK_OFFSET(0xBFA6A80)
#define RPG_CLIENT_CHALLENGEPEAK_FILLLINEUPAVATARBASEIDSTO_OFFSET UNITYSDK_OFFSET(0xBFA6970)
#define RPG_CLIENT_CHALLENGEPEAK_GETBESTRECORDLINEUPAVATARICONPATHS_OFFSET UNITYSDK_OFFSET(0xBFA6C20)
#define RPG_CLIENT_CHALLENGEPEAK_GETBOSS_OFFSET UNITYSDK_OFFSET(0xBFA51C0)
#define RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETSINBESTRECORD_OFFSET UNITYSDK_OFFSET(0xBFA65E0)
#define RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETS_OFFSET UNITYSDK_OFFSET(0xBFA6400)
#define RPG_CLIENT_CHALLENGEPEAK_GETMINUSETURNINBESTRECORD_OFFSET UNITYSDK_OFFSET(0xBFA7180)
#define RPG_CLIENT_CHALLENGEPEAK_GETMINUSETURN_OFFSET UNITYSDK_OFFSET(0xBFA7020)
#define RPG_CLIENT_CHALLENGEPEAK_GETMONSTERBYINDEX_OFFSET UNITYSDK_OFFSET(0xBFA6B90)
#define RPG_CLIENT_CHALLENGEPEAK_GETTAGBYINDEX_OFFSET UNITYSDK_OFFSET(0xBFA68E0)
#define RPG_CLIENT_CHALLENGEPEAK_GETTARGETBYINDEX_OFFSET UNITYSDK_OFFSET(0xBFA6370)
#define RPG_CLIENT_CHALLENGEPEAK_GETTARGETINDEXBYID_OFFSET UNITYSDK_OFFSET(0xBFA67B0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFMONSTERS_OFFSET UNITYSDK_OFFSET(0xBFA56F0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFTAGS_OFFSET UNITYSDK_OFFSET(0xBFA5740)
#define RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFTARGETS_OFFSET UNITYSDK_OFFSET(0xBFA56A0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xBFA4FE0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_EVENTIDLIST_OFFSET UNITYSDK_OFFSET(0xBFA5030)
#define RPG_CLIENT_CHALLENGEPEAK_GET_GROUP_OFFSET UNITYSDK_OFFSET(0xBFA4D20)
#define RPG_CLIENT_CHALLENGEPEAK_GET_HPPROGRESSVALUELIST_OFFSET UNITYSDK_OFFSET(0xBFA50D0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ID_OFFSET UNITYSDK_OFFSET(0xBFA4D30)
#define RPG_CLIENT_CHALLENGEPEAK_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBFA5120)
#define RPG_CLIENT_CHALLENGEPEAK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBFA4DF0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISLOCKEDTEAM_OFFSET UNITYSDK_OFFSET(0xBFA5880)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISPASSEDINBESTRECORD_OFFSET UNITYSDK_OFFSET(0xBFA5460)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xBFA52B0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISPERFECTPASSED_OFFSET UNITYSDK_OFFSET(0xBFA5910)
#define RPG_CLIENT_CHALLENGEPEAK_GET_ISQUICKPASSED_OFFSET UNITYSDK_OFFSET(0xBFA55C0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_KILLPROGRESSVALUELIST_OFFSET UNITYSDK_OFFSET(0xBFA5080)
#define RPG_CLIENT_CHALLENGEPEAK_GET_MONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0xBFA5210)
#define RPG_CLIENT_CHALLENGEPEAK_GET_NORMALTARGETLIST_OFFSET UNITYSDK_OFFSET(0xBFA4F90)
#define RPG_CLIENT_CHALLENGEPEAK_GET_TEAMMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xBFA58D0)
#define RPG_CLIENT_CHALLENGEPEAK_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xBFA4D80)
#define RPG_CLIENT_CHALLENGEPEAK_GET_TURNLIMIT_OFFSET UNITYSDK_OFFSET(0xBFA5790)
#define RPG_CLIENT_CHALLENGEPEAK__CTOR_OFFSET UNITYSDK_OFFSET(0xBFA5BB0)
#define RPG_CLIENT_CHALLENGEPEAK__GET_ISPERFECTPASSED_B__48_0_OFFSET UNITYSDK_OFFSET(0xBFA7490)
#define RPG_CLIENT_CHALLENGEPEAK__INITMONSTERS_OFFSET UNITYSDK_OFFSET(0xBFA5EA0)
#define RPG_CLIENT_CHALLENGEPEAK__INITTAGS_OFFSET UNITYSDK_OFFSET(0xBFA5FB0)
#define RPG_CLIENT_CHALLENGEPEAK__INITTARGETS_OFFSET UNITYSDK_OFFSET(0xBFA5C60)
#define RPG_CLIENT_CHALLENGEPEAK___INITTARGETS_B__64_0_OFFSET UNITYSDK_OFFSET(0xBFA7550)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeak_TypeDefinitionIndex = 60366;

	class ChallengePeak : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _Monsters; // 0x10
		::RPG::GameCore::ChallengePeakConfigRow* _Meta; // 0x18
		::RPG::Client::ChallengePeakGroup* _Group_k__BackingField; // 0x20
		::RPG::Client::ChallengePeak_IServerAgent* _ServerAgent; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTarget*>* _Targets; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTag*>* _Tags; // 0x38

		::System::Void _ctor(::RPG::GameCore::ChallengePeakConfigRow* a1, ::RPG::Client::ChallengePeak_IServerAgent* a2, ::RPG::Client::ChallengePeakGroup* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengePeakConfigRow*, ::RPG::Client::ChallengePeak_IServerAgent*, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ChallengePeakGroup* get_Group()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_GROUP_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_TITLE_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_INDEX_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_NormalTargetList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_NORMALTARGETLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_DamageType()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EventIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_EVENTIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_KillProgressValueList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_KILLPROGRESSVALUELIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_HPProgressValueList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_HPPROGRESSVALUELIST_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_MonsterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_MONSTERICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ISPASSED_OFFSET))(this);
		}

		::System::Boolean get_IsPassedInBestRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ISPASSEDINBESTRECORD_OFFSET))(this);
		}

		::System::Boolean get_IsQuickPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ISQUICKPASSED_OFFSET))(this);
		}

		::System::Int32 get_CountOfTargets()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFTARGETS_OFFSET))(this);
		}

		::System::Int32 get_CountOfMonsters()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFMONSTERS_OFFSET))(this);
		}

		::System::Int32 get_CountOfTags()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_COUNTOFTAGS_OFFSET))(this);
		}

		::System::UInt32 get_TurnLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_TURNLIMIT_OFFSET))(this);
		}

		::System::Boolean get_IsLockedTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ISLOCKEDTEAM_OFFSET))(this);
		}

		::System::UInt32 get_TeamMazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_TEAMMAZEBUFFID_OFFSET))(this);
		}

		::System::Boolean get_IsPerfectPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GET_ISPERFECTPASSED_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeak* Create(::System::UInt32 a1, ::RPG::Client::ChallengePeak_IServerAgent* a2, ::RPG::Client::ChallengePeakGroup* a3)
		{
			return ((::RPG::Client::ChallengePeak*(*)(::System::UInt32, ::RPG::Client::ChallengePeak_IServerAgent*, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Boolean CheckTargetHasFinished(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_CHECKTARGETHASFINISHED_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengePeakTarget* GetTargetByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengePeakTarget*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETTARGETBYINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetCountOfPassedTargets()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETS_OFFSET))(this);
		}

		::System::Int32 GetCountOfPassedTargetsInBestRecord()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETCOUNTOFPASSEDTARGETSINBESTRECORD_OFFSET))(this);
		}

		::System::Int32 GetTargetIndexByID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETTARGETINDEXBYID_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakTag* GetTagByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengePeakTag*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETTAGBYINDEX_OFFSET))(this, a1);
		}

		::System::Void FillLineupAvatarBaseIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_FILLLINEUPAVATARBASEIDSTO_OFFSET))(this, a1);
		}

		::System::Void FillAvatarSnapshotsTo(::System::Collections::Generic::ICollection_1<::Class_1_7F6A638FBAAEC90B_3*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::Class_1_7F6A638FBAAEC90B_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_FILLAVATARSNAPSHOTSTO_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* GetMonsterByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETMONSTERBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* GetBoss()
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETBOSS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetBestRecordLineupAvatarIconPaths()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETBESTRECORDLINEUPAVATARICONPATHS_OFFSET))(this);
		}

		::System::UInt32 GetMinUseTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETMINUSETURN_OFFSET))(this);
		}

		::System::UInt32 GetMinUseTurnInBestRecord()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK_GETMINUSETURNINBESTRECORD_OFFSET))(this);
		}

		::System::Void _InitTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__INITTARGETS_OFFSET))(this);
		}

		::System::Void _InitMonsters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__INITMONSTERS_OFFSET))(this);
		}

		::System::Void _InitTags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__INITTAGS_OFFSET))(this);
		}

		::System::Boolean _get_IsPerfectPassed_b__48_0(::RPG::Client::ChallengePeakTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK__GET_ISPERFECTPASSED_B__48_0_OFFSET))(this, a1);
		}

		::System::Boolean __InitTargets_b__64_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAK___INITTARGETS_B__64_0_OFFSET))(this, a1);
		}
	};
}
