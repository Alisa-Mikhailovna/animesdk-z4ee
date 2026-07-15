#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_C672116DEB642E2D_METHOD_1_95FA3048B3F79507_OFFSET UNITYSDK_OFFSET(0x1AB30400)
#define CLASS_1_C672116DEB642E2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB306B0)

inline static constexpr unsigned int Class_1_C672116DEB642E2D_TypeDefinitionIndex = 11163;

class Class_1_C672116DEB642E2D : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::System::UInt32 Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C672116DEB642E2D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_95FA3048B3F79507(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C672116DEB642E2D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C672116DEB642E2D*&))((::PBYTE)hIl2Cpp + CLASS_1_C672116DEB642E2D_METHOD_1_95FA3048B3F79507_OFFSET))(a1, a2);
	}
};
