#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameFlowState.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_686;
class Class_1_163C3B0353AAE1FF;
class Class_1_4CFEF021C34E7902;
class Class_1_93CCFC46DF4C9BD2;
class Class_1_A052F48AC136DF88;
class Class_1_B823313B2CC4BC8E;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BASEGAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0xBE27CB0)
#define RPG_CLIENT_BASEGAMEFLOW_CHECKCANGOTO_OFFSET UNITYSDK_OFFSET(0xBE28760)
#define RPG_CLIENT_BASEGAMEFLOW_DESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0xBE28A10)
#define RPG_CLIENT_BASEGAMEFLOW_ENTERFAILED_OFFSET UNITYSDK_OFFSET(0xBE27E00)
#define RPG_CLIENT_BASEGAMEFLOW_ENTER_OFFSET UNITYSDK_OFFSET(0xBE27CF0)
#define RPG_CLIENT_BASEGAMEFLOW_EXIT_OFFSET UNITYSDK_OFFSET(0xBE27FB0)
#define RPG_CLIENT_BASEGAMEFLOW_GET_ISAUTOEXITONLASTDETACH_OFFSET UNITYSDK_OFFSET(0xBE27930)
#define RPG_CLIENT_BASEGAMEFLOW_GET_ISNEEDAUTOEXIT_OFFSET UNITYSDK_OFFSET(0xBE27950)
#define RPG_CLIENT_BASEGAMEFLOW_GET_STATE_OFFSET UNITYSDK_OFFSET(0xBE27910)
#define RPG_CLIENT_BASEGAMEFLOW_INIT_OFFSET UNITYSDK_OFFSET(0xBE27BF0)
#define RPG_CLIENT_BASEGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0xBE28C70)
#define RPG_CLIENT_BASEGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0xBE28C30)
#define RPG_CLIENT_BASEGAMEFLOW_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0xBE28920)
#define RPG_CLIENT_BASEGAMEFLOW_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0xBE28990)
#define RPG_CLIENT_BASEGAMEFLOW_SET_ISAUTOEXITONLASTDETACH_OFFSET UNITYSDK_OFFSET(0xBE27940)
#define RPG_CLIENT_BASEGAMEFLOW_SET_STATE_OFFSET UNITYSDK_OFFSET(0xBE27920)
#define RPG_CLIENT_BASEGAMEFLOW__ATTACH_OFFSET UNITYSDK_OFFSET(0xBE28E10)
#define RPG_CLIENT_BASEGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0xBE279E0)
#define RPG_CLIENT_BASEGAMEFLOW__DESTROY_OFFSET UNITYSDK_OFFSET(0xBE27F20)
#define RPG_CLIENT_BASEGAMEFLOW__DETACHALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0xBE28190)
#define RPG_CLIENT_BASEGAMEFLOW__DETACHCONTEXT_OFFSET UNITYSDK_OFFSET(0xBE28AF0)
#define RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0xBE28D30)
#define RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0xBE28D80)
#define RPG_CLIENT_BASEGAMEFLOW__ONENTERFAILED_OFFSET UNITYSDK_OFFSET(0xBE28CF0)
#define RPG_CLIENT_BASEGAMEFLOW__ONEXITED_OFFSET UNITYSDK_OFFSET(0xBE28DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGameFlow_TypeDefinitionIndex = 61404;

	class BaseGameFlow : public ::System::Object
	{
	public:
		::Class_1_93CCFC46DF4C9BD2* EventRegistry; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Parameters; // 0x18
		::Class_1_A052F48AC136DF88* ContextFactory; // 0x20
		::Class_1_4CFEF021C34E7902* MessageRegistry; // 0x28
		::Class_1_163C3B0353AAE1FF* ContextRegistry; // 0x30
		::RPG::Client::GameFlowState _State_k__BackingField; // 0x38
		::System::Boolean _IsAutoExitOnLastDetach_k__BackingField; // 0x3C

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GameFlowState get_State()
		{
			return ((::RPG::Client::GameFlowState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::GameFlowState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameFlowState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_SET_STATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAutoExitOnLastDetach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_GET_ISAUTOEXITONLASTDETACH_OFFSET))(this);
		}

		::System::Void set_IsAutoExitOnLastDetach(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_SET_ISAUTOEXITONLASTDETACH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNeedAutoExit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_GET_ISNEEDAUTOEXIT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_INIT_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Enter()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ENTER_OFFSET))(this);
		}

		::System::Void EnterFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ENTERFAILED_OFFSET))(this);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_EXIT_OFFSET))(this);
		}

		::System::Boolean CheckCanGoto(::Class_1_B823313B2CC4BC8E* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_CHECKCANGOTO_OFFSET))(this, a1);
		}

		::System::Void ReceiveEvent(::Class_0_16E4307DCC419505_686* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_686*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_RECEIVEEVENT_OFFSET))(this, a1);
		}

		::System::Void SendMessage_(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_SENDMESSAGE__OFFSET))(this, a1, a2);
		}

		::System::Void DestroyContext(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_DESTROYCONTEXT_OFFSET))(this, a1);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnEnterFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONENTERFAILED_OFFSET))(this);
		}

		::System::Void _OnContextAttached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTATTACHED_OFFSET))(this, a1);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, a1);
		}

		::System::Void _OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ONEXITED_OFFSET))(this);
		}

		::System::Void _Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__DESTROY_OFFSET))(this);
		}

		::System::Void _Attach(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__ATTACH_OFFSET))(this, a1);
		}

		::System::Void _DetachAllContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__DETACHALLCONTEXTS_OFFSET))(this);
		}

		::System::Void _DetachContext(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOW__DETACHCONTEXT_OFFSET))(this, a1);
		}
	};
}
