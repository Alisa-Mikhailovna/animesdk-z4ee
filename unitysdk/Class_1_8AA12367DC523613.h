#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8AA12367DC523613_AssetStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_8AA12367DC523613_CLEAR_OFFSET UNITYSDK_OFFSET(0xCADACB0)
#define CLASS_1_8AA12367DC523613_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0xCADB370)
#define CLASS_1_8AA12367DC523613_METHOD_1_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xCADB670)
#define CLASS_1_8AA12367DC523613_METHOD_1_479A720BFA3B4105_OFFSET UNITYSDK_OFFSET(0xCADB810)
#define CLASS_1_8AA12367DC523613_METHOD_1_482EB30C1BB299AD_1_OFFSET UNITYSDK_OFFSET(0xCADB040)
#define CLASS_1_8AA12367DC523613_METHOD_1_482EB30C1BB299AD_OFFSET UNITYSDK_OFFSET(0xCADADD0)
#define CLASS_1_8AA12367DC523613_METHOD_1_49D29DF713180894_OFFSET UNITYSDK_OFFSET(0xCADB2B0)
#define CLASS_1_8AA12367DC523613_METHOD_1_8290F76E5BF655A5_1_OFFSET UNITYSDK_OFFSET(0xCADB090)
#define CLASS_1_8AA12367DC523613_METHOD_1_8290F76E5BF655A5_OFFSET UNITYSDK_OFFSET(0xCADAE20)
#define CLASS_1_8AA12367DC523613_METHOD_1_875B5FE1E1BC6866_OFFSET UNITYSDK_OFFSET(0xCADB330)
#define CLASS_1_8AA12367DC523613_METHOD_1_97889423B3D78768_1_OFFSET UNITYSDK_OFFSET(0xCADB720)
#define CLASS_1_8AA12367DC523613_METHOD_1_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0xCADB990)
#define CLASS_1_8AA12367DC523613_METHOD_1_9A433A8074D7736F_OFFSET UNITYSDK_OFFSET(0xCADB520)
#define CLASS_1_8AA12367DC523613_METHOD_1_B1A04F70ABEED12E_1_OFFSET UNITYSDK_OFFSET(0xCADB170)
#define CLASS_1_8AA12367DC523613_METHOD_1_B1A04F70ABEED12E_OFFSET UNITYSDK_OFFSET(0xCADAF00)
#define CLASS_1_8AA12367DC523613_METHOD_1_B1EBD12097B12C37_1_OFFSET UNITYSDK_OFFSET(0xCADB220)
#define CLASS_1_8AA12367DC523613_METHOD_1_B1EBD12097B12C37_OFFSET UNITYSDK_OFFSET(0xCADAFB0)
#define CLASS_1_8AA12367DC523613_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xCADB2F0)
#define CLASS_1_8AA12367DC523613_METHOD_1_EE1AC5A64ABBD4D6_OFFSET UNITYSDK_OFFSET(0xCADAD70)
#define CLASS_1_8AA12367DC523613_METHOD_1_FF222CAFD529588D_OFFSET UNITYSDK_OFFSET(0xCADB4D0)
#define CLASS_1_8AA12367DC523613__CTOR_OFFSET UNITYSDK_OFFSET(0xCADAC20)

inline static constexpr unsigned int Class_1_8AA12367DC523613_TypeDefinitionIndex = 68137;

class Class_1_8AA12367DC523613 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Action_1<::Class_1_8AA12367DC523613*>*>* Field_1_1; // 0x18
	::RPG::Client::IAssetOperation* Field_1_2; // 0x20
	::UnityEngine::Object* Field_1_3; // 0x28
	::System::Type* Field_1_4; // 0x30
	::RPG::Client::OnAssetOperationDelegate* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::System::Action_1<::Class_1_8AA12367DC523613*>*>* Field_1_6; // 0x40
	::Class_1_8AA12367DC523613_AssetStatus Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_EE1AC5A64ABBD4D6(::System::String* a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_EE1AC5A64ABBD4D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_482EB30C1BB299AD(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_482EB30C1BB299AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1A04F70ABEED12E(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_B1A04F70ABEED12E_OFFSET))(this, a1);
	}

	::System::Void Method_1_482EB30C1BB299AD_1(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_482EB30C1BB299AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1A04F70ABEED12E_1(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_B1A04F70ABEED12E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8290F76E5BF655A5(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_8290F76E5BF655A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_8290F76E5BF655A5_1(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_8290F76E5BF655A5_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1EBD12097B12C37(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_B1EBD12097B12C37_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1EBD12097B12C37_1(::System::Action_1<::Class_1_8AA12367DC523613*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_8AA12367DC523613*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_B1EBD12097B12C37_1_OFFSET))(this, a1);
	}

	::System::Type* Method_1_49D29DF713180894()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_49D29DF713180894_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::UnityEngine::Object* Method_1_875B5FE1E1BC6866()
	{
		return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_875B5FE1E1BC6866_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_1_9A433A8074D7736F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_9A433A8074D7736F_OFFSET))(this);
	}

	::System::Void Method_1_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Boolean Method_1_479A720BFA3B4105(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_479A720BFA3B4105_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF222CAFD529588D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_FF222CAFD529588D_OFFSET))(this);
	}

	::System::Void Method_1_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_97889423B3D78768_OFFSET))(this);
	}

	::System::Void Method_1_97889423B3D78768_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AA12367DC523613_METHOD_1_97889423B3D78768_1_OFFSET))(this);
	}
};
