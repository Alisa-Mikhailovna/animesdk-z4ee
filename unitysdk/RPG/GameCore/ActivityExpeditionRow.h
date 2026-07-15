#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityExpeditionRank.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYEXPEDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1111D0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1124F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityExpeditionRow_TypeDefinitionIndex = 11054;

	class ActivityExpeditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* BonusBaseTypeList; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::RPG::Client::TextID AssignerName; // 0x28
		::System::UInt32 Grade2ExtraRewardID; // 0x38
		::System::UInt32 Duration; // 0x3C
		::RPG::Client::TextID AssignDesc; // 0x40
		::System::UInt32 AvatarNumMax; // 0x50
		::RPG::GameCore::ActivityExpeditionRank ExpeditionRank; // 0x54
		::System::UInt32 AvatarNumMin; // 0x58
		::System::UInt32 ExpeditionID; // 0x5C
		::System::UInt32 Grade3ExtraRewardID; // 0x60
		::System::UInt32 RewardID; // 0x64
		::System::UInt32 Grade1ExtraRewardID; // 0x68
		::System::UInt32 ExpeditionTag; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityExpeditionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityExpeditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
