#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_CE91B9CF6CB59927___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD90BA0)
#define CLASS_1_CE91B9CF6CB59927___C__CONFIRM_B__15_1_OFFSET UNITYSDK_OFFSET(0xAD90BF0)
#define CLASS_1_CE91B9CF6CB59927___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAD90BE0)

inline static constexpr unsigned int Class_1_CE91B9CF6CB59927___c_TypeDefinitionIndex = 70999;

class Class_1_CE91B9CF6CB59927___c : public ::System::Object
{
public:
	static ::Class_1_CE91B9CF6CB59927___c** StaticGet___9()
	{
		return (::Class_1_CE91B9CF6CB59927___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE91B9CF6CB59927___c_TypeDefinitionIndex)->GetStaticField(0x4D560);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__15_1()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE91B9CF6CB59927___c_TypeDefinitionIndex)->GetStaticField(0x4D568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927___C__CTOR_OFFSET))(this);
	}

	::System::Void _Confirm_b__15_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927___C__CONFIRM_B__15_1_OFFSET))(this, a1);
	}
};
