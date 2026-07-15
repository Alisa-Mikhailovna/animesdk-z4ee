#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_FLAGSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FB0A0)

namespace System
{
	inline static constexpr unsigned int FlagsAttribute_TypeDefinitionIndex = 248;

	class FlagsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FLAGSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
