#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingWaveExpRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_021FAD5E73B0538D_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1AEE1AF0)
#define CLASS_1_021FAD5E73B0538D_METHOD_1_35345752F04FE925_OFFSET UNITYSDK_OFFSET(0x1AEE12D0)
#define CLASS_1_021FAD5E73B0538D_METHOD_1_52B625EDB060153A_OFFSET UNITYSDK_OFFSET(0x1AEE15E0)
#define CLASS_1_021FAD5E73B0538D_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1AEE1920)
#define CLASS_1_021FAD5E73B0538D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1AEE19B0)
#define CLASS_1_021FAD5E73B0538D_METHOD_1_BC859EDDBFB935A3_OFFSET UNITYSDK_OFFSET(0x1AEE1B40)
#define CLASS_1_021FAD5E73B0538D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AEE1580)
#define CLASS_1_021FAD5E73B0538D_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1AEE1350)
#define CLASS_1_021FAD5E73B0538D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1AEE18E0)
#define CLASS_1_021FAD5E73B0538D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1AEE1A50)
#define CLASS_1_021FAD5E73B0538D_METHOD_1_FA0A5611718C6BA8_OFFSET UNITYSDK_OFFSET(0x1AEE1750)
#define CLASS_1_021FAD5E73B0538D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEE1EB0)

inline static constexpr unsigned int Class_1_021FAD5E73B0538D_TypeDefinitionIndex = 10696;

class Class_1_021FAD5E73B0538D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_021FAD5E73B0538D_TypeDefinitionIndex)->GetStaticField(0x52B10);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_021FAD5E73B0538D_TypeDefinitionIndex)->GetStaticField(0x52B18);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_021FAD5E73B0538D_TypeDefinitionIndex)->GetStaticField(0x52B20);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_021FAD5E73B0538D_TypeDefinitionIndex)->GetStaticField(0xEB90);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_021FAD5E73B0538D_TypeDefinitionIndex)->GetStaticField(0xEB91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*>* Method_1_35345752F04FE925()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D_METHOD_1_35345752F04FE925_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*> Method_1_52B625EDB060153A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingWaveExpRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D_METHOD_1_52B625EDB060153A_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingWaveExpRow* Method_1_FA0A5611718C6BA8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingWaveExpRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D_METHOD_1_FA0A5611718C6BA8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC859EDDBFB935A3(::RPG::GameCore::ChenLingWaveExpRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingWaveExpRow*))((::PBYTE)hIl2Cpp + CLASS_1_021FAD5E73B0538D_METHOD_1_BC859EDDBFB935A3_OFFSET))(a1);
	}
};
