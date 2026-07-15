#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamTowersStatisticType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_4C8AC5D22424C517_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1B64ABB0)
#define CLASS_1_4C8AC5D22424C517__CTOR_OFFSET UNITYSDK_OFFSET(0x1B64AE10)

inline static constexpr unsigned int Class_1_4C8AC5D22424C517_TypeDefinitionIndex = 12006;

class Class_1_4C8AC5D22424C517 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::RPG::GameCore::TeamTowersStatisticType Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::RPG::Client::TextID Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C8AC5D22424C517__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4C8AC5D22424C517*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4C8AC5D22424C517*&))((::PBYTE)hIl2Cpp + CLASS_1_4C8AC5D22424C517_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
