#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"

namespace System { class String; }

#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTART_OFFSET UNITYSDK_OFFSET(0x19B08BE0)
#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTOP_OFFSET UNITYSDK_OFFSET(0x19B24350)
#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B24360)
#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B24310)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackEventSource_TypeDefinitionIndex = 7129;

	class MessagePackEventSource : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::MessagePack::MessagePackEventSource** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackEventSource**)Il2CppClass::FromTypeDefinitionIndex(MessagePackEventSource_TypeDefinitionIndex)->GetStaticField(0xC170);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE__CCTOR_OFFSET))();
		}

		::System::Void FormatterDynamicallyGeneratedStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTART_OFFSET))(this);
		}

		::System::Void FormatterDynamicallyGeneratedStop(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTOP_OFFSET))(this, a1);
		}
	};
}
