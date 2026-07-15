#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UINotifyMonopolyEventStart; }

#define CLASS_2_BFF781A064DEC402_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14887850)
#define CLASS_2_BFF781A064DEC402_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14887740)
#define CLASS_2_BFF781A064DEC402_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14887800)
#define CLASS_2_BFF781A064DEC402_TICK_OFFSET UNITYSDK_OFFSET(0x148877A0)
#define CLASS_2_BFF781A064DEC402__CTOR_OFFSET UNITYSDK_OFFSET(0x14887730)

inline static constexpr unsigned int Class_2_BFF781A064DEC402_TypeDefinitionIndex = 56204;

class Class_2_BFF781A064DEC402 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::UINotifyMonopolyEventStart* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UINotifyMonopolyEventStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UINotifyMonopolyEventStart*))((::PBYTE)hIl2Cpp + CLASS_2_BFF781A064DEC402__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFF781A064DEC402_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BFF781A064DEC402_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFF781A064DEC402_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFF781A064DEC402_DISPOSE_OFFSET))(this);
	}
};
