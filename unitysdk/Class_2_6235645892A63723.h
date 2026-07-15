#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class HalfBoomerangWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define CLASS_2_6235645892A63723_METHOD_2_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0xB2BF790)
#define CLASS_2_6235645892A63723_METHOD_2_3BF6E12D0AA53A63_OFFSET UNITYSDK_OFFSET(0xB2BF860)
#define CLASS_2_6235645892A63723_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xB2BF2F0)
#define CLASS_2_6235645892A63723_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xB2BF490)
#define CLASS_2_6235645892A63723_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xB2BF5B0)
#define CLASS_2_6235645892A63723_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xB2BF360)
#define CLASS_2_6235645892A63723_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xB2BFEA0)
#define CLASS_2_6235645892A63723__CTOR_OFFSET UNITYSDK_OFFSET(0xB2BF0F0)

inline static constexpr unsigned int Class_2_6235645892A63723_TypeDefinitionIndex = 52264;

class Class_2_6235645892A63723 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::HalfBoomerangWithDetectProjectileData* Field_2_0; // 0x48
	::UnityEngine::Collider* Field_2_1; // 0x50
	::System::Single Field_2_2; // 0x58
	::UnityEngine::Vector3 Field_2_3; // 0x5C
	::System::Boolean Field_2_4; // 0x68
	::System::Single Field_2_5; // 0x6C

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_2_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BF6E12D0AA53A63(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_3BF6E12D0AA53A63_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}
};
