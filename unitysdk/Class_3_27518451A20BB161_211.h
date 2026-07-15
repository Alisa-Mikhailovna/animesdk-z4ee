#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_36857654F4A216AC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_211_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1196FD40)
#define CLASS_3_27518451A20BB161_211_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1196FD80)
#define CLASS_3_27518451A20BB161_211__CTOR_OFFSET UNITYSDK_OFFSET(0x1196FD10)

inline static constexpr unsigned int Class_3_27518451A20BB161_211_TypeDefinitionIndex = 52992;

class Class_3_27518451A20BB161_211 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_36857654F4A216AC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_36857654F4A216AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_36857654F4A216AC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_211__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_211_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_211_ONTASKBEGIN_OFFSET))(this);
	}
};
