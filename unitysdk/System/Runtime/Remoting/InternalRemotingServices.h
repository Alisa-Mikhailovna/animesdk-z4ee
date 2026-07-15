#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }
namespace System::Runtime::Remoting::Metadata { class SoapAttribute; }

#define SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_GETCACHEDSOAPATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A1C9B70)
#define SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1CA290)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int InternalRemotingServices_TypeDefinitionIndex = 1203;

	class InternalRemotingServices : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet__soapAttributes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(InternalRemotingServices_TypeDefinitionIndex)->GetStaticField(0x10BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES__CCTOR_OFFSET))();
		}

		static ::System::Runtime::Remoting::Metadata::SoapAttribute* GetCachedSoapAttribute(::System::Object* a1)
		{
			return ((::System::Runtime::Remoting::Metadata::SoapAttribute*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_GETCACHEDSOAPATTRIBUTE_OFFSET))(a1);
		}
	};
}
