#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"

namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_0D474CE0ACB61EB7_GET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xB9F36F0)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_01C00AED4805279E_OFFSET UNITYSDK_OFFSET(0xB9F2E10)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_11F90B354314AA3B_OFFSET UNITYSDK_OFFSET(0xB9F3360)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_15935C22F36A0728_OFFSET UNITYSDK_OFFSET(0xB9F3530)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_4C4EF158A7663D09_OFFSET UNITYSDK_OFFSET(0xB9F2E70)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0xB9F2F90)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_8D6AEC6345FD603D_OFFSET UNITYSDK_OFFSET(0xB9F3580)
#define CLASS_2_0D474CE0ACB61EB7_SET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xB9F3700)
#define CLASS_2_0D474CE0ACB61EB7__CTOR_OFFSET UNITYSDK_OFFSET(0xB9F3710)
#define CLASS_2_0D474CE0ACB61EB7__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9F2B40)
#define CLASS_2_0D474CE0ACB61EB7__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB9F2BF0)
#define CLASS_2_0D474CE0ACB61EB7___SETUPULTRABTNEFX_B__6_0_OFFSET UNITYSDK_OFFSET(0xB9F37B0)

inline static constexpr unsigned int Class_2_0D474CE0ACB61EB7_TypeDefinitionIndex = 68692;

class Class_2_0D474CE0ACB61EB7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::RPG::GameCore::CharacterDataComponent* Field_2_1; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::UnityEngine::Transform*>* Field_2_2; // 0x70
	::RPG::GameCore::DamageTypeRow* Field_2_3; // 0x78
	::UnityEngine::UI::Image* Field_2_4; // 0x80
	::RPG::GameCore::SkillCharacterComponent* Field_2_5; // 0x88
	::System::Boolean Field_2_6; // 0x90
	::System::Boolean _IsUltraMode_k__BackingField; // 0x91

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7__ONBIND_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_01C00AED4805279E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_01C00AED4805279E_OFFSET))(this, a1);
	}

	::System::Void Method_2_11F90B354314AA3B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_11F90B354314AA3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_15935C22F36A0728(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_15935C22F36A0728_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C4EF158A7663D09(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_4C4EF158A7663D09_OFFSET))(this, a1);
	}

	::System::Void Method_2_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_2_8D6AEC6345FD603D(::UnityEngine::GameObject* a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_8D6AEC6345FD603D_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsUltraMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_GET_ISULTRAMODE_OFFSET))(this);
	}

	::System::Void set_IsUltraMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_SET_ISULTRAMODE_OFFSET))(this, a1);
	}

	::System::Void __SetupUltraBtnEfx_b__6_0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7___SETUPULTRABTNEFX_B__6_0_OFFSET))(this, a1);
	}
};
