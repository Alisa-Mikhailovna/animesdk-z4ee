#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/System/Object.h"

class Class_1_C1FC5F79840837FA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System { class String; }

#define CLASS_1_2E2FD00CD63ADF16_GET_ISREGISTERREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0xD871D20)
#define CLASS_1_2E2FD00CD63ADF16_METHOD_1_3A371FE1A66DC309_OFFSET UNITYSDK_OFFSET(0xD871890)
#define CLASS_1_2E2FD00CD63ADF16_METHOD_1_40C9BB44984716C6_OFFSET UNITYSDK_OFFSET(0xD871CC0)
#define CLASS_1_2E2FD00CD63ADF16_METHOD_1_801A8FFA2701D7C9_OFFSET UNITYSDK_OFFSET(0xD871910)
#define CLASS_1_2E2FD00CD63ADF16_METHOD_1_B8B555F33BAC54D0_OFFSET UNITYSDK_OFFSET(0xD8717E0)
#define CLASS_1_2E2FD00CD63ADF16_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0xD8715B0)
#define CLASS_1_2E2FD00CD63ADF16_SET_ISREGISTERREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0xD871D30)
#define CLASS_1_2E2FD00CD63ADF16_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD871A10)
#define CLASS_1_2E2FD00CD63ADF16__CTOR_OFFSET UNITYSDK_OFFSET(0xD871D40)

inline static constexpr unsigned int Class_1_2E2FD00CD63ADF16_TypeDefinitionIndex = 58180;

class Class_1_2E2FD00CD63ADF16 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Boolean _IsRegisterRegionChange_k__BackingField; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::RPG::GameCore::MissionWayPointType Field_1_4; // 0x20
	::System::UInt32 Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_1_B8B555F33BAC54D0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_METHOD_1_B8B555F33BAC54D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3A371FE1A66DC309(::RPG::GameCore::SubMissionInfoConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_METHOD_1_3A371FE1A66DC309_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_801A8FFA2701D7C9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_METHOD_1_801A8FFA2701D7C9_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_40C9BB44984716C6(::Class_1_C1FC5F79840837FA* a1, ::Class_1_C1FC5F79840837FA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*, ::Class_1_C1FC5F79840837FA*))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_METHOD_1_40C9BB44984716C6_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsRegisterRegionChange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_GET_ISREGISTERREGIONCHANGE_OFFSET))(this);
	}

	::System::Void set_IsRegisterRegionChange(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2E2FD00CD63ADF16_SET_ISREGISTERREGIONCHANGE_OFFSET))(this, a1);
	}
};
