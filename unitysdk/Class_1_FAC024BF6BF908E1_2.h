#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostSubmitType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_FAC024BF6BF908E1_2_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x1AE11250)
#define CLASS_1_FAC024BF6BF908E1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE118E0)

inline static constexpr unsigned int Class_1_FAC024BF6BF908E1_2_TypeDefinitionIndex = 13421;

class Class_1_FAC024BF6BF908E1_2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::Il2CppArray<::System::UInt32>* Field_1_4; // 0x30
	::Il2CppArray<::System::UInt32>* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::String* Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x50
	::System::UInt32 Field_1_9; // 0x54
	::RPG::GameCore::LimaoNewsOfficeSurveyType Field_1_10; // 0x58
	::RPG::GameCore::LimaoNewsPostSubmitType Field_1_11; // 0x5C
	::System::UInt32 Field_1_12; // 0x60
	::RPG::GameCore::LimaoNewsPostType Field_1_13; // 0x64
	::System::UInt32 Field_1_14; // 0x68
	::RPG::Client::TextID Field_1_15; // 0x70
	::RPG::Client::TextID Field_1_16; // 0x80
	::System::UInt32 Field_1_17; // 0x90
	::System::UInt32 Field_1_18; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAC024BF6BF908E1_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_FAC024BF6BF908E1_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_FAC024BF6BF908E1_2*&))((::PBYTE)hIl2Cpp + CLASS_1_FAC024BF6BF908E1_2_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
