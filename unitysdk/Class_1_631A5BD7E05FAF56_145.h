#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_76E1242397074B5B;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_631A5BD7E05FAF56_145_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B032920)
#define CLASS_1_631A5BD7E05FAF56_145_METHOD_1_259066F45778461D_OFFSET UNITYSDK_OFFSET(0x1B032EA0)
#define CLASS_1_631A5BD7E05FAF56_145_METHOD_1_706E55847AB23D50_OFFSET UNITYSDK_OFFSET(0x1B032D70)
#define CLASS_1_631A5BD7E05FAF56_145_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B032750)
#define CLASS_1_631A5BD7E05FAF56_145_METHOD_1_8A321F63F77C8ADD_OFFSET UNITYSDK_OFFSET(0x1B032970)
#define CLASS_1_631A5BD7E05FAF56_145_METHOD_1_9EC41ECC53D61BB8_OFFSET UNITYSDK_OFFSET(0x1B032C90)
#define CLASS_1_631A5BD7E05FAF56_145_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B0327E0)
#define CLASS_1_631A5BD7E05FAF56_145_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B032D10)
#define CLASS_1_631A5BD7E05FAF56_145_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B032520)
#define CLASS_1_631A5BD7E05FAF56_145_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B0324E0)
#define CLASS_1_631A5BD7E05FAF56_145_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B032880)
#define CLASS_1_631A5BD7E05FAF56_145__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B033030)

inline static constexpr unsigned int Class_1_631A5BD7E05FAF56_145_TypeDefinitionIndex = 14791;

class Class_1_631A5BD7E05FAF56_145 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_145_TypeDefinitionIndex)->GetStaticField(0xB370);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_76E1242397074B5B*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_76E1242397074B5B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_145_TypeDefinitionIndex)->GetStaticField(0xB378);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_145_TypeDefinitionIndex)->GetStaticField(0xB380);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_145_TypeDefinitionIndex)->GetStaticField(0x3EB0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_145_TypeDefinitionIndex)->GetStaticField(0x3EB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A321F63F77C8ADD(::Class_1_76E1242397074B5B* a1)
	{
		return ((::System::Void(*)(::Class_1_76E1242397074B5B*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145_METHOD_1_8A321F63F77C8ADD_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_76E1242397074B5B*>* Method_1_9EC41ECC53D61BB8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_76E1242397074B5B*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145_METHOD_1_9EC41ECC53D61BB8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_76E1242397074B5B*> Method_1_706E55847AB23D50()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_76E1242397074B5B*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145_METHOD_1_706E55847AB23D50_OFFSET))();
	}

	static ::Class_1_76E1242397074B5B* Method_1_259066F45778461D(::System::UInt32 a1)
	{
		return ((::Class_1_76E1242397074B5B*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_145_METHOD_1_259066F45778461D_OFFSET))(a1);
	}
};
