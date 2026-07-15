#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B18E500)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B18F3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritSkillRow_TypeDefinitionIndex = 10551;

	class AetherDivideSpiritSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* UltraSkillIcon; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x30
		::System::String* SkillIcon; // 0x38
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x40
		::RPG::Client::TextID SkillTypeDesc; // 0x48
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x58
		::RPG::Client::TextID SkillTag; // 0x60
		::RPG::GameCore::FixPoint SPNeed; // 0x70
		::RPG::Client::TextID SkillDesc; // 0x78
		::RPG::GameCore::FixPoint BPAdd; // 0x88
		::RPG::GameCore::FixPoint BPNeed; // 0x90
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x98
		::RPG::Client::TextID SkillName; // 0xA0
		::RPG::GameCore::SkillEffect SkillEffect; // 0xB0
		::System::UInt32 SkillID; // 0xB4
		::RPG::Client::TextID SimpleSkillDesc; // 0xB8
		::RPG::GameCore::FixPoint SPBase; // 0xC8
		::RPG::GameCore::AetherSpiritType PropertyType; // 0xD0
		::RPG::GameCore::AttackType AttackType; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideSpiritSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideSpiritSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
