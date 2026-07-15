#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class TAComponetPositonPasterMonoPlugin; }

#define CLASS_3_5AB18F7F8B74B214_METHOD_3_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0xB342410)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xB3432E0)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xB343340)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xB3433A0)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0xB343400)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB343280)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_596FD8239C601ED8_OFFSET UNITYSDK_OFFSET(0xB341F90)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_874751B687A07EF4_OFFSET UNITYSDK_OFFSET(0xB3434C0)
#define CLASS_3_5AB18F7F8B74B214_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB341EF0)
#define CLASS_3_5AB18F7F8B74B214_TICK_OFFSET UNITYSDK_OFFSET(0xB343460)
#define CLASS_3_5AB18F7F8B74B214__CTOR_OFFSET UNITYSDK_OFFSET(0xB343540)

inline static constexpr unsigned int Class_3_5AB18F7F8B74B214_TypeDefinitionIndex = 67226;

class Class_3_5AB18F7F8B74B214 : public ::RPG::Client::TABehaviorBase
{
public:
	::UnityEngine::Vector3 Field_3_0; // 0x38
	::UnityEngine::Vector3 Field_3_1; // 0x44
	::System::Single Field_3_2; // 0x50
	::System::Int32 Field_3_3; // 0x54
	::System::Int32 Field_3_4; // 0x58
	::UnityEngine::Vector3 Field_3_5; // 0x5C
	::UnityEngine::Vector4 Field_3_6; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_596FD8239C601ED8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_596FD8239C601ED8_OFFSET))(this);
	}

	::System::Void Method_3_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::RPG::Client::TAComponetPositonPasterMonoPlugin* Method_3_874751B687A07EF4()
	{
		return ((::RPG::Client::TAComponetPositonPasterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5AB18F7F8B74B214_METHOD_3_874751B687A07EF4_OFFSET))(this);
	}
};
