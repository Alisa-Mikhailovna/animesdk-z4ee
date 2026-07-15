#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFantasticStoryBattleResultPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F56653B2C03079A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEBA800)
#define CLASS_2_F56653B2C03079A9_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xDEBA890)
#define CLASS_2_F56653B2C03079A9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDEBA840)
#define CLASS_2_F56653B2C03079A9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDEBAA10)
#define CLASS_2_F56653B2C03079A9_TICK_OFFSET UNITYSDK_OFFSET(0xDEBAA60)
#define CLASS_2_F56653B2C03079A9__CTOR_OFFSET UNITYSDK_OFFSET(0xDEBA7F0)

inline static constexpr unsigned int Class_2_F56653B2C03079A9_TypeDefinitionIndex = 56020;

class Class_2_F56653B2C03079A9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowFantasticStoryBattleResultPage* Field_2_0; // 0x18
	::RPG::Client::LuaUIController* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFantasticStoryBattleResultPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFantasticStoryBattleResultPage*))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}
};
