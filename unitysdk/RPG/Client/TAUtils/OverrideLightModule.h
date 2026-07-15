#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/OverrideLightType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_METHOD_2_08578B1018557C57_OFFSET UNITYSDK_OFFSET(0x152500)
#define RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_METHOD_2_26AED0B8DC5C71C6_OFFSET UNITYSDK_OFFSET(0x1524E0)
#define RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_METHOD_2_59098C0B26327A20_OFFSET UNITYSDK_OFFSET(0x1524F0)
#define RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_METHOD_2_FE23AD31C8423269_OFFSET UNITYSDK_OFFSET(0x152420)
#define RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6036F0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int OverrideLightModule_TypeDefinitionIndex = 70203;

	struct alignas(8) OverrideLightModule
	{
		static ::RPG::Client::TAUtils::OverrideLightModule* StaticGet_Default()
		{
			return (::RPG::Client::TAUtils::OverrideLightModule*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x38F00);
		}
		static ::System::Int32* StaticGet__ESLevelShadowShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9200);
		}
		static ::System::Int32* StaticGet__ESLevelMidShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9204);
		}
		static ::System::Int32* StaticGet__ESHeightLerpBottomColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9208);
		}
		static ::System::Int32* StaticGet__ESEffCustomLightDirShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x920C);
		}
		static ::System::Int32* StaticGet__CharacterLocalMainLightColor1ShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9210);
		}
		static ::System::Int32* StaticGet__ESHeightLerpTopShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9214);
		}
		static ::System::Int32* StaticGet__ESRimLightOffsetShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9218);
		}
		static ::System::Int32* StaticGet__ESRimShadowColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x921C);
		}
		static ::System::Int32* StaticGet__MainLightColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9220);
		}
		static ::System::Int32* StaticGet__ESHeightLerpTopColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9224);
		}
		static ::System::Int32* StaticGet__ESLevelHighLightColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9228);
		}
		static ::System::Int32* StaticGet__CharacterWorldSpaceOffsetShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x922C);
		}
		static ::System::Int32* StaticGet__SceneLightColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9230);
		}
		static ::System::Int32* StaticGet__ESRimLightWidthShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9234);
		}
		static ::System::Int32* StaticGet__ESRimLightAddModeShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9238);
		}
		static ::System::Int32* StaticGet__ESAddColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x923C);
		}
		static ::System::Int32* StaticGet__CustomMainLightDirShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9240);
		}
		static ::System::Int32* StaticGet__SceneLightPositionShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9244);
		}
		static ::System::Int32* StaticGet__ESLevelHighLightShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9248);
		}
		static ::System::Int32* StaticGet__CharacterLocalMainLightColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x924C);
		}
		static ::System::Int32* StaticGet__ESEffCustomLightPositionShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9250);
		}
		static ::System::Int32* StaticGet__ESRimLightIntensityShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9254);
		}
		static ::System::Int32* StaticGet__ESLevelSkinLightColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9258);
		}
		static ::System::Int32* StaticGet__ESHeightLerpBottomShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x925C);
		}
		static ::System::Int32* StaticGet__ESCharacterShadowFactorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9260);
		}
		static ::System::Int32* StaticGet__ESRimLightColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9264);
		}
		static ::System::Int32* StaticGet__MainLightPositionShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9268);
		}
		static ::System::Int32* StaticGet__ESLevelShadowColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x926C);
		}
		static ::System::Int32* StaticGet__ESLevelSkinShadowColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9270);
		}
		static ::System::Int32* StaticGet__ESLevelAdjustOnShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9274);
		}
		static ::System::Int32* StaticGet__CharacterLocalMainLightPositionShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9278);
		}
		static ::System::Int32* StaticGet__ESHeightLerpMiddleColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x927C);
		}
		static ::System::Int32* StaticGet__ESRimShadowIntensityShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9280);
		}
		static ::System::Int32* StaticGet__CharacterLocalMainLightColor2ShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9284);
		}
		static ::System::Int32* StaticGet__ESLevelEyeShadowIntensityShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OverrideLightModule_TypeDefinitionIndex)->GetStaticField(0x9288);
		}
		::RPG::Client::TAUtils::OverrideLightType OverrideLightType; // 0x10
		::UnityEngine::Vector4 OverrideLightPosition; // 0x14
		::UnityEngine::Vector4 OverrideLightDirection; // 0x24
		::UnityEngine::Transform* OverrideLightTransform; // 0x38
		::UnityEngine::Color OverrideLightColor; // 0x40
		::System::Single OverrideLightIntensity; // 0x50
		::System::Boolean OverrideESParams; // 0x54
		::System::Boolean OverrideESLightParams; // 0x55
		::UnityEngine::Color OverrideESAddColor; // 0x58
		::System::Single OverrideESCharacterShadowFactor; // 0x68
		::System::Boolean OverrideESRimParams; // 0x6C
		::UnityEngine::Vector2 OverrideESRimLightOffset; // 0x70
		::System::Single OverrideESRimLightWidth; // 0x78
		::System::Single OverrideESRimLightIntensity; // 0x7C
		::UnityEngine::Color OverrideESRimLightColor; // 0x80
		::System::Single OverrideESRimLightAddMode; // 0x90
		::System::Single OverrideESRimShadowIntensity; // 0x94
		::UnityEngine::Color OverrideESRimShadowColor; // 0x98
		::System::Boolean OverrideESHeightLerpParams; // 0xA8
		::System::Single OverrideESHeightLerpTop; // 0xAC
		::System::Single OverrideESHeightLerpBottom; // 0xB0
		::UnityEngine::Color OverrideESHeightLerpTopColor; // 0xB4
		::UnityEngine::Color OverrideESHeightLerpMiddleColor; // 0xC4
		::UnityEngine::Color OverrideESHeightLerpBottomColor; // 0xD4
		::System::Boolean OverrideESLevelAdjustParams; // 0xE4
		::System::Boolean OverrideESLevelAdjustOn; // 0xE5
		::UnityEngine::Color OverrideESLevelSkinLightColor; // 0xE8
		::UnityEngine::Color OverrideESLevelSkinShadowColor; // 0xF8
		::UnityEngine::Color OverrideESLevelHighLightColor; // 0x108
		::UnityEngine::Color OverrideESLevelShadowColor; // 0x118
		::System::Single OverrideESLevelEyeShadowIntensity; // 0x128
		::System::Single OverrideESLevelShadow; // 0x12C
		::System::Single OverrideESLevelMid; // 0x130
		::System::Single OverrideESLevelHighLight; // 0x134
		::System::Boolean OverrideESEffCustomLight; // 0x138
		::UnityEngine::Vector4 _OverrideLightPositionWS; // 0x13C
		::UnityEngine::Color _OverrideLightColor; // 0x14C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE__CCTOR_OFFSET))();
		}

		::System::Void Method_2_FE23AD31C8423269(::UnityEngine::Renderer* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_METHOD_2_FE23AD31C8423269_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_26AED0B8DC5C71C6(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_METHOD_2_26AED0B8DC5C71C6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_59098C0B26327A20(::UnityEngine::Material* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_METHOD_2_59098C0B26327A20_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_08578B1018557C57(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_OVERRIDELIGHTMODULE_METHOD_2_08578B1018557C57_OFFSET))(this, a1);
		}
	};
}
