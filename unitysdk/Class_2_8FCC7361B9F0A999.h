#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_8FCC7361B9F0A999_CounterType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_7B1C7CBB7B4FF79A;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_8FCC7361B9F0A999_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x152D4A80)
#define CLASS_2_8FCC7361B9F0A999_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x152D4C40)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0x152D3570)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_3ADBDAC4E19C46FF_OFFSET UNITYSDK_OFFSET(0x152D3DC0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x152D3490)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_4E42C1D03BBB9919_OFFSET UNITYSDK_OFFSET(0x152D3A40)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x152D3FD0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_7D21D8548943D577_OFFSET UNITYSDK_OFFSET(0x152D3310)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_8AAA870BDF6CE134_OFFSET UNITYSDK_OFFSET(0x152D41F0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x152D3200)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_936E7DFACB32E87B_OFFSET UNITYSDK_OFFSET(0x152D3730)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x152D39E0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_98CD8BF64F5D1A46_OFFSET UNITYSDK_OFFSET(0x152D3BB0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x152D3670)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x152D3EC0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x152D40D0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x152D4940)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0x152D4390)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_D7411E5DB745D614_OFFSET UNITYSDK_OFFSET(0x152D4520)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0x152D3D30)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_E8AE7970E4E0CA8B_OFFSET UNITYSDK_OFFSET(0x152D4470)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_EDA494CF8BB29EBF_OFFSET UNITYSDK_OFFSET(0x152D45F0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x152D3430)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x152D4720)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x152D4880)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x152D4660)
#define CLASS_2_8FCC7361B9F0A999_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x152D3270)
#define CLASS_2_8FCC7361B9F0A999_ONRETURN_OFFSET UNITYSDK_OFFSET(0x152D33A0)
#define CLASS_2_8FCC7361B9F0A999__CCTOR_OFFSET UNITYSDK_OFFSET(0x152D4E20)
#define CLASS_2_8FCC7361B9F0A999__CTOR_OFFSET UNITYSDK_OFFSET(0x152D4DE0)
#define CLASS_2_8FCC7361B9F0A999__ONBIND_OFFSET UNITYSDK_OFFSET(0x152D2F00)
#define CLASS_2_8FCC7361B9F0A999___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x152D4E90)

inline static constexpr unsigned int Class_2_8FCC7361B9F0A999_TypeDefinitionIndex = 68186;

class Class_2_8FCC7361B9F0A999 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8FCC7361B9F0A999_TypeDefinitionIndex)->GetStaticField(0x6B30);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8FCC7361B9F0A999_TypeDefinitionIndex)->GetStaticField(0x6B34);
	}
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::UI::Image* Field_2_3; // 0x60
	::UnityEngine::UI::Image* Field_2_4; // 0x68
	::Class_2_7B1C7CBB7B4FF79A* Field_2_5; // 0x70
	::UnityEngine::ParticleSystem* Field_2_6; // 0x78
	::RPG::Client::LocalizedText* Field_2_7; // 0x80
	::UnityEngine::Transform* Field_2_8; // 0x88
	::UnityEngine::Animator* Field_2_9; // 0x90
	::UnityEngine::Transform* Field_2_10; // 0x98
	::RPG::Client::RPGAnimationEvent* Field_2_11; // 0xA0
	::UnityEngine::UI::Image* Field_2_12; // 0xA8
	::UnityEngine::UI::Image* Field_2_13; // 0xB0
	::UnityEngine::ParticleSystem* Field_2_14; // 0xB8
	::RPG::GameCore::GameEntity* Field_2_15; // 0xC0
	::RPG::Client::LocalizedText* Field_2_16; // 0xC8
	::System::Int32 Field_2_17; // 0xD0
	::System::Boolean Field_2_18; // 0xD4
	::System::Boolean Field_2_19; // 0xD5
	::System::Int32 Field_2_20; // 0xD8
	::System::Int32 Field_2_21; // 0xDC
	::RPG::GameCore::EnergyBarState Field_2_22; // 0xE0
	::Class_2_8FCC7361B9F0A999_CounterType Field_2_23; // 0xE4
	::System::Int32 Field_2_24; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_7D21D8548943D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_7D21D8548943D577_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_936E7DFACB32E87B(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_936E7DFACB32E87B_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_4E42C1D03BBB9919()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_4E42C1D03BBB9919_OFFSET))(this);
	}

	::System::Void Method_2_98CD8BF64F5D1A46(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_98CD8BF64F5D1A46_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_8AAA870BDF6CE134(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_8AAA870BDF6CE134_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8AE7970E4E0CA8B(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_E8AE7970E4E0CA8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7411E5DB745D614(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_D7411E5DB745D614_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDA494CF8BB29EBF(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_EDA494CF8BB29EBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_3ADBDAC4E19C46FF(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_3ADBDAC4E19C46FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999___ONBIND_B__0_0_OFFSET))(this);
	}
};
