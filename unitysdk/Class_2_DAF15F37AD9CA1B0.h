#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffectFrameCaptureTexPlugin; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_DAF15F37AD9CA1B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFE1B90)
#define CLASS_2_DAF15F37AD9CA1B0_METHOD_2_13D8773148BD1DCD_OFFSET UNITYSDK_OFFSET(0xAFE21C0)
#define CLASS_2_DAF15F37AD9CA1B0_METHOD_2_539E39A6D30CFCBA_OFFSET UNITYSDK_OFFSET(0xAFE2500)
#define CLASS_2_DAF15F37AD9CA1B0_METHOD_2_A07C2061B55C1547_OFFSET UNITYSDK_OFFSET(0xAFE1E40)
#define CLASS_2_DAF15F37AD9CA1B0_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xAFE1C00)
#define CLASS_2_DAF15F37AD9CA1B0_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xAFE1B20)
#define CLASS_2_DAF15F37AD9CA1B0_METHOD_2_BD9580646E7D38AE_OFFSET UNITYSDK_OFFSET(0xAFE26F0)
#define CLASS_2_DAF15F37AD9CA1B0_METHOD_2_E4ED87595EB1B974_OFFSET UNITYSDK_OFFSET(0xAFE1DD0)
#define CLASS_2_DAF15F37AD9CA1B0_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xAFE2010)
#define CLASS_2_DAF15F37AD9CA1B0_METHOD_2_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0xAFE24A0)
#define CLASS_2_DAF15F37AD9CA1B0__CTOR_OFFSET UNITYSDK_OFFSET(0xAFE2A20)

inline static constexpr unsigned int Class_2_DAF15F37AD9CA1B0_TypeDefinitionIndex = 66721;

class Class_2_DAF15F37AD9CA1B0 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF15F37AD9CA1B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_DAF15F37AD9CA1B0_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF15F37AD9CA1B0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF15F37AD9CA1B0_METHOD_2_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF15F37AD9CA1B0_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_A07C2061B55C1547()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF15F37AD9CA1B0_METHOD_2_A07C2061B55C1547_OFFSET))(this);
	}

	::System::Boolean Method_2_539E39A6D30CFCBA(::RPG::CustomRP::FrameCapture_CaptureType a1, ::RPG::CustomRP::FrameCapture_CaptureFeature a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + CLASS_2_DAF15F37AD9CA1B0_METHOD_2_539E39A6D30CFCBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF15F37AD9CA1B0_METHOD_2_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_2_BD9580646E7D38AE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DAF15F37AD9CA1B0_METHOD_2_BD9580646E7D38AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_13D8773148BD1DCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF15F37AD9CA1B0_METHOD_2_13D8773148BD1DCD_OFFSET))(this);
	}

	::RPG::Client::MonoEffectFrameCaptureTexPlugin* Method_2_E4ED87595EB1B974()
	{
		return ((::RPG::Client::MonoEffectFrameCaptureTexPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF15F37AD9CA1B0_METHOD_2_E4ED87595EB1B974_OFFSET))(this);
	}
};
