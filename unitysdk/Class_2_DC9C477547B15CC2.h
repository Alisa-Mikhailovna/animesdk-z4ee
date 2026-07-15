#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_DC9C477547B15CC2_CounterType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_670DA05CE98605A7;
class Class_2_7B1C7CBB7B4FF79A;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_DC9C477547B15CC2_METHOD_2_164DA41B84B6F6E5_OFFSET UNITYSDK_OFFSET(0xB9A58E0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0xB9A5030)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0xB9A5A90)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0xB9A5BA0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_3CFC15F4A20EC116_OFFSET UNITYSDK_OFFSET(0xB9A4C70)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_4E23EAF81911C9F7_OFFSET UNITYSDK_OFFSET(0xB9A4FB0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_4E42C1D03BBB9919_OFFSET UNITYSDK_OFFSET(0xB9A6190)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xB9A4EB0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xB9A57B0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_86B0DDD374345795_OFFSET UNITYSDK_OFFSET(0xB9A5270)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xB9A5B40)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_936E7DFACB32E87B_OFFSET UNITYSDK_OFFSET(0xB9A5EE0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0xB9A5C80)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0xB9A5590)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0xB9A4D90)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0xB9A4B80)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0xB9A48C0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_C3435D680BA1E779_OFFSET UNITYSDK_OFFSET(0xB9A4D30)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0xB9A4BF0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0xB9A5E40)
#define CLASS_2_DC9C477547B15CC2_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB9A56A0)
#define CLASS_2_DC9C477547B15CC2_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB9A5840)
#define CLASS_2_DC9C477547B15CC2__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9A6340)
#define CLASS_2_DC9C477547B15CC2__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A6300)
#define CLASS_2_DC9C477547B15CC2__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9A46F0)

inline static constexpr unsigned int Class_2_DC9C477547B15CC2_TypeDefinitionIndex = 68383;

class Class_2_DC9C477547B15CC2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_DC9C477547B15CC2_TypeDefinitionIndex)->GetStaticField(0x7A20);
	}
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::ParticleSystem* Field_2_2; // 0x60
	::RPG::GameCore::GameEntity* Field_2_3; // 0x68
	::UnityEngine::UI::Image* Field_2_4; // 0x70
	::UnityEngine::Transform* Field_2_5; // 0x78
	::UnityEngine::UI::Image* Field_2_6; // 0x80
	::UnityEngine::ParticleSystem* Field_2_7; // 0x88
	::UnityEngine::UI::Image* Field_2_8; // 0x90
	::UnityEngine::Animator* Field_2_9; // 0x98
	::UnityEngine::UI::Image* Field_2_10; // 0xA0
	::Class_2_670DA05CE98605A7* Field_2_11; // 0xA8
	::RPG::Client::LocalizedText* Field_2_12; // 0xB0
	::Class_2_7B1C7CBB7B4FF79A* Field_2_13; // 0xB8
	::RPG::GameCore::EnergyBarState Field_2_14; // 0xC0
	::Class_2_DC9C477547B15CC2_CounterType Field_2_15; // 0xC4
	::System::Int32 Field_2_16; // 0xC8
	::System::Boolean Field_2_17; // 0xCC
	::System::Boolean Field_2_18; // 0xCD
	::System::Boolean Field_2_19; // 0xCE
	::System::Int32 Field_2_20; // 0xD0
	::System::Int32 Field_2_21; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_164DA41B84B6F6E5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_164DA41B84B6F6E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_AEA938E393CB58B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_AEA938E393CB58B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_936E7DFACB32E87B(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_936E7DFACB32E87B_OFFSET))(this, a1);
	}

	::System::Void Method_2_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_98060E4D16CBDFE4_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_4E42C1D03BBB9919()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_4E42C1D03BBB9919_OFFSET))(this);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_86B0DDD374345795(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_86B0DDD374345795_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_2_C3435D680BA1E779(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_C3435D680BA1E779_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CFC15F4A20EC116(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_3CFC15F4A20EC116_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_4E23EAF81911C9F7(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_4E23EAF81911C9F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}
};
