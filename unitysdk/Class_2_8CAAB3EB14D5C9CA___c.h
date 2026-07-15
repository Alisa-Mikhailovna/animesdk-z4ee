#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5140CF1242CA1E09;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_8CAAB3EB14D5C9CA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1B4690)
#define CLASS_2_8CAAB3EB14D5C9CA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB1B46D0)
#define CLASS_2_8CAAB3EB14D5C9CA___C__SENDTRAINCAKECATCHCATGODINTERACTCSREQ_B__2_0_OFFSET UNITYSDK_OFFSET(0xB1B46E0)

inline static constexpr unsigned int Class_2_8CAAB3EB14D5C9CA___c_TypeDefinitionIndex = 76685;

class Class_2_8CAAB3EB14D5C9CA___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_5140CF1242CA1E09*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_1_5140CF1242CA1E09*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CAAB3EB14D5C9CA___c_TypeDefinitionIndex)->GetStaticField(0x5E240);
	}
	static ::Class_2_8CAAB3EB14D5C9CA___c** StaticGet___9()
	{
		return (::Class_2_8CAAB3EB14D5C9CA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CAAB3EB14D5C9CA___c_TypeDefinitionIndex)->GetStaticField(0x5E248);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8CAAB3EB14D5C9CA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CAAB3EB14D5C9CA___C__CTOR_OFFSET))(this);
	}

	::System::Void _SendTrainCakeCatchCatGodInteractCsReq_b__2_0(::Class_1_5140CF1242CA1E09* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5140CF1242CA1E09*))((::PBYTE)hIl2Cpp + CLASS_2_8CAAB3EB14D5C9CA___C__SENDTRAINCAKECATCHCATGODINTERACTCSREQ_B__2_0_OFFSET))(this, a1);
	}
};
