#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B213C739629BB369_State.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_37;
class Class_2_64EE36C1D6143448;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class NamedCurve; }
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::GameCore { class TeamTowersRobotConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B213C739629BB369_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xC267320)
#define CLASS_1_B213C739629BB369_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xC267920)
#define CLASS_1_B213C739629BB369_METHOD_1_397374046D61F348_OFFSET UNITYSDK_OFFSET(0xC267C50)
#define CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xC267430)
#define CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xC2674B0)
#define CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC2672A0)
#define CLASS_1_B213C739629BB369_METHOD_1_4373A28D9DB718D5_OFFSET UNITYSDK_OFFSET(0xC267030)
#define CLASS_1_B213C739629BB369_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0xC269630)
#define CLASS_1_B213C739629BB369_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xC266EC0)
#define CLASS_1_B213C739629BB369_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xC268330)
#define CLASS_1_B213C739629BB369_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xC268B10)
#define CLASS_1_B213C739629BB369_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0xC269F10)
#define CLASS_1_B213C739629BB369_METHOD_1_5892D030B127E82F_OFFSET UNITYSDK_OFFSET(0xC2690B0)
#define CLASS_1_B213C739629BB369_METHOD_1_753A3CECCA76D6CD_OFFSET UNITYSDK_OFFSET(0xC269750)
#define CLASS_1_B213C739629BB369_METHOD_1_7619D212F4D762A1_OFFSET UNITYSDK_OFFSET(0xC268090)
#define CLASS_1_B213C739629BB369_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xC268230)
#define CLASS_1_B213C739629BB369_METHOD_1_797DA3F60D987CC8_OFFSET UNITYSDK_OFFSET(0xC269860)
#define CLASS_1_B213C739629BB369_METHOD_1_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0xC267DF0)
#define CLASS_1_B213C739629BB369_METHOD_1_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0xC26A060)
#define CLASS_1_B213C739629BB369_METHOD_1_815FA992A09E827B_OFFSET UNITYSDK_OFFSET(0xC2668E0)
#define CLASS_1_B213C739629BB369_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0xC269FB0)
#define CLASS_1_B213C739629BB369_METHOD_1_881B6DBFF210C6D0_OFFSET UNITYSDK_OFFSET(0xC267530)
#define CLASS_1_B213C739629BB369_METHOD_1_899EC372DEC6EBDF_OFFSET UNITYSDK_OFFSET(0xC269BA0)
#define CLASS_1_B213C739629BB369_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xC269340)
#define CLASS_1_B213C739629BB369_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xC2687F0)
#define CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xC269400)
#define CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0xC269460)
#define CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC2694C0)
#define CLASS_1_B213C739629BB369_METHOD_1_9BA775FA6779D988_OFFSET UNITYSDK_OFFSET(0xC268A00)
#define CLASS_1_B213C739629BB369_METHOD_1_A03C765EBC5D1677_OFFSET UNITYSDK_OFFSET(0xC268280)
#define CLASS_1_B213C739629BB369_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xC2685A0)
#define CLASS_1_B213C739629BB369_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC267880)
#define CLASS_1_B213C739629BB369_METHOD_1_C03CD642451DA289_OFFSET UNITYSDK_OFFSET(0xC269D50)
#define CLASS_1_B213C739629BB369_METHOD_1_C11C83AF9E500688_OFFSET UNITYSDK_OFFSET(0xC267AD0)
#define CLASS_1_B213C739629BB369_METHOD_1_C154350CD1860109_OFFSET UNITYSDK_OFFSET(0xC269520)
#define CLASS_1_B213C739629BB369_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xC266820)
#define CLASS_1_B213C739629BB369_METHOD_1_C5F9823D509784CD_1_OFFSET UNITYSDK_OFFSET(0xC269B10)
#define CLASS_1_B213C739629BB369_METHOD_1_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0xC26A380)
#define CLASS_1_B213C739629BB369_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xC267BD0)
#define CLASS_1_B213C739629BB369_METHOD_1_CD762BD492FAC131_OFFSET UNITYSDK_OFFSET(0xC2668F0)
#define CLASS_1_B213C739629BB369_METHOD_1_D7B5D20B6674C9BD_OFFSET UNITYSDK_OFFSET(0xC2669E0)
#define CLASS_1_B213C739629BB369_METHOD_1_E3092075506D7C0F_OFFSET UNITYSDK_OFFSET(0xC266620)
#define CLASS_1_B213C739629BB369_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0xC268A90)
#define CLASS_1_B213C739629BB369_METHOD_1_F675341C48ED6437_OFFSET UNITYSDK_OFFSET(0xC268C30)
#define CLASS_1_B213C739629BB369__CCTOR_OFFSET UNITYSDK_OFFSET(0xC26A410)
#define CLASS_1_B213C739629BB369__CTOR_OFFSET UNITYSDK_OFFSET(0xC2666A0)

inline static constexpr unsigned int Class_1_B213C739629BB369_TypeDefinitionIndex = 75144;

class Class_1_B213C739629BB369 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0x10440);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0x10444);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0x10448);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0x1044C);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0x10450);
	}
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::Single Field_1_9; // 0x0
	// static const ::System::Single Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::Single Field_1_15; // 0x0
	::RPG::Client::NamedCurve* Field_1_16; // 0x10
	::UnityEngine::GameObject* Field_1_17; // 0x18
	::UnityEngine::Transform* Field_1_18; // 0x20
	::UnityEngine::Transform* Field_1_19; // 0x28
	::RPG::Client::NamedCurve* Field_1_20; // 0x30
	::UnityEngine::Animator* Field_1_21; // 0x38
	::UnityEngine::Transform* Field_1_22; // 0x40
	::Class_0_16E4307DCC419505_37* Field_1_23; // 0x48
	::UnityEngine::Transform* Field_1_24; // 0x50
	::RPG::Client::UIPrefabLoader* Field_1_25; // 0x58
	::RPG::Client::NamedCurve* Field_1_26; // 0x60
	::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* Field_1_27; // 0x68
	::RPG::Client::MonoAnimationTrigger* Field_1_28; // 0x70
	::UnityEngine::GameObject* Field_1_29; // 0x78
	::UnityEngine::GameObject* Field_1_30; // 0x80
	::System::Single Field_1_31; // 0x88
	::System::Single Field_1_32; // 0x8C
	::System::Single Field_1_33; // 0x90
	::System::Single Field_1_34; // 0x94
	::System::Single Field_1_35; // 0x98
	::System::Single Field_1_36; // 0x9C
	::UnityEngine::Vector3 Field_1_37; // 0xA0
	::System::Single Field_1_38; // 0xAC
	::UnityEngine::Vector3 Field_1_39; // 0xB0
	::UnityEngine::Vector3 Field_1_40; // 0xBC
	::System::Single Field_1_41; // 0xC8
	::UnityEngine::Vector3 Field_1_42; // 0xCC
	::UnityEngine::Vector3 Field_1_43; // 0xD8
	::System::Single Field_1_44; // 0xE4
	::System::Boolean Field_1_45; // 0xE8
	::System::Boolean Field_1_46; // 0xE9
	::System::Single Field_1_47; // 0xEC
	::System::Single Field_1_48; // 0xF0
	::System::Single Field_1_49; // 0xF4
	::System::Single Field_1_50; // 0xF8
	::UnityEngine::Vector3 Field_1_51; // 0xFC
	::System::Single Field_1_52; // 0x108
	::UnityEngine::Vector3 Field_1_53; // 0x10C
	::System::Single Field_1_54; // 0x118
	::Class_1_B213C739629BB369_State Field_1_55; // 0x11C
	::System::Single Field_1_56; // 0x120
	::System::Single Field_1_57; // 0x124
	::System::Single Field_1_58; // 0x128
	::System::Single Field_1_59; // 0x12C
	::System::Single Field_1_60; // 0x130
	::UnityEngine::Vector3 Field_1_61; // 0x134

	::System::Void _ctor(::System::Boolean a1, ::RPG::GameCore::TeamTowersRobotConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::TeamTowersRobotConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369__CCTOR_OFFSET))();
	}

	::Class_2_64EE36C1D6143448* Method_1_E3092075506D7C0F()
	{
		return ((::Class_2_64EE36C1D6143448*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_E3092075506D7C0F_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::Class_1_B213C739629BB369_State Method_1_815FA992A09E827B()
	{
		return ((::Class_1_B213C739629BB369_State(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_815FA992A09E827B_OFFSET))(this);
	}

	::System::Void Method_1_CD762BD492FAC131(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_CD762BD492FAC131_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7B5D20B6674C9BD(::System::String* a1, ::UnityEngine::Transform* a2, ::Class_0_16E4307DCC419505_37* a3, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_37*, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_D7B5D20B6674C9BD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C11C83AF9E500688(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C11C83AF9E500688_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_A03C765EBC5D1677(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_A03C765EBC5D1677_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_5892D030B127E82F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_5892D030B127E82F_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_1_C154350CD1860109()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C154350CD1860109_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F675341C48ED6437()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_F675341C48ED6437_OFFSET))(this);
	}

	::System::Void Method_1_397374046D61F348(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_397374046D61F348_OFFSET))(this, a1);
	}

	::System::Void Method_1_797DA3F60D987CC8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_797DA3F60D987CC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_899EC372DEC6EBDF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_899EC372DEC6EBDF_OFFSET))(this, a1);
	}

	::System::Single Method_1_C03CD642451DA289()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C03CD642451DA289_OFFSET))(this);
	}

	::System::Void Method_1_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_459C79521BFE514E_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_52A3FEDD63707B13_OFFSET))(a1);
	}

	::System::Void Method_1_4373A28D9DB718D5(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_4373A28D9DB718D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void Method_1_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Single Method_1_C5F9823D509784CD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C5F9823D509784CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BA775FA6779D988(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_9BA775FA6779D988_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Single Method_1_753A3CECCA76D6CD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_753A3CECCA76D6CD_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_C5F9823D509784CD_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C5F9823D509784CD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_881B6DBFF210C6D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_881B6DBFF210C6D0_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void Method_1_7619D212F4D762A1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_7619D212F4D762A1_OFFSET))(this, a1);
	}
};
