#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1C4A90)
#define RPG_GAMECORE_AVATARENHANCEDHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C4E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedHintRow_TypeDefinitionIndex = 12306;

	class AvatarEnhancedHintRow : public ::System::Object
	{
	public:
		::System::UInt32 SeasonID; // 0x10
		::System::UInt32 PreviewModuleID; // 0x14
		::System::UInt32 AvatarID; // 0x18
		::System::UInt32 TrialStageID; // 0x1C
		::RPG::Client::TextID EnhancedDesc3; // 0x20
		::System::UInt32 EnhancedDescNum; // 0x30
		::System::UInt32 EnhancedID; // 0x34
		::RPG::Client::TextID EnhancedDesc2; // 0x38
		::RPG::Client::TextID EnhancedDesc1; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDHINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarEnhancedHintRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEnhancedHintRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDHINTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
