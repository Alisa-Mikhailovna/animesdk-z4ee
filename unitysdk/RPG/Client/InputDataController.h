#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ClientInputData; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1; }

#define RPG_CLIENT_INPUTDATACONTROLLER_APPLYCAMERAROTATIONSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xC8DBBB0)
#define RPG_CLIENT_INPUTDATACONTROLLER_CLEARINPUTDATA_OFFSET UNITYSDK_OFFSET(0xC8DB3B0)
#define RPG_CLIENT_INPUTDATACONTROLLER_CREATE_OFFSET UNITYSDK_OFFSET(0xC8DB0F0)
#define RPG_CLIENT_INPUTDATACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8DC2B0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_HASPLAYERMOVEINPUTINLASTFRAME_OFFSET UNITYSDK_OFFSET(0xC8DD130)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0xC8DCC90)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTMOTIONFLAG_OFFSET UNITYSDK_OFFSET(0xC8DD0F0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0xC8DD110)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0xC8DCD50)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xC8DCCF0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISDISALLOWPLAYERRUSH_OFFSET UNITYSDK_OFFSET(0xC8DCE00)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDRUSH_OFFSET UNITYSDK_OFFSET(0xC8DCE90)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDWALK_OFFSET UNITYSDK_OFFSET(0xC8DCF20)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORCEWALK_OFFSET UNITYSDK_OFFSET(0xC8DB790)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSETTINGFORCEWALK_OFFSET UNITYSDK_OFFSET(0xC8DD0E0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSTORYFORCEWALK_OFFSET UNITYSDK_OFFSET(0xC8DD0D0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENHEIGHTININCH_OFFSET UNITYSDK_OFFSET(0xC8DCCD0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENWIDTHININCH_OFFSET UNITYSDK_OFFSET(0xC8DCCB0)
#define RPG_CLIENT_INPUTDATACONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC8DB310)
#define RPG_CLIENT_INPUTDATACONTROLLER_RESETCAMERAROTATIONDATA_OFFSET UNITYSDK_OFFSET(0xC8DB8B0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERATOUCHDOWN_OFFSET UNITYSDK_OFFSET(0xC8DC250)
#define RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERAZOOMINPUTDATA_OFFSET UNITYSDK_OFFSET(0xC8DBB20)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0xC8DCCA0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTMOTIONFLAG_OFFSET UNITYSDK_OFFSET(0xC8DD100)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0xC8DD120)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0xC8DCD60)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xC8DCD00)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDRUSH_OFFSET UNITYSDK_OFFSET(0xC8DCEA0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDWALK_OFFSET UNITYSDK_OFFSET(0xC8DCF30)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORCEWALK_OFFSET UNITYSDK_OFFSET(0xC8DCDB0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSETTINGFORCEWALK_OFFSET UNITYSDK_OFFSET(0xC8DC430)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSTORYFORCEWALK_OFFSET UNITYSDK_OFFSET(0xC8DCF90)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENHEIGHTININCH_OFFSET UNITYSDK_OFFSET(0xC8DCCE0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENWIDTHININCH_OFFSET UNITYSDK_OFFSET(0xC8DCCC0)
#define RPG_CLIENT_INPUTDATACONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0xC8DB7F0)
#define RPG_CLIENT_INPUTDATACONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xC8DB850)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYRUN_OFFSET UNITYSDK_OFFSET(0xC8DB5A0)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAROTATIONINPUTDATA_OFFSET UNITYSDK_OFFSET(0xC8DBCF0)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAZOOMPINCHDELTA_OFFSET UNITYSDK_OFFSET(0xC8DB9E0)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYWALK_OFFSET UNITYSDK_OFFSET(0xC8DB400)
#define RPG_CLIENT_INPUTDATACONTROLLER__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8DC580)
#define RPG_CLIENT_INPUTDATACONTROLLER__CALCULATECACHEDATAWEIGHT_OFFSET UNITYSDK_OFFSET(0xC8DCBF0)
#define RPG_CLIENT_INPUTDATACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC8DB160)
#define RPG_CLIENT_INPUTDATACONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0xC8DB180)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0xC8DC720)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xC8DC810)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONRESETCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0xC8DCA80)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0xC8DC9C0)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xC8DC900)
#define RPG_CLIENT_INPUTDATACONTROLLER__SETCAMERAROTATIONINPUTDATA_OFFSET UNITYSDK_OFFSET(0xC8DBFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int InputDataController_TypeDefinitionIndex = 58568;

	class InputDataController : public ::System::Object
	{
	public:
		// static const ::System::Single MOUSE_MOVING_X_SCALE_FACTOR; // 0x0
		// static const ::System::Single MOUSE_MOVING_Y_SCALE_FACTOR; // 0x0
		// static const ::System::Int32 _INPUT_CACHE_DATA_MAX_COUNT = 0xA; // 0x0
		// static const ::System::Single _DEFAULT_DPI; // 0x0
		::System::Collections::Generic::CacheLinkedList_1<::UnityEngine::Vector2>* _CameraRotationInputCache; // 0x10
		::RPG::Client::ClientInputData* _InputData_k__BackingField; // 0x18
		::System::Boolean bSettingForceWalk; // 0x20
		::System::Boolean _bForbidWalk; // 0x21
		::System::Boolean bPlayerMove; // 0x22
		::System::Boolean bCanCameraRotation; // 0x23
		::System::Single _ScreenWidthInInch_k__BackingField; // 0x24
		::System::Boolean _IsBlocked_k__BackingField; // 0x28
		::System::Boolean bHasPlayerMoveInputInLastFrame; // 0x29
		::System::Boolean bStoryForceWalk; // 0x2A
		::System::Single ZOOMING_SCALE_FACTOR; // 0x2C
		::System::Single _ScreenHeightInInch_k__BackingField; // 0x30
		::RPG::GameCore::CharacterMotionFlag _InputMotionFlag; // 0x34
		::System::Boolean _bForbidRush; // 0x38
		::System::Boolean bCanCameraZoom; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::InputDataController* Create()
		{
			return ((::RPG::Client::InputDataController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_CREATE_OFFSET))();
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ClearInputData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_CLEARINPUTDATA_OFFSET))(this);
		}

		::System::Void TryWalk(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYWALK_OFFSET))(this, a1);
		}

		::System::Void TryRun(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYRUN_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_STOP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TICK_OFFSET))(this, a1);
		}

		::System::Void ResetCameraRotationData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_RESETCAMERAROTATIONDATA_OFFSET))(this);
		}

		::System::Void TrySetCameraZoomPinchDelta(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAZOOMPINCHDELTA_OFFSET))(this, a1);
		}

		static ::System::Void ApplyCameraRotationScaleFactor(::System::Single& a1, ::System::Single& a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_APPLYCAMERAROTATIONSCALEFACTOR_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void TrySetCameraRotationInputData(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAROTATIONINPUTDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetCameraZoomInputData(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERAZOOMINPUTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetCameraTouchDown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERATOUCHDOWN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnApplicationFocusChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONFOCUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnApplicationPause(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void _OnUnLockCameraZoom(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAZOOM_OFFSET))(this, a1);
		}

		::System::Void _OnUnLockCameraRotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAROTATION_OFFSET))(this, a1);
		}

		::System::Void _OnResetCameraRotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONRESETCAMERAROTATION_OFFSET))(this, a1);
		}

		::System::Void _SetCameraRotationInputData(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__SETCAMERAROTATIONINPUTDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Single _CalculateCacheDataWeight(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__CALCULATECACHEDATAWEIGHT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ClientInputData* get_InputData()
		{
			return ((::RPG::Client::ClientInputData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTDATA_OFFSET))(this);
		}

		::System::Void set_InputData(::RPG::Client::ClientInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClientInputData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTDATA_OFFSET))(this, a1);
		}

		::System::Single get_ScreenWidthInInch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENWIDTHININCH_OFFSET))(this);
		}

		::System::Void set_ScreenWidthInInch(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENWIDTHININCH_OFFSET))(this, a1);
		}

		::System::Single get_ScreenHeightInInch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENHEIGHTININCH_OFFSET))(this);
		}

		::System::Void set_ScreenHeightInInch(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENHEIGHTININCH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanCameraZoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAZOOM_OFFSET))(this);
		}

		::System::Void set_IsCanCameraZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAZOOM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanCameraRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAROTATION_OFFSET))(this);
		}

		::System::Void set_IsCanCameraRotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAROTATION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsForceWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORCEWALK_OFFSET))(this);
		}

		::System::Void set_IsForceWalk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORCEWALK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisallowPlayerRush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISDISALLOWPLAYERRUSH_OFFSET))(this);
		}

		::System::Boolean get_IsForbidRush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDRUSH_OFFSET))(this);
		}

		::System::Void set_IsForbidRush(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDRUSH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsForbidWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDWALK_OFFSET))(this);
		}

		::System::Void set_IsForbidWalk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDWALK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStoryForceWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSTORYFORCEWALK_OFFSET))(this);
		}

		::System::Void set_IsStoryForceWalk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSTORYFORCEWALK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSettingForceWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSETTINGFORCEWALK_OFFSET))(this);
		}

		::System::Void set_IsSettingForceWalk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSETTINGFORCEWALK_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterMotionFlag get_InputMotionFlag()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTMOTIONFLAG_OFFSET))(this);
		}

		::System::Void set_InputMotionFlag(::RPG::GameCore::CharacterMotionFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTMOTIONFLAG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISBLOCKED_OFFSET))(this);
		}

		::System::Void set_IsBlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISBLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPlayerMoveInputInLastFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_HASPLAYERMOVEINPUTINLASTFRAME_OFFSET))(this);
		}
	};
}
