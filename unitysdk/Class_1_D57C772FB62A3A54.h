#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::Client { class GridFightDivisionListViewExtra; }

#define CLASS_1_D57C772FB62A3A54_ENTER_OFFSET UNITYSDK_OFFSET(0x147234F0)
#define CLASS_1_D57C772FB62A3A54_EXIT_OFFSET UNITYSDK_OFFSET(0x14723A60)
#define CLASS_1_D57C772FB62A3A54_TICK_OFFSET UNITYSDK_OFFSET(0x147237D0)
#define CLASS_1_D57C772FB62A3A54__CTOR_OFFSET UNITYSDK_OFFSET(0x14723AA0)

inline static constexpr unsigned int Class_1_D57C772FB62A3A54_TypeDefinitionIndex = 61531;

class Class_1_D57C772FB62A3A54 : public ::System::Object
{
public:
	::Class_1_23F67DD15593C8D6* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D57C772FB62A3A54__CTOR_OFFSET))(this);
	}

	::System::Void Enter(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_D57C772FB62A3A54_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_D57C772FB62A3A54_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D57C772FB62A3A54_EXIT_OFFSET))(this);
	}
};
