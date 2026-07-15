#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERGUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B3C44B0)
#define RPG_GAMECORE_DRINKMAKERGUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C4DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerGuestRow_TypeDefinitionIndex = 12687;

	class DrinkMakerGuestRow : public ::System::Object
	{
	public:
		::System::String* BigIconPath; // 0x10
		::System::String* LinePath; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::RPG::Client::TextID>* EmotionProblemList; // 0x28
		::Il2CppArray<::System::UInt32>* FavorTagList; // 0x30
		::RPG::Client::TextID BartenderGuestDesc; // 0x38
		::System::UInt32 GuestID; // 0x48
		::System::UInt32 MaxFaithReward; // 0x4C
		::System::UInt32 FinishQuestID; // 0x50
		::System::UInt32 MaxFaith; // 0x54
		::RPG::Client::TextID BartenderGuestName; // 0x58
		::System::UInt32 FinishSubMissionID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerGuestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerGuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
