#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }

#define SRF_SERVICE_SRSERVICEMANAGER_SERVICESTUB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA077C0)
#define SRF_SERVICE_SRSERVICEMANAGER_SERVICESTUB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA06090)

namespace SRF::Service
{
	inline static constexpr unsigned int SRServiceManager_ServiceStub_TypeDefinitionIndex = 33982;

	class SRServiceManager_ServiceStub : public ::System::Object
	{
	public:
		::System::Func_1<::System::Object*>* Constructor; // 0x10
		::System::Type* Type; // 0x18
		::System::Func_1<::System::Type*>* Selector; // 0x20
		::System::Type* InterfaceType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SERVICESTUB__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SERVICESTUB_TOSTRING_OFFSET))(this);
		}
	};
}
