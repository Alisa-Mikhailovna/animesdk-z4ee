#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47DAE01AFECF913D.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3A873ED311700F93;
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }

#define CLASS_2_4684D9319ADB79CC_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x153596B0)
#define CLASS_2_4684D9319ADB79CC_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x15359670)
#define CLASS_2_4684D9319ADB79CC_GET_V0_OFFSET UNITYSDK_OFFSET(0x153596E0)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x1535AD00)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x153597C0)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x1535A2A0)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x15359B20)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_8F4CC8440DF53D30_OFFSET UNITYSDK_OFFSET(0x15359710)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x1535A750)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x1535A8E0)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_C8324B85AEB18C17_OFFSET UNITYSDK_OFFSET(0x15359660)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x1535A890)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_DA7D5FED1E10712C_OFFSET UNITYSDK_OFFSET(0x1535B330)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_E0C935AE223B555F_OFFSET UNITYSDK_OFFSET(0x1535AC30)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x1535AB40)
#define CLASS_2_4684D9319ADB79CC_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x153596D0)
#define CLASS_2_4684D9319ADB79CC_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x15359690)
#define CLASS_2_4684D9319ADB79CC_SET_V0_OFFSET UNITYSDK_OFFSET(0x15359700)
#define CLASS_2_4684D9319ADB79CC__CTOR_OFFSET UNITYSDK_OFFSET(0x153597A0)

inline static constexpr unsigned int Class_2_4684D9319ADB79CC_TypeDefinitionIndex = 74163;

class Class_2_4684D9319ADB79CC : public ::Class_1_47DAE01AFECF913D
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::RPG::Client::TriggerEffectParamsRef Field_2_1; // 0x40
	::RPG::GameCore::CakeRaceMoveStateConfig* Field_2_2; // 0x50
	::RPG::GameCore::CakeRaceCurveType Field_2_3; // 0x58
	::System::Single Field_2_4; // 0x5C
	::System::UInt32 Field_2_5; // 0x60
	::RPG::MVector3 _EndPos_k__BackingField; // 0x64
	::RPG::MVector3 _V0_k__BackingField; // 0x70
	::RPG::MVector3 _StartPos_k__BackingField; // 0x7C
	::RPG::GameCore::CakeRaceMoveState Field_2_9; // 0x88
	::System::Single Field_2_10; // 0x8C

	::System::Void _ctor(::Class_1_3A873ED311700F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceAIState Method_2_C8324B85AEB18C17()
	{
		return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_C8324B85AEB18C17_OFFSET))(this);
	}

	::RPG::MVector3 get_StartPos()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_GET_STARTPOS_OFFSET))(this);
	}

	::System::Void set_StartPos(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_SET_STARTPOS_OFFSET))(this, a1);
	}

	::RPG::MVector3 get_EndPos()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_SET_ENDPOS_OFFSET))(this, a1);
	}

	::RPG::MVector3 get_V0()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_GET_V0_OFFSET))(this);
	}

	::System::Void set_V0(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_SET_V0_OFFSET))(this, a1);
	}

	static ::Class_2_4684D9319ADB79CC* Method_2_8F4CC8440DF53D30(::Class_1_3A873ED311700F93* a1)
	{
		return ((::Class_2_4684D9319ADB79CC*(*)(::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_8F4CC8440DF53D30_OFFSET))(a1);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_2_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_3306F24AC967FE79_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_E0C935AE223B555F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_E0C935AE223B555F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_ADA85C40A3382050_OFFSET))(this);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Single Method_2_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Single Method_2_DA7D5FED1E10712C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_DA7D5FED1E10712C_OFFSET))(this);
	}
};
