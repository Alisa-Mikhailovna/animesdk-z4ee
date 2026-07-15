#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_MESSAGEPACKSERIALIZEROPTIONSDEFAULTSETTINGSLAZYINITIALIZATIONHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B3DDC0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializerOptions_MessagePackSerializerOptionsDefaultSettingsLazyInitializationHelper_TypeDefinitionIndex = 7191;

	class MessagePackSerializerOptions_MessagePackSerializerOptionsDefaultSettingsLazyInitializationHelper : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_Standard()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializerOptions_MessagePackSerializerOptionsDefaultSettingsLazyInitializationHelper_TypeDefinitionIndex)->GetStaticField(0xDC60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZEROPTIONS_MESSAGEPACKSERIALIZEROPTIONSDEFAULTSETTINGSLAZYINITIALIZATIONHELPER__CCTOR_OFFSET))();
		}
	};
}
