#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/RPGCamera/CameraStateMgr_CameraStateCmd.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class CameraStack; }
namespace RPGCamera { class CameraStateBlender; }
namespace RPGCamera { class CameraStatePostProcesser; }
namespace RPGCamera { class ICameraState; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Camera; }

#define RPGCAMERA_CAMERASTATEMGR_BINDCAMERA_OFFSET UNITYSDK_OFFSET(0xAB97D50)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTCOMD_OFFSET UNITYSDK_OFFSET(0xAB98E70)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTINTERNAL_OFFSET UNITYSDK_OFFSET(0xAB98C40)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTNEXT_OFFSET UNITYSDK_OFFSET(0xAB98D90)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTPOSTPROCESSER_OFFSET UNITYSDK_OFFSET(0xAB98EE0)
#define RPGCAMERA_CAMERASTATEMGR_COLLECTTOP_OFFSET UNITYSDK_OFFSET(0xAB98C10)
#define RPGCAMERA_CAMERASTATEMGR_COLLECT_OFFSET UNITYSDK_OFFSET(0xAB98DC0)
#define RPGCAMERA_CAMERASTATEMGR_FINDNEXT_OFFSET UNITYSDK_OFFSET(0xAB987A0)
#define RPGCAMERA_CAMERASTATEMGR_FINDTOP_OFFSET UNITYSDK_OFFSET(0xAB98650)
#define RPGCAMERA_CAMERASTATEMGR_FLUSHPOSTPROCESSERINTERNAL_OFFSET UNITYSDK_OFFSET(0xAB997B0)
#define RPGCAMERA_CAMERASTATEMGR_FLUSHSTATEDATA_OFFSET UNITYSDK_OFFSET(0xAB99850)
#define RPGCAMERA_CAMERASTATEMGR_FLUSHSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xAB99660)
#define RPGCAMERA_CAMERASTATEMGR_FLUSH_OFFSET UNITYSDK_OFFSET(0xAB992A0)
#define RPGCAMERA_CAMERASTATEMGR_GETSTATEBYTYPE_OFFSET UNITYSDK_OFFSET(0xAB98090)
#define RPGCAMERA_CAMERASTATEMGR_GET_BLENDER_OFFSET UNITYSDK_OFFSET(0xAB97D00)
#define RPGCAMERA_CAMERASTATEMGR_GET_POSTPROCESSER_OFFSET UNITYSDK_OFFSET(0xAB97D30)
#define RPGCAMERA_CAMERASTATEMGR_GET_STATE0_OFFSET UNITYSDK_OFFSET(0xAB97D10)
#define RPGCAMERA_CAMERASTATEMGR_GET_STATE1_OFFSET UNITYSDK_OFFSET(0xAB97D20)
#define RPGCAMERA_CAMERASTATEMGR_GET_STATELIST_OFFSET UNITYSDK_OFFSET(0xAB97CF0)
#define RPGCAMERA_CAMERASTATEMGR_POSTFLUSHTOP_OFFSET UNITYSDK_OFFSET(0xAB99A10)
#define RPGCAMERA_CAMERASTATEMGR_REGISTERSTATE_OFFSET UNITYSDK_OFFSET(0xAB97D60)
#define RPGCAMERA_CAMERASTATEMGR_SETPOSTPROCESSER_OFFSET UNITYSDK_OFFSET(0xAB97D40)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEBYTYPE_OFFSET UNITYSDK_OFFSET(0xAB985C0)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEIMMDIATELY_OFFSET UNITYSDK_OFFSET(0xAB98140)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xAB98150)
#define RPGCAMERA_CAMERASTATEMGR_SPAWNSTATE_OFFSET UNITYSDK_OFFSET(0xAB98110)
#define RPGCAMERA_CAMERASTATEMGR_TICKINTERNAL_OFFSET UNITYSDK_OFFSET(0xAB99130)
#define RPGCAMERA_CAMERASTATEMGR_TICK_OFFSET UNITYSDK_OFFSET(0xAB99010)
#define RPGCAMERA_CAMERASTATEMGR_UNREGISTERSTATE_OFFSET UNITYSDK_OFFSET(0xAB97F50)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEBYTYPE_OFFSET UNITYSDK_OFFSET(0xAB98B80)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEIMMDIATELY_OFFSET UNITYSDK_OFFSET(0xAB98930)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xAB98940)
#define RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATE_OFFSET UNITYSDK_OFFSET(0xAB98900)
#define RPGCAMERA_CAMERASTATEMGR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB99B40)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateMgr_TypeDefinitionIndex = 42626;

	class CameraStateMgr : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPGCamera::ICameraState*>* _stateList; // 0x10
		::RPGCamera::CameraStack* _stack; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::ICameraState*>* _statePool; // 0x20
		::UnityEngine::Camera* _camera; // 0x28
		::RPGCamera::ICameraState* _state1; // 0x30
		::System::Collections::Generic::Queue_1<::RPGCamera::CameraStateMgr_CameraStateCmd>* _cmdQueue; // 0x38
		::RPGCamera::CameraStatePostProcesser* _postProcesser; // 0x40
		::RPGCamera::ICameraState* _state0; // 0x48
		::RPGCamera::CameraStateBlender* _blender; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPGCamera::ICameraState*>* get_stateList()
		{
			return ((::System::Collections::Generic::List_1<::RPGCamera::ICameraState*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GET_STATELIST_OFFSET))(this);
		}

		::RPGCamera::CameraStateBlender* get_blender()
		{
			return ((::RPGCamera::CameraStateBlender*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GET_BLENDER_OFFSET))(this);
		}

		::RPGCamera::ICameraState* get_state0()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GET_STATE0_OFFSET))(this);
		}

		::RPGCamera::ICameraState* get_state1()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GET_STATE1_OFFSET))(this);
		}

		::RPGCamera::CameraStatePostProcesser* get_postProcesser()
		{
			return ((::RPGCamera::CameraStatePostProcesser*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GET_POSTPROCESSER_OFFSET))(this);
		}

		::System::Void SetPostProcesser(::RPGCamera::CameraStatePostProcesser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStatePostProcesser*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_SETPOSTPROCESSER_OFFSET))(this, a1);
		}

		::System::Void BindCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_BINDCAMERA_OFFSET))(this, a1);
		}

		::System::Void RegisterState(::RPGCamera::ICameraState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_REGISTERSTATE_OFFSET))(this, a1);
		}

		::System::Void UnregisterState(::RPGCamera::ICameraState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_UNREGISTERSTATE_OFFSET))(this, a1);
		}

		::RPGCamera::ICameraState* GetStateByType(::System::Int32 a1)
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_GETSTATEBYTYPE_OFFSET))(this, a1);
		}

		::System::Void SpawnState(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_SPAWNSTATE_OFFSET))(this, a1);
		}

		::System::Void SpawnStateImmdiately(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEIMMDIATELY_OFFSET))(this, a1);
		}

		::System::Void SpawnStateByType(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEBYTYPE_OFFSET))(this, a1);
		}

		::System::Void SpawnStateInternal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_SPAWNSTATEINTERNAL_OFFSET))(this, a1);
		}

		::System::Void UnSpawnState(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATE_OFFSET))(this, a1);
		}

		::System::Void UnSpawnStateImmdiately(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEIMMDIATELY_OFFSET))(this, a1);
		}

		::System::Void UnSpawnStateByType(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEBYTYPE_OFFSET))(this, a1);
		}

		::System::Void UnSpawnStateInternal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_UNSPAWNSTATEINTERNAL_OFFSET))(this, a1);
		}

		::System::Void CollectTop(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECTTOP_OFFSET))(this, a1);
		}

		::RPGCamera::ICameraState* FindTop()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FINDTOP_OFFSET))(this);
		}

		::System::Void CollectNext(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECTNEXT_OFFSET))(this, a1);
		}

		::RPGCamera::ICameraState* FindNext()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FINDNEXT_OFFSET))(this);
		}

		::System::Void Collect(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECT_OFFSET))(this, a1);
		}

		::System::Void CollectComd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECTCOMD_OFFSET))(this);
		}

		::System::Void CollectInternal(::RPGCamera::ICameraState* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECTINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void CollectPostProcesser(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_COLLECTPOSTPROCESSER_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_TICK_OFFSET))(this, a1);
		}

		::System::Void TickInternal(::RPGCamera::ICameraState* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_TICKINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void Flush(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FLUSH_OFFSET))(this, a1);
		}

		::System::Void FlushStateInternal(::RPGCamera::ICameraState* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FLUSHSTATEINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void FlushPostProcesserInternal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FLUSHPOSTPROCESSERINTERNAL_OFFSET))(this, a1);
		}

		::System::Void FlushStateData(::RPGCamera::CameraStateData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStateData))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_FLUSHSTATEDATA_OFFSET))(this, a1);
		}

		::System::Void PostFlushTop(::RPGCamera::ICameraState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEMGR_POSTFLUSHTOP_OFFSET))(this, a1);
		}
	};
}
