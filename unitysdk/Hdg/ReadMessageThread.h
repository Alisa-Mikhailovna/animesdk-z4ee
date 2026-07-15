#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/ReadMessageThread_State.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtDispatcher; }
namespace Hdg { class rdtTcpMessage; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class Stream; }
namespace System::Threading { class Thread; }

#define HDG_READMESSAGETHREAD_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xAA5BF00)
#define HDG_READMESSAGETHREAD_ONLOSTCONNECTION_OFFSET UNITYSDK_OFFSET(0xAA5CE70)
#define HDG_READMESSAGETHREAD_ONREADING_OFFSET UNITYSDK_OFFSET(0xAA5C210)
#define HDG_READMESSAGETHREAD_STOP_OFFSET UNITYSDK_OFFSET(0xAA5C100)
#define HDG_READMESSAGETHREAD_THREADFUNC_OFFSET UNITYSDK_OFFSET(0xAA5C130)
#define HDG_READMESSAGETHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0xAA5BF10)

namespace Hdg
{
	inline static constexpr unsigned int ReadMessageThread_TypeDefinitionIndex = 45161;

	class ReadMessageThread : public ::System::Object
	{
	public:
		::Hdg::rdtDispatcher* m_dispatcher; // 0x10
		::System::Threading::Thread* m_thread; // 0x18
		::System::String* m_name; // 0x20
		::System::IO::BinaryReader* m_reader; // 0x28
		::System::IO::Stream* m_stream; // 0x30
		::System::Action_1<::Hdg::rdtTcpMessage*>* m_callback; // 0x38
		::Il2CppArray<::System::Action*>* m_stateDelegates; // 0x40
		::Hdg::ReadMessageThread_State m_state; // 0x48
		::System::Boolean m_run; // 0x4C

		::System::Void _ctor(::System::IO::Stream* a1, ::Hdg::rdtDispatcher* a2, ::System::Action_1<::Hdg::rdtTcpMessage*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Hdg::rdtDispatcher*, ::System::Action_1<::Hdg::rdtTcpMessage*>*, ::System::String*))((::PBYTE)hIl2Cpp + HDG_READMESSAGETHREAD__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_READMESSAGETHREAD_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_READMESSAGETHREAD_STOP_OFFSET))(this);
		}

		::System::Void ThreadFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_READMESSAGETHREAD_THREADFUNC_OFFSET))(this);
		}

		::System::Void OnReading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_READMESSAGETHREAD_ONREADING_OFFSET))(this);
		}

		::System::Void OnLostConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_READMESSAGETHREAD_ONLOSTCONNECTION_OFFSET))(this);
		}
	};
}
