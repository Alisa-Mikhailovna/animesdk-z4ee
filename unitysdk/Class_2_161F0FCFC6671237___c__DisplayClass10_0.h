#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1036;

#define CLASS_2_161F0FCFC6671237___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB69A370)
#define CLASS_2_161F0FCFC6671237___C__DISPLAYCLASS10_0___CREATEITEMIFNEED_B__0_OFFSET UNITYSDK_OFFSET(0xB69A8E0)

inline static constexpr unsigned int Class_2_161F0FCFC6671237___c__DisplayClass10_0_TypeDefinitionIndex = 68323;

class Class_2_161F0FCFC6671237___c__DisplayClass10_0 : public ::System::Object
{
public:
	::RPG::GameCore::FloatMessageType messageType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_161F0FCFC6671237___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateItemIfNeed_b__0(::Class_0_16E4307DCC419505_1036* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1036*))((::PBYTE)hIl2Cpp + CLASS_2_161F0FCFC6671237___C__DISPLAYCLASS10_0___CREATEITEMIFNEED_B__0_OFFSET))(this, a1);
	}
};
