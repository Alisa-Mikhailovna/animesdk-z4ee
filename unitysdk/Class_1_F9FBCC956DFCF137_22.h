#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;

#define CLASS_1_F9FBCC956DFCF137_22_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB2BD6D0)
#define CLASS_1_F9FBCC956DFCF137_22__CTOR_OFFSET UNITYSDK_OFFSET(0xB2BD6C0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_22_TypeDefinitionIndex = 72086;

class Class_1_F9FBCC956DFCF137_22 : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_22__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_22_EXECUTE_OFFSET))(this);
	}
};
