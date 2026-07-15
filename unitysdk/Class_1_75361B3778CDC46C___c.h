#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_75361B3778CDC46C;

#define CLASS_1_75361B3778CDC46C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1BD6C0)
#define CLASS_1_75361B3778CDC46C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1BD700)
#define CLASS_1_75361B3778CDC46C___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1C1BD710)

inline static constexpr unsigned int Class_1_75361B3778CDC46C___c_TypeDefinitionIndex = 27089;

class Class_1_75361B3778CDC46C___c : public ::System::Object
{
public:
	static ::Class_1_75361B3778CDC46C___c** StaticGet___9()
	{
		return (::Class_1_75361B3778CDC46C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75361B3778CDC46C___c_TypeDefinitionIndex)->GetStaticField(0x248E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75361B3778CDC46C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75361B3778CDC46C___C__CTOR_OFFSET))(this);
	}

	::Class_1_75361B3778CDC46C* __cctor_b__37_0()
	{
		return ((::Class_1_75361B3778CDC46C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75361B3778CDC46C___C___CCTOR_B__37_0_OFFSET))(this);
	}
};
