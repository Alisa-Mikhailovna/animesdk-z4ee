#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1E5D0351BE7022BB__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC2A10)

inline static constexpr unsigned int Class_1_1E5D0351BE7022BB_TypeDefinitionIndex = 47108;

class Class_1_1E5D0351BE7022BB : public ::System::Object
{
public:
	::System::String* Id; // 0x10
	::System::String* ConnectedPath; // 0x18
	::Il2CppArray<::System::Single>* LocalPos; // 0x20
	::Il2CppArray<::System::Single>* Direction; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E5D0351BE7022BB__CTOR_OFFSET))(this);
	}
};
