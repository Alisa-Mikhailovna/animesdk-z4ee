#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_916129A564506E36;

#define CLASS_1_916129A564506E36___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C14E400)
#define CLASS_1_916129A564506E36___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14E440)
#define CLASS_1_916129A564506E36___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1C14E450)

inline static constexpr unsigned int Class_1_916129A564506E36___c_TypeDefinitionIndex = 25627;

class Class_1_916129A564506E36___c : public ::System::Object
{
public:
	static ::Class_1_916129A564506E36___c** StaticGet___9()
	{
		return (::Class_1_916129A564506E36___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_916129A564506E36___c_TypeDefinitionIndex)->GetStaticField(0x1CF90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_916129A564506E36___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916129A564506E36___C__CTOR_OFFSET))(this);
	}

	::Class_1_916129A564506E36* __cctor_b__32_0()
	{
		return ((::Class_1_916129A564506E36*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_916129A564506E36___C___CCTOR_B__32_0_OFFSET))(this);
	}
};
