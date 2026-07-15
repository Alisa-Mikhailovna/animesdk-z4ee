#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueAdvRoomCandyCrashGameProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_12003A8E285E2D64_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1567FC20)
#define CLASS_2_12003A8E285E2D64_METHOD_2_37D641371E4C8F58_OFFSET UNITYSDK_OFFSET(0x15680030)
#define CLASS_2_12003A8E285E2D64_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x156800A0)
#define CLASS_2_12003A8E285E2D64_METHOD_2_FF4842B24EFFCBD6_OFFSET UNITYSDK_OFFSET(0x1567FF60)
#define CLASS_2_12003A8E285E2D64_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1567FD70)
#define CLASS_2_12003A8E285E2D64_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1567FEB0)
#define CLASS_2_12003A8E285E2D64_TICK_OFFSET UNITYSDK_OFFSET(0x1567FF00)
#define CLASS_2_12003A8E285E2D64__CTOR_OFFSET UNITYSDK_OFFSET(0x1567FC10)

inline static constexpr unsigned int Class_2_12003A8E285E2D64_TypeDefinitionIndex = 55821;

class Class_2_12003A8E285E2D64 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::UInt32 Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess*))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF4842B24EFFCBD6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_METHOD_2_FF4842B24EFFCBD6_OFFSET))(this, a1);
	}

	::System::Void Method_2_37D641371E4C8F58(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_METHOD_2_37D641371E4C8F58_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}
};
