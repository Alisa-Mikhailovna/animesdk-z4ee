#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_EXECUTEALWAYS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01BCE0)

namespace UnityEngine
{
	inline static constexpr unsigned int ExecuteAlways_TypeDefinitionIndex = 4295;

	class ExecuteAlways : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXECUTEALWAYS__CTOR_OFFSET))(this);
		}
	};
}
