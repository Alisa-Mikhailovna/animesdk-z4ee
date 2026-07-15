#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B740E20)
#define RPG_GAMECORE_ROGUEAREACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B741960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAreaConfigRow_TypeDefinitionIndex = 14120;

	class RogueAreaConfigRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterMap; // 0x10
		::System::String* AreaTipsIcon; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ScoreMap; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendNature; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterMap2; // 0x30
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* MapDisplayItemList; // 0x38
		::System::String* AreaFigure; // 0x40
		::System::String* AreaIcon; // 0x48
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ChestDisplayItemList; // 0x50
		::Il2CppArray<::System::UInt32>* AreaEnvironment; // 0x58
		::System::UInt32 MonsterEliteDropDisplayID; // 0x60
		::System::UInt32 RecommendLevel; // 0x64
		::System::UInt32 RecommendSkillTreePoints; // 0x68
		::System::UInt32 Difficulty; // 0x6C
		::System::UInt32 AreaProgress; // 0x70
		::System::UInt32 RogueAreaID; // 0x74
		::RPG::Client::TextID AreaNameID; // 0x78
		::System::UInt32 UnlockID; // 0x88
		::System::UInt32 FirstReward; // 0x8C
		::System::Boolean isActivityArea; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAreaConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAreaConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
