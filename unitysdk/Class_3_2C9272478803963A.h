#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_2C9272478803963A_METHOD_3_7FBF9B28BDB84D60_OFFSET UNITYSDK_OFFSET(0x1454E540)
#define CLASS_3_2C9272478803963A_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x1454E1A0)
#define CLASS_3_2C9272478803963A_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1454E770)
#define CLASS_3_2C9272478803963A_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1454E220)
#define CLASS_3_2C9272478803963A__CTOR_OFFSET UNITYSDK_OFFSET(0x1454E7B0)

inline static constexpr unsigned int Class_3_2C9272478803963A_TypeDefinitionIndex = 62957;

class Class_3_2C9272478803963A : public ::Class_2_980BB27C20DEC196
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9272478803963A__CTOR_OFFSET))(this);
	}

	static ::Class_3_2C9272478803963A* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_2C9272478803963A*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_2C9272478803963A_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9272478803963A_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_7FBF9B28BDB84D60(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2C9272478803963A_METHOD_3_7FBF9B28BDB84D60_OFFSET))(this, a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9272478803963A_ONCLEAR_OFFSET))(this);
	}
};
