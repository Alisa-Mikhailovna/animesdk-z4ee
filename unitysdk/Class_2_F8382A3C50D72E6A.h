#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F8382A3C50D72E6A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAE47170)
#define CLASS_2_F8382A3C50D72E6A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAE472F0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0xAE463D0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_2439E02BA9E39325_OFFSET UNITYSDK_OFFSET(0xAE46B10)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_26BC69D24FA97C57_1_OFFSET UNITYSDK_OFFSET(0xAE467E0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_26BC69D24FA97C57_OFFSET UNITYSDK_OFFSET(0xAE46530)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_289F28027FF47717_1_OFFSET UNITYSDK_OFFSET(0xAE46E10)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xAE46D80)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_2BFB72D7A3D3B8CB_OFFSET UNITYSDK_OFFSET(0xAE46300)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_525124EFF71D885C_OFFSET UNITYSDK_OFFSET(0xAE46710)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_74E6DAC6EB8EDCAC_OFFSET UNITYSDK_OFFSET(0xAE469C0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0xAE46440)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xAE46EA0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_AE20E5BD3B1974BD_OFFSET UNITYSDK_OFFSET(0xAE46C60)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_EBDCA6CEF092A306_OFFSET UNITYSDK_OFFSET(0xAE46BE0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xAE46FF0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xAE470B0)
#define CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xAE46F30)
#define CLASS_2_F8382A3C50D72E6A__CCTOR_OFFSET UNITYSDK_OFFSET(0xAE47480)
#define CLASS_2_F8382A3C50D72E6A__CTOR_OFFSET UNITYSDK_OFFSET(0xAE47450)
#define CLASS_2_F8382A3C50D72E6A__ONBIND_OFFSET UNITYSDK_OFFSET(0xAE46230)

inline static constexpr unsigned int Class_2_F8382A3C50D72E6A_TypeDefinitionIndex = 69059;

class Class_2_F8382A3C50D72E6A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8382A3C50D72E6A_TypeDefinitionIndex)->GetStaticField(0x54340);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::GameEntity* Field_2_3; // 0x60
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_4; // 0x68
	::UnityEngine::Transform* Field_2_5; // 0x70
	::UnityEngine::Animation* Field_2_6; // 0x78
	::System::Boolean Field_2_7; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2BFB72D7A3D3B8CB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_2BFB72D7A3D3B8CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Void Method_2_26BC69D24FA97C57(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_26BC69D24FA97C57_OFFSET))(this, a1);
	}

	::System::Void Method_2_26BC69D24FA97C57_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_26BC69D24FA97C57_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_74E6DAC6EB8EDCAC(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_74E6DAC6EB8EDCAC_OFFSET))(this, a1);
	}

	::System::Void Method_2_525124EFF71D885C(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_525124EFF71D885C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2439E02BA9E39325(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_2439E02BA9E39325_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_289F28027FF47717_1_OFFSET))(this);
	}

	::System::Boolean Method_2_AE20E5BD3B1974BD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_AE20E5BD3B1974BD_OFFSET))(this);
	}

	::System::Boolean Method_2_EBDCA6CEF092A306(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_EBDCA6CEF092A306_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8382A3C50D72E6A_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
