#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/RPG/GameCore/PlanetFesStandType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B6BB450)
#define RPG_GAMECORE_PLANETFESAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6BBA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarRow_TypeDefinitionIndex = 11719;

	class PlanetFesAvatarRow : public ::System::Object
	{
	public:
		::System::String* AnimConfig; // 0x10
		::System::String* CargoIcon; // 0x18
		::System::String* HeadIcon; // 0x20
		::System::String* Body; // 0x28
		::System::String* MiniIcon; // 0x30
		::System::String* MidIcon; // 0x38
		::Il2CppArray<::System::UInt32>* Skill1List; // 0x40
		::System::String* Description; // 0x48
		::Il2CppArray<::System::UInt32>* GachaUnlockIDList; // 0x50
		::Il2CppArray<::System::UInt32>* Skill2List; // 0x58
		::System::UInt32 Rarity; // 0x60
		::System::UInt32 IncomeParam; // 0x64
		::System::UInt32 ID; // 0x68
		::RPG::GameCore::PlanetFesStandType PlanetType; // 0x6C
		::RPG::Client::TextID Name; // 0x70
		::System::UInt32 ItemID; // 0x80
		::System::UInt32 CD; // 0x84
		::RPG::GameCore::PlanetFesLandType LandType; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesAvatarRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
