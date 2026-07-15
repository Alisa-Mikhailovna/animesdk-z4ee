#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_1050;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D3061860904844A0_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x1470B790)
#define CLASS_2_D3061860904844A0_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1470B7E0)
#define CLASS_2_D3061860904844A0_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1470B8B0)
#define CLASS_2_D3061860904844A0_METHOD_2_8706B4640D53FE36_OFFSET UNITYSDK_OFFSET(0x1470B3F0)
#define CLASS_2_D3061860904844A0_METHOD_2_B92638D2AEE08621_OFFSET UNITYSDK_OFFSET(0x1470B860)
#define CLASS_2_D3061860904844A0_METHOD_2_C14ED3F9B41F2361_OFFSET UNITYSDK_OFFSET(0x1470B160)
#define CLASS_2_D3061860904844A0_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x1470AF80)
#define CLASS_2_D3061860904844A0_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1470B3A0)
#define CLASS_2_D3061860904844A0_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1470B100)
#define CLASS_2_D3061860904844A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1470B8F0)
#define CLASS_2_D3061860904844A0__ONBIND_OFFSET UNITYSDK_OFFSET(0x1470ACE0)

inline static constexpr unsigned int Class_2_D3061860904844A0_TypeDefinitionIndex = 68516;

class Class_2_D3061860904844A0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Action* Field_2_0; // 0x60
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1050*>* Field_2_1; // 0x68
	::RPG::GameCore::GameEntity* Field_2_2; // 0x70
	::System::Boolean Field_2_3; // 0x78
	::System::Boolean Field_2_4; // 0x79

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_ONRETURN_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void Method_2_C14ED3F9B41F2361(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_C14ED3F9B41F2361_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B92638D2AEE08621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_B92638D2AEE08621_OFFSET))(this);
	}

	::System::Void Method_2_8706B4640D53FE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_8706B4640D53FE36_OFFSET))(this);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
