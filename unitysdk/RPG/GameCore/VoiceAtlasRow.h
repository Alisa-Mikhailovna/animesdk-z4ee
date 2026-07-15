#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VOICEATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9DF210)
#define RPG_GAMECORE_VOICEATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DF6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VoiceAtlasRow_TypeDefinitionIndex = 12201;

	class VoiceAtlasRow : public ::System::Object
	{
	public:
		::System::String* AudioEvent; // 0x10
		::System::UInt32 Unlock; // 0x18
		::System::UInt32 AvatarID; // 0x1C
		::System::Boolean IsBattleVoice; // 0x20
		::System::Int32 SortID; // 0x24
		::RPG::Client::TextID VoiceTitle; // 0x28
		::System::UInt32 AudioID; // 0x38
		::System::UInt32 ReplaceID; // 0x3C
		::RPG::Client::TextID Voice_M; // 0x40
		::System::UInt32 VoiceID; // 0x50
		::RPG::Client::TextID Voice_F; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICEATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VoiceAtlasRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VoiceAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICEATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
