#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1342B57709FD7AC5_Struct_2_3223310B200982FF.h"
#include "unitysdk/RPG/Client/MaterialProppertySetWay.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_3D92459BEEC82DA8;
class Class_1_F0D462198B262603;
namespace RPG::Client { class RendererMaterialCache; }
namespace RPG::GameCore { class ShaderPropertyConfig; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define CLASS_1_1342B57709FD7AC5_CLEAR_OFFSET UNITYSDK_OFFSET(0xD855510)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_0AFD1D50235199BC_OFFSET UNITYSDK_OFFSET(0xD852510)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_11AC706BA50CACDE_OFFSET UNITYSDK_OFFSET(0xD851750)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_13A5F20929D7A4BF_OFFSET UNITYSDK_OFFSET(0xD84F860)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_1421D270B98166E8_OFFSET UNITYSDK_OFFSET(0xD851310)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_16FE35BA8F40A382_OFFSET UNITYSDK_OFFSET(0xD8564B0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_17884DE6F2D19B6E_OFFSET UNITYSDK_OFFSET(0xD853BC0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_1AF8EFBCCDF911AE_OFFSET UNITYSDK_OFFSET(0xD851FF0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xD8563B0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xD84F010)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0xD855B30)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_2721A6C3F6C53AA5_OFFSET UNITYSDK_OFFSET(0xD851D60)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_29BC59EB216E80FE_OFFSET UNITYSDK_OFFSET(0xD8503F0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_2F2C465C43536C2C_OFFSET UNITYSDK_OFFSET(0xD856430)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_2FBB56DE73321F30_OFFSET UNITYSDK_OFFSET(0xD84FFC0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_30C43A604CECBEA3_OFFSET UNITYSDK_OFFSET(0xD84D2D0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_30E1AF1BD85BB156_OFFSET UNITYSDK_OFFSET(0xD855AE0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_338A4B0C4FC058BE_OFFSET UNITYSDK_OFFSET(0xD850AD0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_33E38367D69D2421_OFFSET UNITYSDK_OFFSET(0xD8544C0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_38530CCCC14CD1BC_OFFSET UNITYSDK_OFFSET(0xD851370)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD855E20)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_41A01E345E6EA0DB_OFFSET UNITYSDK_OFFSET(0xD850FE0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0xD856130)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xD855F70)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xD855DD0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD8554C0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_44044DFC79037A53_OFFSET UNITYSDK_OFFSET(0xD854AF0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_45B8A37631663848_OFFSET UNITYSDK_OFFSET(0xD851470)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_4CC98A6C8FCB337C_OFFSET UNITYSDK_OFFSET(0xD853420)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xD856540)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_52A453FDDF9F650F_OFFSET UNITYSDK_OFFSET(0xD853FD0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xD854470)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0xD851940)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_5FE87C96BC4C8E75_OFFSET UNITYSDK_OFFSET(0xD84FE40)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_69DD8D30CC011166_OFFSET UNITYSDK_OFFSET(0xD852BC0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_6A76074762AA2492_OFFSET UNITYSDK_OFFSET(0xD850570)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_6C298B899C1628F7_OFFSET UNITYSDK_OFFSET(0xD84C730)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_737B0CC58106BF5B_OFFSET UNITYSDK_OFFSET(0xD850700)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_78ED2E5CBDFB328D_OFFSET UNITYSDK_OFFSET(0xD852F00)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_7D711268878950EB_OFFSET UNITYSDK_OFFSET(0xD8501C0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_7F8FBC5D3D292138_1_OFFSET UNITYSDK_OFFSET(0xD853A90)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_7F8FBC5D3D292138_OFFSET UNITYSDK_OFFSET(0xD853960)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_815BD7EE28667742_OFFSET UNITYSDK_OFFSET(0xD850F60)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xD855A40)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0xD850930)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0xD854B60)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0xD8558D0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_9B9F4E6BE61FD798_OFFSET UNITYSDK_OFFSET(0xD84FC10)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xD856410)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_A8BEA81740818411_OFFSET UNITYSDK_OFFSET(0xD8536D0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_A8C8FFA164F2128F_OFFSET UNITYSDK_OFFSET(0xD855E60)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xD854970)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_B73CDCBF771B2B3A_OFFSET UNITYSDK_OFFSET(0xD856030)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_B7CB9F6D4F8CE62F_OFFSET UNITYSDK_OFFSET(0xD852280)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_BA21645B2BA53720_OFFSET UNITYSDK_OFFSET(0xD854110)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_BF54EEDF1489BF9B_OFFSET UNITYSDK_OFFSET(0xD853DD0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0xD855160)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_C23F7A96EBA0C99F_OFFSET UNITYSDK_OFFSET(0xD8548C0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xD856420)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0xD8516C0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_CA22867231F3BB14_OFFSET UNITYSDK_OFFSET(0xD853190)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_E14D6DFF657BA3C8_OFFSET UNITYSDK_OFFSET(0xD856200)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_E5E58D404DA5A4AA_OFFSET UNITYSDK_OFFSET(0xD84FA90)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_E607519FCB80C849_OFFSET UNITYSDK_OFFSET(0xD855CA0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_E90591B7EBC622D6_OFFSET UNITYSDK_OFFSET(0xD851AB0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xD8512A0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xD8553B0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_EF2C731C576DDB74_OFFSET UNITYSDK_OFFSET(0xD84F6D0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xD856570)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD856530)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_F1C870D01294DAF7_OFFSET UNITYSDK_OFFSET(0xD850C70)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_F76A5B1D70C69FA2_OFFSET UNITYSDK_OFFSET(0xD850DD0)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__ADD_OFFSET UNITYSDK_OFFSET(0xD84F230)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__CONTAINS_OFFSET UNITYSDK_OFFSET(0xD84F280)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__COPYTO_OFFSET UNITYSDK_OFFSET(0xD84F2D0)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_COUNT_OFFSET UNITYSDK_OFFSET(0xD84F190)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0xD84F220)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__REMOVE_OFFSET UNITYSDK_OFFSET(0xD84F3C0)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MATERIAL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD84F620)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_RENDERER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD84F550)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__GET_ITEM_OFFSET UNITYSDK_OFFSET(0xD84F070)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INDEXOF_OFFSET UNITYSDK_OFFSET(0xD84F320)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INSERT_OFFSET UNITYSDK_OFFSET(0xD84F370)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__REMOVEAT_OFFSET UNITYSDK_OFFSET(0xD84F410)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__SET_ITEM_OFFSET UNITYSDK_OFFSET(0xD84F140)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD84F460)
#define CLASS_1_1342B57709FD7AC5__CCTOR_OFFSET UNITYSDK_OFFSET(0xD856740)
#define CLASS_1_1342B57709FD7AC5__CTOR_OFFSET UNITYSDK_OFFSET(0xD856580)

inline static constexpr unsigned int Class_1_1342B57709FD7AC5_TypeDefinitionIndex = 66672;

class Class_1_1342B57709FD7AC5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x6680);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x6688);
	}
	static ::RPG::GameCore::ShaderPropertyConfig** StaticGet_Field_1_2()
	{
		return (::RPG::GameCore::ShaderPropertyConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x6690);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3730);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3734);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3738);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x373C);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3740);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3744);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3748);
	}
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x374C);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3750);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3754);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3758);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x375C);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3760);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3764);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3768);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x376C);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3770);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3774);
	}
	static ::System::Int32* StaticGet_Field_1_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3778);
	}
	static ::System::Int32* StaticGet_Field_1_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x377C);
	}
	static ::System::Int32* StaticGet_Field_1_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3780);
	}
	static ::System::Int32* StaticGet_Field_1_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3784);
	}
	static ::System::Int32* StaticGet_Field_1_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3788);
	}
	static ::System::Int32* StaticGet_Field_1_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x378C);
	}
	static ::System::Int32* StaticGet_Field_1_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3790);
	}
	static ::System::Int32* StaticGet_Field_1_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3794);
	}
	static ::System::Int32* StaticGet_Field_1_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3798);
	}
	// static const ::System::Single Field_1_30; // 0x0
	::Class_1_3D92459BEEC82DA8* Field_1_31; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5_Struct_2_3223310B200982FF>*>* Field_1_32; // 0x18
	::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>* Field_1_33; // 0x20
	::Class_1_1342B57709FD7AC5* Field_1_34; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_35; // 0x30
	::UnityEngine::GameObject* Field_1_36; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* Field_1_37; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1342B57709FD7AC5_Struct_2_3223310B200982FF>* Field_1_38; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_39; // 0x50
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* Field_1_40; // 0x58
	::System::Int32 Field_1_41; // 0x60
	::System::UInt32 Field_1_42; // 0x64
	::System::Boolean Field_1_43; // 0x68
	::System::Boolean Field_1_44; // 0x69
	::System::Boolean Field_1_45; // 0x6A
	::System::Boolean Field_1_46; // 0x6B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5__CCTOR_OFFSET))();
	}

	::System::Void Method_1_6C298B899C1628F7(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_6C298B899C1628F7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_30C43A604CECBEA3(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_30C43A604CECBEA3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Renderer* System_Collections_Generic_IList_UnityEngine_Renderer__get_Item(::System::Int32 a1)
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__GET_ITEM_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__set_Item(::System::Int32 a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__SET_ITEM_OFFSET))(this, a1, a2);
	}

	::System::Int32 System_Collections_Generic_ICollection_UnityEngine_Renderer__get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_COUNT_OFFSET))(this);
	}

	::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__get_IsReadOnly()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_ISREADONLY_OFFSET))(this);
	}

	::System::Void System_Collections_Generic_ICollection_UnityEngine_Renderer__Add(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__ADD_OFFSET))(this, a1);
	}

	::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__Contains(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__CONTAINS_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_ICollection_UnityEngine_Renderer__CopyTo(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__COPYTO_OFFSET))(this, a1, a2);
	}

	::System::Int32 System_Collections_Generic_IList_UnityEngine_Renderer__IndexOf(::UnityEngine::Renderer* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INDEXOF_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__Insert(::System::Int32 a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INSERT_OFFSET))(this, a1, a2);
	}

	::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__Remove(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__REMOVE_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__RemoveAt(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__REMOVEAT_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::UnityEngine::Renderer*>* System_Collections_Generic_IEnumerable_UnityEngine_Renderer__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_RENDERER__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::UnityEngine::Material*>* System_Collections_Generic_IEnumerable_UnityEngine_Material__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MATERIAL__GETENUMERATOR_OFFSET))(this);
	}

	::System::Void Method_1_EF2C731C576DDB74(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_EF2C731C576DDB74_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_13A5F20929D7A4BF(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Color>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_13A5F20929D7A4BF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E5E58D404DA5A4AA(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_E5E58D404DA5A4AA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9B9F4E6BE61FD798(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_9B9F4E6BE61FD798_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5FE87C96BC4C8E75(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_5FE87C96BC4C8E75_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2FBB56DE73321F30(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_2FBB56DE73321F30_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7D711268878950EB(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_7D711268878950EB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_29BC59EB216E80FE(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_29BC59EB216E80FE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6A76074762AA2492(::System::Int32 a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_6A76074762AA2492_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_737B0CC58106BF5B(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_737B0CC58106BF5B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8E22B572EA9F050D(::Class_1_1342B57709FD7AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_8E22B572EA9F050D_OFFSET))(this, a1);
	}

	::System::Void Method_1_338A4B0C4FC058BE(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_338A4B0C4FC058BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F76A5B1D70C69FA2(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_F76A5B1D70C69FA2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F1C870D01294DAF7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_F1C870D01294DAF7_OFFSET))(this);
	}

	::System::Void Method_1_815BD7EE28667742(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_815BD7EE28667742_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A01E345E6EA0DB(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_41A01E345E6EA0DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_1421D270B98166E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_1421D270B98166E8_OFFSET))(this);
	}

	static ::System::Void Method_1_38530CCCC14CD1BC(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_38530CCCC14CD1BC_OFFSET))(a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_45B8A37631663848(::System::Int32 a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_45B8A37631663848_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_E90591B7EBC622D6(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_E90591B7EBC622D6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_2721A6C3F6C53AA5(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Color>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_2721A6C3F6C53AA5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_1AF8EFBCCDF911AE(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_1AF8EFBCCDF911AE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_B7CB9F6D4F8CE62F(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_B7CB9F6D4F8CE62F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0AFD1D50235199BC(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_0AFD1D50235199BC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_69DD8D30CC011166(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_69DD8D30CC011166_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_78ED2E5CBDFB328D(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_78ED2E5CBDFB328D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA22867231F3BB14(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_CA22867231F3BB14_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4CC98A6C8FCB337C(::System::Int32 a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_4CC98A6C8FCB337C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_A8BEA81740818411(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_A8BEA81740818411_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_7F8FBC5D3D292138(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_7F8FBC5D3D292138_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7F8FBC5D3D292138_1(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_7F8FBC5D3D292138_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_17884DE6F2D19B6E(::UnityEngine::PassTagID& a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::PassTagID&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_17884DE6F2D19B6E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BF54EEDF1489BF9B(::System::String* a1, ::System::Boolean a2, ::RPG::Client::MaterialProppertySetWay a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_BF54EEDF1489BF9B_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::ShaderPropertyConfig* Method_1_52A453FDDF9F650F()
	{
		return ((::RPG::GameCore::ShaderPropertyConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_52A453FDDF9F650F_OFFSET))();
	}

	::System::UInt32 Method_1_BA21645B2BA53720(::System::UInt32 a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_BA21645B2BA53720_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33E38367D69D2421(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_33E38367D69D2421_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::UInt32 Method_1_C23F7A96EBA0C99F(::UnityEngine::Renderer* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_C23F7A96EBA0C99F_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_44044DFC79037A53(::Class_1_F0D462198B262603* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0D462198B262603*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_44044DFC79037A53_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_30E1AF1BD85BB156(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_30E1AF1BD85BB156_OFFSET))(this, a1);
	}

	::System::Void Method_1_E607519FCB80C849(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_E607519FCB80C849_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_A8C8FFA164F2128F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_A8C8FFA164F2128F_OFFSET))(this);
	}

	::System::Void Method_1_23C3681AC9E5D438()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_23C3681AC9E5D438_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_B73CDCBF771B2B3A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_B73CDCBF771B2B3A_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_41A074549EF25F63_1_OFFSET))(this);
	}

	::System::Void Method_1_11AC706BA50CACDE(::System::Int32 a1, ::RPG::Client::MaterialProppertySetWay a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_11AC706BA50CACDE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Renderer* Method_1_E14D6DFF657BA3C8(::System::String* a1)
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_E14D6DFF657BA3C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Method_1_2F2C465C43536C2C()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_2F2C465C43536C2C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* Method_1_16FE35BA8F40A382()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_16FE35BA8F40A382_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_F0D462198B262603* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_F0D462198B262603*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
