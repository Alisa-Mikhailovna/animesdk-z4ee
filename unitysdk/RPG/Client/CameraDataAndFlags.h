#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9571B284696356E4_TransitionMode.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_ClipPlaneOverridePriority.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_DisableCameraProtectReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_KeepOrthographicOnResetReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_MazeBattleShotDataType.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_PauseMainCameraUpdateReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_RoamingStyle.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_TrackCameraTrackType.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_TrackRoamingCameraRotationMode.h"
#include "unitysdk/RPG/Client/CameraResultData.h"
#include "unitysdk/RPG/GameCore/ActiveTrackCameraMode.h"
#include "unitysdk/RPG/GameCore/AdventureCameraOrthographicResetMode.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/CameraMode.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_2CBB9F488B837A11.h"
#include "unitysdk/Struct_2_2D71E0AE8D880088.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_4.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_12.h"
#include "unitysdk/Struct_2_CB7D37A2987B484B.h"
#include "unitysdk/Struct_2_F865545CC2426688.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CameraShakeTask;
class Class_1_47AACC0D1B9F3610;
class Class_1_78B03B04E15725BC;
class Class_1_9F6A7BD216A5C0E3;
class Class_1_AA5627556691B674;
class Class_1_C0FA7ACF6234A735;
class Class_1_CDAD1C4D78702C93;
class Class_1_D27BF54F25500E5F;
class Class_1_E188AFC27F4BCB5C;
class Class_1_E34FF29EE1CCACD4;
class Class_1_F064940CC10176D1;
class Class_2_74B1F4B989D8EA57;
class Class_2_9571B284696356E4_TransitionShotData;
class Class_3_07C3C4D2990C49EE;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraFreelook3rdConfigData; }
namespace RPG::Client { class CameraLookAtConfigData; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::Client { class GameCoreCameraData; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ShotTemplateRuntime; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace RPG::GameCore { class VCameraNoiseChange; }
namespace RPGTools::Timeline { class CameraData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0xBF3FE70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET UNITYSDK_OFFSET(0xBF3ACA0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0xBF3A730)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET UNITYSDK_OFFSET(0xBF3EC00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET UNITYSDK_OFFSET(0xBF3FF50)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0xBF3FEE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0xBF3A8A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF3A550)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET UNITYSDK_OFFSET(0xBF3B100)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xBF3E4D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xBF3FCC0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xBF3FD50)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET UNITYSDK_OFFSET(0xBF3E600)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET UNITYSDK_OFFSET(0xBF3FDE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET UNITYSDK_OFFSET(0xBF3E590)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET UNITYSDK_OFFSET(0xBF39FD0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET UNITYSDK_OFFSET(0xBF399A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xBF3C430)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET UNITYSDK_OFFSET(0xBF3F420)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET UNITYSDK_OFFSET(0xBF39A10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCURRENTCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xBF3ABC0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xBF39730)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET UNITYSDK_OFFSET(0xBF39E90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0xBF39DC0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0xBF39360)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0xBF395D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0xBF3A650)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xBF397E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET UNITYSDK_OFFSET(0xBF39A80)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET UNITYSDK_OFFSET(0xBF39CF0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0xBF39C20)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0xBF392F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORWARD_OFFSET UNITYSDK_OFFSET(0xBF394F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLEFT_OFFSET UNITYSDK_OFFSET(0xBF393D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLOCKTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xBF39910)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMROTATION_OFFSET UNITYSDK_OFFSET(0xBF39890)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0xBF39B20)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0xBF391E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xBF390D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET UNITYSDK_OFFSET(0xBF39F60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0xBF3A800)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0xBF3B5B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET UNITYSDK_OFFSET(0xBF3A840)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0xBF3B5D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_HASCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xBF3AA50)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0xBF3AC90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_LASTFRAMEFOVRESULT_OFFSET UNITYSDK_OFFSET(0xBF3A820)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0xBF3B5F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET UNITYSDK_OFFSET(0xBF3FFC0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_PUSHCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xBF3AAB0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET UNITYSDK_OFFSET(0xBF39130)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET UNITYSDK_OFFSET(0xBF3F040)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET UNITYSDK_OFFSET(0xBF3B610)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0xBF3AEC0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REMOVECLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xBF3AB60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0xBF3F500)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET UNITYSDK_OFFSET(0xBF3C1A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET UNITYSDK_OFFSET(0xBF3E750)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xBF3C3C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0xBF3AC20)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET UNITYSDK_OFFSET(0xBF3F550)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xBF3C480)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0xBF3F2E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET UNITYSDK_OFFSET(0xBF3EF80)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0xBF3A810)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0xBF3B5C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0xBF3B5E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_LASTFRAMEFOVRESULT_OFFSET UNITYSDK_OFFSET(0xBF3A830)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0xBF3B600)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGRELEASEENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0xBF3A9A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGSETENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0xBF3A940)
#define RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0xBF3B240)
#define RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0xBF3B090)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET UNITYSDK_OFFSET(0xBF3D810)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0xBF3A0C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0xBF3B310)
#define RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET UNITYSDK_OFFSET(0xBF3B360)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_TypeDefinitionIndex = 66418;

	class CameraDataAndFlags : public ::System::Object
	{
	public:
		::Class_1_78B03B04E15725BC* CurrentBaseChangeParam; // 0x10
		::Class_3_07C3C4D2990C49EE* TrackCameraExitFromEndSeq; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Struct_2_B6A3FA7992F9F37E_12>* GlobalDynamicOffsetIgnoreEntityList; // 0x20
		::RPG::Client::ShotTemplateRuntime* ShotTemplate; // 0x28
		::RPG::Client::CameraResultData CurrentResult; // 0x30
		::UnityEngine::Transform* ShotTemplateLookAt; // 0xC8
		::Class_1_9F6A7BD216A5C0E3* GlobalNamedDynamicOffsetData; // 0xD0
		::RPG::Client::CameraFreelook3rdConfigData* CurrentFreelook3rdChangeParam; // 0xD8
		::Class_1_CDAD1C4D78702C93* RoamingFreelook3rdControllerRef; // 0xE0
		::Cinemachine::CinemachineBrain* _CinemachineBrainRef_k__BackingField; // 0xE8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VCameraState, ::RPG::Client::CameraNormalConfigData*>* StateAdditiveNormalConfigMap; // 0xF0
		::Class_1_E34FF29EE1CCACD4* RoamingVCameraControllerRef; // 0xF8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HideEntityList; // 0x100
		::RPG::GameCore::GameEntity* VCameraFollowTarget; // 0x108
		::RPG::Client::CameraResultData LastResult; // 0x110
		::RPG::GameCore::GameEntity* Freelook3rdCameraLookAtTarget; // 0x1A8
		::Class_1_E188AFC27F4BCB5C* _ClipPlaneOverrideQueue; // 0x1B0
		::RPG::GameCore::VCameraBlend* HoldenBlendForCastAnimation; // 0x1B8
		::Cinemachine::CinemachineVirtualCameraBase* LittleGameDirectCamera; // 0x1C0
		::System::String* IsometricCurvePath; // 0x1C8
		::Class_3_07C3C4D2990C49EE* TrackCameraOnOutOfRange; // 0x1D0
		::Class_1_CDAD1C4D78702C93* Freelook3rdControllerRef; // 0x1D8
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraFreelook3rdConfigData*>* CameraFreelook3rdConfigDataQueue; // 0x1E0
		::RPG::Client::GameCoreCameraData* _GameCoreData_k__BackingField; // 0x1E8
		::Class_2_9571B284696356E4_TransitionShotData* CustomShotData; // 0x1F0
		::UnityEngine::Transform* ShotTemplateFollow; // 0x1F8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ForceHiddenEntityList; // 0x200
		::System::Collections::Generic::Queue_1<::Class_1_47AACC0D1B9F3610*>* CameraCloseupShotTaskQueue; // 0x208
		::System::String* ProjectionBlendInCurve; // 0x210
		::Class_3_07C3C4D2990C49EE* TrackCameraExitFromStartSeq; // 0x218
		::System::Collections::Generic::Queue_1<::Class_1_F064940CC10176D1*>* VCameraShotAnimTaskQueue; // 0x220
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraLookAtConfigData*>* CameraLookAtConfigDataQueue; // 0x228
		::System::String* TrackCameraName; // 0x230
		::RPGTools::Timeline::CameraData* PlayingCameraTimelineData; // 0x238
		::RPG::GameCore::GameEntity* ConfigCaster; // 0x240
		::Class_2_74B1F4B989D8EA57* DisableProtectPriorityQueue; // 0x248
		::Class_1_D27BF54F25500E5F* NoiseTransition; // 0x250
		::RPG::GameCore::GameEntity* CurrentPlayerEntity; // 0x258
		::RPG::Client::CameraNormalConfigData* CurrentCameraNormalConfigData; // 0x260
		::Class_1_E34FF29EE1CCACD4* CurActiveCameraController; // 0x268
		::System::String* TrackCameraAreaName; // 0x270
		::System::String* ProjectionBlendOutCurve; // 0x278
		::Class_1_C0FA7ACF6234A735* CameraConfigRecoverData; // 0x280
		::UnityEngine::Transform* OverrideFreelook3rdTarget; // 0x288
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AimTargetFocusEntityList; // 0x290
		::RPG::Client::CameraNormalConfigData* NextCameraNormalConfigData; // 0x298
		::System::Collections::Generic::Queue_1<::Class_1_AA5627556691B674*>* DeferredCameraAfterCloseupShot; // 0x2A0
		::System::Collections::Generic::Queue_1<::CameraShakeTask*>* VCameraShakeTaskQueue; // 0x2A8
		::System::Single ProjectionBlendOutTime; // 0x2B0
		::System::Single CameraZoomRatio; // 0x2B4
		::RPG::GameCore::ActiveTrackCameraMode TrackCameraPlayMode; // 0x2B8
		::System::Single OverrideRayHitDietherCheckInterval; // 0x2BC
		::System::Boolean IsRecovering; // 0x2C0
		::System::Boolean LookAtUnlockAxisInputAfterRecover; // 0x2C1
		::System::Boolean IsCameraBlendCut; // 0x2C2
		::System::Boolean IsNoiseOpen; // 0x2C3
		::System::Single TrackCameraPathWayDetectWidth; // 0x2C4
		::System::Boolean IsAutoAdsorbOn; // 0x2C8
		::System::Boolean ResetZoomKeepCameraBlend; // 0x2C9
		::System::Boolean HasProtectDistance; // 0x2CA
		::System::Boolean CameraRotating; // 0x2CB
		::System::UInt32 TrackPathWayGroupID; // 0x2CC
		::UnityEngine::Vector3 RoamingInitForward; // 0x2D0
		::System::Boolean ForbidCameraZoomChange; // 0x2DC
		::System::Boolean CloseupShotPureTimelineAnimFlag; // 0x2DD
		::System::Boolean ForbidAimOffsetLerpFlag; // 0x2DE
		::System::Boolean DisableCameraRecenter; // 0x2DF
		::System::Single TargetAutoAdsorbFaceDir; // 0x2E0
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamLookAtDamping; // 0x2E4
		::System::Single IsometricOrthographicSize; // 0x2F4
		::UnityEngine::Vector3 RoamingInitLookAtPos; // 0x2F8
		::System::Single _LastFrameFovResult_k__BackingField; // 0x304
		::System::Single DialogModeBlendingRatio; // 0x308
		::System::Boolean ForbidRoamingPosUpdate; // 0x30C
		::System::Boolean ForbidCameraShake; // 0x30D
		::System::Boolean IsometricUseCurve; // 0x30E
		::System::Boolean EnableFreelookCameraDragMode; // 0x30F
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamFollowDamping; // 0x310
		::UnityEngine::Vector3 ShotInitCenterPos; // 0x320
		::System::UInt32 ConfigVersion; // 0x32C
		::UnityEngine::Vector3 ShotAnimOffset; // 0x330
		::RPG::Client::CameraDataAndFlags_TrackCameraTrackType TrackCameraUseTrackType; // 0x33C
		::System::Single TrackRoamingAngleRecoverDamp; // 0x340
		::System::Single ScreenPointUpTimer; // 0x344
		::RPG::GameCore::VCameraState NextVCameraState; // 0x348
		::Struct_2_A725E4562D03EA4E_4 LastFrameResult; // 0x34C
		::System::Nullable_1<::UnityEngine::Vector3> DialogModeTargetPos; // 0x354
		::System::Single ProjectionBlendInTime; // 0x364
		::System::Single MoveControlDistance; // 0x368
		::UnityEngine::Vector3 OffsetPos; // 0x36C
		::System::Boolean MazePrepareTriggerBattle; // 0x378
		::System::Boolean DofGetNewConfig; // 0x379
		::System::Boolean UseLookAtChangeOffset; // 0x37A
		::System::Boolean ForceHiddenEntityReset; // 0x37B
		::System::Boolean EnableProtectAfterBlend; // 0x37C
		::System::Boolean StartIsometricSizeBlend; // 0x37D
		::System::Boolean CloseupShotExitFlag; // 0x37E
		::System::Boolean IsInBattleDataViewMode; // 0x37F
		::System::Single NearClippingPlane; // 0x380
		::System::Boolean MazeBattleTransitionOpen; // 0x384
		::System::Boolean IsForbidHugeMonsterHalfDither; // 0x385
		::System::Boolean NoiseTransitionFinishNeedApply; // 0x386
		::System::Boolean DofNeedReset; // 0x387
		::System::Single TrackRoamingRotationFactor; // 0x388
		::System::Single ScreenPointDownTimer; // 0x38C
		::UnityEngine::Vector3 CameraAimOffsetResult; // 0x390
		::System::Boolean _BlockAimDampUntilLookAtTargetMoved_k__BackingField; // 0x39C
		::System::Boolean _LockRelatedTarget_k__BackingField; // 0x39D
		::System::Boolean IsCloseFightDitherDarkRight; // 0x39E
		::System::Boolean DoOpticalIllusionSet; // 0x39F
		::System::Single TrackRoamingAngleDeadZoneLimitY; // 0x3A0
		::RPG::GameCore::VCameraState CurVCameraState; // 0x3A4
		::Struct_2_A725E4562D03EA4E_4 CurrentFrameResult; // 0x3A8
		::System::Boolean IsFreeLookAt; // 0x3B0
		::System::Boolean TrackCameraMappingInput; // 0x3B1
		::System::Boolean ResetCinemachineZoomFlag; // 0x3B2
		::System::Boolean IsForceHugeMonsterHalfDither; // 0x3B3
		::UnityEngine::Vector3 OpticalIllusionPosition; // 0x3B4
		::Struct_2_2CBB9F488B837A11 UltraDistanceGlobalDynamicOffsetData; // 0x3C0
		::System::Single TrackRoamingXAnglePercentage; // 0x3E4
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputY; // 0x3E8
		::System::UInt32 TrackPathWayID; // 0x3EC
		::System::Single TrackRoamingStandardSpeed; // 0x3F0
		::UnityEngine::Vector3 ForwardDir; // 0x3F4
		::System::Nullable_1<::System::Single> EraLightFollowModeZoomDistanceLimit; // 0x400
		::System::Single CameraZoomAddValue; // 0x408
		::UnityEngine::Vector3 ShotAimCenterPos; // 0x40C
		::System::Single TrackRoamingAngleDeadZoneLimitX; // 0x418
		::System::Single CameraZoomDistanceDelta; // 0x41C
		::System::Single OpticalIllusionSize; // 0x420
		::UnityEngine::Vector2 refAnchorAngularVelocity; // 0x424
		::System::Int32 ConfigPriority; // 0x42C
		::System::Single FreeLookMinDistance; // 0x430
		::System::Single OrthographicSize; // 0x434
		::System::Single TrackRoamingAngleRotationFactorMax; // 0x438
		::System::Single VCameraDitherAlphaNPCMin; // 0x43C
		::System::UInt32 PauseLateUpdateCount; // 0x440
		::System::Boolean TrackCameraEnable; // 0x444
		::System::Boolean ChangeDOF; // 0x445
		::System::Boolean BlendOutImmediately; // 0x446
		::System::Boolean KeepInputCameraDirection; // 0x447
		::System::Single TrackRoamingStandardScreenDis; // 0x448
		::System::Single TrackRoamingAngleRotationFactorMin; // 0x44C
		::System::Single FreeLookMaxDistance; // 0x450
		::Struct_2_CB7D37A2987B484B DofConfig; // 0x454
		::UnityEngine::Vector3 LastSelectDarkTeamEntityAim; // 0x468
		::System::Boolean RoamingVCameraControllerDragMode; // 0x474
		::System::Boolean DisableFreelook3rdCameraInput; // 0x475
		::System::Boolean LockRecenterY; // 0x476
		::System::Boolean NeedDefaultBlendCurveFlag; // 0x477
		::System::UInt32 _DisableProtectCount; // 0x478
		::System::Boolean ForbidRoamingZoomChange; // 0x47C
		::System::Boolean ShotAnimClear; // 0x47D
		::System::Boolean ResetToFaceDir; // 0x47E
		::System::Boolean IsForceClearDitherOnce; // 0x47F
		::System::Single CameraZoomDistance; // 0x480
		::System::Boolean IsScreenPointerDown; // 0x484
		::System::Boolean ResetToFightNormalModeFlag; // 0x485
		::System::Boolean ResetTeamRootPos; // 0x486
		::System::Boolean ClearHidingEntityFlag; // 0x487
		::System::Single RoamingZoomValue; // 0x488
		::Class_2_9571B284696356E4_TransitionMode MazeBattleTransitionMode; // 0x48C
		::UnityEngine::Matrix4x4 PresetOrthographicProjectionMatrix; // 0x490
		::System::Single TargetAutoAdsorbAxisY; // 0x4D0
		::System::Single MazeBattleTransitionSpeed; // 0x4D4
		::UnityEngine::Vector2 ShotAimScreenOffset; // 0x4D8
		::System::Int32 TrackCameraEndBlendInIndex; // 0x4E0
		::System::Single TrackRoamingAngleLimitY; // 0x4E4
		::System::Single MoveControlDir; // 0x4E8
		::System::Single TrackRoamingAngleLimitX; // 0x4EC
		::System::Single TrackRoamingSpeedDamp; // 0x4F0
		::RPG::GameCore::TeamFormationType DarkTeamRefreshTypeWhenSetVCameraConfig; // 0x4F4
		::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason KeepOrthographicOnResetCounter; // 0x4F8
		::System::Single MazeBattleTransitionOverrideInitBlendTime; // 0x4FC
		::System::Single RoamingInitFov; // 0x500
		::RPG::GameCore::TeamFormationType LightTeamRefreshTypeWhenSetVCameraConfig; // 0x504
		::UnityEngine::Vector3 FreeLookAtPos; // 0x508
		::System::Nullable_1<::System::Single> DialogModeZoomDistance; // 0x514
		::System::Boolean DoIsometricSizeBlend; // 0x51C
		::System::Boolean IsShowEntityListIgnoreDither; // 0x51D
		::System::Boolean LookAtLockAxisInput; // 0x51E
		::System::Boolean NoiseIgnoreActionWaitOrder; // 0x51F
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputX; // 0x520
		::System::Single RoamingCurFovRatio; // 0x524
		::UnityEngine::Vector2 LookAtMouseSpeedRatio; // 0x528
		::UnityEngine::Quaternion OpticalIllusionRotation; // 0x530
		::System::Single DialogModeBlendingWeight; // 0x540
		::System::Boolean DialogModeBlending; // 0x544
		::System::Boolean IsPlayerDitherByDistance; // 0x545
		::System::Boolean CameraZoomEnable; // 0x546
		::System::Boolean CloseupPendingTimelineUpdate; // 0x547
		::System::Single FOVSmoothDampTime; // 0x548
		::RPG::GameCore::CameraMode CurrentMode; // 0x54C
		::System::Single CameraAimOffsetDelta; // 0x550
		::UnityEngine::Matrix4x4 ProjectionBlendCameraOriMatrix; // 0x554
		::RPG::Client::CameraDataAndFlags_TrackRoamingCameraRotationMode TrackRoamingRotationMode; // 0x594
		::System::Boolean ShotTemplateDirty; // 0x598
		::System::Boolean ResetCinemachineZoomImmFlag; // 0x599
		::System::Boolean DoProjectionBlendToOrthographic; // 0x59A
		::System::Boolean DisableDitherClose; // 0x59B
		::System::Int32 TrackCameraStartBlendOutIndex; // 0x59C
		::UnityEngine::Vector3 CameraShakePosOffset; // 0x5A0
		::RPG::Client::CameraDataAndFlags_RoamingStyle CurRoamingStyle; // 0x5AC
		::System::Single OverrideAimOffsetLerpRatio; // 0x5B0
		::RPG::GameCore::AdventureCameraOrthographicResetMode OrthographicMatrixResetMode; // 0x5B4
		::RPG::Client::CameraDataAndFlags_MazeBattleShotDataType ShotDataType; // 0x5B8
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x5BC
		::System::Boolean DoProjectionBlendRecoverToProjection; // 0x5C0
		::System::Boolean VCameraDitherNPCOn; // 0x5C1
		::System::Boolean RoamingUseInitLookAtPos; // 0x5C2
		::System::Boolean IsNeedBlend; // 0x5C3
		::System::Boolean ForbidRoamingInput; // 0x5C4
		::System::Boolean DisableElevationDither; // 0x5C5
		::System::Boolean CameraDampSmoothReset; // 0x5C6
		::System::Boolean ForbidCameraZoomInput; // 0x5C7
		::System::Single BlockDitherTime; // 0x5C8
		::UnityEngine::Vector3 CameraShakeRotOffset; // 0x5CC
		::System::Single FOVAdaptionRatio; // 0x5D8
		::System::Single FirstPersonHeightOverride; // 0x5DC
		::System::Single VCameraDitherNPCMaxDistance; // 0x5E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__CTOR_OFFSET))(this);
		}

		::System::Single GetTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* QueryCharactersInTeam(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::AliveStateMask a2)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET))(this, a1, a2);
		}

		::System::Single GetTeamFormationWidth(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET))(this, a1);
		}

		::System::Single GetLightTeamFormationWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONWIDTH_OFFSET))(this);
		}

		::System::Single GetDarkTeamFormationWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONWIDTH_OFFSET))(this);
		}

		::RPG::MVector3 GetLightTeamLeft()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLEFT_OFFSET))(this);
		}

		::RPG::MVector3 GetLightTeamForward()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORWARD_OFFSET))(this);
		}

		::System::Single GetDarkTeamMaxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMMAXHEIGHT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetDarkTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetLightTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMENTITY_OFFSET))(this);
		}

		::RPG::MQuaternion GetLightTeamRotation()
		{
			return ((::RPG::MQuaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMROTATION_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLightTeamLockTargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLOCKTARGETTRANSFORM_OFFSET))(this);
		}

		::System::Single GetBattleMonsterCameraOffsetHeight(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterSomatoType GetCharacterSomato(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET))(this, a1);
		}

		::System::Single GetLightTeamFaceDir()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET))(this);
		}

		::RPG::MVector3 GetTeamAliveEntitiesCenterWorldPos(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET))(this, a1);
		}

		::RPG::MVector3 GetLightTeamFormationCenterWorldPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOS_OFFSET))(this);
		}

		::RPG::MVector3 GetLightTeamFormationCenterWorldPosFromBoundBox()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET))(this);
		}

		::RPG::MVector3 GetDarkTeamFormationCenterWorldPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOS_OFFSET))(this);
		}

		::RPG::MVector3 GetDarkTeamFormationCenterWorldPosFromBoundBox()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET))(this);
		}

		::System::Single GetTransformComponentYawAngle(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetAdjoinAtkTargetAveragePos(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillCharacterComponent* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillCharacterComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET))(this);
		}

		::Struct_2_F865545CC2426688 GetInheritParams()
		{
			return ((::Struct_2_F865545CC2426688(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET))(this);
		}

		::System::Void ApplyInheritParams(::Struct_2_F865545CC2426688& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F865545CC2426688&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET))(this, a1);
		}

		::System::Boolean get_BlockAimDampUntilLookAtTargetMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET))(this);
		}

		::System::Void set_BlockAimDampUntilLookAtTargetMoved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET))(this, a1);
		}

		::System::Single get_LastFrameFovResult()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_LASTFRAMEFOVRESULT_OFFSET))(this);
		}

		::System::Void set_LastFrameFovResult(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_LASTFRAMEFOVRESULT_OFFSET))(this, a1);
		}

		::System::Boolean get_DisableProtectFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET))(this);
		}

		::System::Void DisableCameraProtect(::System::Boolean a1, ::RPG::Client::CameraDataAndFlags_DisableCameraProtectReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_DisableCameraProtectReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET))(this, a1, a2);
		}

		::System::Void ThirdRoamingSetEnableCameraProtect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGSETENABLECAMERAPROTECT_OFFSET))(this);
		}

		::System::Void ThirdRoamingReleaseEnableCameraProtect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGRELEASEENABLECAMERAPROTECT_OFFSET))(this);
		}

		::System::Boolean get_HasClipPlaneOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_HASCLIPPLANEOVERRIDE_OFFSET))(this);
		}

		::System::Void PushClipPlaneOverride(::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_PUSHCLIPPLANEOVERRIDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveClipPlaneOverride(::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REMOVECLIPPLANEOVERRIDE_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> GetCurrentClipPlaneOverride()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCURRENTCLIPPLANEOVERRIDE_OFFSET))(this);
		}

		::System::Void SetKeepOrthographicOnReset(::System::Boolean a1, ::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_KeepOrthographicOnReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET))(this);
		}

		::System::Void ApplyCameraNoiseChangeConfig(::RPG::GameCore::VCameraNoiseChange* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraNoiseChange*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EnableNoise(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET))(this, a1);
		}

		::System::Void RegisterNoiseTransition(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterNoiseTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET))(this);
		}

		::System::Void TickNoiseTransition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderEntityChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void _RefreshLocalPlayerDef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* get_CinemachineBrainRef()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET))(this);
		}

		::System::Void set_CinemachineBrainRef(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET))(this, a1);
		}

		::RPG::Client::GameCoreCameraData* get_GameCoreData()
		{
			return ((::RPG::Client::GameCoreCameraData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET))(this);
		}

		::System::Void set_GameCoreData(::RPG::Client::GameCoreCameraData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameCoreCameraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_LockRelatedTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET))(this);
		}

		::System::Void set_LockRelatedTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET))(this, a1);
		}

		::System::Void Refresh(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetActiveEntityRef(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void SetCameraMode(::RPG::GameCore::CameraMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CameraMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET))(this, a1);
		}

		::RPG::GameCore::CameraMode GetCameraMode()
		{
			return ((::RPG::GameCore::CameraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET))(this);
		}

		::System::Void SetVCameraConfig(::RPG::Client::PipelineCameraEngine* a1, ::RPG::GameCore::VCameraConfig* a2, ::System::Nullable_1<::RPG::MVector3> a3, ::System::Nullable_1<::RPG::MVector3> a4, ::System::Nullable_1<::RPG::MQuaternion> a5, ::RPG::GameCore::TeamType a6, ::System::Action* a7, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a8, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a9, ::RPG::GameCore::GameEntity* a10, ::RPG::GameCore::GameEntity* a11, ::RPG::GameCore::TargetEvaluator* a12, ::RPG::GameCore::TargetEvaluator* a13, ::System::Boolean a14, ::RPG::GameCore::GameEntity* a15, ::RPG::GameCore::GameEntity* a16, ::System::Single a17, ::System::Single a18, ::System::Boolean a19, ::System::Boolean a20, ::System::String* a21)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraConfig*, ::System::Nullable_1<::RPG::MVector3>, ::System::Nullable_1<::RPG::MVector3>, ::System::Nullable_1<::RPG::MQuaternion>, ::RPG::GameCore::TeamType, ::System::Action*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TargetEvaluator*, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
		}

		::System::Single CalcCameraLookAtAngle(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET))(this, a1);
		}

		::System::Void SetVCameraHideEntity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::VCameraConfig* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::VCameraConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlendConfig(::RPG::Client::PipelineCameraEngine* a1, ::RPG::GameCore::VCameraBlend* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraBlend*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RecoverNormalConfigCamera(::RPG::Client::PipelineCameraEngine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET))(this, a1);
		}

		::System::Void SetVCameraGlobalDynamicOffset(::RPG::Client::PipelineCameraEngine* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::TargetEvaluator* GetCameraShakeDistanceAttenuationTarget(::RPG::GameCore::VCameraConfig* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET))(this, a1);
		}

		::System::Void ResetVCameraGlobalDynamicOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET))(this);
		}

		::System::Void SetUsingUltraDistanceGlobalDynamicOffsetFlag(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::CameraFreelook3rdConfigData* EnqueueCameraFreelook3rdConfigData(::RPG::GameCore::VCameraFreelook3rdConfig* a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::CameraFreelook3rdConfigData*(*)(::PVOID, ::RPG::GameCore::VCameraFreelook3rdConfig*, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EnqueueCameraLookAtConfigData(::RPG::Client::CameraLookAtConfigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraLookAtConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET))(this, a1);
		}

		::System::Void EnqueueDeferredCameraConfig(::Class_1_AA5627556691B674* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AA5627556691B674*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET))(this, a1);
		}

		::System::Void EnqueueVCameraCloseupTask(::Class_1_47AACC0D1B9F3610* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_47AACC0D1B9F3610*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET))(this, a1, a2);
		}

		::System::Void EnqueueVCameraShakeTask(::CameraShakeTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CameraShakeTask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET))(this, a1);
		}

		::System::Void EnqueueVCameraShotAnimTask(::Class_1_F064940CC10176D1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F064940CC10176D1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET))(this, a1);
		}

		::System::Void ActiveShotTemplate(::RPG::Client::ShotTemplateRuntime* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShotTemplateRuntime*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeactiveShotTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET))(this);
		}

		::System::Void ConsumeShotTemplateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET))(this);
		}

		::System::Void PauseCameraUpdate(::System::Boolean a1, ::RPG::Client::CameraDataAndFlags_PauseMainCameraUpdateReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_PauseMainCameraUpdateReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckPriority(::RPG::Client::PipelineCameraEngine* a1, ::RPG::GameCore::VCameraConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET))(this, a1, a2);
		}
	};
}
