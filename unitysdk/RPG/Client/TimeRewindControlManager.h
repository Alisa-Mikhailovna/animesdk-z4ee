#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompetitiveGamePlaySystemPriority.h"
#include "unitysdk/RPG/Client/PlayerIgnoreTimeRewindHitReason.h"
#include "unitysdk/RPG/Client/TimeRewindControlManagerActiveReason.h"
#include "unitysdk/RPG/Client/TimeRewindControlManager_ExitControlModeStep.h"
#include "unitysdk/RPG/Client/TimeRewindGlobalUnselectableReason.h"
#include "unitysdk/RPG/GameCore/BindTimeRewindMultiControlType.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/ForbidSelectTimeRewindReason.h"
#include "unitysdk/RPG/GameCore/TimeRewindEntityControlType.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_425;
class Class_1_22DFC3839E157DF2;
class Class_1_4057065B3D76240A;
class Class_1_4A90D78D94DB1347;
class Class_1_5863CECBF1A58D06;
class Class_1_E45C207B1AC948BE;
class Class_2_2ADE56E1A540FAD0;
class Class_3_07C3C4D2990C49EE;
namespace ParticleRecorder { class BackwardParticlesInfoSO; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEntityPreload; }
namespace RPG::Client { class TimeRewindControlManager_TimeRewindEntityPreloadEffItem; }
namespace RPG::Client { class TimeRewindItemSingleClipData; }
namespace RPG::Client { class TimelineItemSingleData; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client { template <typename T> class TimeRewindObjLitePool_1; }
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OpenTimeRewindSnapPageParam; }
namespace RPG::GameCore { class ToastPile; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDREWINDBTNCD_OFFSET UNITYSDK_OFFSET(0xD6A4A30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDTIMELINEOBJECT_OFFSET UNITYSDK_OFFSET(0xD6A2C80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CALCTIMEREWINDTARGETSELECTABLE_OFFSET UNITYSDK_OFFSET(0xD6A36D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CLOSETIMEREWINDRECREATEWORLDPAGE_OFFSET UNITYSDK_OFFSET(0xD69F660)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECREASEINCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0xD6A4980)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECTIVETIMEREWINDMANAGER_OFFSET UNITYSDK_OFFSET(0xD69F100)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD6A10E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xD6A23D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD69FEB0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_FIREBACKWARDEFFASYNC_OFFSET UNITYSDK_OFFSET(0xD69B740)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETCOMPETITIVEPRIORITY_OFFSET UNITYSDK_OFFSET(0xD6A18E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETENTITYTIMELINETRACKINFO_OFFSET UNITYSDK_OFFSET(0xD69BC50)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETTIMEREWINDVIEWMAT_OFFSET UNITYSDK_OFFSET(0xD69CB90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_CURRENTSELECTTARGETTIMEREWINDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xD6A5490)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_IGNOREHITPLAYER_OFFSET UNITYSDK_OFFSET(0xD6A54C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xD6A54A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INPERFORMANCEMODE_OFFSET UNITYSDK_OFFSET(0xD6A0810)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_LOCKPERFORMANCETARGET_OFFSET UNITYSDK_OFFSET(0xD6A0800)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_MANAGERACTIVE_OFFSET UNITYSDK_OFFSET(0xD6A54B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_TIMEREWINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xD6A5480)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_INCREASEINCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0xD6A48E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ISHITPLAYERSEQEXECUTION_OFFSET UNITYSDK_OFFSET(0xD6A24B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADOVERRIDECLIPASSET_OFFSET UNITYSDK_OFFSET(0xD69BF70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADSINGLECLIPINFOASSET_OFFSET UNITYSDK_OFFSET(0xD69C120)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADTIMEREWINDENTITYANIMEVENTCONFIGS_OFFSET UNITYSDK_OFFSET(0xD69C3A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONENTERTOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xD6A1840)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONLEAVETOPOFPRIORITY_OFFSET UNITYSDK_OFFSET(0xD6A1890)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONTIMEREWINDENTITYCONTROLOVERTIME_OFFSET UNITYSDK_OFFSET(0xD6A4BE0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_PRELOADTIMEREWINDENTITYEFF_OFFSET UNITYSDK_OFFSET(0xD69A7B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERBINDCHILDTIMEREWINDENTITY_OFFSET UNITYSDK_OFFSET(0xD6A3250)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERTIMEREWINDCONTROLSWITCHER_OFFSET UNITYSDK_OFFSET(0xD6A2140)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_RELEASETIMEREWINDENTITYPRELOADEFF_OFFSET UNITYSDK_OFFSET(0xD69AF70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REMOVETIMELINEOBJECT_OFFSET UNITYSDK_OFFSET(0xD6A29C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETBACKWARDEFFFINISH_OFFSET UNITYSDK_OFFSET(0xD69B870)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETENABLETIMEREWINDSELECT_OFFSET UNITYSDK_OFFSET(0xD6A4AE0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALOVERRIDESPECIALCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xD6A3740)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALUNSELECTABLE_OFFSET UNITYSDK_OFFSET(0xD69EEF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETPLAYERIGNORETIMEREWINDHIT_OFFSET UNITYSDK_OFFSET(0xD6A4B70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD69F6C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDRECREATEWORLDPAGE_OFFSET UNITYSDK_OFFSET(0xD69F570)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDSNAPPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD69FBD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xD6A1930)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYHITPLAYERSEQ_OFFSET UNITYSDK_OFFSET(0xD6A2540)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYONHITPLAYER_OFFSET UNITYSDK_OFFSET(0xD6A2920)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYATTACHSWITCHEROPENEFFONPLAYER_OFFSET UNITYSDK_OFFSET(0xD6A3430)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYCONTROLTIMEREWINDENTITYBYTASK_OFFSET UNITYSDK_OFFSET(0xD69E2A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYFINISHQUEST_OFFSET UNITYSDK_OFFSET(0xD6A0820)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYGETBACKWARDPARTICLESINFOSO_OFFSET UNITYSDK_OFFSET(0xD69B990)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYREMOVESWITCHEROPENEFFONPLAYER_OFFSET UNITYSDK_OFFSET(0xD6A3610)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYUNSELECTCURRENTTARGET_OFFSET UNITYSDK_OFFSET(0xD6A22F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_UNREGISTERTIMEREWINDCONTROLSWITCHER_OFFSET UNITYSDK_OFFSET(0xD6A2260)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ADDPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xD69AAD0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__BTNINCD_OFFSET UNITYSDK_OFFSET(0xD6A4A90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CACHEBACKWARDEFFSOASSETASYNC_OFFSET UNITYSDK_OFFSET(0xD69B0B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKCANCLICKREWINDBUTTON_OFFSET UNITYSDK_OFFSET(0xD6A4CC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKSPECIALCONTROLTYPECANCONTROL_OFFSET UNITYSDK_OFFSET(0xD6A4FF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A0C80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISABLECONTROLLOOKATMODE_OFFSET UNITYSDK_OFFSET(0xD6A3E70)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISPOSETIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD6A0180)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DOINIT_OFFSET UNITYSDK_OFFSET(0xD6A2F40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLECONTROLLOOKATMODE_OFFSET UNITYSDK_OFFSET(0xD6A38D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLESWITCHCAMERACONTROLMODE_OFFSET UNITYSDK_OFFSET(0xD6A3810)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXECUTEHITPLAYERSEQ_OFFSET UNITYSDK_OFFSET(0xD6A25B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP1_OFFSET UNITYSDK_OFFSET(0xD6A4860)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP2_OFFSET UNITYSDK_OFFSET(0xD6A4300)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__FIRESTARTCONTROLMODEEFF_OFFSET UNITYSDK_OFFSET(0xD6A40C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITEXTERNALSYSTEM_OFFSET UNITYSDK_OFFSET(0xD69EA80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITQUEST_OFFSET UNITYSDK_OFFSET(0xD6A09F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONGROUPLOADEND_OFFSET UNITYSDK_OFFSET(0xD6A16E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONOPENMOBILEPHONE_OFFSET UNITYSDK_OFFSET(0xD69F4D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONPERFORMANCEREWINDCOMPLETE_OFFSET UNITYSDK_OFFSET(0xD6A0630)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTEND_OFFSET UNITYSDK_OFFSET(0xD69F040)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTSTART_OFFSET UNITYSDK_OFFSET(0xD69EE90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xD69F0A0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWREALAVATAR_OFFSET UNITYSDK_OFFSET(0xD69F1F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMELINEENTITYEVENT_OFFSET UNITYSDK_OFFSET(0xD6A0690)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDPERFORMANCEPAGEENTER_OFFSET UNITYSDK_OFFSET(0xD6A0480)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xD6A4D20)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONPRESS_OFFSET UNITYSDK_OFFSET(0xD6A5080)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONRELEASE_OFFSET UNITYSDK_OFFSET(0xD6A5390)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPLAYERLOCKTARGET_OFFSET UNITYSDK_OFFSET(0xD69FF30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xD69AA60)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHSPECIALCONTROLMODEBALLEFFSTATE_OFFSET UNITYSDK_OFFSET(0xD6A3590)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__RELEASEALLASSETS_OFFSET UNITYSDK_OFFSET(0xD69D720)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVECACHEDBACKWARDEFFSO_OFFSET UNITYSDK_OFFSET(0xD69B530)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVEPRELOADEFFCNT_OFFSET UNITYSDK_OFFSET(0xD69ACC0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0xD69F9C0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWSNAPPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0xD69FC80)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTCONTROLTIMELINEENTITY_OFFSET UNITYSDK_OFFSET(0xD69E390)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTTIMEREWINDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD69F760)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKBTNCD_OFFSET UNITYSDK_OFFSET(0xD6A1CA0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKCACHEDASSET_OFFSET UNITYSDK_OFFSET(0xD69B4B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKEXITCONTROL_OFFSET UNITYSDK_OFFSET(0xD6A20B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKLOOPREWINDUIAUDIO_OFFSET UNITYSDK_OFFSET(0xD69F250)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPERFORMANCECONTROL_OFFSET UNITYSDK_OFFSET(0xD6A0390)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPLAYERSTEER_OFFSET UNITYSDK_OFFSET(0xD6A1D10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNPRESSDOWN_OFFSET UNITYSDK_OFFSET(0xD6A04D0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNRELEASE_OFFSET UNITYSDK_OFFSET(0xD6A0580)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYEXITCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xD6A53E0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYUNREGISTERBINDCHILDTIMEREWINDENTITY_OFFSET UNITYSDK_OFFSET(0xD6A2B00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER__UNINITEXTERNALSYSTEM_OFFSET UNITYSDK_OFFSET(0xD69EC60)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager_TypeDefinitionIndex = 58092;

	class TimeRewindControlManager : public ::System::Object
	{
	public:
		// static const ::System::String* StopLoopRewindAudio; // 0x0
		// static const ::System::String* RestartLoopRewindAudio; // 0x0
		// static const ::System::String* TimeRewindControlSwitcherTag; // 0x0
		// static const ::System::String* TimeRewindEntityTag; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_22DFC3839E157DF2*>* _TimeRewindAnimConfigs; // 0x10
		::Class_1_4A90D78D94DB1347* _GamePlayAssetLoader; // 0x18
		::System::Collections::Generic::List_1<::Class_1_4057065B3D76240A*>* _MultiControllerRegisterInfos; // 0x20
		::RPG::GameCore::EntityTimeRewindComponent* _PerformanceTargetTimeRewindComponent; // 0x28
		::RPG::GameCore::ToastPile* TimeRewindEntityStrikeToast; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Material*>* _TimeRewindViewAttachMatAsset; // 0x38
		::RPG::GameCore::ToastPile* InteractSwitcherWhenOpen; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::EntityTimeRewindComponent*>* _AllTimeRewindComponents; // 0x48
		::RPG::GameCore::ToastPile* TimeRewindHitPlayerWhenRewindToast; // 0x50
		::RPG::GameCore::EntityTimeRewindComponent* _CurrentSelectTargetTimeRewindComponent; // 0x58
		::RPG::GameCore::GameEntity* _CurrentSelectTarget; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _PreloadEffInstCnt; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TimelineItemSingleData*>* _TrackInfoDict; // 0x70
		::RPG::Client::TwoKeyDictionary_3<::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType, ::System::String*>* _TimeRewindViewAttachMat; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _LoadBackwardSoAssets; // 0x80
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _LoopRewindSelectableTarget; // 0x88
		::RPG::Client::AdventurePhase* _Phase; // 0x90
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadEffItem*>* _TimeRewindEntityPreloadEffItemPool; // 0x98
		::Class_1_E45C207B1AC948BE* _SwitchOpenAttachPlayerBallEff; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* _RewindEntityClips; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreload*>* _TimeRewindEntityPreloads; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TimeRewindItemSingleClipData*>* _RewindEntityClipInfos; // 0xB8
		::System::Action* _PerformanceFinishCallback; // 0xC0
		::RPG::Client::UIController* _RecreateWorldPageController; // 0xC8
		::RPG::Client::UIController* _PerformancePageController; // 0xD0
		::RPG::GameCore::ToastPile* TimeRewindFailToast; // 0xD8
		::System::Collections::Generic::List_1<::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _ToAsyncLoadBackwardSoAssets; // 0xE0
		::UnityEngine::Coroutine* _FrameAssetAsyncLoadCoroutine; // 0xE8
		::System::Collections::Generic::List_1<::System::UInt32>* _ToFinishQuestIDs; // 0xF0
		::Il2CppArray<::Class_1_E45C207B1AC948BE*>* _SwitchOpenAttachPlayerEff; // 0xF8
		::Il2CppArray<::Class_1_E45C207B1AC948BE*>* _AttachPlayerEffs; // 0x100
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEffBackwardSOAssetInfo*>* _TimeRewindEffBackwardSOAssetInfoPool; // 0x108
		::Class_1_5863CECBF1A58D06* _TimeRewindLockTarget; // 0x110
		::Class_3_07C3C4D2990C49EE* _OnHitPlayerSeq; // 0x118
		::System::Collections::Generic::List_1<::Class_2_2ADE56E1A540FAD0*>* _TimeRewindControlSwitcherComponents; // 0x120
		::RPG::Client::TimeRewindObjLitePool_1<::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreload*>* _TimeRewindEntityPreloadPool; // 0x128
		::System::Int32 _ContinuousTimeout; // 0x130
		::System::Single _BtnCD; // 0x134
		::System::Boolean _LockPerformanceTarget; // 0x138
		::System::Boolean _GamePlayBtnEnable; // 0x139
		::System::Boolean _PerformancePageEnter; // 0x13A
		::System::Boolean _Inited; // 0x13B
		::System::Boolean _GlobalOverrideSpecialControlMode; // 0x13C
		::System::Boolean _InPerformanceMode; // 0x13D
		::RPG::Client::TimeRewindControlManager_ExitControlModeStep _ExitControlModeStep; // 0x140
		::System::Single _TimeRewindCompletePerformTimer; // 0x144
		::System::Int32 _SwitchAttachPlayerEffCount; // 0x148
		::System::Int32 _TimeRewindInControlCount; // 0x14C
		::System::UInt32 _LastOvertimeRuntimeID; // 0x150
		::System::Int32 _GlobalSelectableCount; // 0x154
		::System::Boolean _IsCachedAssetAsyncLoading; // 0x158
		::System::Boolean _InControlMode; // 0x159
		::System::Boolean _HasLoopRewindUI; // 0x15A
		::UnityEngine::Vector3 _PlayerTurnToForward; // 0x15C
		::System::Int32 _ManagerDeactiveReason; // 0x168
		::System::UInt32 _TimeRewindOverTimeToastLastTime; // 0x16C
		::System::Int32 _SpecialControlTypeBallEffControlParam; // 0x170
		::System::Int32 _IgnoreHitPlayerCount; // 0x174
		::System::Int32 _TimeRewindDisableSelectCount; // 0x178

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean PreloadTimeRewindEntityEff(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_PRELOADTIMEREWINDENTITYEFF_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshPreloadEffCnt(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPRELOADEFFCNT_OFFSET))(this, a1, a2);
		}

		::System::Void _AddPreloadEffCnt(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ADDPRELOADEFFCNT_OFFSET))(this, a1);
		}

		::System::Void _RemovePreloadEffCnt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVEPRELOADEFFCNT_OFFSET))(this, a1);
		}

		::System::Void ReleaseTimeRewindEntityPreloadEff(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_RELEASETIMEREWINDENTITYPRELOADEFF_OFFSET))(this, a1);
		}

		::System::Void _CacheBackwardEffSoAssetAsync(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CACHEBACKWARDEFFSOASSETASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveCachedBackwardEffSo(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REMOVECACHEDBACKWARDEFFSO_OFFSET))(this, a1, a2);
		}

		::System::Void FireBackwardEffAsync(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TriggerEffectParams* a2, ::Class_1_E45C207B1AC948BE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TriggerEffectParams*, ::Class_1_E45C207B1AC948BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_FIREBACKWARDEFFASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBackwardEffFinish(::RPG::GameCore::GameEntity* a1, ::Class_1_E45C207B1AC948BE* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_E45C207B1AC948BE*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETBACKWARDEFFFINISH_OFFSET))(this, a1, a2, a3);
		}

		::ParticleRecorder::BackwardParticlesInfoSO* TryGetBackwardParticlesInfoSO(::System::String* a1)
		{
			return ((::ParticleRecorder::BackwardParticlesInfoSO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYGETBACKWARDPARTICLESINFOSO_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* _TickCachedAsset()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKCACHEDASSET_OFFSET))(this);
		}

		::RPG::Client::EntityTimelineControlTrackInfo* GetEntityTimelineTrackInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::EntityTimelineControlTrackInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETENTITYTIMELINETRACKINFO_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationClip* LoadOverrideClipAsset(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADOVERRIDECLIPASSET_OFFSET))(this, a1);
		}

		::RPG::Client::EntityTimelineControlNode* LoadSingleClipInfoAsset(::System::UInt32 a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::RPG::Client::EntityTimelineControlNode*(*)(::PVOID, ::System::UInt32, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADSINGLECLIPINFOASSET_OFFSET))(this, a1, a2);
		}

		::Class_1_22DFC3839E157DF2* LoadTimeRewindEntityAnimEventConfigs(::System::String* a1)
		{
			return ((::Class_1_22DFC3839E157DF2*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_LOADTIMEREWINDENTITYANIMEVENTCONFIGS_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetTimeRewindViewMat(::RPG::GameCore::TimeRewindView a1, ::RPG::GameCore::EraStateType a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETTIMEREWINDVIEWMAT_OFFSET))(this, a1, a2);
		}

		::System::Void _ReleaseAllAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__RELEASEALLASSETS_OFFSET))(this);
		}

		::System::Void TryControlTimeRewindEntityByTask(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYCONTROLTIMEREWINDENTITYBYTASK_OFFSET))(this, a1, a2);
		}

		::System::Void _InitExternalSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITEXTERNALSYSTEM_OFFSET))(this);
		}

		::System::Void _UnInitExternalSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__UNINITEXTERNALSYSTEM_OFFSET))(this);
		}

		::System::Void _OnQteCatchGhostStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTSTART_OFFSET))(this, a1);
		}

		::System::Void _OnQteCatchGhostEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONQTECATCHGHOSTEND_OFFSET))(this, a1);
		}

		::System::Void _OnShowFakeAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWFAKEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnShowRealAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONSHOWREALAVATAR_OFFSET))(this, a1);
		}

		::System::Void _TickLoopRewindUIAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKLOOPREWINDUIAUDIO_OFFSET))(this);
		}

		::System::Void _OnOpenMobilePhone(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONOPENMOBILEPHONE_OFFSET))(this, a1);
		}

		::System::Void StartTimeRewindRecreateWorldPage(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDRECREATEWORLDPAGE_OFFSET))(this, a1);
		}

		::System::Void CloseTimeRewindRecreateWorldPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CLOSETIMEREWINDRECREATEWORLDPAGE_OFFSET))(this);
		}

		::System::Void StartTimeRewindPerformance(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDPERFORMANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartTimeRewindSnapPerformance(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::RPG::GameCore::OpenTimeRewindSnapPageParam* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::RPG::GameCore::OpenTimeRewindSnapPageParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_STARTTIMEREWINDSNAPPERFORMANCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ExitTimeRewindPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITTIMEREWINDPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _StartTimeRewindPerformance(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTTIMEREWINDPERFORMANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ShowPerformancePage(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWPERFORMANCEPAGE_OFFSET))(this, a1);
		}

		::System::Void _ShowSnapPerformancePage(::RPG::GameCore::EntityTimeRewindComponent* a1, ::RPG::GameCore::OpenTimeRewindSnapPageParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::RPG::GameCore::OpenTimeRewindSnapPageParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__SHOWSNAPPERFORMANCEPAGE_OFFSET))(this, a1, a2);
		}

		::System::Void _TickPerformanceControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPERFORMANCECONTROL_OFFSET))(this);
		}

		::System::Void _DisposeTimeRewindPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISPOSETIMEREWINDPERFORMANCE_OFFSET))(this);
		}

		::System::Void _OnTimeRewindPerformancePageEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDPERFORMANCEPAGEENTER_OFFSET))(this);
		}

		::System::Void _TimeRewindPerformanceBtnPressDown(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNPRESSDOWN_OFFSET))(this, a1);
		}

		::System::Void _TimeRewindPerformanceBtnRelease(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TIMEREWINDPERFORMANCEBTNRELEASE_OFFSET))(this, a1);
		}

		::System::Void _OnPerformanceRewindComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONPERFORMANCEREWINDCOMPLETE_OFFSET))(this);
		}

		::System::Void _OnTimelineEntityEvent(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMELINEENTITYEVENT_OFFSET))(this, a1);
		}

		::System::Boolean get_LockPerformanceTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_LOCKPERFORMANCETARGET_OFFSET))(this);
		}

		::System::Boolean get_InPerformanceMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INPERFORMANCEMODE_OFFSET))(this);
		}

		::System::Void TryFinishQuest(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYFINISHQUEST_OFFSET))(this, a1);
		}

		::System::Void _InitQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__INITQUEST_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnGroupLoadEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONGROUPLOADEND_OFFSET))(this, a1);
		}

		::System::Void OnEnterTopOfPriority()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONENTERTOPOFPRIORITY_OFFSET))(this);
		}

		::System::Void OnLeaveTopOfPriority()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONLEAVETOPOFPRIORITY_OFFSET))(this);
		}

		::RPG::Client::CompetitiveGamePlaySystemPriority GetCompetitivePriority()
		{
			return ((::RPG::Client::CompetitiveGamePlaySystemPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GETCOMPETITIVEPRIORITY_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void RegisterTimeRewindControlSwitcher(::Class_2_2ADE56E1A540FAD0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2ADE56E1A540FAD0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERTIMEREWINDCONTROLSWITCHER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterTimeRewindControlSwitcher(::Class_2_2ADE56E1A540FAD0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2ADE56E1A540FAD0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_UNREGISTERTIMEREWINDCONTROLSWITCHER_OFFSET))(this, a1);
		}

		::System::Void TryUnselectCurrentTarget(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYUNSELECTCURRENTTARGET_OFFSET))(this, a1);
		}

		::System::Void DectiveTimeRewindManager(::System::Boolean a1, ::RPG::Client::TimeRewindControlManagerActiveReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TimeRewindControlManagerActiveReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECTIVETIMEREWINDMANAGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsHitPlayerSeqExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ISHITPLAYERSEQEXECUTION_OFFSET))(this);
		}

		::System::Void TimeRewindEntityHitPlayerSeq(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYHITPLAYERSEQ_OFFSET))(this, a1);
		}

		::System::Void TimeRewindEntityOnHitPlayer(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYONHITPLAYER_OFFSET))(this, a1);
		}

		::System::Void RemoveTimelineObject(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REMOVETIMELINEOBJECT_OFFSET))(this, a1);
		}

		::System::Void AddTimelineObject(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDTIMELINEOBJECT_OFFSET))(this, a1);
		}

		::System::Void RegisterBindChildTimeRewindEntity(::RPG::GameCore::EntityTimeRewindComponent* a1, ::Il2CppArray<::System::UInt32>* a2, ::RPG::GameCore::BindTimeRewindMultiControlType a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::BindTimeRewindMultiControlType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_REGISTERBINDCHILDTIMEREWINDENTITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _TryUnregisterBindChildTimeRewindEntity(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYUNREGISTERBINDCHILDTIMEREWINDENTITY_OFFSET))(this, a1);
		}

		::System::Void TryAttachSwitcherOpenEffOnPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYATTACHSWITCHEROPENEFFONPLAYER_OFFSET))(this);
		}

		::System::Void TryRemoveSwitcherOpenEffOnPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TRYREMOVESWITCHEROPENEFFONPLAYER_OFFSET))(this);
		}

		::System::Boolean CalcTimeRewindTargetSelectable(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_CALCTIMEREWINDTARGETSELECTABLE_OFFSET))(this, a1);
		}

		::System::Void SetGlobalOverrideSpecialControlMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALOVERRIDESPECIALCONTROLMODE_OFFSET))(this, a1);
		}

		::System::Void _ExecuteHitPlayerSeq(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXECUTEHITPLAYERSEQ_OFFSET))(this, a1);
		}

		::System::Void _DoInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DOINIT_OFFSET))(this);
		}

		::System::Void _EnableSwitchCameraControlMode(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLESWITCHCAMERACONTROLMODE_OFFSET))(this, a1);
		}

		::System::Void _DisableControlLookAtMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__DISABLECONTROLLOOKATMODE_OFFSET))(this, a1);
		}

		::System::Void _EnableControlLookAtMode(::UnityEngine::Transform* a1, ::RPG::MVector3 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::MVector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ENABLECONTROLLOOKATMODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _StartControlTimelineEntity(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__STARTCONTROLTIMELINEENTITY_OFFSET))(this, a1);
		}

		::System::Void _FireStartControlModeEff(::RPG::GameCore::TimeRewindEntityControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindEntityControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__FIRESTARTCONTROLMODEEFF_OFFSET))(this, a1);
		}

		::System::Void _TickPlayerSteer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKPLAYERSTEER_OFFSET))(this);
		}

		::System::Void ExitControlMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_EXITCONTROLMODE_OFFSET))(this, a1);
		}

		::System::Void _TickExitControl(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKEXITCONTROL_OFFSET))(this, a1);
		}

		::System::Void _ExitControlModeStep1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP1_OFFSET))(this);
		}

		::System::Void _ExitControlModeStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__EXITCONTROLMODESTEP2_OFFSET))(this);
		}

		::System::Void IncreaseInControlCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_INCREASEINCONTROLCOUNT_OFFSET))(this);
		}

		::System::Void DecreaseInControlCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_DECREASEINCONTROLCOUNT_OFFSET))(this);
		}

		::System::Void AddRewindBtnCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ADDREWINDBTNCD_OFFSET))(this, a1);
		}

		::System::Void _TickBtnCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TICKBTNCD_OFFSET))(this, a1);
		}

		::System::Boolean _BtnInCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__BTNINCD_OFFSET))(this);
		}

		::System::Void _RefreshSpecialControlModeBallEffState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHSPECIALCONTROLMODEBALLEFFSTATE_OFFSET))(this, a1);
		}

		::System::Void _RefreshPlayerLockTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__REFRESHPLAYERLOCKTARGET_OFFSET))(this, a1);
		}

		::System::Void SetEnableTimeRewindSelect(::System::Boolean a1, ::RPG::GameCore::ForbidSelectTimeRewindReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::ForbidSelectTimeRewindReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETENABLETIMEREWINDSELECT_OFFSET))(this, a1, a2);
		}

		::System::Void SetPlayerIgnoreTimeRewindHit(::System::Boolean a1, ::RPG::Client::PlayerIgnoreTimeRewindHitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::PlayerIgnoreTimeRewindHitReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETPLAYERIGNORETIMEREWINDHIT_OFFSET))(this, a1, a2);
		}

		::System::Void SetGlobalUnselectable(::System::Boolean a1, ::RPG::Client::TimeRewindGlobalUnselectableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TimeRewindGlobalUnselectableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_SETGLOBALUNSELECTABLE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTimeRewindEntityControlOverTime(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_ONTIMEREWINDENTITYCONTROLOVERTIME_OFFSET))(this, a1);
		}

		::System::Boolean _CheckCanClickRewindButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKCANCLICKREWINDBUTTON_OFFSET))(this);
		}

		::System::Void _OnTimeRewindUIButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Boolean _CheckSpecialControlTypeCanControl(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__CHECKSPECIALCONTROLTYPECANCONTROL_OFFSET))(this, a1);
		}

		::System::Void _OnTimeRewindUIButtonPress(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONPRESS_OFFSET))(this, a1);
		}

		::System::Void _OnTimeRewindUIButtonRelease(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__ONTIMEREWINDUIBUTTONRELEASE_OFFSET))(this, a1);
		}

		::System::Void _TryExitControlMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER__TRYEXITCONTROLMODE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EntityTimeRewindComponent*>* get_TimeRewindComponents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EntityTimeRewindComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_TIMEREWINDCOMPONENTS_OFFSET))(this);
		}

		::RPG::GameCore::EntityTimeRewindComponent* get_CurrentSelectTargetTimeRewindComponent()
		{
			return ((::RPG::GameCore::EntityTimeRewindComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_CURRENTSELECTTARGETTIMEREWINDCOMPONENT_OFFSET))(this);
		}

		::System::Boolean get_InControlMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_INCONTROLMODE_OFFSET))(this);
		}

		::System::Boolean get_ManagerActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_MANAGERACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IgnoreHitPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_GET_IGNOREHITPLAYER_OFFSET))(this);
		}
	};
}
