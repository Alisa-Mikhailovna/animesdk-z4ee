#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xCCCC7F0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_446BE43D2AA5DB95_OFFSET UNITYSDK_OFFSET(0xCCCC510)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xCCCCF60)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCCCCF20)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xCCCCEB0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0xCCCC4C0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0xCCCC770)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CCTOR_OFFSET UNITYSDK_OFFSET(0xCCCD0B0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CTOR_OFFSET UNITYSDK_OFFSET(0xCCCD060)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginVertexCollapse_TypeDefinitionIndex = 66880;

	class MonoEffectPluginVertexCollapse : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		static ::System::Int32* StaticGet_Field_8_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x10600);
		}
		static ::System::Int32* StaticGet_Field_8_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x10604);
		}
		static ::System::Int32* StaticGet_Field_8_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x10608);
		}
		static ::System::Int32* StaticGet_Field_8_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x1060C);
		}
		static ::System::Int32* StaticGet_Field_8_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x10610);
		}
		static ::System::Int32* StaticGet_Field_8_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x10614);
		}
		static ::System::Int32* StaticGet_Field_8_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x10618);
		}
		static ::System::Int32* StaticGet_Field_8_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x1061C);
		}
		static ::System::Int32* StaticGet_Field_8_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x10620);
		}
		static ::System::Int32* StaticGet_Field_8_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x10624);
		}
		static ::System::Int32* StaticGet_Field_8_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x10628);
		}
		static ::System::Int32* StaticGet_Field_8_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x1062C);
		}
		::UnityEngine::Color Color; // 0x170
		::UnityEngine::Texture2D* ColorRamp; // 0x180
		::System::Single HueShift; // 0x188
		::System::Single Saturation; // 0x18C
		::System::Single Brightness; // 0x190
		::System::Single Contrast; // 0x194
		::UnityEngine::Transform* CollapsePoint; // 0x198
		::UnityEngine::Vector3 CollapsePointOffset; // 0x1A0
		::UnityEngine::Texture2D* CollapseNoise; // 0x1B0
		::UnityEngine::Vector2 CollapseNoiseTurbulence; // 0x1B8
		::System::Single CollapseNoiseIntensity; // 0x1C0
		::System::Single CollapseRatio; // 0x1C4
		::UnityEngine::Vector2 CollapseRatioRange; // 0x1C8
		::System::Single CollapseSpeed; // 0x1D0
		::System::Single CollapseTrace; // 0x1D4
		::System::Boolean CalculateBoundsCenter; // 0x1D8
		::Il2CppArray<::UnityEngine::Renderer*>* Field_8_28; // 0x1E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CCTOR_OFFSET))();
		}

		::System::Void Method_8_EEABD52C0F4D0C8A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_EEABD52C0F4D0C8A_OFFSET))(this);
		}

		::System::Void Method_8_F0F8DE036FE283F6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_F0F8DE036FE283F6_OFFSET))(this);
		}

		::System::Void Method_8_D3129FE8DF635B48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_D3129FE8DF635B48_OFFSET))(this);
		}

		::System::Void Method_8_446BE43D2AA5DB95()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_446BE43D2AA5DB95_OFFSET))(this);
		}

		::System::Void Method_8_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_8_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_8_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_2566AD459572DFC3_OFFSET))(this);
		}
	};
}
