#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournCurseChestType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNCURSECHESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B796600)
#define RPG_GAMECORE_ROGUETOURNCURSECHESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B796F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCurseChestRow_TypeDefinitionIndex = 14461;

	class RogueTournCurseChestRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::FixPoint ParamValue1; // 0x18
		::System::UInt32 MainTitleDisplayID; // 0x20
		::System::UInt32 ChestID; // 0x24
		::RPG::GameCore::FixPoint ParamValue2; // 0x28
		::RPG::GameCore::RogueTournCurseChestType Type; // 0x30
		::System::UInt32 SubTitleDisplayID; // 0x34
		::System::UInt32 SubDescDisplayID; // 0x38
		::System::UInt32 MainDescDisplayID; // 0x3C
		::RPG::GameCore::FixPoint ParamValue3; // 0x40
		::RPG::GameCore::FixPoint ParamValue4; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCURSECHESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournCurseChestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournCurseChestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCURSECHESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
