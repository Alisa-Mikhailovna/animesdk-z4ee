#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_627;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_1_OFFSET UNITYSDK_OFFSET(0xC1AB370)
#define RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_OFFSET UNITYSDK_OFFSET(0xC1AB260)
#define RPG_CLIENT_CONDITIONCHECKER_COLLECTREQUIREDMISSION_OFFSET UNITYSDK_OFFSET(0xC1AAAD0)
#define RPG_CLIENT_CONDITIONCHECKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1AB1C0)
#define RPG_CLIENT_CONDITIONCHECKER_DOASYNCCHECK_OFFSET UNITYSDK_OFFSET(0xC1AA200)
#define RPG_CLIENT_CONDITIONCHECKER_DOCHECKIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xC1AB420)
#define RPG_CLIENT_CONDITIONCHECKER_DOCHECKWITHPROMISE_OFFSET UNITYSDK_OFFSET(0xC1AB4D0)
#define RPG_CLIENT_CONDITIONCHECKER_DOSYNCCHECK_OFFSET UNITYSDK_OFFSET(0xC1A9E10)
#define RPG_CLIENT_CONDITIONCHECKER_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xC1A9610)
#define RPG_CLIENT_CONDITIONCHECKER_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0xC1A9810)
#define RPG_CLIENT_CONDITIONCHECKER_GETCHECKITEMLIST_OFFSET UNITYSDK_OFFSET(0xC1AAF70)
#define RPG_CLIENT_CONDITIONCHECKER_GET_ISTICKABLE_OFFSET UNITYSDK_OFFSET(0xC1A9440)
#define RPG_CLIENT_CONDITIONCHECKER_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xC1A9FE0)
#define RPG_CLIENT_CONDITIONCHECKER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xC1AAF10)
#define RPG_CLIENT_CONDITIONCHECKER_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xC1AA480)
#define RPG_CLIENT_CONDITIONCHECKER_SUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xC1A9A10)
#define RPG_CLIENT_CONDITIONCHECKER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC1AAFB0)
#define RPG_CLIENT_CONDITIONCHECKER_UNSUBSCRIBECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xC1A9C10)
#define RPG_CLIENT_CONDITIONCHECKER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC1AB600)
#define RPG_CLIENT_CONDITIONCHECKER__CLEARITEMPREPAREPROMISE_OFFSET UNITYSDK_OFFSET(0xC1AAA30)
#define RPG_CLIENT_CONDITIONCHECKER__COLLECTITEMPREPAREPROMISE_OFFSET UNITYSDK_OFFSET(0xC1AA700)
#define RPG_CLIENT_CONDITIONCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0xC1AB180)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionChecker_TypeDefinitionIndex = 57237;

	class ConditionChecker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>** StaticGet__s_ItemPreparePromises()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(ConditionChecker_TypeDefinitionIndex)->GetStaticField(0x63F10);
		}
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_627*>* _CheckItemList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsTickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_GET_ISTICKABLE_OFFSET))(this);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_FILLRSPCMDIDSTO_OFFSET))(this, a1);
		}

		::System::Void SubscribeCustomEvent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_SUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void UnsubscribeCustomEvent(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_UNSUBSCRIBECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Boolean DoSyncCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_DOSYNCCHECK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* DoAsyncCheck()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_DOASYNCCHECK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_PREPAREDATA_OFFSET))(this);
		}

		::System::Boolean IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_ISDATAREADY_OFFSET))(this);
		}

		::System::Void CollectRequiredMission(::System::Collections::Generic::HashSet_1<::System::UInt32>*& a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_COLLECTREQUIREDMISSION_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_ISEMPTY_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_627*>* GetCheckItemList()
		{
			return ((::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_627*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_GETCHECKITEMLIST_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddCheckItem(::RPG::GameCore::ConditionType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_OFFSET))(this, a1, a2);
		}

		::System::Void AddCheckItem_1(::Class_0_16E4307DCC419505_627* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_627*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_ADDCHECKITEM_1_OFFSET))(this, a1);
		}

		::System::Boolean DoCheckImmediate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_DOCHECKIMMEDIATE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::Boolean>*>* DoCheckWithPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER_DOCHECKWITHPROMISE_OFFSET))(this);
		}

		::System::Void _CollectItemPreparePromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER__COLLECTITEMPREPAREPROMISE_OFFSET))(this);
		}

		::System::Void _ClearItemPreparePromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER__CLEARITEMPREPAREPROMISE_OFFSET))(this);
		}
	};
}
