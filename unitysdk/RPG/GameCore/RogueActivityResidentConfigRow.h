#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B738DD0)
#define RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B739370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActivityResidentConfigRow_TypeDefinitionIndex = 14118;

	class RogueActivityResidentConfigRow : public ::System::Object
	{
	public:
		::System::String* TitleIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x20
		::System::String* IntroGuideImg; // 0x28
		::System::Boolean IsShowRemainTime; // 0x30
		::System::UInt32 UnlockID; // 0x34
		::System::UInt32 ActivityID; // 0x38
		::System::UInt32 SortWeight; // 0x3C
		::System::UInt32 ActivityModuleID; // 0x40
		::System::UInt32 RelatedActivityPanelID; // 0x44
		::RPG::Client::TextID ResidentDesc; // 0x48
		::RPG::GameCore::RogueSubMode SubMode; // 0x58
		::System::UInt32 IntroID; // 0x5C
		::RPG::Client::TextID ResidentName; // 0x60
		::RPG::Client::TextID ResidentBrief; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActivityResidentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActivityResidentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
