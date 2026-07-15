#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightGuideQuestConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8CD142C2F272EE6B_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1ABEDF40)
#define CLASS_1_8CD142C2F272EE6B_METHOD_1_5CF8BC6CC6E34855_OFFSET UNITYSDK_OFFSET(0x1ABEDA70)
#define CLASS_1_8CD142C2F272EE6B_METHOD_1_68E16FC9143CE920_OFFSET UNITYSDK_OFFSET(0x1ABEDF90)
#define CLASS_1_8CD142C2F272EE6B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1ABEDD70)
#define CLASS_1_8CD142C2F272EE6B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1ABEDE00)
#define CLASS_1_8CD142C2F272EE6B_METHOD_1_C287CC82AA4FBE8A_OFFSET UNITYSDK_OFFSET(0x1ABEDBA0)
#define CLASS_1_8CD142C2F272EE6B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1ABEDA10)
#define CLASS_1_8CD142C2F272EE6B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1ABED7E0)
#define CLASS_1_8CD142C2F272EE6B_METHOD_1_E2D14A41BED128FB_OFFSET UNITYSDK_OFFSET(0x1ABED760)
#define CLASS_1_8CD142C2F272EE6B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1ABEDD30)
#define CLASS_1_8CD142C2F272EE6B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1ABEDEA0)
#define CLASS_1_8CD142C2F272EE6B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABEE2B0)

inline static constexpr unsigned int Class_1_8CD142C2F272EE6B_TypeDefinitionIndex = 13082;

class Class_1_8CD142C2F272EE6B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CD142C2F272EE6B_TypeDefinitionIndex)->GetStaticField(0x44440);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CD142C2F272EE6B_TypeDefinitionIndex)->GetStaticField(0x44448);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CD142C2F272EE6B_TypeDefinitionIndex)->GetStaticField(0x44450);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CD142C2F272EE6B_TypeDefinitionIndex)->GetStaticField(0xAEE0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CD142C2F272EE6B_TypeDefinitionIndex)->GetStaticField(0xAEE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*>* Method_1_E2D14A41BED128FB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B_METHOD_1_E2D14A41BED128FB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*> Method_1_5CF8BC6CC6E34855()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGuideQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B_METHOD_1_5CF8BC6CC6E34855_OFFSET))();
	}

	static ::RPG::GameCore::GridFightGuideQuestConfigRow* Method_1_C287CC82AA4FBE8A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightGuideQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B_METHOD_1_C287CC82AA4FBE8A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_68E16FC9143CE920(::RPG::GameCore::GridFightGuideQuestConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightGuideQuestConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8CD142C2F272EE6B_METHOD_1_68E16FC9143CE920_OFFSET))(a1);
	}
};
