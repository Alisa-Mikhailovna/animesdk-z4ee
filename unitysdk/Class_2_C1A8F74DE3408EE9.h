#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_6F0828FBB5B15920;
namespace Entitas { class IEntity; }

#define CLASS_2_C1A8F74DE3408EE9_ONADD_OFFSET UNITYSDK_OFFSET(0x151C5D50)
#define CLASS_2_C1A8F74DE3408EE9_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x151C5FE0)
#define CLASS_2_C1A8F74DE3408EE9_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x151C5DB0)
#define CLASS_2_C1A8F74DE3408EE9__CTOR_OFFSET UNITYSDK_OFFSET(0x151C6030)

inline static constexpr unsigned int Class_2_C1A8F74DE3408EE9_TypeDefinitionIndex = 72568;

class Class_2_C1A8F74DE3408EE9 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_6F0828FBB5B15920*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A8F74DE3408EE9__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_6F0828FBB5B15920* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_6F0828FBB5B15920*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_C1A8F74DE3408EE9_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_6F0828FBB5B15920* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_6F0828FBB5B15920*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_C1A8F74DE3408EE9_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_C1A8F74DE3408EE9_ONREMOVE_OFFSET))(this, a1, a2);
	}
};
