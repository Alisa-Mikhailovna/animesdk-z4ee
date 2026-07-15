#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationCallbackCoreWorkArguments.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationCallbackInfo; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class SynchronizationContext; }
namespace System::Threading { class Timer; }
namespace System::Threading { class TimerCallback; }
namespace System::Threading { template <typename T> class SparselyPopulatedArray_1; }

#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_1_OFFSET UNITYSDK_OFFSET(0x1A0304C0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_OFFSET UNITYSDK_OFFSET(0x1A030430)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_OFFSET UNITYSDK_OFFSET(0x1A031850)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_ONSYNCCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A0319A0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_1_OFFSET UNITYSDK_OFFSET(0x1A030190)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_OFFSET UNITYSDK_OFFSET(0x1A02FF80)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CREATELINKEDTOKENSOURCE_OFFSET UNITYSDK_OFFSET(0x1A031A60)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A0308C0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0307E0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_EXECUTECALLBACKHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A030A50)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_CANBECANCELED_OFFSET UNITYSDK_OFFSET(0x1A02ED70)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_EXECUTINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A030140)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A02FD90)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x1A02ED40)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1A030010)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_THREADIDEXECUTINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1A02FDA0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1A030030)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_INTERNALGETSTATICSOURCE_OFFSET UNITYSDK_OFFSET(0x1A02F750)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_INTERNALREGISTER_OFFSET UNITYSDK_OFFSET(0x1A02F360)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_LINKEDTOKENCANCELDELEGATE_OFFSET UNITYSDK_OFFSET(0x1A02FEC0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_NOTIFYCANCELLATION_OFFSET UNITYSDK_OFFSET(0x1A030220)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_SET_THREADIDEXECUTINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1A030020)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x1A0300C0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWOBJECTDISPOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A030990)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_TIMERCALLBACKLOGIC_OFFSET UNITYSDK_OFFSET(0x1A0306F0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_WAITFORCALLBACKTOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A02FDB0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A031D20)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A030170)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A030150)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationTokenSource_TypeDefinitionIndex = 797;

	class CancellationTokenSource : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_s_LinkedTokenCancelDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSource_TypeDefinitionIndex)->GetStaticField(0x1CDD0);
		}
		static ::System::Threading::TimerCallback** StaticGet_s_timerCallback()
		{
			return (::System::Threading::TimerCallback**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSource_TypeDefinitionIndex)->GetStaticField(0x1CDD8);
		}
		static ::System::Threading::CancellationTokenSource** StaticGet__staticSource_NotCancelable()
		{
			return (::System::Threading::CancellationTokenSource**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSource_TypeDefinitionIndex)->GetStaticField(0x1CDE0);
		}
		static ::System::Threading::CancellationTokenSource** StaticGet__staticSource_Set()
		{
			return (::System::Threading::CancellationTokenSource**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSource_TypeDefinitionIndex)->GetStaticField(0x1CDE8);
		}
		static ::System::Int32* StaticGet_s_nLists()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSource_TypeDefinitionIndex)->GetStaticField(0x6730);
		}
		::System::Threading::CancellationCallbackInfo* m_executingCallback; // 0x10
		::System::Threading::Timer* m_timer; // 0x18
		::Il2CppArray<::System::Threading::CancellationTokenRegistration>* m_linkingRegistrations; // 0x20
		::Il2CppArray<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>* m_registeredCallbacksLists; // 0x28
		::System::Threading::ManualResetEvent* m_kernelEvent; // 0x30
		::System::Int32 m_threadIDExecutingCallbacks; // 0x38
		::System::Int32 m_state; // 0x3C
		::System::Boolean m_disposed; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE__CCTOR_OFFSET))();
		}

		static ::System::Void LinkedTokenCancelDelegate(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_LINKEDTOKENCANCELDELEGATE_OFFSET))(a1);
		}

		::System::Boolean get_IsCancellationRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONREQUESTED_OFFSET))(this);
		}

		::System::Boolean get_IsCancellationCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void set_ThreadIDExecutingCallbacks(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_SET_THREADIDEXECUTINGCALLBACKS_OFFSET))(this, a1);
		}

		::System::Int32 get_ThreadIDExecutingCallbacks()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_THREADIDEXECUTINGCALLBACKS_OFFSET))(this);
		}

		::System::Threading::CancellationToken get_Token()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_TOKEN_OFFSET))(this);
		}

		::System::Boolean get_CanBeCanceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_CANBECANCELED_OFFSET))(this);
		}

		::System::Threading::CancellationCallbackInfo* get_ExecutingCallback()
		{
			return ((::System::Threading::CancellationCallbackInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_EXECUTINGCALLBACK_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_OFFSET))(this);
		}

		::System::Void Cancel_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_1_OFFSET))(this, a1);
		}

		::System::Void CancelAfter(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_OFFSET))(this, a1);
		}

		::System::Void CancelAfter_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_1_OFFSET))(this, a1);
		}

		static ::System::Void TimerCallbackLogic(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_TIMERCALLBACKLOGIC_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void ThrowIfDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWIFDISPOSED_OFFSET))(this);
		}

		static ::System::Void ThrowObjectDisposedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWOBJECTDISPOSEDEXCEPTION_OFFSET))();
		}

		static ::System::Threading::CancellationTokenSource* InternalGetStaticSource(::System::Boolean a1)
		{
			return ((::System::Threading::CancellationTokenSource*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_INTERNALGETSTATICSOURCE_OFFSET))(a1);
		}

		::System::Threading::CancellationTokenRegistration InternalRegister(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Threading::SynchronizationContext* a3, ::System::Threading::ExecutionContext* a4)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::SynchronizationContext*, ::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_INTERNALREGISTER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NotifyCancellation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_NOTIFYCANCELLATION_OFFSET))(this, a1);
		}

		::System::Void ExecuteCallbackHandlers(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_EXECUTECALLBACKHANDLERS_OFFSET))(this, a1);
		}

		::System::Void CancellationCallbackCoreWork_OnSyncContext(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_ONSYNCCONTEXT_OFFSET))(this, a1);
		}

		::System::Void CancellationCallbackCoreWork(::System::Threading::CancellationCallbackCoreWorkArguments a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationCallbackCoreWorkArguments))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_OFFSET))(this, a1);
		}

		static ::System::Threading::CancellationTokenSource* CreateLinkedTokenSource(::System::Threading::CancellationToken a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Threading::CancellationTokenSource*(*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CREATELINKEDTOKENSOURCE_OFFSET))(a1, a2);
		}

		::System::Void WaitForCallbackToComplete(::System::Threading::CancellationCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationCallbackInfo*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_WAITFORCALLBACKTOCOMPLETE_OFFSET))(this, a1);
		}
	};
}
