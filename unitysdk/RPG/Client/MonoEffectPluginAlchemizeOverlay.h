#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"

#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0xCC819D0)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC81DE0)
#define RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0xCC81D20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex = 66798;

	class MonoEffectPluginAlchemizeOverlay : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::System::Int32* StaticGet_Field_8_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex)->GetStaticField(0xFEF0);
		}
		static ::System::Int32* StaticGet_Field_8_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAlchemizeOverlay_TypeDefinitionIndex)->GetStaticField(0xFEF4);
		}
		::System::Boolean EnableGradientColor; // 0x220
		::System::Single GradientRange; // 0x224

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY__CCTOR_OFFSET))();
		}

		::System::Void Method_8_39FD7185C859CEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINALCHEMIZEOVERLAY_METHOD_8_39FD7185C859CEAD_OFFSET))(this);
		}
	};
}
