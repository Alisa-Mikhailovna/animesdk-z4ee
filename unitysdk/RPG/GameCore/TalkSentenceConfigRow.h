#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1B9419A0)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B941E40)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B942F90)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_RESET_OFFSET UNITYSDK_OFFSET(0x1B942FF0)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B942F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceConfigRow_TypeDefinitionIndex = 14612;

	class TalkSentenceConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TextmapTalkSentenceName; // 0x10
		::System::UInt32 TalkSentenceID; // 0x20
		::System::UInt32 VoiceID; // 0x24
		::RPG::Client::TextID TalkSentenceText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TalkSentenceConfigRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TalkSentenceConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkSentenceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_RESET_OFFSET))(this);
		}
	};
}
