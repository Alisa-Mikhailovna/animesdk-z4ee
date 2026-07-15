#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_38BE07B1D66262C2;
class Class_2_792B76992050D353;
namespace RPG::Client::Prop { class ChimeraDuelNpcModelView; }

#define CLASS_2_63052BAB61EF0BCD_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x1442F170)
#define CLASS_2_63052BAB61EF0BCD_METHOD_2_D43B99F9545128F5_OFFSET UNITYSDK_OFFSET(0x1442F3A0)
#define CLASS_2_63052BAB61EF0BCD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1442F9C0)
#define CLASS_2_63052BAB61EF0BCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1442F160)

inline static constexpr unsigned int Class_2_63052BAB61EF0BCD_TypeDefinitionIndex = 74299;

class Class_2_63052BAB61EF0BCD : public ::Class_1_FD611945730E269E
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_63052BAB61EF0BCD_TypeDefinitionIndex)->GetStaticField(0x8330);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_63052BAB61EF0BCD_TypeDefinitionIndex)->GetStaticField(0x8334);
	}
	::Class_2_792B76992050D353* Field_2_2; // 0x18
	::Class_2_38BE07B1D66262C2* Field_2_3; // 0x20
	::RPG::Client::Prop::ChimeraDuelNpcModelView* Field_2_4; // 0x28
	::UnityEngine::Quaternion Field_2_5; // 0x30
	::System::Single Field_2_6; // 0x40
	::System::Boolean Field_2_7; // 0x44
	::UnityEngine::Vector3 Field_2_8; // 0x48
	::System::Single Field_2_9; // 0x54

	::System::Void _ctor(::Class_2_792B76992050D353* a1, ::Class_2_38BE07B1D66262C2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_792B76992050D353*, ::Class_2_38BE07B1D66262C2*))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD__CCTOR_OFFSET))();
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_D43B99F9545128F5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD_METHOD_2_D43B99F9545128F5_OFFSET))(this, a1);
	}
};
