#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class CreateEmojiBubbleParam; }
namespace RPG::GameCore { class ShowEmojiBubble; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_7AC5B8D33D57585F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA11760)
#define CLASS_2_7AC5B8D33D57585F_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xBA11C10)
#define CLASS_2_7AC5B8D33D57585F_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xBA11CA0)
#define CLASS_2_7AC5B8D33D57585F_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBA11BA0)
#define CLASS_2_7AC5B8D33D57585F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA11820)
#define CLASS_2_7AC5B8D33D57585F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA11AF0)
#define CLASS_2_7AC5B8D33D57585F_TICK_OFFSET UNITYSDK_OFFSET(0xBA11B40)
#define CLASS_2_7AC5B8D33D57585F__CTOR_OFFSET UNITYSDK_OFFSET(0xBA11750)

inline static constexpr unsigned int Class_2_7AC5B8D33D57585F_TypeDefinitionIndex = 56009;

class Class_2_7AC5B8D33D57585F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowEmojiBubble* Field_2_1; // 0x20
	::RPG::Client::CreateEmojiBubbleParam* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEmojiBubble* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEmojiBubble*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}
};
