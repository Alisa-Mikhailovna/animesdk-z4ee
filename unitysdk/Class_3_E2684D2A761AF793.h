#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_HipplenBallFetchStopRun; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E2684D2A761AF793_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15133FB0)
#define CLASS_3_E2684D2A761AF793_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15133D30)
#define CLASS_3_E2684D2A761AF793_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15133F60)
#define CLASS_3_E2684D2A761AF793_TICK_OFFSET UNITYSDK_OFFSET(0x15133F00)
#define CLASS_3_E2684D2A761AF793__CTOR_OFFSET UNITYSDK_OFFSET(0x15133D00)

inline static constexpr unsigned int Class_3_E2684D2A761AF793_TypeDefinitionIndex = 49905;

class Class_3_E2684D2A761AF793 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_HipplenBallFetchStopRun*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun*))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2684D2A761AF793_DISPOSE_OFFSET))(this);
	}
};
