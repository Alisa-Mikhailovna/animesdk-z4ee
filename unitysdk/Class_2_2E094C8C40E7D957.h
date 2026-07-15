#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"

class Class_0_16E4307DCC419505_1122;

#define CLASS_2_2E094C8C40E7D957_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x14407AE0)
#define CLASS_2_2E094C8C40E7D957_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x14407D80)
#define CLASS_2_2E094C8C40E7D957_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x14407C30)
#define CLASS_2_2E094C8C40E7D957_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x14407900)
#define CLASS_2_2E094C8C40E7D957__CTOR_OFFSET UNITYSDK_OFFSET(0x14407ED0)

inline static constexpr unsigned int Class_2_2E094C8C40E7D957_TypeDefinitionIndex = 70283;

class Class_2_2E094C8C40E7D957 : public ::UnityEngine::AstraFXRendererDelegate
{
public:
	::Class_0_16E4307DCC419505_1122* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E094C8C40E7D957__CTOR_OFFSET))(this);
	}

	::System::Void ResetSimulationState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E094C8C40E7D957_RESETSIMULATIONSTATE_OFFSET))(this);
	}

	::System::Void AfterCreateResources()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E094C8C40E7D957_AFTERCREATERESOURCES_OFFSET))(this);
	}

	::System::Void BeforeExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E094C8C40E7D957_BEFOREEXECUTEPASSES_OFFSET))(this);
	}

	::System::Void AfterExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E094C8C40E7D957_AFTEREXECUTEPASSES_OFFSET))(this);
	}
};
