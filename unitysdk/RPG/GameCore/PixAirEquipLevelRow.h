#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIREQUIPLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B6B4180)
#define RPG_GAMECORE_PIXAIREQUIPLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B46F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEquipLevelRow_TypeDefinitionIndex = 11687;

	class PixAirEquipLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillList; // 0x10
		::RPG::GameCore::FixPoint ChargePower; // 0x18
		::RPG::GameCore::FixPoint MultiPower; // 0x20
		::RPG::GameCore::FixPoint BurnPower; // 0x28
		::RPG::GameCore::FixPoint CoolDown; // 0x30
		::RPG::GameCore::FixPoint HastePower; // 0x38
		::RPG::GameCore::FixPoint DamagePower; // 0x40
		::System::UInt32 EquipID; // 0x48
		::System::UInt32 EquipLevel; // 0x4C
		::RPG::GameCore::FixPoint JamPower; // 0x50
		::RPG::GameCore::FixPoint ShieldPower; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirEquipLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirEquipLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
