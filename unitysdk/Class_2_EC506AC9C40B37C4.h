#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_3B6C37FDA0C2C8C1;
namespace Entitas { class IEntity; }

#define CLASS_2_EC506AC9C40B37C4_METHOD_2_3EB231FECB3AA72E_OFFSET UNITYSDK_OFFSET(0xADE4DE0)
#define CLASS_2_EC506AC9C40B37C4_ONADD_OFFSET UNITYSDK_OFFSET(0xADE4CC0)
#define CLASS_2_EC506AC9C40B37C4_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xADE50E0)
#define CLASS_2_EC506AC9C40B37C4_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xADE4FB0)
#define CLASS_2_EC506AC9C40B37C4__CTOR_OFFSET UNITYSDK_OFFSET(0xADE5250)

inline static constexpr unsigned int Class_2_EC506AC9C40B37C4_TypeDefinitionIndex = 75152;

class Class_2_EC506AC9C40B37C4 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_3B6C37FDA0C2C8C1*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC506AC9C40B37C4__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_3B6C37FDA0C2C8C1* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_3B6C37FDA0C2C8C1*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_EC506AC9C40B37C4_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_3B6C37FDA0C2C8C1* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_3B6C37FDA0C2C8C1*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_EC506AC9C40B37C4_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_EC506AC9C40B37C4_ONREMOVE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3EB231FECB3AA72E(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_EC506AC9C40B37C4_METHOD_2_3EB231FECB3AA72E_OFFSET))(this, a1, a2);
	}
};
