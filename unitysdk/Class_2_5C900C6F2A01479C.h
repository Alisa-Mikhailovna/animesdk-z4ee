#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client { class Effect_WorldWireFrame; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_5C900C6F2A01479C_METHOD_2_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0xB001630)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_2218F186729D7675_OFFSET UNITYSDK_OFFSET(0xAFFFBF0)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xB001D70)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0xB000120)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_49359CA8B919527C_OFFSET UNITYSDK_OFFSET(0xAFFFB80)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_4BAE91CE930BB524_OFFSET UNITYSDK_OFFSET(0xB000370)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_884EBA569E8237DC_OFFSET UNITYSDK_OFFSET(0xAFFEA30)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0xB001470)
#define CLASS_2_5C900C6F2A01479C_METHOD_2_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0xB000810)
#define CLASS_2_5C900C6F2A01479C__CTOR_OFFSET UNITYSDK_OFFSET(0xB0020F0)

inline static constexpr unsigned int Class_2_5C900C6F2A01479C_TypeDefinitionIndex = 67211;

class Class_2_5C900C6F2A01479C : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Vector3Int Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x24
	::System::Single Field_2_2; // 0x28
	::UnityEngine::Color Field_2_3; // 0x2C
	::UnityEngine::Vector3 Field_2_4; // 0x3C
	::System::Single Field_2_5; // 0x48
	::UnityEngine::Vector3 Field_2_6; // 0x4C
	::UnityEngine::Vector3 Field_2_7; // 0x58
	::System::Single Field_2_8; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_884EBA569E8237DC(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_884EBA569E8237DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BAE91CE930BB524()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_4BAE91CE930BB524_OFFSET))(this);
	}

	::System::Void Method_2_EEED34E9AAC26D51()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_EEED34E9AAC26D51_OFFSET))(this);
	}

	::System::Void Method_2_2218F186729D7675(::UnityEngine::LineRenderer* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_2218F186729D7675_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_20E8013D4AB67E17()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_20E8013D4AB67E17_OFFSET))(this);
	}

	::RPG::Client::Effect_WorldWireFrame* Method_2_49359CA8B919527C()
	{
		return ((::RPG::Client::Effect_WorldWireFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C900C6F2A01479C_METHOD_2_49359CA8B919527C_OFFSET))(this);
	}
};
