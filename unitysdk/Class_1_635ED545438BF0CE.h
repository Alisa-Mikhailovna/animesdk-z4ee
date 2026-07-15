#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_635ED545438BF0CE_METHOD_1_092E633B9CD2BE71_OFFSET UNITYSDK_OFFSET(0x1BA65200)
#define CLASS_1_635ED545438BF0CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA65460)

inline static constexpr unsigned int Class_1_635ED545438BF0CE_TypeDefinitionIndex = 11137;

class Class_1_635ED545438BF0CE : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x24
	::RPG::Client::TextID Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_635ED545438BF0CE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_092E633B9CD2BE71(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_635ED545438BF0CE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_635ED545438BF0CE*&))((::PBYTE)hIl2Cpp + CLASS_1_635ED545438BF0CE_METHOD_1_092E633B9CD2BE71_OFFSET))(a1, a2);
	}
};
