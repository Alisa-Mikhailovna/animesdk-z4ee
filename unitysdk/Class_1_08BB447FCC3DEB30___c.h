#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_08BB447FCC3DEB30;

#define CLASS_1_08BB447FCC3DEB30___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF400B0)
#define CLASS_1_08BB447FCC3DEB30___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF400F0)
#define CLASS_1_08BB447FCC3DEB30___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1BF40100)

inline static constexpr unsigned int Class_1_08BB447FCC3DEB30___c_TypeDefinitionIndex = 30610;

class Class_1_08BB447FCC3DEB30___c : public ::System::Object
{
public:
	static ::Class_1_08BB447FCC3DEB30___c** StaticGet___9()
	{
		return (::Class_1_08BB447FCC3DEB30___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_08BB447FCC3DEB30___c_TypeDefinitionIndex)->GetStaticField(0x5F610);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30___C__CTOR_OFFSET))(this);
	}

	::Class_1_08BB447FCC3DEB30* __cctor_b__43_0()
	{
		return ((::Class_1_08BB447FCC3DEB30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
