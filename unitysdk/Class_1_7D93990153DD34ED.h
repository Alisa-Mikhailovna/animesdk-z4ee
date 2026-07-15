#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_3_001D9EA49F6215B6;
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_7D93990153DD34ED_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBAC1DB0)
#define CLASS_1_7D93990153DD34ED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBAC0510)
#define CLASS_1_7D93990153DD34ED_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0xBAC0E60)
#define CLASS_1_7D93990153DD34ED_METHOD_1_6AF8CC03883E6064_OFFSET UNITYSDK_OFFSET(0xBABF680)
#define CLASS_1_7D93990153DD34ED_METHOD_1_7D5C8911419B1FA3_OFFSET UNITYSDK_OFFSET(0xBAC0490)
#define CLASS_1_7D93990153DD34ED_METHOD_1_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0xBAC0EB0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_92EF378E5C246C05_OFFSET UNITYSDK_OFFSET(0xBABF9A0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xBAC2100)
#define CLASS_1_7D93990153DD34ED_METHOD_1_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0xBAC1F90)
#define CLASS_1_7D93990153DD34ED_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xBAC1E20)
#define CLASS_1_7D93990153DD34ED_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBAC1730)
#define CLASS_1_7D93990153DD34ED__CTOR_OFFSET UNITYSDK_OFFSET(0xBABF670)

inline static constexpr unsigned int Class_1_7D93990153DD34ED_TypeDefinitionIndex = 72885;

class Class_1_7D93990153DD34ED : public ::System::Object
{
public:
	::Class_1_2CDF619C23140440* Field_1_0; // 0x10
	::UnityEngine::Coroutine* Field_1_1; // 0x18
	::Class_3_001D9EA49F6215B6* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6AF8CC03883E6064(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_6AF8CC03883E6064_OFFSET))(this, a1);
	}

	::System::Void Method_1_92EF378E5C246C05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_92EF378E5C246C05_OFFSET))(this);
	}

	::System::Void Method_1_7D5C8911419B1FA3(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_7D5C8911419B1FA3_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_8DF47EF45ABD2A6C_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};
