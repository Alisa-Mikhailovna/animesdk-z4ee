#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1B1FA470)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1FB060)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B1FA3A0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x1B1FA400)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1FBCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventSkillRow_TypeDefinitionIndex = 12376;

	class BattleEventSkillRow : public ::System::Object
	{
	public:
		::System::String* CutinPath; // 0x10
		::System::String* SkillIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x20
		::System::String* SkillButtonEffType; // 0x28
		::System::String* SkillTriggerKey; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x38
		::System::String* UltraSkillIcon; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x48
		::RPG::GameCore::FixPoint SPBase; // 0x50
		::RPG::Client::TextID SkillTag; // 0x58
		::RPG::Client::TextID SkillNeed; // 0x68
		::RPG::Client::TextID SkillTypeDesc; // 0x78
		::RPG::GameCore::FixPoint DelayRatio; // 0x88
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x90
		::RPG::GameCore::FixPoint BPAdd; // 0x98
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xA0
		::RPG::GameCore::SkillEffect SkillEffect; // 0xA8
		::System::UInt32 SkillID; // 0xAC
		::RPG::GameCore::AttackType AttackType; // 0xB0
		::RPG::Client::TextID SkillName; // 0xB8
		::RPG::GameCore::FixPoint SPNeed; // 0xC8
		::RPG::GameCore::FixPoint BPNeed; // 0xD0
		::RPG::GameCore::FixPoint SPAdd; // 0xD8
		::RPG::Client::TextID SimpleSkillDesc; // 0xE0
		::RPG::Client::TextID SkillDesc; // 0xF0
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x100
		::System::Int32 StanceDamageDisplay; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventSkillRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
