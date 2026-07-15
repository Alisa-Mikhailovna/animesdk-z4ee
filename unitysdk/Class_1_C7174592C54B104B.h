#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MonopolyGameState.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_40B4F44059E8FC53;
class Class_2_F3C4BC00835CFDCA;
class Class_2_FD51057495DB654F;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class MonopolyMapConfig; }
namespace System { class String; }

#define CLASS_1_C7174592C54B104B_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD85AAB0)
#define CLASS_1_C7174592C54B104B_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD85A830)
#define CLASS_1_C7174592C54B104B_METHOD_1_03F3E8B89AA38AF9_OFFSET UNITYSDK_OFFSET(0xD85B140)
#define CLASS_1_C7174592C54B104B_METHOD_1_13CC54082E9757C7_OFFSET UNITYSDK_OFFSET(0xD85AFB0)
#define CLASS_1_C7174592C54B104B_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0xD85B8C0)
#define CLASS_1_C7174592C54B104B_METHOD_1_5D09DFA26924F01B_OFFSET UNITYSDK_OFFSET(0xD85B530)
#define CLASS_1_C7174592C54B104B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD85B450)
#define CLASS_1_C7174592C54B104B_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xD85B6C0)
#define CLASS_1_C7174592C54B104B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD85B3F0)
#define CLASS_1_C7174592C54B104B_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xD85BCB0)
#define CLASS_1_C7174592C54B104B_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xD85A880)
#define CLASS_1_C7174592C54B104B_METHOD_1_FD81768D38A00E7C_OFFSET UNITYSDK_OFFSET(0xD85B720)
#define CLASS_1_C7174592C54B104B__CTOR_OFFSET UNITYSDK_OFFSET(0xD85A7A0)

inline static constexpr unsigned int Class_1_C7174592C54B104B_TypeDefinitionIndex = 72085;

class Class_1_C7174592C54B104B : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	::RPG::Client::UIController* Field_1_4; // 0x10
	::Class_1_D33B7D6901AE39E9* Field_1_5; // 0x18
	::Class_2_F3C4BC00835CFDCA* Field_1_6; // 0x20
	::Class_2_FD51057495DB654F* Field_1_7; // 0x28
	::System::Boolean Field_1_8; // 0x30
	::System::Single Field_1_9; // 0x34
	::RPG::Client::LittleGame::MonopolyGameState Field_1_10; // 0x38

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_2_40B4F44059E8FC53* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_2_40B4F44059E8FC53*))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_03F3E8B89AA38AF9(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_METHOD_1_03F3E8B89AA38AF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_5D09DFA26924F01B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_METHOD_1_5D09DFA26924F01B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_METHOD_1_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_METHOD_1_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::RPG::GameCore::MonopolyMapConfig* Method_1_FD81768D38A00E7C()
	{
		return ((::RPG::GameCore::MonopolyMapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_METHOD_1_FD81768D38A00E7C_OFFSET))(this);
	}

	::Class_2_FD51057495DB654F* Method_1_13CC54082E9757C7()
	{
		return ((::Class_2_FD51057495DB654F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7174592C54B104B_METHOD_1_13CC54082E9757C7_OFFSET))(this);
	}
};
