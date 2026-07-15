#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C584489F76966D79_3.h"

class Class_0_16E4307DCC419505_635;
namespace System { class String; }

#define CLASS_2_37BAD7EDE29ECF2B_2_METHOD_2_84BFD8A83698EFF5_OFFSET UNITYSDK_OFFSET(0xBA16A60)
#define CLASS_2_37BAD7EDE29ECF2B_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBA16C50)
#define CLASS_2_37BAD7EDE29ECF2B_2__CTOR_OFFSET UNITYSDK_OFFSET(0xBA16A50)

inline static constexpr unsigned int Class_2_37BAD7EDE29ECF2B_2_TypeDefinitionIndex = 76730;

class Class_2_37BAD7EDE29ECF2B_2 : public ::Class_1_C584489F76966D79_3
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_635* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_635*))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_2__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_84BFD8A83698EFF5()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_2_METHOD_2_84BFD8A83698EFF5_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_2_TOSTRING_OFFSET))(this);
	}
};
