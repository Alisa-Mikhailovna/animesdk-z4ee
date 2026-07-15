#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3F244B8F91CE2D0;
namespace RPG::Client::DiceCombat { class DiceCombatPVPStartMatchParam; }
namespace System { class Exception; }

#define CLASS_1_F3F244B8F91CE2D0___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xADF2FD0)
#define CLASS_1_F3F244B8F91CE2D0___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__0_OFFSET UNITYSDK_OFFSET(0xADF4C50)
#define CLASS_1_F3F244B8F91CE2D0___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__1_OFFSET UNITYSDK_OFFSET(0xADF4D70)

inline static constexpr unsigned int Class_1_F3F244B8F91CE2D0___c__DisplayClass37_0_TypeDefinitionIndex = 72201;

class Class_1_F3F244B8F91CE2D0___c__DisplayClass37_0 : public ::System::Object
{
public:
	::Class_1_F3F244B8F91CE2D0* __4__this; // 0x10
	::RPG::Client::DiceCombat::DiceCombatPVPStartMatchParam* param; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartPVPMatch_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__0_OFFSET))(this);
	}

	::System::Void _StartPVPMatch_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0___C__DISPLAYCLASS37_0__STARTPVPMATCH_B__1_OFFSET))(this, a1);
	}
};
