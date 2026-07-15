#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF6C010A7514983E;
namespace System { class String; }

#define CLASS_1_E14CBC48FE052048_3__CTOR_OFFSET UNITYSDK_OFFSET(0xAFB6240)

inline static constexpr unsigned int Class_1_E14CBC48FE052048_3_TypeDefinitionIndex = 61866;

class Class_1_E14CBC48FE052048_3 : public ::System::Object
{
public:
	::Class_1_FF6C010A7514983E* Base; // 0x10
	::System::String* ID; // 0x18
	::System::String* OpType; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14CBC48FE052048_3__CTOR_OFFSET))(this);
	}
};
