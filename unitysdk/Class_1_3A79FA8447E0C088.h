#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TacticsCardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_3A79FA8447E0C088_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1AC40220)
#define CLASS_1_3A79FA8447E0C088__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC40650)

inline static constexpr unsigned int Class_1_3A79FA8447E0C088_TypeDefinitionIndex = 10919;

class Class_1_3A79FA8447E0C088 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::Client::TextID Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x38
	::RPG::Client::TextID Field_1_5; // 0x40
	::System::UInt32 Field_1_6; // 0x50
	::System::UInt32 Field_1_7; // 0x54
	::RPG::GameCore::TacticsCardType Field_1_8; // 0x58
	::System::UInt32 Field_1_9; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A79FA8447E0C088__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_3A79FA8447E0C088*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_3A79FA8447E0C088*&))((::PBYTE)hIl2Cpp + CLASS_1_3A79FA8447E0C088_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
