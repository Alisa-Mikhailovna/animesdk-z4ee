#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"

class AstraFX_DemoComponent;

#define CLASS_2_F1EAB1A8CF7BDD46_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0xBD84F50)
#define CLASS_2_F1EAB1A8CF7BDD46_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0xBD85060)
#define CLASS_2_F1EAB1A8CF7BDD46_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0xBD84FE0)
#define CLASS_2_F1EAB1A8CF7BDD46_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0xBD84E50)
#define CLASS_2_F1EAB1A8CF7BDD46__CTOR_OFFSET UNITYSDK_OFFSET(0xBD850B0)

inline static constexpr unsigned int Class_2_F1EAB1A8CF7BDD46_TypeDefinitionIndex = 45802;

class Class_2_F1EAB1A8CF7BDD46 : public ::UnityEngine::AstraFXRendererDelegate
{
public:
	::AstraFX_DemoComponent* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46__CTOR_OFFSET))(this);
	}

	::System::Void ResetSimulationState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46_RESETSIMULATIONSTATE_OFFSET))(this);
	}

	::System::Void AfterCreateResources()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46_AFTERCREATERESOURCES_OFFSET))(this);
	}

	::System::Void BeforeExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46_BEFOREEXECUTEPASSES_OFFSET))(this);
	}

	::System::Void AfterExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1EAB1A8CF7BDD46_AFTEREXECUTEPASSES_OFFSET))(this);
	}
};
