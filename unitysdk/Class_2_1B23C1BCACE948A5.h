#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BGCurveWithDetectProjectileData; }
namespace RPG::GameCore { class MonoProjectileBGCurve; }
namespace UnityEngine { class Collider; }

#define CLASS_2_1B23C1BCACE948A5_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x152168E0)
#define CLASS_2_1B23C1BCACE948A5_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x15216950)
#define CLASS_2_1B23C1BCACE948A5_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x152177E0)
#define CLASS_2_1B23C1BCACE948A5_METHOD_2_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0x15216E30)
#define CLASS_2_1B23C1BCACE948A5_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x15216FF0)
#define CLASS_2_1B23C1BCACE948A5_METHOD_2_DF249C0E36759C3F_OFFSET UNITYSDK_OFFSET(0x15217150)
#define CLASS_2_1B23C1BCACE948A5_METHOD_2_E07992F850E8E0FD_OFFSET UNITYSDK_OFFSET(0x15217240)
#define CLASS_2_1B23C1BCACE948A5__CTOR_OFFSET UNITYSDK_OFFSET(0x152167C0)

inline static constexpr unsigned int Class_2_1B23C1BCACE948A5_TypeDefinitionIndex = 52257;

class Class_2_1B23C1BCACE948A5 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::MonoProjectileBGCurve* Field_2_0; // 0x48
	::RPG::GameCore::BGCurveWithDetectProjectileData* Field_2_1; // 0x50
	::UnityEngine::Collider* Field_2_2; // 0x58
	::UnityEngine::Vector3 Field_2_3; // 0x60
	::System::Single Field_2_4; // 0x6C
	::UnityEngine::Vector3 Field_2_5; // 0x70
	::UnityEngine::Vector3 Field_2_6; // 0x7C
	::System::Single Field_2_7; // 0x88
	::System::Boolean Field_2_8; // 0x8C
	::System::Boolean Field_2_9; // 0x8D
	::System::Boolean Field_2_10; // 0x8E

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_1B23C1BCACE948A5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B23C1BCACE948A5_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B23C1BCACE948A5_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B23C1BCACE948A5_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_2_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1B23C1BCACE948A5_METHOD_2_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF249C0E36759C3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1B23C1BCACE948A5_METHOD_2_DF249C0E36759C3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E07992F850E8E0FD(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1B23C1BCACE948A5_METHOD_2_E07992F850E8E0FD_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B23C1BCACE948A5_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}
};
