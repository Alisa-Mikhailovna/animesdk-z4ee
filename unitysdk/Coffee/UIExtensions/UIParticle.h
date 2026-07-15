#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIExtensions/UIParticle_AutoScalingMode.h"
#include "unitysdk/Coffee/UIExtensions/UIParticle_MeshSharing.h"
#include "unitysdk/Coffee/UIExtensions/UIParticle_PositionMode.h"
#include "unitysdk/UnityEngine/AdditionalCanvasShaderChannels.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Coffee::UIExtensions { class AnimatableProperty; }
namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x15707EB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GETBAKECAMERA_OFFSET UNITYSDK_OFFSET(0x157098F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GETMATERIALSFORRENDERING_OFFSET UNITYSDK_OFFSET(0x157063F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0x15708000)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GETRENDERER_OFFSET UNITYSDK_OFFSET(0x15708BD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ABSOLUTEMODE_OFFSET UNITYSDK_OFFSET(0x157069D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ADDITIONALCANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x157061F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_AUTOSCALINGMODE_OFFSET UNITYSDK_OFFSET(0x15706B00)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_AUTOSCALING_OFFSET UNITYSDK_OFFSET(0x15706A00)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANRENDER_OFFSET UNITYSDK_OFFSET(0x15706BB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANSIMULATE_OFFSET UNITYSDK_OFFSET(0x15706BA0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANVASSCALE_OFFSET UNITYSDK_OFFSET(0x15706DD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CUSTOMVIEWSIZE_OFFSET UNITYSDK_OFFSET(0x15706B30)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x157069A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x15706D70)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ISPRIMARY_OFFSET UNITYSDK_OFFSET(0x15706B90)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_MESHSHARING_OFFSET UNITYSDK_OFFSET(0x15706980)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_PARENTSCALE_OFFSET UNITYSDK_OFFSET(0x15706D90)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_PARTICLES_OFFSET UNITYSDK_OFFSET(0x15706D60)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x157069B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x15706960)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE3DFORCALC_OFFSET UNITYSDK_OFFSET(0x15706C40)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE3D_OFFSET UNITYSDK_OFFSET(0x15706C00)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x15706BD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_TIMESCALEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x15706B60)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_USECUSTOMVIEW_OFFSET UNITYSDK_OFFSET(0x15706B10)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_GET_USEMESHSHARING_OFFSET UNITYSDK_OFFSET(0x15706B80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x157077A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15707460)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15706E10)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x157065F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_PAUSEONTIME_OFFSET UNITYSDK_OFFSET(0x15706210)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_PAUSE_OFFSET UNITYSDK_OFFSET(0x15707960)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_PLAY_OFFSET UNITYSDK_OFFSET(0x15707810)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_1_OFFSET UNITYSDK_OFFSET(0x15708500)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_2_OFFSET UNITYSDK_OFFSET(0x15707120)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_OFFSET UNITYSDK_OFFSET(0x15707440)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_RESETGROUPID_OFFSET UNITYSDK_OFFSET(0x15707030)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_RESUME_OFFSET UNITYSDK_OFFSET(0x15707AB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x15708240)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMINSTANCE_OFFSET UNITYSDK_OFFSET(0x15708230)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMPREFAB_OFFSET UNITYSDK_OFFSET(0x15708830)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_ABSOLUTEMODE_OFFSET UNITYSDK_OFFSET(0x157069E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_AUTOSCALINGMODE_OFFSET UNITYSDK_OFFSET(0x15706A90)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_AUTOSCALING_OFFSET UNITYSDK_OFFSET(0x15706A10)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_CANVASSCALE_OFFSET UNITYSDK_OFFSET(0x15706DF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_CUSTOMVIEWSIZE_OFFSET UNITYSDK_OFFSET(0x15706B40)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x15706D80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_MESHSHARING_OFFSET UNITYSDK_OFFSET(0x15706990)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_PARENTSCALE_OFFSET UNITYSDK_OFFSET(0x15706DB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x157069C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x15706970)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_SCALE3D_OFFSET UNITYSDK_OFFSET(0x15706C20)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x15706BE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_TIMESCALEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x15706B70)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_SET_USECUSTOMVIEW_OFFSET UNITYSDK_OFFSET(0x15706B20)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_STARTEMISSION_OFFSET UNITYSDK_OFFSET(0x15707C10)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_STOPEMISSION_OFFSET UNITYSDK_OFFSET(0x15707D60)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_STOP_OFFSET UNITYSDK_OFFSET(0x15707AC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x157077C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x157077B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1570BA90)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1570BA80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATERENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1570BAA0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATERENDERERS_OFFSET UNITYSDK_OFFSET(0x157097D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATETRANSFORMSCALE_OFFSET UNITYSDK_OFFSET(0x15709210)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__CHECKCOMPONENTINANCESTOR_OFFSET UNITYSDK_OFFSET(0x15706740)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__CHECKNESTEDADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x15706630)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__CLEARCANVASCACHE_OFFSET UNITYSDK_OFFSET(0x15706640)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__COLLECTADDITIONALCANVASSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x15706200)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1570BF10)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__GETCACHEDPARENTCANVAS_OFFSET UNITYSDK_OFFSET(0x157067F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__GETNEARESTPARENTCANVAS_OFFSET UNITYSDK_OFFSET(0x157068A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__MESHSHARINGVALIDITYCHECK_OFFSET UNITYSDK_OFFSET(0x15706930)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__UPDATECANVASSETTING_OFFSET UNITYSDK_OFFSET(0x15706650)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle_TypeDefinitionIndex = 42347;

	class UIParticle : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::UnityEngine::Canvas* m_CachedParentCanvas; // 0xF0
		::System::Boolean m_IsAutoSave; // 0xF8
		::System::UInt64 m_GroupId; // 0x100
		::System::Boolean m_IsTrail; // 0x108
		::System::Boolean m_IgnoreCanvasScaler; // 0x109
		::System::Boolean m_AbsoluteMode; // 0x10A
		::UnityEngine::Vector3 m_Scale3D; // 0x10C
		::Il2CppArray<::Coffee::UIExtensions::AnimatableProperty*>* m_AnimatableProperties; // 0x118
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* m_Particles; // 0x120
		::Coffee::UIExtensions::UIParticle_MeshSharing m_MeshSharing; // 0x128
		::Coffee::UIExtensions::UIParticle_PositionMode m_PositionMode; // 0x12C
		::System::Boolean m_AutoScaling; // 0x130
		::Coffee::UIExtensions::UIParticle_AutoScalingMode m_AutoScalingMode; // 0x134
		::System::Boolean m_UseCustomView; // 0x138
		::System::Single m_CustomViewSize; // 0x13C
		::System::Single m_TimeScaleMultiplier; // 0x140
		::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>* _renderers; // 0x148
		::UnityEngine::Camera* _bakeCamera; // 0x150
		::System::UInt64 _groupId; // 0x158
		::System::Boolean _isScaleStored; // 0x160
		::UnityEngine::Vector3 _storedScale; // 0x164
		::UnityEngine::DrivenRectTransformTracker _tracker; // 0x170
		::System::Boolean _isPaused_k__BackingField; // 0x171
		::UnityEngine::Vector3 _parentScale_k__BackingField; // 0x174
		::UnityEngine::Vector3 _canvasScale_k__BackingField; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__CTOR_OFFSET))(this);
		}

		::UnityEngine::AdditionalCanvasShaderChannels get_AdditionalCanvasShaderChannels()
		{
			return ((::UnityEngine::AdditionalCanvasShaderChannels(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ADDITIONALCANVASSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void PauseOnTime(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_PAUSEONTIME_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetMaterialsForRendering()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GETMATERIALSFORRENDERING_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void _CheckNestedAddComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__CHECKNESTEDADDCOMPONENT_OFFSET))(this);
		}

		::System::Boolean _CheckComponentInAncestor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__CHECKCOMPONENTINANCESTOR_OFFSET))(this);
		}

		::System::Void _UpdateCanvasSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__UPDATECANVASSETTING_OFFSET))(this);
		}

		::UnityEngine::Canvas* _GetCachedParentCanvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GETCACHEDPARENTCANVAS_OFFSET))(this);
		}

		::UnityEngine::Canvas* _GetNearestParentCanvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GETNEARESTPARENTCANVAS_OFFSET))(this);
		}

		::System::Void _ClearCanvasCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__CLEARCANVASCACHE_OFFSET))(this);
		}

		::UnityEngine::AdditionalCanvasShaderChannels _CollectAdditionalCanvasShaderChannels()
		{
			return ((::UnityEngine::AdditionalCanvasShaderChannels(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__COLLECTADDITIONALCANVASSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void _MeshSharingValidityCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__MESHSHARINGVALIDITYCHECK_OFFSET))(this);
		}

		::System::Boolean get_raycastTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_RAYCASTTARGET_OFFSET))(this);
		}

		::System::Void set_raycastTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_RAYCASTTARGET_OFFSET))(this, a1);
		}

		::Coffee::UIExtensions::UIParticle_MeshSharing get_meshSharing()
		{
			return ((::Coffee::UIExtensions::UIParticle_MeshSharing(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_MESHSHARING_OFFSET))(this);
		}

		::System::Void set_meshSharing(::Coffee::UIExtensions::UIParticle_MeshSharing a1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle_MeshSharing))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_MESHSHARING_OFFSET))(this, a1);
		}

		::System::UInt64 get_groupId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_GROUPID_OFFSET))(this);
		}

		::Coffee::UIExtensions::UIParticle_PositionMode get_positionMode()
		{
			return ((::Coffee::UIExtensions::UIParticle_PositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_POSITIONMODE_OFFSET))(this);
		}

		::System::Void set_positionMode(::Coffee::UIExtensions::UIParticle_PositionMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle_PositionMode))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_POSITIONMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_absoluteMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ABSOLUTEMODE_OFFSET))(this);
		}

		::System::Void set_absoluteMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_ABSOLUTEMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_autoScaling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_AUTOSCALING_OFFSET))(this);
		}

		::System::Void set_autoScaling(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_AUTOSCALING_OFFSET))(this, a1);
		}

		::Coffee::UIExtensions::UIParticle_AutoScalingMode get_autoScalingMode()
		{
			return ((::Coffee::UIExtensions::UIParticle_AutoScalingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_AUTOSCALINGMODE_OFFSET))(this);
		}

		::System::Void set_autoScalingMode(::Coffee::UIExtensions::UIParticle_AutoScalingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle_AutoScalingMode))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_AUTOSCALINGMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_useCustomView()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_USECUSTOMVIEW_OFFSET))(this);
		}

		::System::Void set_useCustomView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_USECUSTOMVIEW_OFFSET))(this, a1);
		}

		::System::Single get_customViewSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CUSTOMVIEWSIZE_OFFSET))(this);
		}

		::System::Void set_customViewSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_CUSTOMVIEWSIZE_OFFSET))(this, a1);
		}

		::System::Single get_timeScaleMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_TIMESCALEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_timeScaleMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_TIMESCALEMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Boolean get_useMeshSharing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_USEMESHSHARING_OFFSET))(this);
		}

		::System::Boolean get_isPrimary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ISPRIMARY_OFFSET))(this);
		}

		::System::Boolean get_canSimulate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANSIMULATE_OFFSET))(this);
		}

		::System::Boolean get_canRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANRENDER_OFFSET))(this);
		}

		::System::Single get_scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_scale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_SCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_scale3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE3D_OFFSET))(this);
		}

		::System::Void set_scale3D(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_SCALE3D_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_scale3DForCalc()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_SCALE3DFORCALC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* get_particles()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_PARTICLES_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_isPaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_ISPAUSED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_parentScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_PARENTSCALE_OFFSET))(this);
		}

		::System::Void set_parentScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_PARENTSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_canvasScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GET_CANVASSCALE_OFFSET))(this);
		}

		::System::Void set_canvasScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SET_CANVASSCALE_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_PLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_RESUME_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_STOP_OFFSET))(this);
		}

		::System::Void StartEmission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_STARTEMISSION_OFFSET))(this);
		}

		::System::Void StopEmission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_STOPEMISSION_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_CLEAR_OFFSET))(this);
		}

		::System::Void GetMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GETMATERIALS_OFFSET))(this, a1);
		}

		::System::Void SetParticleSystemInstance(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMINSTANCE_OFFSET))(this, a1);
		}

		::System::Void SetParticleSystemInstance_1(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMINSTANCE_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetParticleSystemPrefab(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_SETPARTICLESYSTEMPREFAB_OFFSET))(this, a1);
		}

		::System::Void RefreshParticles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_OFFSET))(this);
		}

		::System::Void RefreshParticles_1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_1_OFFSET))(this, a1);
		}

		::System::Void RefreshParticles_2(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_REFRESHPARTICLES_2_OFFSET))(this, a1);
		}

		::System::Void UpdateTransformScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATETRANSFORMSCALE_OFFSET))(this);
		}

		::System::Void UpdateRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATERENDERERS_OFFSET))(this);
		}

		::System::Void ResetGroupId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_RESETGROUPID_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void UpdateRendererMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_UPDATERENDERERMATERIAL_OFFSET))(this);
		}

		::Coffee::UIExtensions::UIParticleRenderer* GetRenderer(::System::Int32 a1)
		{
			return ((::Coffee::UIExtensions::UIParticleRenderer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GETRENDERER_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* GetBakeCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE_GETBAKECAMERA_OFFSET))(this);
		}
	};
}
