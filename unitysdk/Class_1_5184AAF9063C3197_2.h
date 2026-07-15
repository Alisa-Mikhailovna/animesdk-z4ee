#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_5184AAF9063C3197_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x151B4910)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x151B5280)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x151B4A20)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0x151B4960)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_6852A4B2493D79D0_OFFSET UNITYSDK_OFFSET(0x151B4CD0)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x151B4EC0)
#define CLASS_1_5184AAF9063C3197_2_METHOD_1_E4DDC118595D11DF_OFFSET UNITYSDK_OFFSET(0x151B49B0)
#define CLASS_1_5184AAF9063C3197_2_TICK_OFFSET UNITYSDK_OFFSET(0x151B4DB0)
#define CLASS_1_5184AAF9063C3197_2__CTOR_OFFSET UNITYSDK_OFFSET(0x151B4900)

inline static constexpr unsigned int Class_1_5184AAF9063C3197_2_TypeDefinitionIndex = 53329;

class Class_1_5184AAF9063C3197_2 : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::Class_1_E7811A222424F15E* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_E4DDC118595D11DF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_E4DDC118595D11DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_6852A4B2493D79D0(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_6852A4B2493D79D0_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5184AAF9063C3197_2_METHOD_1_289F28027FF47717_OFFSET))(this);
	}
};
