#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyAssetConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6109E1B86CA5513A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B0A1EE0)
#define CLASS_1_6109E1B86CA5513A_METHOD_1_303CF8FD5A505CA7_OFFSET UNITYSDK_OFFSET(0x1B0A1F30)
#define CLASS_1_6109E1B86CA5513A_METHOD_1_4A823C8913313A22_OFFSET UNITYSDK_OFFSET(0x1B0A16C0)
#define CLASS_1_6109E1B86CA5513A_METHOD_1_5127C6BA0729721E_OFFSET UNITYSDK_OFFSET(0x1B0A19D0)
#define CLASS_1_6109E1B86CA5513A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B0A1D10)
#define CLASS_1_6109E1B86CA5513A_METHOD_1_A6F23924C6065DFB_OFFSET UNITYSDK_OFFSET(0x1B0A1B00)
#define CLASS_1_6109E1B86CA5513A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B0A1DA0)
#define CLASS_1_6109E1B86CA5513A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B0A1970)
#define CLASS_1_6109E1B86CA5513A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B0A1740)
#define CLASS_1_6109E1B86CA5513A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B0A1CD0)
#define CLASS_1_6109E1B86CA5513A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B0A1E40)
#define CLASS_1_6109E1B86CA5513A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0A2290)

inline static constexpr unsigned int Class_1_6109E1B86CA5513A_TypeDefinitionIndex = 11574;

class Class_1_6109E1B86CA5513A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6109E1B86CA5513A_TypeDefinitionIndex)->GetStaticField(0xFD50);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6109E1B86CA5513A_TypeDefinitionIndex)->GetStaticField(0xFD58);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6109E1B86CA5513A_TypeDefinitionIndex)->GetStaticField(0xFD60);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6109E1B86CA5513A_TypeDefinitionIndex)->GetStaticField(0x55F0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6109E1B86CA5513A_TypeDefinitionIndex)->GetStaticField(0x55F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*>* Method_1_4A823C8913313A22()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A_METHOD_1_4A823C8913313A22_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*> Method_1_5127C6BA0729721E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A_METHOD_1_5127C6BA0729721E_OFFSET))();
	}

	static ::RPG::GameCore::MonopolyAssetConfigRow* Method_1_A6F23924C6065DFB(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MonopolyAssetConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A_METHOD_1_A6F23924C6065DFB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_303CF8FD5A505CA7(::RPG::GameCore::MonopolyAssetConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MonopolyAssetConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_6109E1B86CA5513A_METHOD_1_303CF8FD5A505CA7_OFFSET))(a1);
	}
};
