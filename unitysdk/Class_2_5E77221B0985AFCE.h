#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoWavingBlockControl; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_5E77221B0985AFCE_METHOD_2_1655B698CBDB2306_OFFSET UNITYSDK_OFFSET(0xACDECC0)
#define CLASS_2_5E77221B0985AFCE_METHOD_2_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0xACDFC70)
#define CLASS_2_5E77221B0985AFCE_METHOD_2_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0xACDDEC0)
#define CLASS_2_5E77221B0985AFCE_METHOD_2_90A07D9BC1B409B9_OFFSET UNITYSDK_OFFSET(0xACDF390)
#define CLASS_2_5E77221B0985AFCE_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xACDFB80)
#define CLASS_2_5E77221B0985AFCE_METHOD_2_ACB81005B52D7683_OFFSET UNITYSDK_OFFSET(0xACDFB20)
#define CLASS_2_5E77221B0985AFCE_METHOD_2_BBA050567EC32095_OFFSET UNITYSDK_OFFSET(0xACDFAB0)
#define CLASS_2_5E77221B0985AFCE_METHOD_2_BF9BCC073D7977E5_OFFSET UNITYSDK_OFFSET(0xACDE6E0)
#define CLASS_2_5E77221B0985AFCE_METHOD_2_D0E9EC92AB6FC0A8_OFFSET UNITYSDK_OFFSET(0xACDDE20)
#define CLASS_2_5E77221B0985AFCE_METHOD_2_E11BF4997198DC1F_OFFSET UNITYSDK_OFFSET(0xACE1DA0)
#define CLASS_2_5E77221B0985AFCE__CTOR_OFFSET UNITYSDK_OFFSET(0xACE24E0)

inline static constexpr unsigned int Class_2_5E77221B0985AFCE_TypeDefinitionIndex = 67225;

class Class_2_5E77221B0985AFCE : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single Field_2_0; // 0x18
	::UnityEngine::Vector4 Field_2_1; // 0x1C
	::UnityEngine::Vector3 Field_2_2; // 0x2C
	::System::Single Field_2_3; // 0x38
	::System::Single Field_2_4; // 0x3C
	::System::Single Field_2_5; // 0x40
	::UnityEngine::Vector3 Field_2_6; // 0x44
	::System::Boolean Field_2_7; // 0x50
	::System::Boolean Field_2_8; // 0x51
	::System::Single Field_2_9; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E77221B0985AFCE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0E9EC92AB6FC0A8(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_5E77221B0985AFCE_METHOD_2_D0E9EC92AB6FC0A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF9BCC073D7977E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E77221B0985AFCE_METHOD_2_BF9BCC073D7977E5_OFFSET))(this);
	}

	::System::Void Method_2_1655B698CBDB2306()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E77221B0985AFCE_METHOD_2_1655B698CBDB2306_OFFSET))(this);
	}

	::System::Void Method_2_ACB81005B52D7683(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_5E77221B0985AFCE_METHOD_2_ACB81005B52D7683_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E77221B0985AFCE_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E77221B0985AFCE_METHOD_2_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::System::Void Method_2_E11BF4997198DC1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E77221B0985AFCE_METHOD_2_E11BF4997198DC1F_OFFSET))(this);
	}

	::System::Void Method_2_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E77221B0985AFCE_METHOD_2_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Method_2_90A07D9BC1B409B9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E77221B0985AFCE_METHOD_2_90A07D9BC1B409B9_OFFSET))(this);
	}

	::RPG::Client::MonoWavingBlockControl* Method_2_BBA050567EC32095()
	{
		return ((::RPG::Client::MonoWavingBlockControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E77221B0985AFCE_METHOD_2_BBA050567EC32095_OFFSET))(this);
	}
};
