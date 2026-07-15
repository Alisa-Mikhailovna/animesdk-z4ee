#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RaidConfigType.h"
#include "unitysdk/RPG/GameCore/RaidEnterType.h"
#include "unitysdk/RPG/GameCore/RaidRecoverType.h"
#include "unitysdk/RPG/GameCore/RaidTagType.h"
#include "unitysdk/RPG/GameCore/RaidTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RAIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B6FF480)
#define RPG_GAMECORE_RAIDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7009F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidConfigRow_TypeDefinitionIndex = 14009;

	class RaidConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RaidTargetID; // 0x10
		::System::String* EntrancePageBGImagePath; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockWorldLevel; // 0x20
		::Il2CppArray<::System::UInt32>* TeamLimitIDList; // 0x28
		::Il2CppArray<::System::UInt32>* MonsterHideList; // 0x30
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x38
		::Il2CppArray<::RPG::GameCore::RaidTagType>* RaidTagList; // 0x40
		::Il2CppArray<::System::UInt32>* LimitIDList; // 0x48
		::Il2CppArray<::System::UInt32>* RewardList; // 0x50
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x58
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x60
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x68
		::Il2CppArray<::RPG::GameCore::FixPoint>* BuffParamList; // 0x70
		::Il2CppArray<::RPG::GameCore::RaidRecoverType>* RecoverType; // 0x78
		::System::UInt32 DifficultyAdjustmentType; // 0x80
		::System::UInt32 FinishEntranceID; // 0x84
		::System::Boolean IsShowMonsterSummon; // 0x88
		::System::Boolean SkipRewardOnFinish; // 0x89
		::System::Boolean IsHiddenAreaMap; // 0x8A
		::System::Boolean IsEntryByProp; // 0x8B
		::System::UInt32 MainMissionIDAfter; // 0x8C
		::RPG::Client::TextID BuffDesc; // 0x90
		::RPG::Client::TextID RaidName; // 0xA0
		::System::Boolean AutoObtainDamageType; // 0xB0
		::System::Boolean SkipJoinLineup; // 0xB1
		::System::Boolean LockCaptain; // 0xB2
		::System::UInt32 HardLevel; // 0xB4
		::System::UInt32 LockCaptainAvatarID; // 0xB8
		::System::UInt32 DisplayEventID; // 0xBC
		::RPG::Client::TextID RaidDesc; // 0xC0
		::RPG::GameCore::RaidTeamType TeamType; // 0xD0
		::System::UInt32 MappingInfoID; // 0xD4
		::RPG::GameCore::RaidEnterType EnterType; // 0xD8
		::System::UInt32 RaidID; // 0xDC
		::System::UInt32 MainMissionIDBefore; // 0xE0
		::RPG::GameCore::RaidConfigType Type; // 0xE4
		::System::Int32 RecommendLevel; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RaidConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
