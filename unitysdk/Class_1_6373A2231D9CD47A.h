#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_6373A2231D9CD47A_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x1AE3F550)
#define CLASS_1_6373A2231D9CD47A__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3FDA0)

inline static constexpr unsigned int Class_1_6373A2231D9CD47A_TypeDefinitionIndex = 11133;

class Class_1_6373A2231D9CD47A : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::Il2CppArray<::System::UInt32>* Field_1_4; // 0x30
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_5; // 0x38
	::Il2CppArray<::System::UInt32>* Field_1_6; // 0x40
	::System::String* Field_1_7; // 0x48
	::System::String* Field_1_8; // 0x50
	::RPG::Client::TextID Field_1_9; // 0x58
	::System::UInt32 Field_1_10; // 0x68
	::System::UInt32 Field_1_11; // 0x6C
	::RPG::GameCore::FateRinHouguOwnerType Field_1_12; // 0x70
	::System::Boolean Field_1_13; // 0x74
	::System::Boolean Field_1_14; // 0x75
	::RPG::GameCore::FateRinHouguRarityType Field_1_15; // 0x78
	::System::UInt32 Field_1_16; // 0x7C
	::RPG::Client::TextID Field_1_17; // 0x80
	::RPG::Client::TextID Field_1_18; // 0x90
	::RPG::Client::TextID Field_1_19; // 0xA0
	::System::Int32 Field_1_20; // 0xB0
	::System::UInt32 Field_1_21; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6373A2231D9CD47A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6373A2231D9CD47A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6373A2231D9CD47A*&))((::PBYTE)hIl2Cpp + CLASS_1_6373A2231D9CD47A_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
