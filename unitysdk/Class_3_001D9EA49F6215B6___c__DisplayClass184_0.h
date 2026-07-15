#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }

#define CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS184_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A0C20)
#define CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS184_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xB1A7AF0)
#define CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS184_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0xB1A7B70)

inline static constexpr unsigned int Class_3_001D9EA49F6215B6___c__DisplayClass184_0_TypeDefinitionIndex = 72778;

class Class_3_001D9EA49F6215B6___c__DisplayClass184_0 : public ::System::Object
{
public:
	::Class_2_56DCA1B58073717B* propEntity; // 0x10
	::Class_3_001D9EA49F6215B6* __4__this; // 0x18
	::RPG::GameCore::FiveDimTriggerEventEmitterConfig* emitterConfig; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS184_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTriggerEventEmitterTrigger_b__0(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS184_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__0_OFFSET))(this, a1);
	}

	::System::Void __CreateTriggerEventEmitterTrigger_b__1(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS184_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__1_OFFSET))(this, a1);
	}
};
