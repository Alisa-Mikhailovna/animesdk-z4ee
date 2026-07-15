#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3AA8DA5529BE44AF.h"

namespace RPG::GameCore { class PlayAeonTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_2A73302F5D8B0BA6_OFFSET UNITYSDK_OFFSET(0xAF01800)
#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xAF01970)
#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xAF014F0)
#define CLASS_4_EA0E2FF2776BCC46_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF01490)
#define CLASS_4_EA0E2FF2776BCC46__CTOR_OFFSET UNITYSDK_OFFSET(0xAF01460)

inline static constexpr unsigned int Class_4_EA0E2FF2776BCC46_TypeDefinitionIndex = 55680;

class Class_4_EA0E2FF2776BCC46 : public ::Class_3_3AA8DA5529BE44AF
{
public:
	::RPG::GameCore::PlayAeonTalk* Field_4_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAeonTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAeonTalk*))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_4_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_METHOD_4_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_4_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_METHOD_4_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Boolean Method_4_2A73302F5D8B0BA6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_METHOD_4_2A73302F5D8B0BA6_OFFSET))(this);
	}
};
