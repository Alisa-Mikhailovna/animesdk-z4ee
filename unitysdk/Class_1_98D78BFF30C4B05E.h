#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_98D78BFF30C4B05E_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x1AFF4520)
#define CLASS_1_98D78BFF30C4B05E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF4A00)

inline static constexpr unsigned int Class_1_98D78BFF30C4B05E_TypeDefinitionIndex = 12016;

class Class_1_98D78BFF30C4B05E : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C
	::RPG::Client::TextID Field_1_5; // 0x30
	::RPG::Client::TextID Field_1_6; // 0x40
	::System::Single Field_1_7; // 0x50
	::System::UInt32 Field_1_8; // 0x54
	::RPG::Client::TextID Field_1_9; // 0x58
	::RPG::GameCore::TeamTowersPlayerSkillType Field_1_10; // 0x68
	::System::UInt32 Field_1_11; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98D78BFF30C4B05E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_98D78BFF30C4B05E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_98D78BFF30C4B05E*&))((::PBYTE)hIl2Cpp + CLASS_1_98D78BFF30C4B05E_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
