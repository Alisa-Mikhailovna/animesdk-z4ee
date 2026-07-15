#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B553C21756B27967;
class Class_1_DB66722311040883;
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2Stage; }

#define CLASS_1_A741BC50DE7E84FF_METHOD_1_435F40A12D2C6699_OFFSET UNITYSDK_OFFSET(0xBD78BA0)
#define CLASS_1_A741BC50DE7E84FF_METHOD_1_5B2F5B7EE52CF52B_OFFSET UNITYSDK_OFFSET(0xBD78E40)
#define CLASS_1_A741BC50DE7E84FF_METHOD_1_C26C23AC4E40B5B0_OFFSET UNITYSDK_OFFSET(0xBD78AF0)
#define CLASS_1_A741BC50DE7E84FF_METHOD_1_E2FBCBC48D5A71F7_OFFSET UNITYSDK_OFFSET(0xBD79000)

inline static constexpr unsigned int Class_1_A741BC50DE7E84FF_TypeDefinitionIndex = 72263;

class Class_1_A741BC50DE7E84FF : public ::System::Object
{
public:
	static ::RPG::Client::DiceCombat::DiceCombatV2Stage* Method_1_C26C23AC4E40B5B0(::System::UInt32 a1)
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2Stage*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A741BC50DE7E84FF_METHOD_1_C26C23AC4E40B5B0_OFFSET))(a1);
	}

	static ::RPG::Client::DiceCombat::DiceCombatV2PvPStage* Method_1_5B2F5B7EE52CF52B(::Class_1_B553C21756B27967* a1)
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2PvPStage*(*)(::Class_1_B553C21756B27967*))((::PBYTE)hIl2Cpp + CLASS_1_A741BC50DE7E84FF_METHOD_1_5B2F5B7EE52CF52B_OFFSET))(a1);
	}

	static ::RPG::Client::DiceCombat::DiceCombatV2PvEStage* Method_1_435F40A12D2C6699(::Class_1_B553C21756B27967* a1, ::Class_1_DB66722311040883* a2)
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2PvEStage*(*)(::Class_1_B553C21756B27967*, ::Class_1_DB66722311040883*))((::PBYTE)hIl2Cpp + CLASS_1_A741BC50DE7E84FF_METHOD_1_435F40A12D2C6699_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::UInt32>* Method_1_E2FBCBC48D5A71F7(::Class_1_B553C21756B27967* a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::Class_1_B553C21756B27967*))((::PBYTE)hIl2Cpp + CLASS_1_A741BC50DE7E84FF_METHOD_1_E2FBCBC48D5A71F7_OFFSET))(a1);
	}
};
