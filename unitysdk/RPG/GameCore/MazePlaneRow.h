#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEPLANEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B5E1240)
#define RPG_GAMECORE_MAZEPLANEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E1A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePlaneRow_TypeDefinitionIndex = 13521;

	class MazePlaneRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x10
		::System::UInt32 PlaneID; // 0x18
		::System::UInt32 StartFloorID; // 0x1C
		::RPG::GameCore::PlaneType PlaneType; // 0x20
		::System::UInt32 SubType; // 0x24
		::System::UInt32 WorldID; // 0x28
		::System::UInt32 MazePoolType; // 0x2C
		::RPG::Client::TextID PlaneName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazePlaneRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePlaneRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
