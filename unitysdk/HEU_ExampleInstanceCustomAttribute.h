#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_OutputAttribute; }
namespace System { class String; }

#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_INSTANCERCALLBACK_OFFSET UNITYSDK_OFFSET(0x19830330)
#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_LOGATTR_OFFSET UNITYSDK_OFFSET(0x19830950)
#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19830B00)

inline static constexpr unsigned int HEU_ExampleInstanceCustomAttribute_TypeDefinitionIndex = 38193;

class HEU_ExampleInstanceCustomAttribute : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE__CTOR_OFFSET))(this);
	}

	::System::Void InstancerCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_INSTANCERCALLBACK_OFFSET))(this);
	}

	static ::System::Void LogAttr(::HoudiniEngineUnity::HEU_OutputAttribute* a1)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_OutputAttribute*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_LOGATTR_OFFSET))(a1);
	}
};
