#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CBA6E507755E8EB4;
class Class_2_7EA45D2647F35CDD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1D9727EA1575EDF4_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x145BADC0)
#define CLASS_1_1D9727EA1575EDF4_METHOD_1_7AAF4659D71CE76F_OFFSET UNITYSDK_OFFSET(0x145BAF20)
#define CLASS_1_1D9727EA1575EDF4__CTOR_OFFSET UNITYSDK_OFFSET(0x145BB290)

inline static constexpr unsigned int Class_1_1D9727EA1575EDF4_TypeDefinitionIndex = 53471;

class Class_1_1D9727EA1575EDF4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_CBA6E507755E8EB4*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x38
	::System::Double Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x4C
	::System::UInt32 Field_1_9; // 0x50
	::System::UInt32 Field_1_10; // 0x54
	::System::UInt32 Field_1_11; // 0x58
	::System::UInt32 Field_1_12; // 0x5C
	::System::UInt32 Field_1_13; // 0x60
	::System::Double Field_1_14; // 0x68
	::System::Double Field_1_15; // 0x70
	::System::Double Field_1_16; // 0x78
	::System::UInt32 Field_1_17; // 0x80
	::System::UInt32 Field_1_18; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9727EA1575EDF4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9727EA1575EDF4_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_7AAF4659D71CE76F(::Class_2_7EA45D2647F35CDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*))((::PBYTE)hIl2Cpp + CLASS_1_1D9727EA1575EDF4_METHOD_1_7AAF4659D71CE76F_OFFSET))(this, a1);
	}
};
