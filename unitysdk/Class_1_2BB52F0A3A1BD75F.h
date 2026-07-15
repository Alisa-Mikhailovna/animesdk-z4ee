#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelUIComponent; }

#define CLASS_1_2BB52F0A3A1BD75F_METHOD_1_265254759EE295CD_OFFSET UNITYSDK_OFFSET(0x14ADCC80)
#define CLASS_1_2BB52F0A3A1BD75F_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x14ADCCE0)
#define CLASS_1_2BB52F0A3A1BD75F_METHOD_1_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x14ADCF00)
#define CLASS_1_2BB52F0A3A1BD75F_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x14ADD140)
#define CLASS_1_2BB52F0A3A1BD75F_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14ADCD80)
#define CLASS_1_2BB52F0A3A1BD75F_METHOD_1_A77870C566864FEA_OFFSET UNITYSDK_OFFSET(0x14ADCE00)
#define CLASS_1_2BB52F0A3A1BD75F__CTOR_OFFSET UNITYSDK_OFFSET(0x14ADDAE0)

inline static constexpr unsigned int Class_1_2BB52F0A3A1BD75F_TypeDefinitionIndex = 69093;

class Class_1_2BB52F0A3A1BD75F : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* Field_1_0; // 0x10
	::RPG::GameCore::LevelUIComponent* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BB52F0A3A1BD75F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_265254759EE295CD(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_2BB52F0A3A1BD75F_METHOD_1_265254759EE295CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BB52F0A3A1BD75F_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BB52F0A3A1BD75F_METHOD_1_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_1_A77870C566864FEA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2BB52F0A3A1BD75F_METHOD_1_A77870C566864FEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_585E2EA201FDE7ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BB52F0A3A1BD75F_METHOD_1_585E2EA201FDE7ED_OFFSET))(this);
	}

	::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BB52F0A3A1BD75F_METHOD_1_8DC652D916C182B2_OFFSET))(this);
	}
};
