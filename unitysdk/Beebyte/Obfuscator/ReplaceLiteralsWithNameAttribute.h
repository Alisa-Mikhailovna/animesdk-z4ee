#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEEBYTE_OBFUSCATOR_REPLACELITERALSWITHNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E2050)

namespace Beebyte::Obfuscator
{
	inline static constexpr unsigned int ReplaceLiteralsWithNameAttribute_TypeDefinitionIndex = 45261;

	class ReplaceLiteralsWithNameAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEBYTE_OBFUSCATOR_REPLACELITERALSWITHNAMEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
