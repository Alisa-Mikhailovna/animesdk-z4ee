#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FE552D20FCAFE464;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_FE552D20FCAFE464___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4BC360)
#define CLASS_1_FE552D20FCAFE464___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BC390)
#define CLASS_1_FE552D20FCAFE464___C__SETIGNOREEXTERNALCOLLISION_B__6_0_OFFSET UNITYSDK_OFFSET(0xB4BC3A0)
#define CLASS_1_FE552D20FCAFE464___C__SETIGNOREEXTERNALCOLLISION_B__6_1_OFFSET UNITYSDK_OFFSET(0xB4BC3D0)

inline static constexpr unsigned int Class_1_FE552D20FCAFE464___c_TypeDefinitionIndex = 72936;

class Class_1_FE552D20FCAFE464___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE552D20FCAFE464___c_TypeDefinitionIndex)->GetStaticField(0x69180);
	}
	static ::Class_1_FE552D20FCAFE464___c** StaticGet___9()
	{
		return (::Class_1_FE552D20FCAFE464___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE552D20FCAFE464___c_TypeDefinitionIndex)->GetStaticField(0x69188);
	}
	static ::System::Action_2<::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*>** StaticGet___9__6_1()
	{
		return (::System::Action_2<::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE552D20FCAFE464___c_TypeDefinitionIndex)->GetStaticField(0x69190);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464___C__CTOR_OFFSET))(this);
	}

	::System::Void _SetIgnoreExternalCollision_b__6_0(::Class_1_FE552D20FCAFE464* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464___C__SETIGNOREEXTERNALCOLLISION_B__6_0_OFFSET))(this, a1, a2);
	}

	::System::Void _SetIgnoreExternalCollision_b__6_1(::Class_1_FE552D20FCAFE464* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464___C__SETIGNOREEXTERNALCOLLISION_B__6_1_OFFSET))(this, a1, a2);
	}
};
