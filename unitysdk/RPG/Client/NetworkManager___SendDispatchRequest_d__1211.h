#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_718B8238EA10D3FF;
namespace RPG::Client { class NetworkManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCED58A0)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCED65F0)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCED6650)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCED6600)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCED5830)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211__CTOR_OFFSET UNITYSDK_OFFSET(0xCED5820)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xCED5880)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___SendDispatchRequest_d__1211_TypeDefinitionIndex = 66270;

	class NetworkManager___SendDispatchRequest_d__1211 : public ::System::Object
	{
	public:
		::RPG::Client::NetworkManager* __4__this; // 0x10
		::Class_1_718B8238EA10D3FF* _dispatchResult_5__2; // 0x18
		::System::String* dispatchUrl; // 0x20
		::System::Object* __2__current; // 0x28
		::UnityEngine::Networking::UnityWebRequest* _request_5__3; // 0x30
		::System::Action_1<::Class_1_718B8238EA10D3FF*>* callback; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Int32 timeout; // 0x44

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1211_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
