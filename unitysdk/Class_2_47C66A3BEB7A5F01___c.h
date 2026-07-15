#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_47C66A3BEB7A5F01___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB526160)
#define CLASS_2_47C66A3BEB7A5F01___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB526190)
#define CLASS_2_47C66A3BEB7A5F01___C___BUILDENTITIES_B__44_0_OFFSET UNITYSDK_OFFSET(0xB526270)
#define CLASS_2_47C66A3BEB7A5F01___C___INITENV_B__20_0_OFFSET UNITYSDK_OFFSET(0xB5261B0)
#define CLASS_2_47C66A3BEB7A5F01___C___ONENTITYASYNCLOADCOMPLETE_B__19_0_OFFSET UNITYSDK_OFFSET(0xB5261A0)

inline static constexpr unsigned int Class_2_47C66A3BEB7A5F01___c_TypeDefinitionIndex = 57695;

class Class_2_47C66A3BEB7A5F01___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__19_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47C66A3BEB7A5F01___c_TypeDefinitionIndex)->GetStaticField(0x6B740);
	}
	static ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate** StaticGet___9__20_0()
	{
		return (::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47C66A3BEB7A5F01___c_TypeDefinitionIndex)->GetStaticField(0x6B748);
	}
	static ::System::Comparison_1<::RPG::GameCore::LittleGameEntityConfig*>** StaticGet___9__44_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::LittleGameEntityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47C66A3BEB7A5F01___c_TypeDefinitionIndex)->GetStaticField(0x6B750);
	}
	static ::Class_2_47C66A3BEB7A5F01___c** StaticGet___9()
	{
		return (::Class_2_47C66A3BEB7A5F01___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47C66A3BEB7A5F01___c_TypeDefinitionIndex)->GetStaticField(0x6B758);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnEntityAsyncLoadComplete_b__19_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C___ONENTITYASYNCLOADCOMPLETE_B__19_0_OFFSET))(this);
	}

	::System::Void __InitEnv_b__20_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C___INITENV_B__20_0_OFFSET))(this, a1);
	}

	::System::Int32 __BuildEntities_b__44_0(::RPG::GameCore::LittleGameEntityConfig* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C___BUILDENTITIES_B__44_0_OFFSET))(this, a1, a2);
	}
};
