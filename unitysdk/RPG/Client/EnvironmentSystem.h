#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/Client/MainlightSwitchType.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeyword.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_336;
class Class_1_24B10CB562F3162A;
class Class_1_2E60775A830BA9A1;
class Class_1_303D5A33D1401D59;
class Class_1_990E4282A5D5942A;
class Class_1_A392F01C781E3108;
class Class_1_DA5BEDF62053421B;
class Class_2_D865BB63FE6CF6EB_1;
class SceneLightVolume;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client { class PPEffectManager; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::CustomRP { class CustomAdditionalCameraData; }
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace RPG::CustomRP { class VolumetricFogController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_ENVIRONMENTSYSTEM_ADDDYNAMICBLOCKLIGHT_OFFSET UNITYSDK_OFFSET(0xC3D9630)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ADJUSTTEMPTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0xC3D8CB0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_APPLYPATCHTOACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0xC3DBE60)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CANCELASYNCINIT_OFFSET UNITYSDK_OFFSET(0xC3DAD90)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CANCELTRANSITION_OFFSET UNITYSDK_OFFSET(0xC3DBF00)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARENVIROPATCH_OFFSET UNITYSDK_OFFSET(0xC3DAE80)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARLOCALVOLUMEOVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0xC3DC370)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARPERLEVEL_OFFSET UNITYSDK_OFFSET(0xC3DAFA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xC3DAF20)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_CREATEENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xC3D9E50)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVGPUPARTICLE_OFFSET UNITYSDK_OFFSET(0xC3DB2F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVPARTICLE_OFFSET UNITYSDK_OFFSET(0xC3DB330)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_EXTRACTFILENAME_OFFSET UNITYSDK_OFFSET(0xC3D90A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHALLTRANSITIONS_OFFSET UNITYSDK_OFFSET(0xC3DC060)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHTRANSITION_OFFSET UNITYSDK_OFFSET(0xC3DB5B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FORCEINITPPEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0xC3DB810)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_FORCEUPDATESHADOWCACHE_OFFSET UNITYSDK_OFFSET(0xC3DAD40)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETACTIVESCENELIGHTVOLUME_OFFSET UNITYSDK_OFFSET(0xC3D9490)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETCAPSULEAOMANAGER_OFFSET UNITYSDK_OFFSET(0xC3DB770)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETCURRENTACTIVEPROFILENAME_OFFSET UNITYSDK_OFFSET(0xC3D8EA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETDATA_OFFSET UNITYSDK_OFFSET(0xC3DC1A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETENVTRANSITMANAGER_OFFSET UNITYSDK_OFFSET(0xC3DB730)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETFRAMECAPTUREMANAGER_OFFSET UNITYSDK_OFFSET(0xC3DB570)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETINSTANCEBOTH_OFFSET UNITYSDK_OFFSET(0xC3D9200)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETISCURSWITCHWORK_OFFSET UNITYSDK_OFFSET(0xC3DB600)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETISVALID_OFFSET UNITYSDK_OFFSET(0xC3DB910)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETLIGHTQUALITYVERSION_OFFSET UNITYSDK_OFFSET(0xC3DC0F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETLOCALVOLUMEMANAGER_OFFSET UNITYSDK_OFFSET(0xC3DADD0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETMATERIALEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0xC3DB950)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETPPEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0xC3DAED0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETPROFILEASSETS_OFFSET UNITYSDK_OFFSET(0xC3DC400)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GETTODPROFILE_OFFSET UNITYSDK_OFFSET(0xC3DC3C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GET_ACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0xC3DC0E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC3D8DE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_HASPRIORITY_OFFSET UNITYSDK_OFFSET(0xC3DC010)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEMASYNC_OFFSET UNITYSDK_OFFSET(0xC3DB6A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xC3DB020)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITPERLEVEL_OFFSET UNITYSDK_OFFSET(0xC3DAF60)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITPROFILE_OFFSET UNITYSDK_OFFSET(0xC3DC0A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INITSHADERKEYWORDPROPERTYSETTING_OFFSET UNITYSDK_OFFSET(0xC3D9B70)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0xC3DB7C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ISNOTFULLENVSYS_OFFSET UNITYSDK_OFFSET(0xC3DA9E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ISPATCHUSEENVSYSTEMV2_OFFSET UNITYSDK_OFFSET(0xC3D9A40)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LATETICK_OFFSET UNITYSDK_OFFSET(0xC3DB510)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADBASECONFIG_OFFSET UNITYSDK_OFFSET(0xC3D9BD0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADGLOBALRESOURCEONINITGAME_OFFSET UNITYSDK_OFFSET(0xC3DAA40)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNCSIMPLE_OFFSET UNITYSDK_OFFSET(0xC3DA350)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNC_OFFSET UNITYSDK_OFFSET(0xC3DA740)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_LOGFILTER_OFFSET UNITYSDK_OFFSET(0xC3D8B60)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_NOTIFYENVCHANGE_OFFSET UNITYSDK_OFFSET(0xC3D9190)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_ONSTAGETRANSLATE_OFFSET UNITYSDK_OFFSET(0xC3DA5F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RECORDMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0xC3DA630)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEGLOBALRESOURCEONUNINITGAME_OFFSET UNITYSDK_OFFSET(0xC3DAC50)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITYWITHDURATION_OFFSET UNITYSDK_OFFSET(0xC3DBCA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITY_OFFSET UNITYSDK_OFFSET(0xC3DBEA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPROFILE_OFFSET UNITYSDK_OFFSET(0xC3DA220)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_REMOVEDYNAMICBLOCKLIGHT_OFFSET UNITYSDK_OFFSET(0xC3D97F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RENDER_OFFSET UNITYSDK_OFFSET(0xC3DC240)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0xC3DBA30)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETLEVELMAINLIGHTROATATEOFFET_OFFSET UNITYSDK_OFFSET(0xC3DB9A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETMAINLIGHTROATATEOFFET_OFFSET UNITYSDK_OFFSET(0xC3DB8D0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETMAINLIGHT_OFFSET UNITYSDK_OFFSET(0xC3DB6F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESETPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0xC3DA700)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_RESTOREMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0xC3DA670)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNCWITHDURATION_OFFSET UNITYSDK_OFFSET(0xC3DBBE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNC_OFFSET UNITYSDK_OFFSET(0xC3DBA70)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEWITHDURATION_OFFSET UNITYSDK_OFFSET(0xC3DBB20)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0xC3DBAD0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETBOOLPATCH_OFFSET UNITYSDK_OFFSET(0xC3DBE00)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLECHARALIGHT_OFFSET UNITYSDK_OFFSET(0xC3DB410)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLELIGHTPRELOAD_OFFSET UNITYSDK_OFFSET(0xC3D9DF0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESCENELIGHT_OFFSET UNITYSDK_OFFSET(0xC3DB460)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESHADOWLIGHT_OFFSET UNITYSDK_OFFSET(0xC3DB3C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESKYBOX_OFFSET UNITYSDK_OFFSET(0xC3DB2A0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0xC3DB370)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLE_OFFSET UNITYSDK_OFFSET(0xC3DA6B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETENVLOCALVOLUMEOVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0xC3DC290)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETFLOATPATCH_OFFSET UNITYSDK_OFFSET(0xC3DBD40)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETMAINLIGHTSWITCH_OFFSET UNITYSDK_OFFSET(0xC3DB650)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETMONSTERLIGHTBYCAMERADIR_OFFSET UNITYSDK_OFFSET(0xC3DB9E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETSTAGEVERSION_OFFSET UNITYSDK_OFFSET(0xC3DC140)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONRATE_OFFSET UNITYSDK_OFFSET(0xC3DBF50)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONTARGETPROFILE_OFFSET UNITYSDK_OFFSET(0xC3DBFB0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SETVECTORPATCH_OFFSET UNITYSDK_OFFSET(0xC3DBDA0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC3D8E10)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_SET_OFFSET UNITYSDK_OFFSET(0xC3DC1F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0xC3DB4B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_TRYGETSENVLOCALVOLUMEOVERRIDEPOSITION_OFFSET UNITYSDK_OFFSET(0xC3DC300)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_TRYONLYONCEINITPROFILE_OFFSET UNITYSDK_OFFSET(0xC3DAD00)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_UNINIT_OFFSET UNITYSDK_OFFSET(0xC3DAFE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_UPDATELIGHTMANAGER_OFFSET UNITYSDK_OFFSET(0xC3D99B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM_VERSION_OFFSET UNITYSDK_OFFSET(0xC3D9420)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINEASSETSETTINGSCOMMON_OFFSET UNITYSDK_OFFSET(0xC3DA470)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINEQUALITYSETTINGSCOMMON_OFFSET UNITYSDK_OFFSET(0xC3DA4F0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINESHADOWSETTINGSCOMMON_OFFSET UNITYSDK_OFFSET(0xC3DA4B0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3DC4C0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC3DC470)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__SETGLOBALREFLECTIONPROBECOMMON_OFFSET UNITYSDK_OFFSET(0xC3DA530)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEENVIROCLIPSBYCOMPONENTCOMMON_OFFSET UNITYSDK_OFFSET(0xC3DA570)
#define RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEENVIROLIGHTCOMMON_OFFSET UNITYSDK_OFFSET(0xC3DA5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentSystem_TypeDefinitionIndex = 66649;

	class EnvironmentSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Transform** StaticGet_s_RefProbesSceneRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1640);
		}
		static ::UnityEngine::Transform** StaticGet_s_EnviromentSystemRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1648);
		}
		static ::UnityEngine::Transform** StaticGet_s_Special_GpuParticleStencilClear()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1650);
		}
		static ::UnityEngine::Mesh** StaticGet_GpuParticleMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1658);
		}
		static ::UnityEngine::Mesh** StaticGet_QuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1660);
		}
		static ::UnityEngine::Transform** StaticGet_s_PointLightsRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1668);
		}
		static ::System::String** StaticGet_lastLog()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1670);
		}
		static ::UnityEngine::Camera** StaticGet_s_Camera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1678);
		}
		static ::UnityEngine::Transform** StaticGet_s_GpuParticleRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1680);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateEnvironmentSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1688);
		}
		static ::UnityEngine::Transform** StaticGet_s_ParticleRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1690);
		}
		static ::UnityEngine::ComputeShader** StaticGet_GpuParticleCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x1698);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEnvironmentSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x16A0);
		}
		static ::RPG::CustomRP::CustomAdditionalCameraData** StaticGet_s_CameraData()
		{
			return (::RPG::CustomRP::CustomAdditionalCameraData**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x16A8);
		}
		static ::RPG::Client::EnvironmentSystem** StaticGet_instance()
		{
			return (::RPG::Client::EnvironmentSystem**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0x16B0);
		}
		static ::System::Int32* StaticGet_ESRandom01ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA20);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet_ADJUST_REFLECTION_HSV()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA24);
		}
		static ::System::Boolean* StaticGet_configLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA28);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__IsPatchUseEnvSystemV2()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA29);
		}
		static ::System::Boolean* StaticGet__IsLoadingInitFinish()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA2B);
		}
		static ::System::Int32* StaticGet_ESGradientColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA2C);
		}
		static ::System::Int32* StaticGet_ESWispTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA30);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet_CRP_FOG_V2()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA34);
		}
		static ::System::Boolean* StaticGet_UseSDRReflectionCube()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA38);
		}
		static ::System::Boolean* StaticGet_s_UnloadLight()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA39);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet__MATERIAL_LUT_DEBUG()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA3C);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet__ENABLE_AO_REFLECTION()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA40);
		}
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet_CRP_FOG_ATMO()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA44);
		}
		static ::System::Int32* StaticGet_ESGradientAtlasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA48);
		}
		static ::System::Int32* StaticGet_EnvShaderQualityLowID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA4C);
		}
		static ::System::Int32* StaticGet_IndootShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA50);
		}
		static ::System::Int32* StaticGet_ESMultiWindowCharacterLightDirID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA54);
		}
		static ::System::Int32* StaticGet_ESPlayerPosID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem_TypeDefinitionIndex)->GetStaticField(0xA58);
		}
		// static const ::System::String* ENV_SYS_PREFAB_PATH; // 0x0
		// static const ::System::String* ENV_CONFIG_PATH; // 0x0
		::UnityEngine::Light* IndoorCharaLight; // 0x18
		::UnityEngine::ComputeShader* m_GpuParticleCS; // 0x20
		::UnityEngine::Mesh* m_GpuParticleMesh; // 0x28
		::UnityEngine::Mesh* m_QuadMesh; // 0x30
		::System::Boolean IsSkipInit; // 0x38
		::System::String* EnableCloudLayerKeyWord; // 0x40
		::System::String* EnableParanomaWord; // 0x48
		::System::Boolean UseLevelMainLightRoateOffset; // 0x50
		::Class_1_2E60775A830BA9A1* _ProfileStack; // 0x58
		::Il2CppArray<::UnityEngine::Renderer*>* BakedRenderers; // 0x60
		::Il2CppArray<::UnityEngine::ReflectionProbe*>* BakedReflectionProbes; // 0x68
		::UnityEngine::Vector4 TaskSetMainLightDirVal; // 0x70
		::UnityEngine::Vector4 TimelineKMainLightDirVal; // 0x80
		::System::Int32 CurrentPriority; // 0x90
		::System::String* CurrentProfileName; // 0x98
		::System::Boolean IsTaskSyncShadowAndSceneLight; // 0xA0
		::UnityEngine::Vector4 UIainLightDirVal; // 0xA4
		::System::Int32 SetMainLightOpIndex; // 0xB4
		::UnityEngine::Vector3 MainLightRotateOffset; // 0xB8
		::System::UInt32 MainLightBoolBitSwitch; // 0xC4
		::System::Single TargetGolbalMainIntensity; // 0xC8
		::System::String* CurrentSceneProfilePath; // 0xD0
		::System::Boolean _envlocalOverridePosition; // 0xD8
		::UnityEngine::Vector3 _overridePosition; // 0xDC
		::System::Boolean _IsInitialized; // 0xE8
		::System::Boolean _IsInAsyncInitEnviromentSystem; // 0xE9
		::System::Int32 _TransitionHandleCount; // 0xEC
		::System::Int32 _CurrentTransitionHandle; // 0xF0
		::System::Int32 _LightQualityVersion; // 0xF4
		::RPG::Client::FrameCaptureManager* _FrameCaptureManager; // 0xF8
		::RPG::Client::PPEffectManager* _PPEffectManager; // 0x100
		::Class_1_A392F01C781E3108* _MaterialEffectManager; // 0x108
		::Class_1_990E4282A5D5942A* _CapsuleAOManager; // 0x110
		::Class_1_24B10CB562F3162A* _EnvLocalVolumeManager; // 0x118
		::System::Boolean _MonsterLightDirSyncWithCamera; // 0x120
		::UnityEngine::Object* EnvAsset; // 0x128
		::System::Boolean DebugMode; // 0x130
		::UnityEngine::Light* _SceneLight; // 0x138
		::RPG::CustomRP::CustomAdditionalLightData* _SceneLightAdditionalData; // 0x140
		::UnityEngine::Light* _SceneShadowLight; // 0x148
		::RPG::CustomRP::CustomAdditionalLightData* _ShadowLightAdditionData; // 0x150
		::UnityEngine::Light* _CharaLight; // 0x158
		::RPG::CustomRP::CustomAdditionalLightData* _CharaLightAdditionData; // 0x160
		::UnityEngine::Transform* _SkyBox; // 0x168
		::UnityEngine::Transform* _FakeSkyBox; // 0x170
		::UnityEngine::Renderer* _Atmosphere; // 0x178
		::UnityEngine::Renderer* _CloudLayer; // 0x180
		::UnityEngine::Renderer* _Celestial; // 0x188
		::RPG::CustomRP::VolumetricFogController* _VFController; // 0x190
		::Class_2_D865BB63FE6CF6EB_1* _EnvLocalAtmosphereObj; // 0x198
		::UnityEngine::Transform* _UAtmosphereScatteringSkyBox; // 0x1A0
		::UnityEngine::Transform* _AtmosphereScatteringSkyBox; // 0x1A8
		::UnityEngine::Renderer* _AtmosphereScattering; // 0x1B0
		::UnityEngine::Renderer* _UAtmosphereScattering; // 0x1B8
		::UnityEngine::MaterialPropertyBlock* _AtmosphereScatteringMPB; // 0x1C0
		::UnityEngine::MaterialPropertyBlock* _UAtmosphereScatteringMPB; // 0x1C8
		::UnityEngine::Transform* _AtmophereScatteringSun; // 0x1D0
		::UnityEngine::Transform* _AtmophereScatteringMoon; // 0x1D8
		::UnityEngine::Vector4 RecordMonsterLightDirVal; // 0x1E0
		::UnityEngine::Vector4 RecordMainLightDirVal; // 0x1F0
		::System::Int32 RecordPriority; // 0x200
		::UnityEngine::Vector3 MainLightLevelRoateOffset; // 0x204
		::System::Boolean StartGlobalMainIntensity; // 0x210
		::System::Single GlobalMainIntensityFadeDuration; // 0x214

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Void LogFilter(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOGFILTER_OFFSET))(a1);
		}

		static ::System::Void AdjustTempTextureSize(::System::Int32 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ADJUSTTEMPTEXTURESIZE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::EnvironmentSystem* get_Instance()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::EnvironmentSystem* a1)
		{
			return ((::System::Void(*)(::RPG::Client::EnvironmentSystem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SET_INSTANCE_OFFSET))(a1);
		}

		static ::System::String* GetCurrentActiveProfileName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETCURRENTACTIVEPROFILENAME_OFFSET))();
		}

		static ::System::Void NotifyEnvChange(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_NOTIFYENVCHANGE_OFFSET))(a1);
		}

		static ::System::String* ExtractFileName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_EXTRACTFILENAME_OFFSET))(a1);
		}

		static ::RPG::Client::EnvironmentSystem* GetInstanceBoth()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETINSTANCEBOTH_OFFSET))();
		}

		::System::Int32 Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_VERSION_OFFSET))(this);
		}

		::SceneLightVolume* GetActiveSceneLightVolume()
		{
			return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETACTIVESCENELIGHTVOLUME_OFFSET))(this);
		}

		::System::Void AddDynamicBlockLight(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ADDDYNAMICBLOCKLIGHT_OFFSET))(this, a1);
		}

		::System::Void RemoveDynamicBlockLight(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_REMOVEDYNAMICBLOCKLIGHT_OFFSET))(this, a1);
		}

		::System::Void UpdateLightManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_UPDATELIGHTMANAGER_OFFSET))(this);
		}

		static ::System::Boolean IsPatchUseEnvSystemV2()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ISPATCHUSEENVSYSTEMV2_OFFSET))();
		}

		static ::System::Void InitShaderKeyWordPropertySetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITSHADERKEYWORDPROPERTYSETTING_OFFSET))();
		}

		static ::System::Void LoadBaseConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOADBASECONFIG_OFFSET))();
		}

		static ::System::Void SetEnableLightPreload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLELIGHTPRELOAD_OFFSET))();
		}

		static ::RPG::Client::EnvironmentSystem* CreateEnvironmentSystem()
		{
			return ((::RPG::Client::EnvironmentSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CREATEENVIRONMENTSYSTEM_OFFSET))();
		}

		static ::System::Void ReleaseProfile(::Class_0_16E4307DCC419505_336* a1)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPROFILE_OFFSET))(a1);
		}

		static ::Class_0_16E4307DCC419505_336* LoadProfileSyncSimple(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_336*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNCSIMPLE_OFFSET))(a1);
		}

		::System::Void _ApplyPipelineAssetSettingsCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINEASSETSETTINGSCOMMON_OFFSET))(this);
		}

		::System::Void _ApplyPipelineShadowSettingsCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINESHADOWSETTINGSCOMMON_OFFSET))(this);
		}

		::System::Void _ApplyPipelineQualitySettingsCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__APPLYPIPELINEQUALITYSETTINGSCOMMON_OFFSET))(this);
		}

		::System::Void _SetGlobalReflectionProbeCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__SETGLOBALREFLECTIONPROBECOMMON_OFFSET))(this);
		}

		::System::Void _UpdateEnviroClipsByComponentCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEENVIROCLIPSBYCOMPONENTCOMMON_OFFSET))(this);
		}

		::System::Void _UpdateEnviroLightCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM__UPDATEENVIROLIGHTCOMMON_OFFSET))(this);
		}

		static ::System::Void OnStageTranslate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ONSTAGETRANSLATE_OFFSET))();
		}

		::System::Void RecordMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RECORDMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void RestoreMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESTOREMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void ResetPostProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETPOSTPROCESS_OFFSET))(this);
		}

		static ::Class_0_16E4307DCC419505_336* LoadProfileSync(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_336*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOADPROFILESYNC_OFFSET))(a1);
		}

		static ::System::Boolean IsNotFullEnvSys()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_ISNOTFULLENVSYS_OFFSET))();
		}

		static ::System::Void LoadGlobalResourceOnInitGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LOADGLOBALRESOURCEONINITGAME_OFFSET))();
		}

		static ::System::Void ReleaseGlobalResourceOnUnInitGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEGLOBALRESOURCEONUNINITGAME_OFFSET))();
		}

		static ::System::Void TryOnlyOnceInitProfile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_TRYONLYONCEINITPROFILE_OFFSET))();
		}

		static ::System::Void ForceUpdateShadowCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_FORCEUPDATESHADOWCACHE_OFFSET))();
		}

		::System::Void CancelAsyncInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CANCELASYNCINIT_OFFSET))(this);
		}

		::Class_1_24B10CB562F3162A* GetLocalVolumeManager()
		{
			return ((::Class_1_24B10CB562F3162A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETLOCALVOLUMEMANAGER_OFFSET))(this);
		}

		::System::Void ClearEnviroPatch(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARENVIROPATCH_OFFSET))(this, a1);
		}

		::RPG::Client::PPEffectManager* GetPPEffectManager()
		{
			return ((::RPG::Client::PPEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETPPEFFECTMANAGER_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CLEAR_OFFSET))(this);
		}

		::System::Void InitPerLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITPERLEVEL_OFFSET))(this);
		}

		::System::Void ClearPerLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARPERLEVEL_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_UNINIT_OFFSET))(this);
		}

		::System::Void InitEnvironmentSystem(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEM_OFFSET))(this, a1);
		}

		::System::Void SetEnableSkyBox(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESKYBOX_OFFSET))(this, a1);
		}

		::System::Void DisableEnvGPUParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVGPUPARTICLE_OFFSET))(this);
		}

		::System::Void DisableEnvParticle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_DISABLEENVPARTICLE_OFFSET))(this);
		}

		::System::Void SetEnableUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLEUPDATE_OFFSET))(this, a1);
		}

		::System::Void SetEnableShadowLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESHADOWLIGHT_OFFSET))(this, a1);
		}

		::System::Void SetEnableCharaLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLECHARALIGHT_OFFSET))(this, a1);
		}

		::System::Void SetEnableSceneLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENABLESCENELIGHT_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_LATETICK_OFFSET))(this, a1);
		}

		::RPG::Client::FrameCaptureManager* GetFrameCaptureManager()
		{
			return ((::RPG::Client::FrameCaptureManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETFRAMECAPTUREMANAGER_OFFSET))(this);
		}

		::System::Void FinishTransition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHTRANSITION_OFFSET))(this, a1);
		}

		::System::Boolean GetIsCurSwitchWork(::RPG::Client::MainlightSwitchType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainlightSwitchType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETISCURSWITCHWORK_OFFSET))(this, a1);
		}

		::System::Void SetMainLightSwitch(::RPG::Client::MainlightSwitchType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainlightSwitchType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETMAINLIGHTSWITCH_OFFSET))(this, a1, a2);
		}

		::System::Void InitEnvironmentSystemAsync(::Class_0_16E4307DCC419505_336* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITENVIRONMENTSYSTEMASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void ResetMainLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETMAINLIGHT_OFFSET))(this);
		}

		::Class_1_DA5BEDF62053421B* GetEnvTransitManager()
		{
			return ((::Class_1_DA5BEDF62053421B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETENVTRANSITMANAGER_OFFSET))(this);
		}

		::Class_1_990E4282A5D5942A* GetCapsuleAOManager()
		{
			return ((::Class_1_990E4282A5D5942A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETCAPSULEAOMANAGER_OFFSET))(this);
		}

		::System::Boolean Init(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INIT_OFFSET))(this, a1);
		}

		::System::Void ForceInitPPEffectManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_FORCEINITPPEFFECTMANAGER_OFFSET))(this);
		}

		::System::Void ResetMainLightRoatateOffet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETMAINLIGHTROATATEOFFET_OFFSET))(this);
		}

		::System::Boolean GetIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETISVALID_OFFSET))(this);
		}

		::Class_1_A392F01C781E3108* GetMaterialEffectManager()
		{
			return ((::Class_1_A392F01C781E3108*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETMATERIALEFFECTMANAGER_OFFSET))(this);
		}

		::System::Void ResetLevelMainLightRoatateOffet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETLEVELMAINLIGHTROATATEOFFET_OFFSET))(this);
		}

		::System::Void SetMonsterLightByCameraDir(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETMONSTERLIGHTBYCAMERADIR_OFFSET))(this, a1);
		}

		::System::Void ResetActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RESETACTIVEPROFILE_OFFSET))(this);
		}

		::System::Void SetActiveProfileAsync(::Class_0_16E4307DCC419505_336* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetActiveProfile(::Class_0_16E4307DCC419505_336* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILE_OFFSET))(this, a1, a2);
		}

		::System::Void SetActiveProfileWithDuration(::Class_0_16E4307DCC419505_336* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2, ::RPG::GameCore::EnviromentControlPriority a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEWITHDURATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetActiveProfileAsyncWithDuration(::Class_0_16E4307DCC419505_336* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2, ::RPG::GameCore::EnviromentControlPriority a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETACTIVEPROFILEASYNCWITHDURATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReleasePriorityWithDuration(::RPG::GameCore::EnviromentControlPriority a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITYWITHDURATION_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETFLOATPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVectorPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETVECTORPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBoolPatch(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETBOOLPATCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ApplyPatchToActiveProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_APPLYPATCHTOACTIVEPROFILE_OFFSET))(this);
		}

		::System::Int32 ReleasePriority(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RELEASEPRIORITY_OFFSET))(this, a1, a2);
		}

		::System::Void CancelTransition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CANCELTRANSITION_OFFSET))(this, a1);
		}

		::System::Void SetTransitionRate(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONRATE_OFFSET))(this, a1, a2);
		}

		::System::Int32 SetTransitionTargetProfile(::Class_0_16E4307DCC419505_336* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETTRANSITIONTARGETPROFILE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasPriority(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_HASPRIORITY_OFFSET))(this, a1);
		}

		::System::Void FinishAllTransitions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_FINISHALLTRANSITIONS_OFFSET))(this);
		}

		::System::Void InitProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_INITPROFILE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_336* get_ActiveProfile()
		{
			return ((::Class_0_16E4307DCC419505_336*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GET_ACTIVEPROFILE_OFFSET))(this);
		}

		::System::Int32 GetLightQualityVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETLIGHTQUALITYVERSION_OFFSET))(this);
		}

		::System::Void SetStageVersion(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETSTAGEVERSION_OFFSET))(this, a1);
		}

		::System::Void GetData(::UnityEngine::Rendering::AmbientVolumneData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETDATA_OFFSET))(this, a1);
		}

		::System::Void Set(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SET_OFFSET))(this, a1);
		}

		::System::Void Render(::RPG::CustomRP::GameCameraType a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_RENDER_OFFSET))(this, a1, a2);
		}

		::System::Void SetEnvLocalVolumeOverridePosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_SETENVLOCALVOLUMEOVERRIDEPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean TryGetSEnvLocalVolumeOverridePosition(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_TRYGETSENVLOCALVOLUMEOVERRIDEPOSITION_OFFSET))(this, a1);
		}

		::System::Void ClearLocalVolumeOverridePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_CLEARLOCALVOLUMEOVERRIDEPOSITION_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_336* GetTODProfile()
		{
			return ((::Class_0_16E4307DCC419505_336*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETTODPROFILE_OFFSET))(this);
		}

		static ::System::Void GetProfileAssets(::EnviromentSystem::EnviromentProfile* a1, ::Il2CppArray<::System::String*>*& a2, ::Il2CppArray<::System::Type*>*& a3)
		{
			return ((::System::Void(*)(::EnviromentSystem::EnviromentProfile*, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM_GETPROFILEASSETS_OFFSET))(a1, a2, a3);
		}
	};
}
