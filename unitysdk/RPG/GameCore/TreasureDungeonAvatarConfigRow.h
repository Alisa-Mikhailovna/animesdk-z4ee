#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B98D8A0)
#define RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B98E0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonAvatarConfigRow_TypeDefinitionIndex = 12063;

	class TreasureDungeonAvatarConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* FigureDiff; // 0x10
		::System::Single FigureScale; // 0x18
		::RPG::Client::TextID Dialogue3; // 0x20
		::RPG::Client::TextID Dialogue2; // 0x30
		::RPG::Client::TextID Dialogue1; // 0x40
		::System::UInt32 AvatarPickID; // 0x50
		::System::UInt32 SpecialAvataID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TreasureDungeonAvatarConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonAvatarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONAVATARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
