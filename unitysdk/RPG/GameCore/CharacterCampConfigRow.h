#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CharacterCampType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERCAMPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B314140)
#define RPG_GAMECORE_CHARACTERCAMPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B314890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterCampConfigRow_TypeDefinitionIndex = 12219;

	class CharacterCampConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Int32 SortID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::RPG::GameCore::CharacterCampType CampType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterCampConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterCampConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
