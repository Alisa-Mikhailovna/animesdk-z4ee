#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_298;
class Class_1_004034A1FAAF468A;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class ICinemachineCamera; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class LevelAnchorInfo; }
namespace RPG::GameCore { class LevelAreaActiveVirtualCameraParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_LEVELAREAMANAGER_ACQUIREACTIVEVCAMPARAM_OFFSET UNITYSDK_OFFSET(0xDAC6250)
#define RPG_GAMECORE_LEVELAREAMANAGER_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xDAC4660)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDGROUPAREA_OFFSET UNITYSDK_OFFSET(0xDAC2190)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREAASYNC_OFFSET UNITYSDK_OFFSET(0xDAC2BB0)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_1_OFFSET UNITYSDK_OFFSET(0xDAC2D50)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_OFFSET UNITYSDK_OFFSET(0xDAC2C20)
#define RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVEALLVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xDAC5240)
#define RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVECURRENTVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xDAC51E0)
#define RPG_GAMECORE_LEVELAREAMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAC16C0)
#define RPG_GAMECORE_LEVELAREAMANAGER_FINDANCHOR_OFFSET UNITYSDK_OFFSET(0xDAC4280)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERATRANSFORMFROMANCHORMAP_OFFSET UNITYSDK_OFFSET(0xDAC5F20)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xDAC5C20)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETAREANAMEBYGROUPID_OFFSET UNITYSDK_OFFSET(0xDAC3FE0)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETCOIN40ANCHOR_OFFSET UNITYSDK_OFFSET(0xDAC43C0)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREANAMEBYCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xDAC2B60)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREAROOTTRANS_OFFSET UNITYSDK_OFFSET(0xDAC1230)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETMONSTERCENTERTRANS_OFFSET UNITYSDK_OFFSET(0xDAC1460)
#define RPG_GAMECORE_LEVELAREAMANAGER_GET_HASACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xDAC6760)
#define RPG_GAMECORE_LEVELAREAMANAGER_GET_LASTLEVELAREANAME_OFFSET UNITYSDK_OFFSET(0xDAC6370)
#define RPG_GAMECORE_LEVELAREAMANAGER_GET_STAGEGOROOT_OFFSET UNITYSDK_OFFSET(0xDAC67C0)
#define RPG_GAMECORE_LEVELAREAMANAGER_HASAREA_OFFSET UNITYSDK_OFFSET(0xDAC3F50)
#define RPG_GAMECORE_LEVELAREAMANAGER_REGISTERMAINCAMERAANCHOR_OFFSET UNITYSDK_OFFSET(0xDAC3BD0)
#define RPG_GAMECORE_LEVELAREAMANAGER_RELEASEACTIVEVCAMPARAM_OFFSET UNITYSDK_OFFSET(0xDAC62C0)
#define RPG_GAMECORE_LEVELAREAMANAGER_REMOVELEVELAREA_OFFSET UNITYSDK_OFFSET(0xDAC3750)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETBASETRANSFORM_OFFSET UNITYSDK_OFFSET(0xDAC61C0)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0xDAC1280)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xDAC1350)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xDAC13E0)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0xDAC15C0)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xDAC14B0)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xDAC1540)
#define RPG_GAMECORE_LEVELAREAMANAGER_SET_STAGEGOROOT_OFFSET UNITYSDK_OFFSET(0xDAC67D0)
#define RPG_GAMECORE_LEVELAREAMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xDAC1AA0)
#define RPG_GAMECORE_LEVELAREAMANAGER_TRYFINDANCHORBYGROUPIDANDID_OFFSET UNITYSDK_OFFSET(0xDAC4070)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_B__13_0_OFFSET UNITYSDK_OFFSET(0xDAC67E0)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDWAITTICKDEACTIVEVCAM_OFFSET UNITYSDK_OFFSET(0xDAC5B40)
#define RPG_GAMECORE_LEVELAREAMANAGER__CHECKVCAMDISABLEPROTECTWHENBLENDING_OFFSET UNITYSDK_OFFSET(0xDAC1CF0)
#define RPG_GAMECORE_LEVELAREAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC0E90)
#define RPG_GAMECORE_LEVELAREAMANAGER__ISDYNAMICANCHOR_OFFSET UNITYSDK_OFFSET(0xDAC6410)
#define RPG_GAMECORE_LEVELAREAMANAGER__ONLEVELAREALOADED_OFFSET UNITYSDK_OFFSET(0xDAC2E30)
#define RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFOLIST_OFFSET UNITYSDK_OFFSET(0xDAC1B10)
#define RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFO_OFFSET UNITYSDK_OFFSET(0xDAC6490)
#define RPG_GAMECORE_LEVELAREAMANAGER__REMOVEWAITTICKDEACTIVEVCAM_OFFSET UNITYSDK_OFFSET(0xDAC5170)
#define RPG_GAMECORE_LEVELAREAMANAGER__TICKWAITDEACTIVEVCAM_OFFSET UNITYSDK_OFFSET(0xDAC1EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAreaManager_TypeDefinitionIndex = 55269;

	class LevelAreaManager : public ::System::Object
	{
	public:
		// static const ::System::Single VIRTUAL_CAMERA_NEAR_CLIP; // 0x0
		// static const ::System::Single VIRTUAL_CAMERA_FAR_CLIP; // 0x0
		::System::Collections::Generic::Stack_1<::RPG::GameCore::LevelAreaActiveVirtualCameraParam*>* _ActiveVCamParamPool; // 0x10
		::System::Collections::Generic::List_1<::Class_1_004034A1FAAF468A*>* _LevelAreaList; // 0x18
		::UnityEngine::GameObject* _MonsterCenterGO; // 0x20
		::System::String* _ActiveVirtualCameraAreaName; // 0x28
		::UnityEngine::GameObject* _CameraAnchorGO; // 0x30
		::RPG::Client::IAssetOperation* _LoadLevelAreaAssetOpt; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AnchorInfo*>*>* _AnchorMap; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _GroupIDToAreaName; // 0x48
		::UnityEngine::GameObject* _LevelAreaGORoot; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* _WaitDeactiveCamera; // 0x58
		::UnityEngine::GameObject* _RotatableRegionAnchorGO; // 0x60
		::UnityEngine::GameObject* _StageGORoot_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _LookAtCameraTemplateAsset; // 0x70
		::Cinemachine::ICinemachineCamera* _VCamNeedDisableProtectWhenBlending; // 0x78
		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* _DynamicAnchorInfoList; // 0x80
		::UnityEngine::Transform* _BaseTransform; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLevelAreaRootTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREAROOTTRANS_OFFSET))(this);
		}

		::System::Void SetLevelAreaWorldPositionOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITIONOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetLevelAreaWorldPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLevelAreaWorldRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetMonsterCenterTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETMONSTERCENTERTRANS_OFFSET))(this);
		}

		::System::Void SetMonsterCenterWorldPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetMonsterCenterWorldRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDROTATION_OFFSET))(this, a1);
		}

		::System::Void SetMonsterCenterPositionOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERPOSITIONOFFSET_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::String* AddGroupArea(::System::String* a1, ::Il2CppArray<::RPG::GameCore::LevelAnchorInfo*>* a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::LevelAnchorInfo*>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDGROUPAREA_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::String* GetLevelAreaNameByConfigPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREANAMEBYCONFIGPATH_OFFSET))(a1);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>* AddLevelAreaAsync(::System::String* a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREAASYNC_OFFSET))(this, a1);
		}

		::System::String* AddLevelArea(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_OFFSET))(this, a1, a2);
		}

		::System::String* AddLevelArea_1(::System::String* a1, ::System::Boolean a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveLevelArea(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_REMOVELEVELAREA_OFFSET))(this, a1);
		}

		::System::Boolean RegisterMainCameraAnchor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_REGISTERMAINCAMERAANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasArea(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_HASAREA_OFFSET))(this, a1);
		}

		::System::String* GetAreaNameByGroupID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETAREANAMEBYGROUPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::AnchorInfo* TryFindAnchorByGroupIDAndID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_TRYFINDANCHORBYGROUPIDANDID_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AnchorInfo* FindAnchor(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_FINDANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* GetCoin40Anchor(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETCOIN40ANCHOR_OFFSET))(this, a1);
		}

		::System::Void ActiveVirtualCamera(::System::String* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5, ::System::Nullable_1<::UnityEngine::Vector2> a6, ::System::Boolean a7, ::RPG::GameCore::LevelAreaActiveVirtualCameraParam* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector2>, ::System::Boolean, ::RPG::GameCore::LevelAreaActiveVirtualCameraParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ACTIVEVIRTUALCAMERA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void DeActiveCurrentVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVECURRENTVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void DeActiveAllVirtualCamera(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVEALLVIRTUALCAMERA_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineVirtualCamera* GetActiveVirtualCamera(::System::String* a1, ::System::String* a2)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AnchorInfo* GetActiveVirtualCameraTransformFromAnchorMap(::System::String* a1)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERATRANSFORMFROMANCHORMAP_OFFSET))(this, a1);
		}

		::System::Void SetBaseTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETBASETRANSFORM_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelAreaActiveVirtualCameraParam* AcquireActiveVCamParam()
		{
			return ((::RPG::GameCore::LevelAreaActiveVirtualCameraParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ACQUIREACTIVEVCAMPARAM_OFFSET))(this);
		}

		::System::Void ReleaseActiveVCamParam(::RPG::GameCore::LevelAreaActiveVirtualCameraParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaActiveVirtualCameraParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_RELEASEACTIVEVCAMPARAM_OFFSET))(this, a1);
		}

		::System::String* get_LastLevelAreaName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GET_LASTLEVELAREANAME_OFFSET))(this);
		}

		::System::String* _OnLevelAreaLoaded(::UnityEngine::Object* a1, ::System::Boolean a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Object*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ONLEVELAREALOADED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _IsDynamicAnchor(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ISDYNAMICANCHOR_OFFSET))(this, a1);
		}

		::System::Void _RefreshDynamicAnchorInfoList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFOLIST_OFFSET))(this);
		}

		::System::Void _RefreshDynamicAnchorInfo(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFO_OFFSET))(this, a1);
		}

		::System::Void _CheckVCamDisableProtectWhenBlending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__CHECKVCAMDISABLEPROTECTWHENBLENDING_OFFSET))(this);
		}

		::System::Void _TickWaitDeactiveVCam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__TICKWAITDEACTIVEVCAM_OFFSET))(this);
		}

		::System::Void _AddWaitTickDeactiveVCam(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDWAITTICKDEACTIVEVCAM_OFFSET))(this, a1);
		}

		::System::Void _RemoveWaitTickDeactiveVCam(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__REMOVEWAITTICKDEACTIVEVCAM_OFFSET))(this, a1);
		}

		::System::Boolean get_HasActiveVirtualCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GET_HASACTIVEVIRTUALCAMERA_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_StageGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GET_STAGEGOROOT_OFFSET))(this);
		}

		::System::Void set_StageGORoot(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SET_STAGEGOROOT_OFFSET))(this, a1);
		}

		::System::Boolean _AddLevelAreaAsync_b__13_0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_B__13_0_OFFSET))(this, a1);
		}
	};
}
