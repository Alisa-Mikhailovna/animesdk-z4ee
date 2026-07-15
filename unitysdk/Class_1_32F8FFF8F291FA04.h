#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_32F8FFF8F291FA04_METHOD_1_62E1EFA55B727FA0_OFFSET UNITYSDK_OFFSET(0x1134B100)
#define CLASS_1_32F8FFF8F291FA04__CTOR_OFFSET UNITYSDK_OFFSET(0x1134B480)

inline static constexpr unsigned int Class_1_32F8FFF8F291FA04_TypeDefinitionIndex = 64900;

class Class_1_32F8FFF8F291FA04 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32F8FFF8F291FA04_TypeDefinitionIndex)->GetStaticField(0x3990);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32F8FFF8F291FA04__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_62E1EFA55B727FA0(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_32F8FFF8F291FA04_METHOD_1_62E1EFA55B727FA0_OFFSET))(this, a1);
	}
};
