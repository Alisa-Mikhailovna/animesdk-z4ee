#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NAVMAPTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B66F750)
#define RPG_GAMECORE_NAVMAPTABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66FEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavMapTabRow_TypeDefinitionIndex = 13480;

	class NavMapTabRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::MapSpaceType MapSpaceType; // 0x24
		::System::UInt32 MenuIconID; // 0x28
		::RPG::Client::TextID Desc; // 0x30
		::System::UInt32 SortID; // 0x40
		::System::UInt32 WorldID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NavMapTabRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NavMapTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
