#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPrayType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E58B0)
#define RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E5D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrayQuestConfigRow_TypeDefinitionIndex = 12994;

	class GridFightPrayQuestConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightPrayType PrayType; // 0x10
		::System::UInt32 FinishWayID; // 0x14
		::System::UInt32 Progress; // 0x18
		::System::UInt32 FinishBonus; // 0x1C
		::System::UInt32 AcceptBonus; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID PrayTitle; // 0x28
		::RPG::Client::TextID PrayDesc; // 0x38
		::RPG::Client::TextID PrayPriceDesc; // 0x48
		::RPG::Client::TextID PrayDisPlayDesc; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrayQuestConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrayQuestConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
