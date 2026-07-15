#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FiveDimPrototype.h"
#include "unitysdk/FiveDimRenderingPanel_SerializedInstanceData.h"
#include "unitysdk/FiveDimRenderingPanel_Struct_2_D8BB6C9D99A08606.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_1342B57709FD7AC5;
class Class_1_929E979D9ED7139E;
class Class_1_B044F82CBFAD3D4B;
class FDRIMatStateOperation;
class FiveDimRenderingItem;
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define FIVEDIMRENDERINGPANEL_BUILDINSTANCESFROMSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x147956A0)
#define FIVEDIMRENDERINGPANEL_CLEARSERIALIZEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x147991C0)
#define FIVEDIMRENDERINGPANEL_COLLECTSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x147986F0)
#define FIVEDIMRENDERINGPANEL_DELETEDISABLEDITEMS_OFFSET UNITYSDK_OFFSET(0x14799380)
#define FIVEDIMRENDERINGPANEL_GETPROTOTYPEREGISTED_OFFSET UNITYSDK_OFFSET(0x1479A060)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x14794DB0)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDSSIZE_OFFSET UNITYSDK_OFFSET(0x14794E90)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x14794BE0)
#define FIVEDIMRENDERINGPANEL_GET_CLIPSPACE_OFFSET UNITYSDK_OFFSET(0x14794AF0)
#define FIVEDIMRENDERINGPANEL_GET_CUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x14795230)
#define FIVEDIMRENDERINGPANEL_GET_DITHERALPHA_OFFSET UNITYSDK_OFFSET(0x14794C80)
#define FIVEDIMRENDERINGPANEL_GET_FORCEPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x147952F0)
#define FIVEDIMRENDERINGPANEL_GET_HASBOUNDCLIP_OFFSET UNITYSDK_OFFSET(0x14794AE0)
#define FIVEDIMRENDERINGPANEL_GET_INVERTBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x14794F70)
#define FIVEDIMRENDERINGPANEL_GET_ITEMCUSTOMHIZTEST_OFFSET UNITYSDK_OFFSET(0x147950B0)
#define FIVEDIMRENDERINGPANEL_GET_LIGHTDIR_OFFSET UNITYSDK_OFFSET(0x14794FE0)
#define FIVEDIMRENDERINGPANEL_GET_USEBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x14794D40)
#define FIVEDIMRENDERINGPANEL_GET_USECUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x14795170)
#define FIVEDIMRENDERINGPANEL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14796510)
#define FIVEDIMRENDERINGPANEL_MARKRENDERERDITHER_OFFSET UNITYSDK_OFFSET(0x14799DF0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_06330CD58CB602B6_1_OFFSET UNITYSDK_OFFSET(0x14799260)
#define FIVEDIMRENDERINGPANEL_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x147990A0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_348674E9BAD074BA_OFFSET UNITYSDK_OFFSET(0x147983A0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_4DC99A0E8033A1A2_OFFSET UNITYSDK_OFFSET(0x14798EF0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_4F7871DB44A26231_1_OFFSET UNITYSDK_OFFSET(0x14797220)
#define FIVEDIMRENDERINGPANEL_METHOD_5_4F7871DB44A26231_OFFSET UNITYSDK_OFFSET(0x14796B40)
#define FIVEDIMRENDERINGPANEL_METHOD_5_55B783EC124E0B75_OFFSET UNITYSDK_OFFSET(0x14797B70)
#define FIVEDIMRENDERINGPANEL_METHOD_5_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x14797940)
#define FIVEDIMRENDERINGPANEL_METHOD_5_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x14795460)
#define FIVEDIMRENDERINGPANEL_METHOD_5_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x14795F30)
#define FIVEDIMRENDERINGPANEL_METHOD_5_9216B801ACD0B564_OFFSET UNITYSDK_OFFSET(0x14796D10)
#define FIVEDIMRENDERINGPANEL_METHOD_5_92DABAB408A309F5_OFFSET UNITYSDK_OFFSET(0x147976E0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_9A6D1D47E588E644_OFFSET UNITYSDK_OFFSET(0x14797DF0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_A2B9571D01B8827A_OFFSET UNITYSDK_OFFSET(0x14798090)
#define FIVEDIMRENDERINGPANEL_METHOD_5_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x14796610)
#define FIVEDIMRENDERINGPANEL_METHOD_5_C2D94B542F8BDBB0_OFFSET UNITYSDK_OFFSET(0x1479B6D0)
#define FIVEDIMRENDERINGPANEL_METHOD_5_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0x14796770)
#define FIVEDIMRENDERINGPANEL_METHOD_5_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x14797410)
#define FIVEDIMRENDERINGPANEL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x147966C0)
#define FIVEDIMRENDERINGPANEL_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1479B7E0)
#define FIVEDIMRENDERINGPANEL_ONECLICKCOLLECTANDBUILDANDDISABLE_OFFSET UNITYSDK_OFFSET(0x14799040)
#define FIVEDIMRENDERINGPANEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x147953B0)
#define FIVEDIMRENDERINGPANEL_PREPARE_OFFSET UNITYSDK_OFFSET(0x14795500)
#define FIVEDIMRENDERINGPANEL_REGISTERITEMCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1479ADC0)
#define FIVEDIMRENDERINGPANEL_REGISTERITEMDITHER_OFFSET UNITYSDK_OFFSET(0x1479B310)
#define FIVEDIMRENDERINGPANEL_REGISTERRENDERER_1_OFFSET UNITYSDK_OFFSET(0x147997D0)
#define FIVEDIMRENDERINGPANEL_REGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0x14799660)
#define FIVEDIMRENDERINGPANEL_REGISTITEM_OFFSET UNITYSDK_OFFSET(0x1479A1F0)
#define FIVEDIMRENDERINGPANEL_SETPROTOTYPEMATPARAM_OFFSET UNITYSDK_OFFSET(0x1479B760)
#define FIVEDIMRENDERINGPANEL_SETRENDERERDITHER_OFFSET UNITYSDK_OFFSET(0x14799940)
#define FIVEDIMRENDERINGPANEL_SET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x14794DD0)
#define FIVEDIMRENDERINGPANEL_SET_BOUNDSSIZE_OFFSET UNITYSDK_OFFSET(0x14794EB0)
#define FIVEDIMRENDERINGPANEL_SET_CUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x14795290)
#define FIVEDIMRENDERINGPANEL_SET_DITHERALPHA_OFFSET UNITYSDK_OFFSET(0x14794C90)
#define FIVEDIMRENDERINGPANEL_SET_FORCEPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x14795350)
#define FIVEDIMRENDERINGPANEL_SET_INVERTBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x14794F80)
#define FIVEDIMRENDERINGPANEL_SET_ITEMCUSTOMHIZTEST_OFFSET UNITYSDK_OFFSET(0x14795110)
#define FIVEDIMRENDERINGPANEL_SET_LIGHTDIR_OFFSET UNITYSDK_OFFSET(0x14795000)
#define FIVEDIMRENDERINGPANEL_SET_USEBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x14794D50)
#define FIVEDIMRENDERINGPANEL_SET_USECUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x147951D0)
#define FIVEDIMRENDERINGPANEL_TICKRENDER_OFFSET UNITYSDK_OFFSET(0x147965A0)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEMCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1479B060)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEMDITHER_OFFSET UNITYSDK_OFFSET(0x1479B4F0)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEM_OFFSET UNITYSDK_OFFSET(0x1479AC80)
#define FIVEDIMRENDERINGPANEL_UNREGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0x14799F30)
#define FIVEDIMRENDERINGPANEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1479BE10)
#define FIVEDIMRENDERINGPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1479BB10)

inline static constexpr unsigned int FiveDimRenderingPanel_TypeDefinitionIndex = 45341;

class FiveDimRenderingPanel : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_Field_5_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0xF980);
	}
	static ::System::Int32* StaticGet_Field_5_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0xF984);
	}
	static ::System::Int32* StaticGet_Field_5_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0xF988);
	}
	static ::System::Int32* StaticGet_Field_5_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0xF98C);
	}
	static ::System::Int32* StaticGet_Field_5_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0xF990);
	}
	static ::System::Int32* StaticGet_Field_5_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0xF994);
	}
	static ::System::Int32* StaticGet_Field_5_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0xF998);
	}
	static ::System::Int32* StaticGet_Field_5_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0xF99C);
	}
	static ::System::Int32* StaticGet_Field_5_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0xF9A0);
	}
	static ::System::Int32* StaticGet_Field_5_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0xF9A4);
	}
	static ::System::Int32* StaticGet_Field_5_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingPanel_TypeDefinitionIndex)->GetStaticField(0xF9A8);
	}
	::UnityEngine::Vector4 PanelScaleTilling; // 0x18
	::System::Single _ditherAlpha; // 0x28
	::System::Boolean _useBoundsClip; // 0x2C
	::System::Boolean _InvertBoundsClip; // 0x2D
	::UnityEngine::Vector3 _boundsCenter; // 0x30
	::UnityEngine::Vector3 _boundsSize; // 0x3C
	::System::Boolean OverrideLight; // 0x48
	::System::Boolean OverrideByCamera; // 0x49
	::UnityEngine::Vector3 _LightDir; // 0x4C
	::System::Boolean UsePrototypeExpand; // 0x58
	::System::Single PrototypeExpandScale; // 0x5C
	::Class_1_B044F82CBFAD3D4B* Field_5_22; // 0x60
	::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* Field_5_23; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_5_24; // 0x70
	::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* Field_5_25; // 0x78
	::System::Collections::Generic::List_1<::System::UInt64>* Field_5_26; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FiveDimRenderingPanel_Struct_2_D8BB6C9D99A08606>* Field_5_27; // 0x88
	::System::Collections::Generic::List_1<::System::Boolean>* Field_5_28; // 0x90
	::System::Boolean Field_5_29; // 0x98
	::System::Boolean externalDrivenRender; // 0x99
	::System::Boolean externalDrivenUpdate; // 0x9A
	::System::Boolean panelPosDirty; // 0x9B
	::System::Boolean clipDirty; // 0x9C
	::System::Boolean lightingDirty; // 0x9D
	::System::Boolean RegisterChildWhenEnable; // 0x9E
	::UnityEngine::Transform* Field_5_36; // 0xA0
	::System::Boolean useSerializedData; // 0xA8
	::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* serializedPrototypes; // 0xB0
	::System::Collections::Generic::List_1<::FiveDimRenderingPanel_SerializedInstanceData>* serializedInstances; // 0xB8
	::System::Collections::Generic::List_1<::Class_1_929E979D9ED7139E*>* Field_5_40; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL__CCTOR_OFFSET))();
	}

	::System::Boolean get_HasBoundClip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_HASBOUNDCLIP_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 get_ClipSpace()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_CLIPSPACE_OFFSET))(this);
	}

	::UnityEngine::Bounds get_Bounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_BOUNDS_OFFSET))(this);
	}

	::System::Single get_DitherAlpha()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_DITHERALPHA_OFFSET))(this);
	}

	::System::Void set_DitherAlpha(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_DITHERALPHA_OFFSET))(this, a1);
	}

	::System::Boolean get_useBoundsClip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_USEBOUNDSCLIP_OFFSET))(this);
	}

	::System::Void set_useBoundsClip(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_USEBOUNDSCLIP_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_boundsCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_BOUNDSCENTER_OFFSET))(this);
	}

	::System::Void set_boundsCenter(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_BOUNDSCENTER_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_boundsSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_BOUNDSSIZE_OFFSET))(this);
	}

	::System::Void set_boundsSize(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_BOUNDSSIZE_OFFSET))(this, a1);
	}

	::System::Boolean get_InvertBoundsClip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_INVERTBOUNDSCLIP_OFFSET))(this);
	}

	::System::Void set_InvertBoundsClip(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_INVERTBOUNDSCLIP_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_LightDir()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_LIGHTDIR_OFFSET))(this);
	}

	::System::Void set_LightDir(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_LIGHTDIR_OFFSET))(this, a1);
	}

	::System::Boolean get_ItemCustomHizTest()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_ITEMCUSTOMHIZTEST_OFFSET))(this);
	}

	::System::Void set_ItemCustomHizTest(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_ITEMCUSTOMHIZTEST_OFFSET))(this, a1);
	}

	::System::Boolean get_UseCustomDrawLayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_USECUSTOMDRAWLAYER_OFFSET))(this);
	}

	::System::Void set_UseCustomDrawLayer(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_USECUSTOMDRAWLAYER_OFFSET))(this, a1);
	}

	::System::Int32 get_CustomDrawLayer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_CUSTOMDRAWLAYER_OFFSET))(this);
	}

	::System::Void set_CustomDrawLayer(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_CUSTOMDRAWLAYER_OFFSET))(this, a1);
	}

	::System::Boolean get_ForcePreviewMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_FORCEPREVIEWMODE_OFFSET))(this);
	}

	::System::Void set_ForcePreviewMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_FORCEPREVIEWMODE_OFFSET))(this, a1);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONENABLE_OFFSET))(this);
	}

	::System::Void Method_5_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_LATEUPDATE_OFFSET))(this);
	}

	::System::Void TickRender()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_TICKRENDER_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_5_C796A0B42720FBD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_C796A0B42720FBD3_OFFSET))(this);
	}

	::System::Void Prepare()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_PREPARE_OFFSET))(this);
	}

	::System::Void Method_5_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_5_4F7871DB44A26231()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_4F7871DB44A26231_OFFSET))(this);
	}

	::System::Void Method_5_4F7871DB44A26231_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_4F7871DB44A26231_1_OFFSET))(this);
	}

	::System::Void Method_5_92DABAB408A309F5(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_92DABAB408A309F5_OFFSET))(this, a1);
	}

	::System::Void Method_5_6DFEF4918C679AF0(::Class_1_1342B57709FD7AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_5_55B783EC124E0B75(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_55B783EC124E0B75_OFFSET))(this, a1);
	}

	::System::Void Method_5_9A6D1D47E588E644(::Class_1_1342B57709FD7AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_9A6D1D47E588E644_OFFSET))(this, a1);
	}

	::System::Void Method_5_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Void Method_5_A2B9571D01B8827A(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_A2B9571D01B8827A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_348674E9BAD074BA(::Class_1_1342B57709FD7AC5* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_348674E9BAD074BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_9216B801ACD0B564()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_9216B801ACD0B564_OFFSET))(this);
	}

	::System::Void CollectSerializedData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_COLLECTSERIALIZEDDATA_OFFSET))(this);
	}

	::System::Void BuildInstancesFromSerializedData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_BUILDINSTANCESFROMSERIALIZEDDATA_OFFSET))(this);
	}

	::System::Void Method_5_4DC99A0E8033A1A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_4DC99A0E8033A1A2_OFFSET))(this);
	}

	::System::Void OneClickCollectAndBuildAndDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONECLICKCOLLECTANDBUILDANDDISABLE_OFFSET))(this);
	}

	::System::Void ClearSerializedInstances()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CLEARSERIALIZEDINSTANCES_OFFSET))(this);
	}

	::System::Void DeleteDisabledItems()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_DELETEDISABLEDITEMS_OFFSET))(this);
	}

	::System::Void Method_5_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_5_06330CD58CB602B6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_06330CD58CB602B6_1_OFFSET))(this);
	}

	::System::Void Method_5_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void RegisterRenderer(::UnityEngine::SkinnedMeshRenderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERRENDERER_OFFSET))(this, a1);
	}

	::System::Void RegisterRenderer_1(::UnityEngine::MeshRenderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERRENDERER_1_OFFSET))(this, a1);
	}

	::System::Void SetRendererDither(::UnityEngine::Renderer* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SETRENDERERDITHER_OFFSET))(this, a1, a2);
	}

	::System::Void MarkRendererDither(::UnityEngine::Renderer* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_MARKRENDERERDITHER_OFFSET))(this, a1, a2);
	}

	::System::Void UnRegisterRenderer(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERRENDERER_OFFSET))(this, a1);
	}

	::RPG::Client::LiteInstancedItem::ItemPrototype* GetPrototypeRegisted(::FiveDimPrototype a1)
	{
		return ((::RPG::Client::LiteInstancedItem::ItemPrototype*(*)(::PVOID, ::FiveDimPrototype))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GETPROTOTYPEREGISTED_OFFSET))(this, a1);
	}

	::System::Boolean RegistItem(::FiveDimRenderingItem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTITEM_OFFSET))(this, a1);
	}

	::System::Void UnRegisterItem(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERITEM_OFFSET))(this, a1);
	}

	::System::Boolean RegisterItemCustomData(::FiveDimPrototype a1, ::FDRIMatStateOperation* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype, ::FDRIMatStateOperation*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERITEMCUSTOMDATA_OFFSET))(this, a1, a2);
	}

	::System::Boolean UnRegisterItemCustomData(::FiveDimPrototype a1, ::FDRIMatStateOperation* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype, ::FDRIMatStateOperation*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERITEMCUSTOMDATA_OFFSET))(this, a1, a2);
	}

	::System::Boolean RegisterItemDither(::FiveDimPrototype a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERITEMDITHER_OFFSET))(this, a1);
	}

	::System::Boolean UnRegisterItemDither(::FiveDimPrototype a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERITEMDITHER_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_C2D94B542F8BDBB0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_METHOD_5_C2D94B542F8BDBB0_OFFSET))(this, a1);
	}

	::System::Void SetPrototypeMatParam(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::LiteInstancedItem::ItemPrototype* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SETPROTOTYPEMATPARAM_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}
};
