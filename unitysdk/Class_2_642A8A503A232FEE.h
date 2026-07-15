#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoLoopedRotaion; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_642A8A503A232FEE_METHOD_2_3A014BFC3AEB35CA_OFFSET UNITYSDK_OFFSET(0x14C0F340)
#define CLASS_2_642A8A503A232FEE_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x14C0F3E0)
#define CLASS_2_642A8A503A232FEE_METHOD_2_849649A14B6879D1_OFFSET UNITYSDK_OFFSET(0x14C0F000)
#define CLASS_2_642A8A503A232FEE_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x14C0F390)
#define CLASS_2_642A8A503A232FEE__CTOR_OFFSET UNITYSDK_OFFSET(0x14C10050)

inline static constexpr unsigned int Class_2_642A8A503A232FEE_TypeDefinitionIndex = 67219;

class Class_2_642A8A503A232FEE : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::RPG::Client::MonoLoopedRotaion* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C
	::System::Single Field_2_4; // 0x30
	::UnityEngine::Vector3 Field_2_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_642A8A503A232FEE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_849649A14B6879D1(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_642A8A503A232FEE_METHOD_2_849649A14B6879D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_642A8A503A232FEE_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_642A8A503A232FEE_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::RPG::Client::MonoLoopedRotaion* Method_2_3A014BFC3AEB35CA()
	{
		return ((::RPG::Client::MonoLoopedRotaion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_642A8A503A232FEE_METHOD_2_3A014BFC3AEB35CA_OFFSET))(this);
	}
};
