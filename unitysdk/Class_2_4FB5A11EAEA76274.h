#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"

class Class_3_BB8B7764D3497776;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierMutexEffectData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4FB5A11EAEA76274_METHOD_2_0181F459ACF184C5_OFFSET UNITYSDK_OFFSET(0xBD718F0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xBD71630)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_3F9A2067CC61030A_OFFSET UNITYSDK_OFFSET(0xBD73750)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_47078A9DA737B94E_OFFSET UNITYSDK_OFFSET(0xBD720D0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_4D1F8491B7873DA8_OFFSET UNITYSDK_OFFSET(0xBD73180)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_5608ED19F73C55F5_OFFSET UNITYSDK_OFFSET(0xBD72960)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_79C0238E3E70A730_OFFSET UNITYSDK_OFFSET(0xBD72460)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_86D9A88811BF5A61_1_OFFSET UNITYSDK_OFFSET(0xBD72B10)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0xBD728B0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_998E122F46014853_OFFSET UNITYSDK_OFFSET(0xBD72E40)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_9F11854D71EA541C_OFFSET UNITYSDK_OFFSET(0xBD73A60)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0xBD72BC0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBD71780)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_DBF55E589B45325A_OFFSET UNITYSDK_OFFSET(0xBD73DB0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_F9C3D0E0AC857968_OFFSET UNITYSDK_OFFSET(0xBD73B80)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_FD3EAA6E9D492B8E_OFFSET UNITYSDK_OFFSET(0xBD717E0)
#define CLASS_2_4FB5A11EAEA76274__CTOR_OFFSET UNITYSDK_OFFSET(0xBD73F10)

inline static constexpr unsigned int Class_2_4FB5A11EAEA76274_TypeDefinitionIndex = 51271;

class Class_2_4FB5A11EAEA76274 : public ::Class_1_8A0BE42C657CE107
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierMutexEffectData*>* Field_2_3; // 0x30
	::Class_3_BB8B7764D3497776* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40
	::System::Boolean Field_2_6; // 0x41
	::System::Boolean Field_2_7; // 0x42
	::System::Boolean Field_2_8; // 0x43
	::System::Int32 Field_2_9; // 0x44
	::RPG::GameCore::ModifierHitEffectStacking Field_2_10; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0181F459ACF184C5(::System::String* a1, ::System::String* a2, ::RPG::MVector3 a3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a4, ::RPG::GameCore::EffectMutexType a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Single a9, ::System::String* a10, ::System::Boolean a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_0181F459ACF184C5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_2_47078A9DA737B94E(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_47078A9DA737B94E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Void Method_2_86D9A88811BF5A61_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_86D9A88811BF5A61_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::Void Method_2_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_998E122F46014853_OFFSET))(this);
	}

	::System::Void Method_2_4D1F8491B7873DA8(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_4D1F8491B7873DA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9F11854D71EA541C(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1, ::RPG::Client::MonoEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_9F11854D71EA541C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5608ED19F73C55F5(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_5608ED19F73C55F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F9A2067CC61030A(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_3F9A2067CC61030A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F9C3D0E0AC857968(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_F9C3D0E0AC857968_OFFSET))(this, a1);
	}

	::System::Void Method_2_79C0238E3E70A730(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_79C0238E3E70A730_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FD3EAA6E9D492B8E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_FD3EAA6E9D492B8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_DBF55E589B45325A(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_DBF55E589B45325A_OFFSET))(this, a1);
	}
};
