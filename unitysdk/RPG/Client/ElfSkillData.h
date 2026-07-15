#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3C3150)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfSkillData_TypeDefinitionIndex = 60959;

	class ElfSkillData : public ::System::Object
	{
	public:
		::System::Single CD; // 0x10
		::System::UInt32 MaxUse; // 0x14
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSKILLDATA__CTOR_OFFSET))(this);
		}
	};
}
