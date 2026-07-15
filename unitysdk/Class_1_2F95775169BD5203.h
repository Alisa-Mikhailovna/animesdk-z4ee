#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2F95775169BD5203_RegionType.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/WaveInteract.h"

class Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F;
class FloatingObjectBuffer;
class InteractProxy;
class LegacyGPUParticleSystem;
class WaveSimPanel;
namespace RPG::Client { class WaveSimConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define CLASS_1_2F95775169BD5203_GET_ONACTIVEPANELCHANGED_OFFSET UNITYSDK_OFFSET(0x1522EC00)
#define CLASS_1_2F95775169BD5203_GET_ONINSTANCED_OFFSET UNITYSDK_OFFSET(0x15228EB0)
#define CLASS_1_2F95775169BD5203_METHOD_1_00EB2C748D484792_OFFSET UNITYSDK_OFFSET(0x1522EEF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x152312A0)
#define CLASS_1_2F95775169BD5203_METHOD_1_0807B7473B8F5526_OFFSET UNITYSDK_OFFSET(0x1522A580)
#define CLASS_1_2F95775169BD5203_METHOD_1_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x1522FEE0)
#define CLASS_1_2F95775169BD5203_METHOD_1_0F7D41D7CCA1E58B_OFFSET UNITYSDK_OFFSET(0x1522E8D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_1752943C8EA15AFA_OFFSET UNITYSDK_OFFSET(0x1522CC30)
#define CLASS_1_2F95775169BD5203_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x1522D760)
#define CLASS_1_2F95775169BD5203_METHOD_1_25B3AD34AD1F3D62_OFFSET UNITYSDK_OFFSET(0x15230300)
#define CLASS_1_2F95775169BD5203_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15228490)
#define CLASS_1_2F95775169BD5203_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1522FDF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0x1522FD40)
#define CLASS_1_2F95775169BD5203_METHOD_1_396D1F1F9458998C_OFFSET UNITYSDK_OFFSET(0x1522D2B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x1522A390)
#define CLASS_1_2F95775169BD5203_METHOD_1_457158F21AF4EFF1_OFFSET UNITYSDK_OFFSET(0x1522DCC0)
#define CLASS_1_2F95775169BD5203_METHOD_1_48EB1D48BD21EBE0_OFFSET UNITYSDK_OFFSET(0x15230420)
#define CLASS_1_2F95775169BD5203_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x15228510)
#define CLASS_1_2F95775169BD5203_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x15229040)
#define CLASS_1_2F95775169BD5203_METHOD_1_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0x1522AC70)
#define CLASS_1_2F95775169BD5203_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1522D050)
#define CLASS_1_2F95775169BD5203_METHOD_1_6386527715220317_OFFSET UNITYSDK_OFFSET(0x1522EAA0)
#define CLASS_1_2F95775169BD5203_METHOD_1_640C71A5A5EAE1D0_OFFSET UNITYSDK_OFFSET(0x1522D3E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_6506177692E2002A_OFFSET UNITYSDK_OFFSET(0x15228700)
#define CLASS_1_2F95775169BD5203_METHOD_1_6FCADD6476EBA26E_OFFSET UNITYSDK_OFFSET(0x15230E30)
#define CLASS_1_2F95775169BD5203_METHOD_1_6FE1AD71BA198A2B_OFFSET UNITYSDK_OFFSET(0x1522E5C0)
#define CLASS_1_2F95775169BD5203_METHOD_1_72CC672E0ECF05A7_OFFSET UNITYSDK_OFFSET(0x152304E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_749E996CB446551C_OFFSET UNITYSDK_OFFSET(0x152284F0)
#define CLASS_1_2F95775169BD5203_METHOD_1_78E151D9A3BE2ACD_OFFSET UNITYSDK_OFFSET(0x1522A260)
#define CLASS_1_2F95775169BD5203_METHOD_1_7B8E66A4FD58DCEE_OFFSET UNITYSDK_OFFSET(0x152309F0)
#define CLASS_1_2F95775169BD5203_METHOD_1_83408277B358B570_OFFSET UNITYSDK_OFFSET(0x15227E40)
#define CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_1_OFFSET UNITYSDK_OFFSET(0x1522A1D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_OFFSET UNITYSDK_OFFSET(0x1522A130)
#define CLASS_1_2F95775169BD5203_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x15228E30)
#define CLASS_1_2F95775169BD5203_METHOD_1_86FAFA42ABDC538F_OFFSET UNITYSDK_OFFSET(0x15228BE0)
#define CLASS_1_2F95775169BD5203_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x152286B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x1522A740)
#define CLASS_1_2F95775169BD5203_METHOD_1_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x1522D920)
#define CLASS_1_2F95775169BD5203_METHOD_1_8DC7A8D48742DFD6_OFFSET UNITYSDK_OFFSET(0x152302B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15228650)
#define CLASS_1_2F95775169BD5203_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15227DF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x152282D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_A60E5E0917F6A6F4_OFFSET UNITYSDK_OFFSET(0x15228360)
#define CLASS_1_2F95775169BD5203_METHOD_1_A6B412A42E4C4567_OFFSET UNITYSDK_OFFSET(0x1522E0B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0x1522AF80)
#define CLASS_1_2F95775169BD5203_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x15229070)
#define CLASS_1_2F95775169BD5203_METHOD_1_B09968832FEFF646_1_OFFSET UNITYSDK_OFFSET(0x15228AA0)
#define CLASS_1_2F95775169BD5203_METHOD_1_B09968832FEFF646_OFFSET UNITYSDK_OFFSET(0x15228990)
#define CLASS_1_2F95775169BD5203_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15228F20)
#define CLASS_1_2F95775169BD5203_METHOD_1_B44AE63E34C20CB3_OFFSET UNITYSDK_OFFSET(0x1522EC30)
#define CLASS_1_2F95775169BD5203_METHOD_1_B6DDFC1AF3B5F97D_OFFSET UNITYSDK_OFFSET(0x1522D500)
#define CLASS_1_2F95775169BD5203_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15227DE0)
#define CLASS_1_2F95775169BD5203_METHOD_1_C8B959BA4F3993AF_OFFSET UNITYSDK_OFFSET(0x152301C0)
#define CLASS_1_2F95775169BD5203_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15230DF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_1_OFFSET UNITYSDK_OFFSET(0x1522D6E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_2_OFFSET UNITYSDK_OFFSET(0x1522D720)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_OFFSET UNITYSDK_OFFSET(0x1522D6A0)
#define CLASS_1_2F95775169BD5203_METHOD_1_CC32BB23BD684E52_OFFSET UNITYSDK_OFFSET(0x15229400)
#define CLASS_1_2F95775169BD5203_METHOD_1_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0x152285C0)
#define CLASS_1_2F95775169BD5203_METHOD_1_D2DA768232E640DF_OFFSET UNITYSDK_OFFSET(0x15227D70)
#define CLASS_1_2F95775169BD5203_METHOD_1_D2E7B99027D15632_OFFSET UNITYSDK_OFFSET(0x1522EC20)
#define CLASS_1_2F95775169BD5203_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1522A720)
#define CLASS_1_2F95775169BD5203_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x152305C0)
#define CLASS_1_2F95775169BD5203_METHOD_1_E2B6F1F20E5DF7A7_OFFSET UNITYSDK_OFFSET(0x15231010)
#define CLASS_1_2F95775169BD5203_METHOD_1_E54BDE077E068F63_OFFSET UNITYSDK_OFFSET(0x152288B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0x1522CC80)
#define CLASS_1_2F95775169BD5203_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1522A530)
#define CLASS_1_2F95775169BD5203_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15228500)
#define CLASS_1_2F95775169BD5203_SET_ONACTIVEPANELCHANGED_OFFSET UNITYSDK_OFFSET(0x1522EC10)
#define CLASS_1_2F95775169BD5203_SET_ONINSTANCED_OFFSET UNITYSDK_OFFSET(0x15228EE0)
#define CLASS_1_2F95775169BD5203__CCTOR_OFFSET UNITYSDK_OFFSET(0x152312E0)
#define CLASS_1_2F95775169BD5203__CTOR_OFFSET UNITYSDK_OFFSET(0x15229180)

inline static constexpr unsigned int Class_1_2F95775169BD5203_TypeDefinitionIndex = 45704;

class Class_1_2F95775169BD5203 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xFEC0);
	}
	static ::System::Action** StaticGet__OnInstanced_k__BackingField()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xFEC8);
	}
	static ::UnityEngine::ComputeShader** StaticGet_Field_1_2()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xFED0);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_3()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xFED8);
	}
	static ::Class_1_2F95775169BD5203** StaticGet_Field_1_4()
	{
		return (::Class_1_2F95775169BD5203**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xFEE0);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5640);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5644);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5648);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x564C);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5650);
	}
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5654);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5658);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x565C);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5660);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5664);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5668);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x566C);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5670);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5674);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5678);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x567C);
	}
	static ::System::Int32* StaticGet_Field_1_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5680);
	}
	static ::System::Int32* StaticGet_Field_1_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5684);
	}
	static ::System::Int32* StaticGet_Field_1_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5688);
	}
	static ::System::Int32* StaticGet_Field_1_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x568C);
	}
	static ::System::Int32* StaticGet_Field_1_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5690);
	}
	static ::System::Int32* StaticGet_Field_1_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5694);
	}
	static ::System::Int32* StaticGet_Field_1_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5698);
	}
	static ::System::Int32* StaticGet_Field_1_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x569C);
	}
	static ::System::Int32* StaticGet_Field_1_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56A0);
	}
	static ::System::Int32* StaticGet_Field_1_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56A4);
	}
	static ::System::Int32* StaticGet_Field_1_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56A8);
	}
	static ::System::Int32* StaticGet_Field_1_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56AC);
	}
	static ::System::Int32* StaticGet_Field_1_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56B0);
	}
	static ::System::Int32* StaticGet_Field_1_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56B4);
	}
	static ::System::Int32* StaticGet_Field_1_35()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56B8);
	}
	static ::System::Int32* StaticGet_Field_1_36()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56BC);
	}
	static ::System::Int32* StaticGet_Field_1_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56C0);
	}
	static ::System::Int32* StaticGet_Field_1_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56C4);
	}
	static ::System::Int32* StaticGet_Field_1_39()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56C8);
	}
	static ::System::Int32* StaticGet_Field_1_40()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56CC);
	}
	static ::System::Int32* StaticGet_Field_1_41()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56D0);
	}
	static ::System::Int32* StaticGet_Field_1_42()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56D4);
	}
	static ::System::Int32* StaticGet_Field_1_43()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56D8);
	}
	static ::System::Int32* StaticGet_Field_1_44()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56DC);
	}
	static ::System::Int32* StaticGet_Field_1_45()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56E0);
	}
	static ::System::Int32* StaticGet_Field_1_46()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56E4);
	}
	static ::System::Int32* StaticGet_Field_1_47()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56E8);
	}
	static ::System::Int32* StaticGet_Field_1_48()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56EC);
	}
	static ::System::Int32* StaticGet_Field_1_49()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56F0);
	}
	static ::System::Int32* StaticGet_Field_1_50()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56F4);
	}
	static ::System::Int32* StaticGet_Field_1_51()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56F8);
	}
	static ::System::Int32* StaticGet_Field_1_52()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x56FC);
	}
	static ::System::Int32* StaticGet_Field_1_53()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5700);
	}
	static ::System::Int32* StaticGet_Field_1_54()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5704);
	}
	static ::System::Int32* StaticGet_Field_1_55()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5708);
	}
	static ::System::Int32* StaticGet_Field_1_56()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x570C);
	}
	static ::System::Int32* StaticGet_Field_1_57()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5710);
	}
	static ::System::Int32* StaticGet_Field_1_58()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5714);
	}
	static ::System::Int32* StaticGet_Field_1_59()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5718);
	}
	static ::System::Int32* StaticGet_Field_1_60()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x571C);
	}
	static ::System::Int32* StaticGet_Field_1_61()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5720);
	}
	static ::System::Int32* StaticGet_Field_1_62()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5724);
	}
	static ::System::Int32* StaticGet_Field_1_63()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5728);
	}
	static ::System::Int32* StaticGet_Field_1_64()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x572C);
	}
	static ::System::Int32* StaticGet_Field_1_65()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5730);
	}
	static ::System::Int32* StaticGet_Field_1_66()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5734);
	}
	::UnityEngine::Texture2D* Field_1_67; // 0x10
	::UnityEngine::Texture2D* Field_1_68; // 0x18
	::UnityEngine::RenderTexture* Field_1_69; // 0x20
	::UnityEngine::RenderTexture* Field_1_70; // 0x28
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_71; // 0x30
	::System::Collections::Generic::List_1<::WaveSimPanel*>* Field_1_72; // 0x38
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_73; // 0x40
	::UnityEngine::Texture2D* Field_1_74; // 0x48
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_75; // 0x50
	::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* Field_1_76; // 0x58
	::System::Collections::Generic::List_1<::WaveSimPanel*>* Field_1_77; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* Field_1_78; // 0x68
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_79; // 0x70
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_80; // 0x78
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_81; // 0x80
	::WaveSimPanel* Field_1_82; // 0x88
	::FloatingObjectBuffer* Field_1_83; // 0x90
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_84; // 0x98
	::RPG::Client::WaveSimConfig* Field_1_85; // 0xA0
	::UnityEngine::Texture2D* Field_1_86; // 0xA8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_87; // 0xB0
	::System::Collections::Generic::List_1<::InteractProxy*>* Field_1_88; // 0xB8
	::System::Collections::Generic::List_1<::WaveInteract>* Field_1_89; // 0xC0
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_90; // 0xC8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_91; // 0xD0
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_92; // 0xD8
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_93; // 0xE0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_94; // 0xE8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_95; // 0xF0
	::UnityEngine::RenderTexture* Field_1_96; // 0xF8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_97; // 0x100
	::System::Action* _OnActivePanelChanged_k__BackingField; // 0x108
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_99; // 0x110
	::WaveSimPanel* Field_1_100; // 0x118
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* Field_1_101; // 0x120
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* Field_1_102; // 0x128
	::UnityEngine::RenderTexture* Field_1_103; // 0x130
	::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* Field_1_104; // 0x138
	::System::Int32 Field_1_105; // 0x140
	::System::Boolean Field_1_106; // 0x144
	::System::Boolean Field_1_107; // 0x145
	::System::Int32 Field_1_108; // 0x148
	::System::Boolean Field_1_109; // 0x14C
	::System::Boolean Field_1_110; // 0x14D
	::System::Boolean Field_1_111; // 0x14E
	::System::Boolean Field_1_112; // 0x14F
	::System::Single Field_1_113; // 0x150
	::UnityEngine::Vector4 Field_1_114; // 0x154
	::System::Int32 Field_1_115; // 0x164
	::System::Single Field_1_116; // 0x168
	::System::Boolean Field_1_117; // 0x16C
	::System::Boolean Field_1_118; // 0x16D
	::System::Boolean Field_1_119; // 0x16E
	::System::Int32 Field_1_120; // 0x170
	::UnityEngine::Vector3 Field_1_121; // 0x174
	::System::Single Field_1_122; // 0x180
	::System::Int32 Field_1_123; // 0x184
	::System::Single Field_1_124; // 0x188
	::System::Int32 Field_1_125; // 0x18C
	::System::Single Field_1_126; // 0x190
	::System::Single Field_1_127; // 0x194
	::System::Int32 Field_1_128; // 0x198
	::System::Int32 Field_1_129; // 0x19C
	::System::Single Field_1_130; // 0x1A0
	::System::Int32 Field_1_131; // 0x1A4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203__CCTOR_OFFSET))();
	}

	::UnityEngine::Texture* Method_1_D2DA768232E640DF()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D2DA768232E640DF_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::FloatingObjectBuffer* Method_1_83408277B358B570()
	{
		return ((::FloatingObjectBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_83408277B358B570_OFFSET))(this);
	}

	::System::Void Method_1_A60E5E0917F6A6F4(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A60E5E0917F6A6F4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::WaveSimPanel*>* Method_1_749E996CB446551C()
	{
		return ((::System::Collections::Generic::List_1<::WaveSimPanel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_749E996CB446551C_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_1_6506177692E2002A(::LegacyGPUParticleSystem* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6506177692E2002A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E54BDE077E068F63(::LegacyGPUParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_E54BDE077E068F63_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09968832FEFF646(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B09968832FEFF646_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09968832FEFF646_1(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B09968832FEFF646_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	static ::System::Action* get_OnInstanced()
	{
		return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_GET_ONINSTANCED_OFFSET))();
	}

	static ::System::Void set_OnInstanced(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_SET_ONINSTANCED_OFFSET))(a1);
	}

	static ::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B1936CE4DA97AA45_OFFSET))();
	}

	static ::Class_1_2F95775169BD5203* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_2F95775169BD5203*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	static ::Class_1_2F95775169BD5203* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_2F95775169BD5203*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Void Method_1_83F84A2352FBB33C(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_OFFSET))(this, a1);
	}

	::System::Void Method_1_83F84A2352FBB33C_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_78E151D9A3BE2ACD(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_78E151D9A3BE2ACD_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_6092608CF92684DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6092608CF92684DE_OFFSET))(this);
	}

	::System::Void Method_1_1752943C8EA15AFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_1752943C8EA15AFA_OFFSET))(this);
	}

	::System::Void Method_1_CC32BB23BD684E52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CC32BB23BD684E52_OFFSET))(this);
	}

	::System::Void Method_1_396D1F1F9458998C(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_396D1F1F9458998C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6DDFC1AF3B5F97D(::UnityEngine::RenderTexture* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B6DDFC1AF3B5F97D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Texture2D* Method_1_CAFF28467C61EE64()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_OFFSET))(this);
	}

	::UnityEngine::Texture2D* Method_1_CAFF28467C61EE64_1()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_1_OFFSET))(this);
	}

	::UnityEngine::Texture2D* Method_1_CAFF28467C61EE64_2()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_2_OFFSET))(this);
	}

	::System::Void Method_1_E6FA84ECDEF620CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_E6FA84ECDEF620CE_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_457158F21AF4EFF1(::WaveSimPanel* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_457158F21AF4EFF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A6B412A42E4C4567(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A6B412A42E4C4567_OFFSET))(this, a1);
	}

	::System::Void Method_1_6FE1AD71BA198A2B(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::Class_1_2F95775169BD5203_RegionType a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::Class_1_2F95775169BD5203_RegionType))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6FE1AD71BA198A2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0F7D41D7CCA1E58B(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0F7D41D7CCA1E58B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0807B7473B8F5526(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0807B7473B8F5526_OFFSET))(this, a1, a2, a3);
	}

	::System::Action* get_OnActivePanelChanged()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_GET_ONACTIVEPANELCHANGED_OFFSET))(this);
	}

	::System::Void set_OnActivePanelChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_SET_ONACTIVEPANELCHANGED_OFFSET))(this, a1);
	}

	::WaveSimPanel* Method_1_D2E7B99027D15632()
	{
		return ((::WaveSimPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D2E7B99027D15632_OFFSET))(this);
	}

	::System::Void Method_1_B44AE63E34C20CB3(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B44AE63E34C20CB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0B68C1DD4B91F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D0B68C1DD4B91F49_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0D372435D9CAE4BC_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_C8B959BA4F3993AF()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_C8B959BA4F3993AF_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_8DC7A8D48742DFD6()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_8DC7A8D48742DFD6_OFFSET))(this);
	}

	::System::Void Method_1_86FAFA42ABDC538F(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_86FAFA42ABDC538F_OFFSET))(this, a1);
	}

	::System::Void Method_1_25B3AD34AD1F3D62(::InteractProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::InteractProxy*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_25B3AD34AD1F3D62_OFFSET))(this, a1);
	}

	::System::Void Method_1_48EB1D48BD21EBE0(::InteractProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::InteractProxy*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_48EB1D48BD21EBE0_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_6386527715220317(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6386527715220317_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_72CC672E0ECF05A7(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_72CC672E0ECF05A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_A94BAB85685275CB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A94BAB85685275CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B8E66A4FD58DCEE(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_7B8E66A4FD58DCEE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Void Method_1_00EB2C748D484792(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_00EB2C748D484792_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_6FCADD6476EBA26E(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6FCADD6476EBA26E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2B6F1F20E5DF7A7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_E2B6F1F20E5DF7A7_OFFSET))(a1);
	}

	static ::System::Void Method_1_640C71A5A5EAE1D0(::UnityEngine::ComputeShader* a1, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* a2, ::UnityEngine::RenderTexture* a3)
	{
		return ((::System::Void(*)(::UnityEngine::ComputeShader*, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_640C71A5A5EAE1D0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_1DE63FE11FA0D5B4_OFFSET))();
	}

	static ::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_60E1F7F58CCF739F_OFFSET))();
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}
};
