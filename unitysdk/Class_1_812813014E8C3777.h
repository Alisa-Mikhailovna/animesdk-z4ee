#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/Struct_2_36399DCF74B23261.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_812813014E8C3777_CLEAR_OFFSET UNITYSDK_OFFSET(0xB02FF80)
#define CLASS_1_812813014E8C3777__CTOR_OFFSET UNITYSDK_OFFSET(0xB02FFF0)

inline static constexpr unsigned int Class_1_812813014E8C3777_TypeDefinitionIndex = 55187;

class Class_1_812813014E8C3777 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::TaskContext* Field_1_1; // 0x18
	::Struct_2_36399DCF74B23261 Field_1_2; // 0x20
	::Struct_2_36399DCF74B23261 Field_1_3; // 0x38
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_1_4; // 0x50
	::Struct_2_36399DCF74B23261 Field_1_5; // 0x58
	::Struct_2_36399DCF74B23261 Field_1_6; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_812813014E8C3777__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_812813014E8C3777_CLEAR_OFFSET))(this);
	}
};
