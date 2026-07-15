#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_374;
class Class_0_16E4307DCC419505_375;
class Class_0_16E4307DCC419505_376;
class Class_0_16E4307DCC419505_957;
class Class_1_43BD383C98B4C0C5_116;
class Class_2_E6C0556C909C8254;
namespace RPG::Client { class VersionUpdateProgressInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PLAYGOMANAGER_ADDEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xD091740)
#define RPG_CLIENT_PLAYGOMANAGER_CHECKALLCHUNKDOWNLOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0xD091B90)
#define RPG_CLIENT_PLAYGOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD091920)
#define RPG_CLIENT_PLAYGOMANAGER_GETESTIMATEDTIME_OFFSET UNITYSDK_OFFSET(0xD091CD0)
#define RPG_CLIENT_PLAYGOMANAGER_GETUSEDTIME_OFFSET UNITYSDK_OFFSET(0xD091E20)
#define RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTCOSTTIME_OFFSET UNITYSDK_OFFSET(0xD0933E0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0xD0933A0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0xD0933C0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_ISFINISHDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xD0932A0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_ISRECORDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0xD0932E0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_ISSENDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0xD093300)
#define RPG_CLIENT_PLAYGOMANAGER_GET_PERCENT_OFFSET UNITYSDK_OFFSET(0xD0932C0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTCOSTTIME_OFFSET UNITYSDK_OFFSET(0xD093380)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTPERCENT_OFFSET UNITYSDK_OFFSET(0xD093320)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0xD093340)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0xD093360)
#define RPG_CLIENT_PLAYGOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xD091540)
#define RPG_CLIENT_PLAYGOMANAGER_ONFINISH_OFFSET UNITYSDK_OFFSET(0xD093180)
#define RPG_CLIENT_PLAYGOMANAGER_ONPROGRESS_OFFSET UNITYSDK_OFFSET(0xD092260)
#define RPG_CLIENT_PLAYGOMANAGER_ONSTART_OFFSET UNITYSDK_OFFSET(0xD0921A0)
#define RPG_CLIENT_PLAYGOMANAGER_ONTICK_OFFSET UNITYSDK_OFFSET(0xD091A60)
#define RPG_CLIENT_PLAYGOMANAGER_REMOVEEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xD092040)
#define RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTCOSTTIME_OFFSET UNITYSDK_OFFSET(0xD0933F0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0xD0933B0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0xD0933D0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_ISFINISHDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xD0932B0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_ISRECORDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0xD0932F0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_ISSENDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0xD093310)
#define RPG_CLIENT_PLAYGOMANAGER_SET_PERCENT_OFFSET UNITYSDK_OFFSET(0xD0932D0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTCOSTTIME_OFFSET UNITYSDK_OFFSET(0xD093390)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTPERCENT_OFFSET UNITYSDK_OFFSET(0xD093330)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0xD093350)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0xD093370)
#define RPG_CLIENT_PLAYGOMANAGER_START_OFFSET UNITYSDK_OFFSET(0xD0918A0)
#define RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOPOPWINDOWREPORT_OFFSET UNITYSDK_OFFSET(0xD092F70)
#define RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOSTARTREPORT_OFFSET UNITYSDK_OFFSET(0xD092C70)
#define RPG_CLIENT_PLAYGOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0914D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayGoManager_TypeDefinitionIndex = 65260;

	class PlayGoManager : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_957* _PlayGoImpl; // 0x10
		::RPG::Client::VersionUpdateProgressInfo* _ProgressInfo; // 0x18
		::System::Int64 _CurrentProgressSize_k__BackingField; // 0x20
		::System::Single lastTime; // 0x28
		::System::Single _Percent_k__BackingField; // 0x2C
		::System::Int64 _StartProgressSize_k__BackingField; // 0x30
		::System::Int64 _StartCostTime_k__BackingField; // 0x38
		::System::Int64 _CurrentCostTime_k__BackingField; // 0x40
		::System::Int64 _StartTotalSize_k__BackingField; // 0x48
		::System::Int64 _CurrentTotalSize_k__BackingField; // 0x50
		::System::Int64 lastSize; // 0x58
		::System::Boolean _IsRecordStartEvent_k__BackingField; // 0x60
		::System::Boolean _IsFinishDownload_k__BackingField; // 0x61
		::System::Boolean _IsSendStartEvent_k__BackingField; // 0x62
		::System::Single _StartPercent_k__BackingField; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_INIT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Start()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_START_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONTICK_OFFSET))(this);
		}

		::System::Void CheckAllChunkDownloadComplete(::System::Action_1<::Class_1_43BD383C98B4C0C5_116*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_43BD383C98B4C0C5_116*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_CHECKALLCHUNKDOWNLOADCOMPLETE_OFFSET))(this, a1);
		}

		::System::Void GetEstimatedTime(::System::Action_1<::Class_2_E6C0556C909C8254*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_2_E6C0556C909C8254*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GETESTIMATEDTIME_OFFSET))(this, a1);
		}

		::System::UInt64 GetUsedTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GETUSEDTIME_OFFSET))(this);
		}

		::System::Void AddEventListener(::System::Action_1<::Class_0_16E4307DCC419505_375*>* a1, ::System::Action_1<::Class_0_16E4307DCC419505_376*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_374*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_375*>*, ::System::Action_1<::Class_0_16E4307DCC419505_376*>*, ::System::Action_1<::Class_0_16E4307DCC419505_374*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ADDEVENTLISTENER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveEventListener(::System::Action_1<::Class_0_16E4307DCC419505_375*>* a1, ::System::Action_1<::Class_0_16E4307DCC419505_376*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_374*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_375*>*, ::System::Action_1<::Class_0_16E4307DCC419505_376*>*, ::System::Action_1<::Class_0_16E4307DCC419505_374*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_REMOVEEVENTLISTENER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStart(::Class_0_16E4307DCC419505_375* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONSTART_OFFSET))(this, a1);
		}

		::System::Void OnProgress(::Class_0_16E4307DCC419505_376* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_376*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONPROGRESS_OFFSET))(this, a1);
		}

		::System::Void TrySendPlayGoStartReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOSTARTREPORT_OFFSET))(this);
		}

		::System::Void TrySendPlayGoPopWindowReport(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOPOPWINDOWREPORT_OFFSET))(this, a1);
		}

		::System::Void OnFinish(::Class_0_16E4307DCC419505_374* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_374*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONFINISH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinishDownload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_ISFINISHDOWNLOAD_OFFSET))(this);
		}

		::System::Void set_IsFinishDownload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_ISFINISHDOWNLOAD_OFFSET))(this, a1);
		}

		::System::Single get_Percent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_PERCENT_OFFSET))(this);
		}

		::System::Void set_Percent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_PERCENT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRecordStartEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_ISRECORDSTARTEVENT_OFFSET))(this);
		}

		::System::Void set_IsRecordStartEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_ISRECORDSTARTEVENT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSendStartEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_ISSENDSTARTEVENT_OFFSET))(this);
		}

		::System::Void set_IsSendStartEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_ISSENDSTARTEVENT_OFFSET))(this, a1);
		}

		::System::Single get_StartPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTPERCENT_OFFSET))(this);
		}

		::System::Void set_StartPercent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTPERCENT_OFFSET))(this, a1);
		}

		::System::Int64 get_StartProgressSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTPROGRESSSIZE_OFFSET))(this);
		}

		::System::Void set_StartProgressSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTPROGRESSSIZE_OFFSET))(this, a1);
		}

		::System::Int64 get_StartTotalSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTTOTALSIZE_OFFSET))(this);
		}

		::System::Void set_StartTotalSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTTOTALSIZE_OFFSET))(this, a1);
		}

		::System::Int64 get_StartCostTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTCOSTTIME_OFFSET))(this);
		}

		::System::Void set_StartCostTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTCOSTTIME_OFFSET))(this, a1);
		}

		::System::Int64 get_CurrentProgressSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTPROGRESSSIZE_OFFSET))(this);
		}

		::System::Void set_CurrentProgressSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTPROGRESSSIZE_OFFSET))(this, a1);
		}

		::System::Int64 get_CurrentTotalSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTTOTALSIZE_OFFSET))(this);
		}

		::System::Void set_CurrentTotalSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTTOTALSIZE_OFFSET))(this, a1);
		}

		::System::Int64 get_CurrentCostTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTCOSTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentCostTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTCOSTTIME_OFFSET))(this, a1);
		}
	};
}
