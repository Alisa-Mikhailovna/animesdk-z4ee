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

#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1B1D6EB0)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1D7CC0)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B1D95D0)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x1B1D9630)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D96A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantSkillRow_TypeDefinitionIndex = 12327;

	class AvatarServantSkillRow : public ::System::Object
	{
	public:
		::System::String* UltraSkillIcon; // 0x10
		::System::String* SkillTriggerKey; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x20
		::Il2CppArray<::System::UInt32>* RatedSkillTreeID; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x30
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x40
		::System::String* SkillIcon; // 0x48
		::Il2CppArray<::System::UInt32>* RatedRankID; // 0x50
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x58
		::RPG::GameCore::FixPoint BPNeed; // 0x60
		::System::Boolean HideInUI; // 0x68
		::System::Int32 StanceDamageDisplay; // 0x6C
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x70
		::RPG::Client::TextID SkillDesc; // 0x78
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x88
		::RPG::GameCore::SkillEffect SkillEffect; // 0x8C
		::RPG::Client::TextID SkillName; // 0x90
		::RPG::Client::TextID SkillTag; // 0xA0
		::RPG::Client::TextID SkillTypeDesc; // 0xB0
		::RPG::GameCore::FixPoint DelayRatio; // 0xC0
		::RPG::Client::TextID SimpleSkillDesc; // 0xC8
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0xD8
		::RPG::Client::TextID SkillNeed; // 0xE0
		::RPG::GameCore::FixPoint SPBase; // 0xF0
		::System::UInt32 Level; // 0xF8
		::System::UInt32 SkillID; // 0xFC
		::System::UInt32 MaxLevel; // 0x100
		::RPG::GameCore::AttackType AttackType; // 0x104
		::RPG::GameCore::FixPoint SPNeed; // 0x108
		::RPG::GameCore::FixPoint SPAdd; // 0x110
		::RPG::GameCore::FixPoint BPAdd; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarServantSkillRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarServantSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarServantSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
