#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCellType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDirection.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingFesPosition; }

#define CLASS_1_5AF45EC9C8E21EF3_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1A8ABAF0)
#define CLASS_1_5AF45EC9C8E21EF3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A8ABAA0)
#define CLASS_1_5AF45EC9C8E21EF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8ABB40)

inline static constexpr unsigned int Class_1_5AF45EC9C8E21EF3_TypeDefinitionIndex = 41106;

class Class_1_5AF45EC9C8E21EF3 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingFesPosition* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::UInt32 Field_1_3; // 0x1C
	::RPG::GameCore::ChenLingFesCellType Field_1_4; // 0x20
	::System::UInt32 Field_1_5; // 0x24
	::System::Int32 Field_1_6; // 0x28
	::RPG::GameCore::ChenLingFesDirection Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AF45EC9C8E21EF3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AF45EC9C8E21EF3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AF45EC9C8E21EF3_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}
};
