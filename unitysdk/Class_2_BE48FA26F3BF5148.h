#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BouncyProjectileData; }
namespace UnityEngine { class Collider; }

#define CLASS_2_BE48FA26F3BF5148_METHOD_2_3261ACC0A77DB356_OFFSET UNITYSDK_OFFSET(0xB1FC5A0)
#define CLASS_2_BE48FA26F3BF5148_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB1FBAB0)
#define CLASS_2_BE48FA26F3BF5148_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xB1FBB30)
#define CLASS_2_BE48FA26F3BF5148_METHOD_2_97FAD710C85F79F5_OFFSET UNITYSDK_OFFSET(0xB1FBD50)
#define CLASS_2_BE48FA26F3BF5148_METHOD_2_C117F1BAC122F4D0_OFFSET UNITYSDK_OFFSET(0xB1FC6A0)
#define CLASS_2_BE48FA26F3BF5148__CTOR_OFFSET UNITYSDK_OFFSET(0xB1FB990)

inline static constexpr unsigned int Class_2_BE48FA26F3BF5148_TypeDefinitionIndex = 52260;

class Class_2_BE48FA26F3BF5148 : public ::Class_1_1835888C1E19F013
{
public:
	::UnityEngine::Collider* Field_2_0; // 0x48
	::RPG::GameCore::BouncyProjectileData* Field_2_1; // 0x50
	::System::Single Field_2_2; // 0x58
	::System::Single Field_2_3; // 0x5C
	::System::Boolean Field_2_4; // 0x60
	::UnityEngine::Vector3 Field_2_5; // 0x64

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_97FAD710C85F79F5(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_97FAD710C85F79F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3261ACC0A77DB356(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_3261ACC0A77DB356_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C117F1BAC122F4D0(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_BE48FA26F3BF5148_METHOD_2_C117F1BAC122F4D0_OFFSET))(this, a1);
	}
};
