#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FFCEEED483D7C73B.h"
#include "unitysdk/System/Object.h"

class Class_1_4AB01E8FEDBFD1EC;
class Class_1_C974D9B5A2874893;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1FC9D91520196382_METHOD_1_1EA3754039AA10DF_OFFSET UNITYSDK_OFFSET(0x1A7D2A70)
#define CLASS_1_1FC9D91520196382_METHOD_1_2BA3DB2BD2587D96_OFFSET UNITYSDK_OFFSET(0x1A7D3950)
#define CLASS_1_1FC9D91520196382_METHOD_1_7A013F4AF4412CCF_OFFSET UNITYSDK_OFFSET(0x1A7D29C0)
#define CLASS_1_1FC9D91520196382_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x1A7D36F0)
#define CLASS_1_1FC9D91520196382_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A7D3B70)
#define CLASS_1_1FC9D91520196382__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7D3B80)
#define CLASS_1_1FC9D91520196382__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D2950)

inline static constexpr unsigned int Class_1_1FC9D91520196382_TypeDefinitionIndex = 40507;

class Class_1_1FC9D91520196382 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FC9D91520196382_TypeDefinitionIndex)->GetStaticField(0xAD70);
	}
	::System::Collections::Generic::List_1<::Class_1_C974D9B5A2874893*>* Field_1_1; // 0x10
	::Class_1_4AB01E8FEDBFD1EC* Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::Struct_2_FFCEEED483D7C73B Field_1_5; // 0x28
	::System::Boolean Field_1_6; // 0x44
	::System::Boolean Field_1_7; // 0x45

	::System::Void _ctor(::Class_1_4AB01E8FEDBFD1EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AB01E8FEDBFD1EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382__CCTOR_OFFSET))();
	}

	::System::Void Method_1_7A013F4AF4412CCF(::System::UInt32 a1, ::Struct_2_FFCEEED483D7C73B a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_FFCEEED483D7C73B, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_7A013F4AF4412CCF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1EA3754039AA10DF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_1EA3754039AA10DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_1_2BA3DB2BD2587D96(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_2BA3DB2BD2587D96_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
