#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_16.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightFestMainRace; }
namespace RPG::Client { class FightFestScoreRace; }
namespace RPG::Client { class FightFestStageInfoData; }
namespace RPG::GameCore { class FightFestChallengeRow; }
namespace RPG::GameCore { class FightFestMainRaceRow; }
namespace RPG::GameCore { class FightFestScoreRaceRow; }

#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_CHALLENGENAME_OFFSET UNITYSDK_OFFSET(0xC5DB890)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFDES_OFFSET UNITYSDK_OFFSET(0xC5DBB10)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFNAME_OFFSET UNITYSDK_OFFSET(0xC5DB9D0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xC5DB840)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_PREVIEWMONSTERLIST_OFFSET UNITYSDK_OFFSET(0xC5DBC50)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACEID_OFFSET UNITYSDK_OFFSET(0xC5DB800)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACETYPE_OFFSET UNITYSDK_OFFSET(0xC5DB7A0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RECOMMENDNATURE_OFFSET UNITYSDK_OFFSET(0xC5DBD30)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDMAINRACE_OFFSET UNITYSDK_OFFSET(0xC5DB7C0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDSCORERACE_OFFSET UNITYSDK_OFFSET(0xC5DB7E0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_SPECIALAVATARLIST_OFFSET UNITYSDK_OFFSET(0xC5DBE10)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_STAGEINFODATA_OFFSET UNITYSDK_OFFSET(0xC5DB820)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_UIENTERBATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xC5DBEF0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDMAINRACE_OFFSET UNITYSDK_OFFSET(0xC5DB700)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDSCORERACE_OFFSET UNITYSDK_OFFSET(0xC5DB750)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACEID_OFFSET UNITYSDK_OFFSET(0xC5DB810)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACETYPE_OFFSET UNITYSDK_OFFSET(0xC5DB7B0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDMAINRACE_OFFSET UNITYSDK_OFFSET(0xC5DB7D0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDSCORERACE_OFFSET UNITYSDK_OFFSET(0xC5DB7F0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_STAGEINFODATA_OFFSET UNITYSDK_OFFSET(0xC5DB830)
#define RPG_CLIENT_FIGHTFESTRACEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC5DBFC0)
#define RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC5DB6A0)
#define RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0xC5DB6D0)
#define RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC5DB5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestRaceData_TypeDefinitionIndex = 61261;

	class FightFestRaceData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__TEACH_RACE_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FightFestRaceData_TypeDefinitionIndex)->GetStaticField(0x54C0);
		}
		::RPG::Client::FightFestStageInfoData* _StageInfoData_k__BackingField; // 0x10
		::RPG::Client::FightFestMainRace* _RelatedMainRace_k__BackingField; // 0x18
		::RPG::Client::FightFestScoreRace* _RelatedScoreRace_k__BackingField; // 0x20
		::System::UInt32 _RaceID_k__BackingField; // 0x28
		::Enum_3_4608E37A1B3D374A_16 _RaceType_k__BackingField; // 0x2C

		::System::Void _ctor(::RPG::GameCore::FightFestMainRaceRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestMainRaceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::FightFestScoreRaceRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestScoreRaceRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::RPG::GameCore::FightFestChallengeRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestChallengeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA__CCTOR_OFFSET))();
		}

		::System::Void SetRelatedMainRace(::RPG::Client::FightFestMainRace* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestMainRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDMAINRACE_OFFSET))(this, a1);
		}

		::System::Void SetRelatedScoreRace(::RPG::Client::FightFestScoreRace* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDSCORERACE_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_16 get_RaceType()
		{
			return ((::Enum_3_4608E37A1B3D374A_16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACETYPE_OFFSET))(this);
		}

		::System::Void set_RaceType(::Enum_3_4608E37A1B3D374A_16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_16))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestMainRace* get_RelatedMainRace()
		{
			return ((::RPG::Client::FightFestMainRace*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDMAINRACE_OFFSET))(this);
		}

		::System::Void set_RelatedMainRace(::RPG::Client::FightFestMainRace* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestMainRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDMAINRACE_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestScoreRace* get_RelatedScoreRace()
		{
			return ((::RPG::Client::FightFestScoreRace*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDSCORERACE_OFFSET))(this);
		}

		::System::Void set_RelatedScoreRace(::RPG::Client::FightFestScoreRace* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDSCORERACE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACEID_OFFSET))(this);
		}

		::System::Void set_RaceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACEID_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestStageInfoData* get_StageInfoData()
		{
			return ((::RPG::Client::FightFestStageInfoData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_STAGEINFODATA_OFFSET))(this);
		}

		::System::Void set_StageInfoData(::RPG::Client::FightFestStageInfoData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestStageInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_STAGEINFODATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_EVENTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_CHALLENGENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_EnvironmentBuffName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_EnvironmentBuffDes()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFDES_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PreviewMonsterList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_PREVIEWMONSTERLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendNature()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RECOMMENDNATURE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SpecialAvatarList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_SPECIALAVATARLIST_OFFSET))(this);
		}

		::System::UInt32 get_UIEnterBattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_UIENTERBATTLEAREAID_OFFSET))(this);
		}
	};
}
