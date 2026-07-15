#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8FD88AEFE1E689CC;
class Class_2_0F19373B970769FA;
class Class_2_25EEB3E1B4EE5C49;
class Class_2_4798B05B1DD74BF3;
class Class_2_5DB0E2DA4A5EB1AA;
class Class_2_F1109066952EAFF0;
namespace RPG::GameCore { class AbilityBeingLimbo; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class AbilityRallyHPChange; }
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterReviveFromRevivable; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E4F395A834F0C5E7_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x14BE5F10)
#define CLASS_2_E4F395A834F0C5E7_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x14BE64F0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_04EFE50A175DDDC2_OFFSET UNITYSDK_OFFSET(0x14BE4AE0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x14BE3250)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_0767CE059CCD42DA_OFFSET UNITYSDK_OFFSET(0x14BE3440)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_1AD3069986C9EC47_OFFSET UNITYSDK_OFFSET(0x14BE2980)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_1C9965AEF050F471_OFFSET UNITYSDK_OFFSET(0x14BE36C0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_1F47CAD86E555F5A_OFFSET UNITYSDK_OFFSET(0x14BE1BA0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_1FBE67C108B5895B_OFFSET UNITYSDK_OFFSET(0x14BE3190)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_24DE058D43CE26B3_OFFSET UNITYSDK_OFFSET(0x14BE4BC0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14BE2110)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_2B5349F257BE292A_1_OFFSET UNITYSDK_OFFSET(0x14BE48C0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_2B5349F257BE292A_OFFSET UNITYSDK_OFFSET(0x14BE40E0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_2D69DEA94F4D6D5B_OFFSET UNITYSDK_OFFSET(0x14BE2FD0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_3ED777C3FDC6F21F_OFFSET UNITYSDK_OFFSET(0x14BE3F80)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x14BE3070)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_45DAAAB95B685671_OFFSET UNITYSDK_OFFSET(0x14BE4760)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_46E030E6F5465A66_OFFSET UNITYSDK_OFFSET(0x14BE3BD0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_4B5DFB9ABEB1BD88_OFFSET UNITYSDK_OFFSET(0x14BE27D0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x14BE15B0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x14BE4D80)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_5ECF98B85414E700_OFFSET UNITYSDK_OFFSET(0x14BE4960)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_657B3A247C551E8D_OFFSET UNITYSDK_OFFSET(0x14BE4E50)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_676E4EF2BBA9B1C2_OFFSET UNITYSDK_OFFSET(0x14BE3830)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_6AEE51845DFA6D71_OFFSET UNITYSDK_OFFSET(0x14BE3B80)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x14BE4DE0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_845FB0A263BF2C18_OFFSET UNITYSDK_OFFSET(0x14BE4180)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_861F915F210620FC_OFFSET UNITYSDK_OFFSET(0x14BE2340)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_1_OFFSET UNITYSDK_OFFSET(0x14BE3EE0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_2_OFFSET UNITYSDK_OFFSET(0x14BE3F30)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_OFFSET UNITYSDK_OFFSET(0x14BE3E90)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x14BE14D0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x14BE4D30)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14BE33A0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x14BE2170)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x14BE2D20)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x14BE58E0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x14BE5730)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_C72B925A491E9859_OFFSET UNITYSDK_OFFSET(0x14BE2690)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_CF0D4B58606967D2_OFFSET UNITYSDK_OFFSET(0x14BE4CD0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_CF86D3C680F922E7_OFFSET UNITYSDK_OFFSET(0x14BE3610)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_D23B6B01A6C528A1_OFFSET UNITYSDK_OFFSET(0x14BE4610)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_D5C07CA59BC5F063_OFFSET UNITYSDK_OFFSET(0x14BE35B0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x14BE12F0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_E2A8ED7D0EB25DEC_OFFSET UNITYSDK_OFFSET(0x14BE2E80)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x14BE1A30)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x14BE2590)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_10_OFFSET UNITYSDK_OFFSET(0x14BE5C10)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_11_OFFSET UNITYSDK_OFFSET(0x14BE5CD0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_12_OFFSET UNITYSDK_OFFSET(0x14BE5D90)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_13_OFFSET UNITYSDK_OFFSET(0x14BE5E50)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x14BE5320)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x14BE53E0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x14BE54A0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x14BE5560)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x14BE5620)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0x14BE5820)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_7_OFFSET UNITYSDK_OFFSET(0x14BE59D0)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_8_OFFSET UNITYSDK_OFFSET(0x14BE5A90)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_9_OFFSET UNITYSDK_OFFSET(0x14BE5B50)
#define CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x14BE5260)
#define CLASS_2_E4F395A834F0C5E7_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x14BE1540)
#define CLASS_2_E4F395A834F0C5E7_ONRETURN_OFFSET UNITYSDK_OFFSET(0x14BE1B50)
#define CLASS_2_E4F395A834F0C5E7__CTOR_OFFSET UNITYSDK_OFFSET(0x14BE6A90)
#define CLASS_2_E4F395A834F0C5E7__ONBIND_OFFSET UNITYSDK_OFFSET(0x14BE1DB0)
#define CLASS_2_E4F395A834F0C5E7__ONTICK_OFFSET UNITYSDK_OFFSET(0x14BE4F00)

inline static constexpr unsigned int Class_2_E4F395A834F0C5E7_TypeDefinitionIndex = 68262;

class Class_2_E4F395A834F0C5E7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::Class_2_0F19373B970769FA* Field_2_2; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_F1109066952EAFF0*>* Field_2_3; // 0x68
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_4; // 0x70
	::UnityEngine::Transform* Field_2_5; // 0x78
	::UnityEngine::Transform* Field_2_6; // 0x80
	::UnityEngine::UI::Text* Field_2_7; // 0x88
	::Class_2_4798B05B1DD74BF3* Field_2_8; // 0x90
	::Class_2_25EEB3E1B4EE5C49* Field_2_9; // 0x98
	::UnityEngine::Animation* Field_2_10; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_11; // 0xA8
	::Class_2_5DB0E2DA4A5EB1AA* Field_2_12; // 0xB0
	::UnityEngine::UI::Text* Field_2_13; // 0xB8
	::RPG::GameCore::GameEntity* Field_2_14; // 0xC0
	::UnityEngine::UI::Text* Field_2_15; // 0xC8
	::UnityEngine::Color Field_2_16; // 0xD0
	::UnityEngine::Color Field_2_17; // 0xE0
	::System::Single Field_2_18; // 0xF0
	::System::Single Field_2_19; // 0xF4
	::RPG::GameCore::FixPoint Field_2_20; // 0xF8
	::UnityEngine::Color Field_2_21; // 0x100
	::UnityEngine::Color Field_2_22; // 0x110
	::UnityEngine::Color Field_2_23; // 0x120
	::RPG::GameCore::FixPoint Field_2_24; // 0x130
	::System::Boolean Field_2_25; // 0x138
	::System::Boolean Field_2_26; // 0x139
	::System::Boolean Field_2_27; // 0x13A
	::System::Single Field_2_28; // 0x13C
	::UnityEngine::Color Field_2_29; // 0x140
	::System::Single Field_2_30; // 0x150

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_ONRETURN_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_2_861F915F210620FC(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_861F915F210620FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B5DFB9ABEB1BD88(::RPG::GameCore::AbilityRallyHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityRallyHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_4B5DFB9ABEB1BD88_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AD3069986C9EC47(::RPG::GameCore::AbilityMaxHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_1AD3069986C9EC47_OFFSET))(this, a1);
	}

	::System::Void Method_2_1FBE67C108B5895B(::RPG::GameCore::AbilityDirtyHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityDirtyHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_1FBE67C108B5895B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_0767CE059CCD42DA(::RPG::GameCore::EntityRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_0767CE059CCD42DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF86D3C680F922E7(::RPG::GameCore::LevelCharacterReviveFromRevivable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterReviveFromRevivable*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_CF86D3C680F922E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C9965AEF050F471(::RPG::GameCore::AbilityBeingLimbo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityBeingLimbo*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_1C9965AEF050F471_OFFSET))(this, a1);
	}

	::System::Void Method_2_676E4EF2BBA9B1C2(::Class_1_8FD88AEFE1E689CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FD88AEFE1E689CC*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_676E4EF2BBA9B1C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_878A273A20E73D43()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_OFFSET))(this);
	}

	::System::Void Method_2_878A273A20E73D43_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_1_OFFSET))(this);
	}

	::System::Void Method_2_878A273A20E73D43_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_878A273A20E73D43_2_OFFSET))(this);
	}

	::System::Void Method_2_3ED777C3FDC6F21F(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_3ED777C3FDC6F21F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D23B6B01A6C528A1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_D23B6B01A6C528A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_45DAAAB95B685671(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_45DAAAB95B685671_OFFSET))(this, a1);
	}

	::System::Void Method_2_04EFE50A175DDDC2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_04EFE50A175DDDC2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_845FB0A263BF2C18(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_845FB0A263BF2C18_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F47CAD86E555F5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_1F47CAD86E555F5A_OFFSET))(this);
	}

	::System::Void Method_2_5ECF98B85414E700(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_5ECF98B85414E700_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_24DE058D43CE26B3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_24DE058D43CE26B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B5349F257BE292A(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_2B5349F257BE292A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B5349F257BE292A_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_2B5349F257BE292A_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CF0D4B58606967D2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_CF0D4B58606967D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_46E030E6F5465A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_46E030E6F5465A66_OFFSET))(this);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_2D69DEA94F4D6D5B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_2D69DEA94F4D6D5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}

	::System::Boolean Method_2_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_2_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_2_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void Method_2_E2A8ED7D0EB25DEC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_E2A8ED7D0EB25DEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_C72B925A491E9859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_C72B925A491E9859_OFFSET))(this);
	}

	::System::Void Method_2_657B3A247C551E8D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_657B3A247C551E8D_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_D5C07CA59BC5F063(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_D5C07CA59BC5F063_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7__ONTICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_6AEE51845DFA6D71()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_6AEE51845DFA6D71_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_10(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_10_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_11(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_11_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_12(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_12_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_13(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_METHOD_2_F37CDBD6D46274D2_13_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F395A834F0C5E7_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
