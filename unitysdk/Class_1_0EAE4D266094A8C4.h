#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityDiceCombatV2TitleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_0EAE4D266094A8C4_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1AC0EF80)
#define CLASS_1_0EAE4D266094A8C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC0F2B0)

inline static constexpr unsigned int Class_1_0EAE4D266094A8C4_TypeDefinitionIndex = 10907;

class Class_1_0EAE4D266094A8C4 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::RPG::GameCore::ActivityDiceCombatV2TitleType Field_1_3; // 0x30
	::RPG::Client::TextID Field_1_4; // 0x38
	::System::UInt32 Field_1_5; // 0x48
	::System::UInt32 Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EAE4D266094A8C4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0EAE4D266094A8C4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0EAE4D266094A8C4*&))((::PBYTE)hIl2Cpp + CLASS_1_0EAE4D266094A8C4_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
