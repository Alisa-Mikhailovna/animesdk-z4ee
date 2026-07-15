#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"

class Class_1_39155512A8777971;
class Class_1_B70D230670A2440B;
class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class EnvDynamicPropLayoutProfile; }
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_6333D4029C3CC061_METHOD_2_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0xB339850)
#define CLASS_2_6333D4029C3CC061_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB339790)
#define CLASS_2_6333D4029C3CC061_METHOD_2_253A66CCBFD9E6BC_OFFSET UNITYSDK_OFFSET(0xB338C00)
#define CLASS_2_6333D4029C3CC061_METHOD_2_273604C6E105BE8C_OFFSET UNITYSDK_OFFSET(0xB338B00)
#define CLASS_2_6333D4029C3CC061_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0xB338AF0)
#define CLASS_2_6333D4029C3CC061_METHOD_2_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0xB338B70)
#define CLASS_2_6333D4029C3CC061_METHOD_2_5747018DC063F7B6_OFFSET UNITYSDK_OFFSET(0xB338CE0)
#define CLASS_2_6333D4029C3CC061_METHOD_2_58A784B94234E9BA_OFFSET UNITYSDK_OFFSET(0xB33F2E0)
#define CLASS_2_6333D4029C3CC061_METHOD_2_835B2EA8F8CDB000_OFFSET UNITYSDK_OFFSET(0xB338E90)
#define CLASS_2_6333D4029C3CC061_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB3398E0)
#define CLASS_2_6333D4029C3CC061_METHOD_2_B1D0479D4182D4BF_OFFSET UNITYSDK_OFFSET(0xB33A590)
#define CLASS_2_6333D4029C3CC061_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xB3399C0)
#define CLASS_2_6333D4029C3CC061_METHOD_2_C56DC3B2E26040B8_1_OFFSET UNITYSDK_OFFSET(0xB33A750)
#define CLASS_2_6333D4029C3CC061_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0xB33A620)
#define CLASS_2_6333D4029C3CC061_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB339980)
#define CLASS_2_6333D4029C3CC061_METHOD_2_CF60BD7B3C2C0430_OFFSET UNITYSDK_OFFSET(0xB33F3F0)
#define CLASS_2_6333D4029C3CC061_METHOD_2_DE9367954300A5D4_OFFSET UNITYSDK_OFFSET(0xB33FB70)
#define CLASS_2_6333D4029C3CC061_METHOD_2_E26DC44DCE94AB5A_OFFSET UNITYSDK_OFFSET(0xB33F220)
#define CLASS_2_6333D4029C3CC061_METHOD_2_E4B829802A26F311_OFFSET UNITYSDK_OFFSET(0xB3396E0)
#define CLASS_2_6333D4029C3CC061_METHOD_2_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0xB33A880)
#define CLASS_2_6333D4029C3CC061_METHOD_2_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0xB33C050)
#define CLASS_2_6333D4029C3CC061_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xB33EEA0)
#define CLASS_2_6333D4029C3CC061_METHOD_2_F7E4CF2BB55691F2_OFFSET UNITYSDK_OFFSET(0xB33BE40)
#define CLASS_2_6333D4029C3CC061_METHOD_2_F93940E4AF0F2629_OFFSET UNITYSDK_OFFSET(0xB338D80)
#define CLASS_2_6333D4029C3CC061__CCTOR_OFFSET UNITYSDK_OFFSET(0xB341D20)
#define CLASS_2_6333D4029C3CC061__CTOR_OFFSET UNITYSDK_OFFSET(0xB338880)

inline static constexpr unsigned int Class_2_6333D4029C3CC061_TypeDefinitionIndex = 47442;

class Class_2_6333D4029C3CC061 : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::EnviromentSystemV2Space::EnvDynamicPropLayoutProfile** StaticGet_Field_2_0()
	{
		return (::EnviromentSystemV2Space::EnvDynamicPropLayoutProfile**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6333D4029C3CC061_TypeDefinitionIndex)->GetStaticField(0x65E50);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6333D4029C3CC061_TypeDefinitionIndex)->GetStaticField(0x141D0);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6333D4029C3CC061_TypeDefinitionIndex)->GetStaticField(0x141D4);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6333D4029C3CC061_TypeDefinitionIndex)->GetStaticField(0x141D8);
	}
	::Class_1_B70D230670A2440B* Field_2_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_39155512A8777971*>* Field_2_5; // 0x30
	::Il2CppArray<::System::Int32>* Field_2_6; // 0x38
	::Il2CppArray<::System::Int32>* Field_2_7; // 0x40
	::System::Collections::Generic::List_1<::Class_1_39155512A8777971*>* Field_2_8; // 0x48
	::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::Class_1_39155512A8777971*>* Field_2_9; // 0x50
	::System::Int32 Field_2_10; // 0x58
	::System::Int32 Field_2_11; // 0x5C
	::System::Int32 Field_2_12; // 0x60
	::System::Boolean Field_2_13; // 0x64
	::System::Boolean Field_2_14; // 0x65

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_1_39155512A8777971*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_39155512A8777971*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_2_273604C6E105BE8C(::System::Int32 a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_273604C6E105BE8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_253A66CCBFD9E6BC(::System::Int32 a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_253A66CCBFD9E6BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5747018DC063F7B6(::System::String* a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_5747018DC063F7B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F93940E4AF0F2629(::System::String* a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_F93940E4AF0F2629_OFFSET))(this, a1, a2);
	}

	::Class_1_39155512A8777971* Method_2_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_39155512A8777971*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::Class_1_39155512A8777971* Method_2_835B2EA8F8CDB000(::Class_1_EAF7984A8FAD6BE4* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::Class_1_39155512A8777971*(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_835B2EA8F8CDB000_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_39155512A8777971* Method_2_E4B829802A26F311(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::Class_1_39155512A8777971*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_E4B829802A26F311_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_00A4B38C951C5BD5(::Class_1_39155512A8777971* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_39155512A8777971*))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_9681042564541CD6_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_B1D0479D4182D4BF(::Class_1_EAF7984A8FAD6BE4* a1, ::EnviromentSystemV2Space::PropertyDataBase* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::EnviromentSystemV2Space::PropertyDataBase*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_B1D0479D4182D4BF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_2_C56DC3B2E26040B8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_C56DC3B2E26040B8_1_OFFSET))(this);
	}

	::System::Void Method_2_E6451DD1ECA91329(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_E6451DD1ECA91329_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Single Method_2_E26DC44DCE94AB5A(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_E26DC44DCE94AB5A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	static ::System::Void Method_2_F7E4CF2BB55691F2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_F7E4CF2BB55691F2_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_58A784B94234E9BA(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Int32>* a3, ::RPG::CustomRP::CustomLightQualityFilter a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_58A784B94234E9BA_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_CF60BD7B3C2C0430(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_CF60BD7B3C2C0430_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE9367954300A5D4(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_6333D4029C3CC061_METHOD_2_DE9367954300A5D4_OFFSET))(this, a1);
	}
};
