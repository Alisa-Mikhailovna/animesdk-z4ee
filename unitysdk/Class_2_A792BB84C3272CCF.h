#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdvNpcGuardAlertDeviceInactive; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A792BB84C3272CCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9ED8D0)
#define CLASS_2_A792BB84C3272CCF_METHOD_2_3CAD92CFB876DBF6_1_OFFSET UNITYSDK_OFFSET(0xB9EDA40)
#define CLASS_2_A792BB84C3272CCF_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0xB9EE0C0)
#define CLASS_2_A792BB84C3272CCF_METHOD_2_5D9646F4A7309CF6_OFFSET UNITYSDK_OFFSET(0xB9EE320)
#define CLASS_2_A792BB84C3272CCF_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB9EDE80)
#define CLASS_2_A792BB84C3272CCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9EDFA0)
#define CLASS_2_A792BB84C3272CCF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9EE1C0)
#define CLASS_2_A792BB84C3272CCF_TICK_OFFSET UNITYSDK_OFFSET(0xB9EDB40)
#define CLASS_2_A792BB84C3272CCF__CTOR_OFFSET UNITYSDK_OFFSET(0xB9ED6A0)

inline static constexpr unsigned int Class_2_A792BB84C3272CCF_TypeDefinitionIndex = 50062;

class Class_2_A792BB84C3272CCF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcGuardAlertDeviceInactive* Field_2_0; // 0x18
	::Class_2_F67FF7EB526BF85C* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::NPCComponent* Field_2_3; // 0x30
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x38
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x40
	::System::UInt32 Field_2_6; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive*))((::PBYTE)hIl2Cpp + CLASS_2_A792BB84C3272CCF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A792BB84C3272CCF_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A792BB84C3272CCF_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A792BB84C3272CCF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A792BB84C3272CCF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A792BB84C3272CCF_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A792BB84C3272CCF_METHOD_2_3CAD92CFB876DBF6_1_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A792BB84C3272CCF_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_5D9646F4A7309CF6(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_A792BB84C3272CCF_METHOD_2_5D9646F4A7309CF6_OFFSET))(this, a1);
	}
};
