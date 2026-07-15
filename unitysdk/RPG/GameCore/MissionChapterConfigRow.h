#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MissionChapterType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B5FC580)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5FCE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionChapterConfigRow_TypeDefinitionIndex = 13630;

	class MissionChapterConfigRow : public ::System::Object
	{
	public:
		::System::String* ChapterName; // 0x10
		::System::String* StageName; // 0x18
		::System::String* ChapterIconPath; // 0x20
		::System::String* ChapterFigureIconPath; // 0x28
		::System::String* ChapterDesc; // 0x30
		::Il2CppArray<::System::UInt32>* LinkChapterList; // 0x38
		::System::UInt32 ID; // 0x40
		::System::UInt32 OriginMainMission; // 0x44
		::RPG::GameCore::MissionChapterType ChapterType; // 0x48
		::System::UInt32 FinalMainMission; // 0x4C
		::System::UInt32 ChapterDisplayPriority; // 0x50
		::RPG::Client::TextID ChapterSequence; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionChapterConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionChapterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
