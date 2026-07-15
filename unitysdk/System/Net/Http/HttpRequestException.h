#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAF16A0)
#define SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CAF02D0)
#define SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF1F00)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpRequestException_TypeDefinitionIndex = 3763;

	class HttpRequestException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
