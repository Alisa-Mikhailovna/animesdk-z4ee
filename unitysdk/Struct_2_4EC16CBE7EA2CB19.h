#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_4EC16CBE7EA2CB19_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x84340)
#define STRUCT_2_4EC16CBE7EA2CB19__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2B9050)

inline static constexpr unsigned int Struct_2_4EC16CBE7EA2CB19_TypeDefinitionIndex = 69859;

struct alignas(8) Struct_2_4EC16CBE7EA2CB19
{
	static ::Struct_2_4EC16CBE7EA2CB19* StaticGet_Field_2_0()
	{
		return (::Struct_2_4EC16CBE7EA2CB19*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_4EC16CBE7EA2CB19_TypeDefinitionIndex)->GetStaticField(0x13D40);
	}
	::System::UInt64 Field_2_1; // 0x10
	::System::UInt64 Field_2_2; // 0x18
	::System::UInt64 Field_2_3; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_4EC16CBE7EA2CB19__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4EC16CBE7EA2CB19_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};
