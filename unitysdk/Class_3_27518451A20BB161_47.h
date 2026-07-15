#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_10;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_47_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FA3C00)
#define CLASS_3_27518451A20BB161_47__CTOR_OFFSET UNITYSDK_OFFSET(0x11FA3BD0)

inline static constexpr unsigned int Class_3_27518451A20BB161_47_TypeDefinitionIndex = 50457;

class Class_3_27518451A20BB161_47 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_10*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_10* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_10*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_47__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_47_ONTASKBEGIN_OFFSET))(this);
	}
};
