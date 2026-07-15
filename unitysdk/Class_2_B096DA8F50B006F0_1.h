#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_B096DA8F50B006F0_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x143E9570)
#define CLASS_2_B096DA8F50B006F0_1_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x143E9580)
#define CLASS_2_B096DA8F50B006F0_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x143E98A0)
#define CLASS_2_B096DA8F50B006F0_1_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x143E98E0)
#define CLASS_2_B096DA8F50B006F0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x143E9AD0)

inline static constexpr unsigned int Class_2_B096DA8F50B006F0_1_TypeDefinitionIndex = 53621;

class Class_2_B096DA8F50B006F0_1 : public ::Class_1_0FEB237AF044DA54
{
public:
	::RPG::GameCore::FixPoint Field_2_0; // 0x10
	::RPG::GameCore::FixPoint Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20
	::System::UInt32 Field_2_3; // 0x24
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_1_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_1_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
