#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CombatPowerLightconeRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EQUIPMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B3EF4C0)
#define RPG_GAMECORE_EQUIPMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3F36B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentRow_TypeDefinitionIndex = 12739;

	class EquipmentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ItemRightPanelOffset; // 0x10
		::Il2CppArray<::System::Single>* BattleDialogOffset; // 0x18
		::Il2CppArray<::System::UInt32>* RankUpCostList; // 0x20
		::System::String* ImagePath; // 0x28
		::System::String* ThumbnailPath; // 0x30
		::Il2CppArray<::System::Single>* GachaResultOffset; // 0x38
		::Il2CppArray<::System::Single>* AvatarDetailOffset; // 0x40
		::System::UInt32 ExpType; // 0x48
		::System::Boolean Release; // 0x4C
		::System::UInt32 EquipmentID; // 0x50
		::System::UInt32 MaxRank; // 0x54
		::RPG::Client::TextID EquipmentDesc; // 0x58
		::System::UInt32 ExpProvide; // 0x68
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x6C
		::System::UInt32 MaxPromotion; // 0x70
		::System::UInt32 SkillID; // 0x74
		::RPG::GameCore::CombatPowerLightconeRarityType Rarity; // 0x78
		::System::UInt32 CoinCost; // 0x7C
		::RPG::Client::TextID EquipmentName; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EquipmentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EquipmentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
