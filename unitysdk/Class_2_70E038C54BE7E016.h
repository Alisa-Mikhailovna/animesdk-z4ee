#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D22BBD5AAECFE505.h"
#include "unitysdk/RPG/Client/LittleGame/TransformInterpolateMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_37;
namespace UnityEngine { class Transform; }

#define CLASS_2_70E038C54BE7E016_METHOD_2_3BCA2FBA8A14D9B5_OFFSET UNITYSDK_OFFSET(0x105DA850)
#define CLASS_2_70E038C54BE7E016_METHOD_2_A0374C870A27A45B_OFFSET UNITYSDK_OFFSET(0x105DA680)
#define CLASS_2_70E038C54BE7E016_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x105DA800)
#define CLASS_2_70E038C54BE7E016__CTOR_OFFSET UNITYSDK_OFFSET(0x105DAB40)

inline static constexpr unsigned int Class_2_70E038C54BE7E016_TypeDefinitionIndex = 72632;

class Class_2_70E038C54BE7E016 : public ::Class_1_D22BBD5AAECFE505
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::RPG::Client::LittleGame::TransformInterpolateMode Field_2_2; // 0x24
	::UnityEngine::Vector3 Field_2_3; // 0x28
	::UnityEngine::Quaternion Field_2_4; // 0x34
	::UnityEngine::Vector3 Field_2_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A0374C870A27A45B(::Class_0_16E4307DCC419505_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_A0374C870A27A45B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BCA2FBA8A14D9B5(::Class_0_16E4307DCC419505_37* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70E038C54BE7E016_METHOD_2_3BCA2FBA8A14D9B5_OFFSET))(this, a1, a2);
	}
};
