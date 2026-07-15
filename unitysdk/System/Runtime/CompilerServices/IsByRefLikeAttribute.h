#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C91EDC0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsByRefLikeAttribute_TypeDefinitionIndex = 41399;

	class IsByRefLikeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
