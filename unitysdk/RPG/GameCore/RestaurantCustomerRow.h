#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantCustomerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTCUSTOMERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B726FB0)
#define RPG_GAMECORE_RESTAURANTCUSTOMERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B727320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantCustomerRow_TypeDefinitionIndex = 10972;

	class RestaurantCustomerRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* IMGPath; // 0x18
		::System::String* Model; // 0x20
		::System::UInt32 BehaviorID; // 0x28
		::System::UInt32 ConfigID; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::RPG::GameCore::RestaurantCustomerType Type; // 0x40
		::System::UInt32 GroupID; // 0x44
		::System::UInt32 NPCID; // 0x48
		::System::UInt32 CustomerID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTCUSTOMERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantCustomerRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantCustomerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTCUSTOMERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
