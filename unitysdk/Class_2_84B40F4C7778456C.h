#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_273AB9C9690DD47B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelEntityTeamFormationStateChange; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_84B40F4C7778456C_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF1CF000)
#define CLASS_2_84B40F4C7778456C_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF1CF320)
#define CLASS_2_84B40F4C7778456C_METHOD_2_1D5C1D3027FFF563_OFFSET UNITYSDK_OFFSET(0xF1CEB10)
#define CLASS_2_84B40F4C7778456C_METHOD_2_2BFB72D7A3D3B8CB_OFFSET UNITYSDK_OFFSET(0xF1CE7B0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_3EE9C3671E304796_OFFSET UNITYSDK_OFFSET(0xF1CE690)
#define CLASS_2_84B40F4C7778456C_METHOD_2_42A121C686C73935_OFFSET UNITYSDK_OFFSET(0xF1CE600)
#define CLASS_2_84B40F4C7778456C_METHOD_2_5477399663FA192A_OFFSET UNITYSDK_OFFSET(0xF1CE8B0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_ABB142299C4ACDC1_OFFSET UNITYSDK_OFFSET(0xF1CEA30)
#define CLASS_2_84B40F4C7778456C_METHOD_2_BBEB6FA9D76DD91E_OFFSET UNITYSDK_OFFSET(0xF1CE900)
#define CLASS_2_84B40F4C7778456C_METHOD_2_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0xF1CEAA0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_DE3244AC41BC6E2A_OFFSET UNITYSDK_OFFSET(0xF1CE420)
#define CLASS_2_84B40F4C7778456C_METHOD_2_F1C870D01294DAF7_OFFSET UNITYSDK_OFFSET(0xF1CE270)
#define CLASS_2_84B40F4C7778456C_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xF1CECC0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xF1CED80)
#define CLASS_2_84B40F4C7778456C_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0xF1CEF40)
#define CLASS_2_84B40F4C7778456C_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xF1CEBB0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0xF1CEE40)
#define CLASS_2_84B40F4C7778456C__CTOR_OFFSET UNITYSDK_OFFSET(0xF1CF600)

inline static constexpr unsigned int Class_2_84B40F4C7778456C_TypeDefinitionIndex = 68298;

class Class_2_84B40F4C7778456C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Stack_1<::Class_2_273AB9C9690DD47B*>* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_273AB9C9690DD47B*>* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F1C870D01294DAF7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_F1C870D01294DAF7_OFFSET))(this);
	}

	::System::Void Method_2_42A121C686C73935(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_42A121C686C73935_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EE9C3671E304796(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_3EE9C3671E304796_OFFSET))(this, a1);
	}

	::System::Void Method_2_5477399663FA192A(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_5477399663FA192A_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBEB6FA9D76DD91E(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_BBEB6FA9D76DD91E_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABB142299C4ACDC1(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_ABB142299C4ACDC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE3244AC41BC6E2A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_DE3244AC41BC6E2A_OFFSET))(this, a1);
	}

	::Class_2_273AB9C9690DD47B* Method_2_DCEC38F05597CB7D()
	{
		return ((::Class_2_273AB9C9690DD47B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_DCEC38F05597CB7D_OFFSET))(this);
	}

	::System::Void Method_2_2BFB72D7A3D3B8CB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_2BFB72D7A3D3B8CB_OFFSET))(this, a1);
	}

	::Class_2_273AB9C9690DD47B* Method_2_1D5C1D3027FFF563(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_273AB9C9690DD47B*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_1D5C1D3027FFF563_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
