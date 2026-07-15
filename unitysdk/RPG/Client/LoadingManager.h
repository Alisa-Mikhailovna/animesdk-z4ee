#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoadingManager_LoadingType.h"
#include "unitysdk/RPG/Client/LoadingManager_VerifyLoadingType.h"
#include "unitysdk/System/Object.h"

class Class_1_3074563A66A2D0FE;
class Class_1_31B28970A5870409;
class Class_1_9D40F9D90905A4A4;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class LoadingManager_WorkDefCounter; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOADINGMANAGER_GET_ENABLECUSTOMPRELOAD_OFFSET UNITYSDK_OFFSET(0xC9F66D0)
#define RPG_CLIENT_LOADINGMANAGER_GET_FINISHEDWORKCOUNT_OFFSET UNITYSDK_OFFSET(0xC9F66C0)
#define RPG_CLIENT_LOADINGMANAGER_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xC9F6600)
#define RPG_CLIENT_LOADINGMANAGER_GET_SKIPSCENEITEMFADING_OFFSET UNITYSDK_OFFSET(0xC9F66F0)
#define RPG_CLIENT_LOADINGMANAGER_GET_TOTALWORKCOUNT_OFFSET UNITYSDK_OFFSET(0xC9F66B0)
#define RPG_CLIENT_LOADINGMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC9F3650)
#define RPG_CLIENT_LOADINGMANAGER_ISGAMELOADING_OFFSET UNITYSDK_OFFSET(0xC9F3DC0)
#define RPG_CLIENT_LOADINGMANAGER_LATETICK_OFFSET UNITYSDK_OFFSET(0xC9F4110)
#define RPG_CLIENT_LOADINGMANAGER_RECORDPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xC9F49D0)
#define RPG_CLIENT_LOADINGMANAGER_REGISTELOADINGWORKDEFSCOUNTER_OFFSET UNITYSDK_OFFSET(0xC9F3760)
#define RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONBEGIN_OFFSET UNITYSDK_OFFSET(0xC9F47F0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0xC9F48A0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGADVINITEND_OFFSET UNITYSDK_OFFSET(0xC9F4680)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xC9F4A20)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGDATA_OFFSET UNITYSDK_OFFSET(0xC9F4C90)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYFAILCOUNT_OFFSET UNITYSDK_OFFSET(0xC9F43C0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYRESULT_OFFSET UNITYSDK_OFFSET(0xC9F4520)
#define RPG_CLIENT_LOADINGMANAGER_REPORTSCREENSTUCKBEGIN_OFFSET UNITYSDK_OFFSET(0xC9F4740)
#define RPG_CLIENT_LOADINGMANAGER_SETLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xC9F3D20)
#define RPG_CLIENT_LOADINGMANAGER_SETLOADINGCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xC9F4150)
#define RPG_CLIENT_LOADINGMANAGER_SETPROGRESSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC9F3D70)
#define RPG_CLIENT_LOADINGMANAGER_SET_ENABLECUSTOMPRELOAD_OFFSET UNITYSDK_OFFSET(0xC9F66E0)
#define RPG_CLIENT_LOADINGMANAGER_SET_SKIPSCENEITEMFADING_OFFSET UNITYSDK_OFFSET(0xC9F6700)
#define RPG_CLIENT_LOADINGMANAGER_STARTTICK_OFFSET UNITYSDK_OFFSET(0xC9F3870)
#define RPG_CLIENT_LOADINGMANAGER_STOPTICK_OFFSET UNITYSDK_OFFSET(0xC9F3A70)
#define RPG_CLIENT_LOADINGMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xC9F3E10)
#define RPG_CLIENT_LOADINGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9F6710)
#define RPG_CLIENT_LOADINGMANAGER__COMPUTEFINISHEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xC9F6320)
#define RPG_CLIENT_LOADINGMANAGER__COMPUTENEXTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC9F6650)
#define RPG_CLIENT_LOADINGMANAGER__CONVERTTIMETOSECOND_OFFSET UNITYSDK_OFFSET(0xC9F5FA0)
#define RPG_CLIENT_LOADINGMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC9F32A0)
#define RPG_CLIENT_LOADINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC9F2FA0)
#define RPG_CLIENT_LOADINGMANAGER__CUSTOMUPDATEPRELOADMANAGER_OFFSET UNITYSDK_OFFSET(0xC9F3F40)
#define RPG_CLIENT_LOADINGMANAGER__GETMAXLOADINGTIME_OFFSET UNITYSDK_OFFSET(0xC9F6020)
#define RPG_CLIENT_LOADINGMANAGER__ISLOADINGTYPEREPORTMATCH_OFFSET UNITYSDK_OFFSET(0xC9F5F00)
#define RPG_CLIENT_LOADINGMANAGER__ONLOADMAPSTUCKSAMPLEPOINT_OFFSET UNITYSDK_OFFSET(0xC9F2D40)
#define RPG_CLIENT_LOADINGMANAGER__ONQUEUENEWWORK_OFFSET UNITYSDK_OFFSET(0xC9F61C0)
#define RPG_CLIENT_LOADINGMANAGER__ONWORKFINISH_OFFSET UNITYSDK_OFFSET(0xC9F6370)
#define RPG_CLIENT_LOADINGMANAGER__REFRESHWORKDEFCOUNT_OFFSET UNITYSDK_OFFSET(0xC9F37B0)
#define RPG_CLIENT_LOADINGMANAGER__RESETSTUCKCHECKTIMERWHENWORKFINISH_OFFSET UNITYSDK_OFFSET(0xC9F2C20)
#define RPG_CLIENT_LOADINGMANAGER__STARTSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0xC9F27E0)
#define RPG_CLIENT_LOADINGMANAGER__STOPSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0xC9F29B0)
#define RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_LOADMAP_OFFSET UNITYSDK_OFFSET(0xC9F2B60)
#define RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0xC9F2A70)
#define RPG_CLIENT_LOADINGMANAGER__TRYADDTOWATCH_OFFSET UNITYSDK_OFFSET(0xC9F60E0)
#define RPG_CLIENT_LOADINGMANAGER__UPDATEFINISHPROGRESS_OFFSET UNITYSDK_OFFSET(0xC9F6220)

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingManager_TypeDefinitionIndex = 57854;

	class LoadingManager : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__StopTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(LoadingManager_TypeDefinitionIndex)->GetStaticField(0x42D90);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__StartTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(LoadingManager_TypeDefinitionIndex)->GetStaticField(0x42D98);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__CustomUpdatePreloadManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(LoadingManager_TypeDefinitionIndex)->GetStaticField(0x42DA0);
		}
		// static const ::System::Int32 _TARGET_FRAME_RATE_DURING_TICK = 0xF; // 0x0
		// static const ::System::String* _Loading_Max_Time_LoadMapIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_MazeToBattleIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_BattleToMazeIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_DesignLoadDataIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_EnterPerformanceIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_LeavePerformanceIDKey; // 0x0
		// static const ::System::String* _adv_loading_receive_packet_count_key; // 0x0
		// static const ::System::String* _adv_loading_receive_packet_list_key; // 0x0
		::Class_1_31B28970A5870409* _AsyncProcessor; // 0x10
		::System::Action_1<::System::Single>* _ProgressChangedCallback; // 0x18
		::System::Action* _LoadFinishCallback; // 0x20
		::Class_1_3074563A66A2D0FE* _LoadMapStuckReportData; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _ReportTryLoadStates; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ReportNotifyArguments; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _ReportTryLoadFails; // 0x40
		::System::Collections::Generic::HashSet_1<::Class_1_9D40F9D90905A4A4*>* _LoadingWorks; // 0x48
		::RPG::Client::LoadingManager_WorkDefCounter* _workDefCounter; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* _MonsterWaveList; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ReportArguments; // 0x60
		::System::UInt64 _ScreenStuckTimeBegin; // 0x68
		::System::Boolean _ResetMainCameraCullingFlag; // 0x70
		::System::Boolean _ResetTargetFPSFlag; // 0x71
		::System::Boolean _StartTick; // 0x72
		::System::Boolean _LogReported; // 0x73
		::System::UInt32 _PerformanceID; // 0x74
		::System::Single _StuckCheckTimer; // 0x78
		::System::Single _FinishedProgress; // 0x7C
		::System::Int32 _WorkActionCallNums; // 0x80
		::System::UInt64 _EffectTransitionExistTime; // 0x88
		::System::UInt64 _WorkActionTime; // 0x90
		::System::Int32 _TotalWorkCount; // 0x98
		::System::Boolean _EnableCustomPreload_k__BackingField; // 0x9C
		::System::Boolean _SkipSceneItemFading_k__BackingField; // 0x9D
		::System::Int32 _LoadingType; // 0xA0
		::System::Single _MazeToBattleMaxTime; // 0xA4
		::System::UInt64 _WorkActionTimeBegin; // 0xA8
		::System::UInt32 _LastStageID; // 0xB0
		::System::Single _BattleToMazeMaxTime; // 0xB4
		::System::UInt64 _ADVInitTimeBegin; // 0xB8
		::System::Single _LeavePerformanceMaxTime; // 0xC0
		::System::Single _LoadMapMaxTime; // 0xC4
		::System::Int32 _FinishedWorkCount; // 0xC8
		::System::UInt32 _LastMapID; // 0xCC
		::System::UInt64 _EffectTransitionExistTimeBegin; // 0xD0
		::System::UInt64 _TotalLoadingTime; // 0xD8
		::System::UInt64 _ScreenStuckTime; // 0xE0
		::System::UInt64 _TotalLoadingTimeBegin; // 0xE8
		::System::Single _EnterPerformanceMaxTime; // 0xF0
		::System::Int32 _TargetFrameRateBeforeStartTick; // 0xF4
		::System::Int32 _MainCameraOriginCullingMask; // 0xF8
		::System::Single _DesignDataLoadMaxTime; // 0xFC
		::System::UInt64 _ADVInitTime; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_1_31B28970A5870409* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_31B28970A5870409*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CCTOR_OFFSET))();
		}

		::System::Void _StartStuckCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__STARTSTUCKCHECK_OFFSET))(this);
		}

		::System::Void _StopStuckCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__STOPSTUCKCHECK_OFFSET))(this);
		}

		::System::Void _TickStuckCheck(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_OFFSET))(this, a1);
		}

		::System::Void _ResetStuckCheckTimerWhenWorkFinish(::Class_1_9D40F9D90905A4A4* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__RESETSTUCKCHECKTIMERWHENWORKFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void _TickStuckCheck_LoadMap(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_LOADMAP_OFFSET))(this, a1);
		}

		::System::Void _OnLoadMapStuckSamplePoint(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONLOADMAPSTUCKSAMPLEPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_INITIALIZE_OFFSET))(this);
		}

		::System::Void RegisteLoadingWorkDefsCounter(::RPG::Client::LoadingManager_WorkDefCounter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_WorkDefCounter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REGISTELOADINGWORKDEFSCOUNTER_OFFSET))(this, a1);
		}

		::System::Void StartTick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_STARTTICK_OFFSET))(this, a1);
		}

		::System::Void StopTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_STOPTICK_OFFSET))(this);
		}

		::System::Void SetLoadFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETLOADFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetProgressChangedCallback(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETPROGRESSCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean IsGameLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_ISGAMELOADING_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_LATETICK_OFFSET))(this);
		}

		::System::Void _CustomUpdatePreloadManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CUSTOMUPDATEPRELOADMANAGER_OFFSET))(this);
		}

		::System::Void SetLoadingConfigData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETLOADINGCONFIGDATA_OFFSET))(this);
		}

		::System::Void ReportLoadingTryFailCount(::RPG::Client::IAssetOperation* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYFAILCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void ReportLoadingTryResult(::RPG::Client::IAssetOperation* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYRESULT_OFFSET))(this, a1, a2);
		}

		::System::Void ReportLoadingADVInitEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGADVINITEND_OFFSET))(this);
		}

		::System::Void ReportScreenStuckBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTSCREENSTUCKBEGIN_OFFSET))(this);
		}

		::System::Void ReportEffectTransitionBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONBEGIN_OFFSET))(this);
		}

		::System::Void ReportEffectTransitionEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONEND_OFFSET))(this);
		}

		::System::Void RecordPerformanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_RECORDPERFORMANCEID_OFFSET))(this, a1);
		}

		::System::Void ReportLoadingBegin(::RPG::Client::LoadingManager_LoadingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void ReportLoadingData(::RPG::Client::LoadingManager_VerifyLoadingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_VerifyLoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGDATA_OFFSET))(this, a1);
		}

		::System::Boolean _IsLoadingTypeReportMatch(::RPG::Client::LoadingManager_LoadingType a1, ::RPG::Client::LoadingManager_VerifyLoadingType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType, ::RPG::Client::LoadingManager_VerifyLoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ISLOADINGTYPEREPORTMATCH_OFFSET))(this, a1, a2);
		}

		::System::Single _GetMaxLoadingTime(::RPG::Client::LoadingManager_LoadingType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__GETMAXLOADINGTIME_OFFSET))(this, a1);
		}

		::System::Single _ConvertTimeToSecond(::System::UInt64 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CONVERTTIMETOSECOND_OFFSET))(this, a1);
		}

		::System::Void _TryAddToWatch(::Class_1_9D40F9D90905A4A4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TRYADDTOWATCH_OFFSET))(this, a1);
		}

		::System::Void _RefreshWorkDefCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__REFRESHWORKDEFCOUNT_OFFSET))(this);
		}

		::System::Void _OnQueueNewWork(::Class_1_9D40F9D90905A4A4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONQUEUENEWWORK_OFFSET))(this, a1);
		}

		::System::Void _UpdateFinishProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__UPDATEFINISHPROGRESS_OFFSET))(this);
		}

		::System::Void _OnWorkFinish(::Class_1_9D40F9D90905A4A4* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONWORKFINISH_OFFSET))(this, a1, a2);
		}

		::System::Single _ComputeFinishedProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__COMPUTEFINISHEDPROGRESS_OFFSET))(this);
		}

		::System::Single _ComputeNextProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__COMPUTENEXTPROGRESS_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_PROGRESS_OFFSET))(this);
		}

		::System::Int32 get_TotalWorkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_TOTALWORKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_FinishedWorkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_FINISHEDWORKCOUNT_OFFSET))(this);
		}

		::System::Boolean get_EnableCustomPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_ENABLECUSTOMPRELOAD_OFFSET))(this);
		}

		::System::Void set_EnableCustomPreload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SET_ENABLECUSTOMPRELOAD_OFFSET))(this, a1);
		}

		::System::Boolean get_SkipSceneItemFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_SKIPSCENEITEMFADING_OFFSET))(this);
		}

		::System::Void set_SkipSceneItemFading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SET_SKIPSCENEITEMFADING_OFFSET))(this, a1);
		}
	};
}
