#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D00E990)
#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D00E9A0)
#define UNITYENGINE_CUSTOMYIELDINSTRUCTION_RESET_OFFSET UNITYSDK_OFFSET(0x1D00EA20)
#define UNITYENGINE_CUSTOMYIELDINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D00EA30)

namespace UnityEngine
{
	inline static constexpr unsigned int CustomYieldInstruction_TypeDefinitionIndex = 4310;

	class CustomYieldInstruction : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMYIELDINSTRUCTION_RESET_OFFSET))(this);
		}
	};
}
