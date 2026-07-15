#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System::Net::Http { class HttpContent; }
namespace System::Net::Http { class HttpMethod; }
namespace System::Net::Http::Headers { class HttpRequestHeaders; }

#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1CAF2460)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CAF23E0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1CAF20A0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1CAEB960)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1CAF20C0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1CAF20D0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1CAED3B0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_ISALLOWEDABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x1CAF20E0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SETISUSED_OFFSET UNITYSDK_OFFSET(0x1CAEB8D0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1CAF20B0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1CAF2030)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1CAEB8E0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CAF2500)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAF1F60)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAEB2D0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpRequestMessage_TypeDefinitionIndex = 3764;

	class HttpRequestMessage : public ::System::Object
	{
	public:
		::System::Uri* uri; // 0x10
		::System::Version* version; // 0x18
		::System::Net::Http::Headers::HttpRequestHeaders* headers; // 0x20
		::System::Net::Http::HttpMethod* method; // 0x28
		::System::Net::Http::HttpContent* _Content_k__BackingField; // 0x30
		::System::Boolean is_used; // 0x38
		::System::Boolean disposed; // 0x39

		::System::Void _ctor(::System::Net::Http::HttpMethod* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMethod*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Net::Http::HttpMethod* a1, ::System::Uri* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMethod*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Net::Http::HttpContent* get_Content()
		{
			return ((::System::Net::Http::HttpContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::System::Net::Http::HttpContent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpContent*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Net::Http::Headers::HttpRequestHeaders* get_Headers()
		{
			return ((::System::Net::Http::Headers::HttpRequestHeaders*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_HEADERS_OFFSET))(this);
		}

		::System::Net::Http::HttpMethod* get_Method()
		{
			return ((::System::Net::Http::HttpMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::Net::Http::HttpMethod* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_METHOD_OFFSET))(this, a1);
		}

		::System::Uri* get_RequestUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_REQUESTURI_OFFSET))(this);
		}

		::System::Void set_RequestUri(::System::Uri* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_REQUESTURI_OFFSET))(this, a1);
		}

		static ::System::Boolean IsAllowedAbsoluteUri(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_ISALLOWEDABSOLUTEURI_OFFSET))(a1);
		}

		::System::Version* get_Version()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_VERSION_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Boolean SetIsUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SETISUSED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_TOSTRING_OFFSET))(this);
		}
	};
}
