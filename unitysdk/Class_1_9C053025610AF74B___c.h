#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9C053025610AF74B;

#define CLASS_1_9C053025610AF74B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF92E90)
#define CLASS_1_9C053025610AF74B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF92EC0)
#define CLASS_1_9C053025610AF74B___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1BF92ED0)

inline static constexpr unsigned int Class_1_9C053025610AF74B___c_TypeDefinitionIndex = 27776;

class Class_1_9C053025610AF74B___c : public ::System::Object
{
public:
	static ::Class_1_9C053025610AF74B___c** StaticGet___9()
	{
		return (::Class_1_9C053025610AF74B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9C053025610AF74B___c_TypeDefinitionIndex)->GetStaticField(0x62A60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B___C__CTOR_OFFSET))(this);
	}

	::Class_1_9C053025610AF74B* __cctor_b__28_0()
	{
		return ((::Class_1_9C053025610AF74B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C053025610AF74B___C___CCTOR_B__28_0_OFFSET))(this);
	}
};
