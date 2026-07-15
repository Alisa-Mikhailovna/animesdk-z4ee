#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionToType.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_0597192E98B9E538;
class Class_1_B3B75743231343E7;
class Class_1_D93F8AE271D8A728;
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace System { class String; }

#define CLASS_1_EC119E9B713C3132_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5ECBC0)
#define CLASS_1_EC119E9B713C3132_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A5ED040)
#define CLASS_1_EC119E9B713C3132_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A5ED020)
#define CLASS_1_EC119E9B713C3132_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1A5ECD40)
#define CLASS_1_EC119E9B713C3132_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A5ED050)
#define CLASS_1_EC119E9B713C3132_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1A5ECE70)
#define CLASS_1_EC119E9B713C3132_METHOD_1_58281F8DD6185AEB_OFFSET UNITYSDK_OFFSET(0x1A5ED000)
#define CLASS_1_EC119E9B713C3132_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x1A5ECB50)
#define CLASS_1_EC119E9B713C3132_METHOD_1_D8E3D6C72BC9AE7A_OFFSET UNITYSDK_OFFSET(0x1A5ECFE0)
#define CLASS_1_EC119E9B713C3132_METHOD_1_E86FC7A4043E5205_OFFSET UNITYSDK_OFFSET(0x1A5ECDA0)
#define CLASS_1_EC119E9B713C3132_METHOD_1_FC9926C19FB6003D_OFFSET UNITYSDK_OFFSET(0x1A5ECC90)
#define CLASS_1_EC119E9B713C3132__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5ECA70)

inline static constexpr unsigned int Class_1_EC119E9B713C3132_TypeDefinitionIndex = 35424;

class Class_1_EC119E9B713C3132 : public ::System::Object
{
public:
	::Class_1_D93F8AE271D8A728* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_1_0597192E98B9E538* Field_1_2; // 0x20
	::RPG::GameCore::StateTreeTransitionConfig* Field_1_3; // 0x28
	::Class_1_B3B75743231343E7* Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x38

	::System::Void _ctor(::RPG::GameCore::StateTreeTransitionConfig* a1, ::Class_1_D93F8AE271D8A728* a2, ::Class_1_B3B75743231343E7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeTransitionConfig*, ::Class_1_D93F8AE271D8A728*, ::Class_1_B3B75743231343E7*))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_FC9926C19FB6003D(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_FC9926C19FB6003D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_E86FC7A4043E5205(::RPG::Client::LittleGameShare::TaskState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TaskState))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_E86FC7A4043E5205_OFFSET))(this, a1);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::RPG::GameCore::StateTreeTransitionTriggerType Method_1_D8E3D6C72BC9AE7A()
	{
		return ((::RPG::GameCore::StateTreeTransitionTriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_D8E3D6C72BC9AE7A_OFFSET))(this);
	}

	::RPG::GameCore::StateTreeTransitionToType Method_1_58281F8DD6185AEB()
	{
		return ((::RPG::GameCore::StateTreeTransitionToType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_58281F8DD6185AEB_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::Class_1_B3B75743231343E7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B3B75743231343E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
