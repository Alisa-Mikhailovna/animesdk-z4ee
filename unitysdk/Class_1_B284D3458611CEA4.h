#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24A0F23B32CAAA77;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B284D3458611CEA4_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xE50B9B0)
#define CLASS_1_B284D3458611CEA4_METHOD_1_04B5EDB18FECE00C_OFFSET UNITYSDK_OFFSET(0xE50BB20)
#define CLASS_1_B284D3458611CEA4_METHOD_1_3FACD83836441927_OFFSET UNITYSDK_OFFSET(0xE50BC80)
#define CLASS_1_B284D3458611CEA4_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xE50BA30)
#define CLASS_1_B284D3458611CEA4_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xE50BBE0)
#define CLASS_1_B284D3458611CEA4__CTOR_OFFSET UNITYSDK_OFFSET(0xE50BD50)

inline static constexpr unsigned int Class_1_B284D3458611CEA4_TypeDefinitionIndex = 70065;

class Class_1_B284D3458611CEA4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_24A0F23B32CAAA77*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4__CTOR_OFFSET))(this);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_GETCONTEXT_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_24A0F23B32CAAA77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24A0F23B32CAAA77*))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_04B5EDB18FECE00C(::Class_1_24A0F23B32CAAA77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24A0F23B32CAAA77*))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_METHOD_1_04B5EDB18FECE00C_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_24A0F23B32CAAA77*>* Method_1_3FACD83836441927()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_24A0F23B32CAAA77*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_METHOD_1_3FACD83836441927_OFFSET))(this);
	}
};
