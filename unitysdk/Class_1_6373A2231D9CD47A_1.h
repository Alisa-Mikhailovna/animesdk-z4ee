#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinPrepareFightTalker.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_6373A2231D9CD47A_1_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x1AE6E430)
#define CLASS_1_6373A2231D9CD47A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE6EB90)

inline static constexpr unsigned int Class_1_6373A2231D9CD47A_1_TypeDefinitionIndex = 11161;

class Class_1_6373A2231D9CD47A_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::RPG::Client::TextID Field_1_4; // 0x28
	::System::UInt32 Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x3C
	::RPG::Client::TextID Field_1_7; // 0x40
	::RPG::Client::TextID Field_1_8; // 0x50
	::RPG::Client::TextID Field_1_9; // 0x60
	::RPG::Client::TextID Field_1_10; // 0x70
	::System::UInt32 Field_1_11; // 0x80
	::RPG::GameCore::FateRinPrepareFightTalker Field_1_12; // 0x84
	::System::UInt32 Field_1_13; // 0x88
	::System::UInt32 Field_1_14; // 0x8C
	::System::Boolean Field_1_15; // 0x90
	::System::UInt32 Field_1_16; // 0x94
	::RPG::Client::TextID Field_1_17; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6373A2231D9CD47A_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6373A2231D9CD47A_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6373A2231D9CD47A_1*&))((::PBYTE)hIl2Cpp + CLASS_1_6373A2231D9CD47A_1_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
