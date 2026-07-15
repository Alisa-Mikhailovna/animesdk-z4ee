#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_105C32866538BE74;

#define CLASS_1_9F3A9FB2F2157315_METHOD_1_4424BDDFE14809DB_OFFSET UNITYSDK_OFFSET(0x1C909C50)
#define CLASS_1_9F3A9FB2F2157315__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C90A8C0)
#define CLASS_1_9F3A9FB2F2157315__CTOR_OFFSET UNITYSDK_OFFSET(0x1C909C40)

inline static constexpr unsigned int Class_1_9F3A9FB2F2157315_TypeDefinitionIndex = 41490;

class Class_1_9F3A9FB2F2157315 : public ::System::Object
{
public:
	static ::Class_1_9F3A9FB2F2157315** StaticGet_Field_1_0()
	{
		return (::Class_1_9F3A9FB2F2157315**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F3A9FB2F2157315_TypeDefinitionIndex)->GetStaticField(0x4B420);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F3A9FB2F2157315__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F3A9FB2F2157315__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_4424BDDFE14809DB(::Class_1_105C32866538BE74* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_105C32866538BE74*))((::PBYTE)hIl2Cpp + CLASS_1_9F3A9FB2F2157315_METHOD_1_4424BDDFE14809DB_OFFSET))(this, a1);
	}
};
