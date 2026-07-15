#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UI3DCameraStateBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineFreeLook; }
namespace RPG::Client { class InputDataController; }
namespace RPG::Client { class UI3DFreeLookController; }
namespace RPG::GameCore { class UI3DCameraFreeLookSetting; }
namespace RPG::GameCore { class UI3DVirtualCameraComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_ENABLECAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xDC50350)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0xDC50C60)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xDC50AC0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GET__FREELOOKCAMERA_OFFSET UNITYSDK_OFFSET(0xDC50490)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INITSETTING_OFFSET UNITYSDK_OFFSET(0xDC50030)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INIT_OFFSET UNITYSDK_OFFSET(0xDC4F710)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDC4EA70)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESETZOOM_OFFSET UNITYSDK_OFFSET(0xDC4FDE0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESET_OFFSET UNITYSDK_OFFSET(0xDC4F8E0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETAXISVALUETOCAMERA_OFFSET UNITYSDK_OFFSET(0xDC50D30)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOWPOINTNAME_OFFSET UNITYSDK_OFFSET(0xDC50300)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOW_OFFSET UNITYSDK_OFFSET(0xDC4F970)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKATPOINTNAME_OFFSET UNITYSDK_OFFSET(0xDC502B0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0xDC4F920)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CALCULATEZOOMRATIO_OFFSET UNITYSDK_OFFSET(0xDC4EC20)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATEDUMMYLOOKATPOINT_OFFSET UNITYSDK_OFFSET(0xDC4FB10)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xDC503A0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xDC50E10)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__DEFAULTZOOM_OFFSET UNITYSDK_OFFSET(0xDC4FD40)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETLERPINTERP_OFFSET UNITYSDK_OFFSET(0xDC509B0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETORBITSHEIGHT_OFFSET UNITYSDK_OFFSET(0xDC50890)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETYAXISCLAMPVALUE_OFFSET UNITYSDK_OFFSET(0xDC50920)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETZOOMINTERP_OFFSET UNITYSDK_OFFSET(0xDC50590)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__LERPDURATION_OFFSET UNITYSDK_OFFSET(0xDC50830)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__NEEDLERPPOSITION_OFFSET UNITYSDK_OFFSET(0xDC50770)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONACTIVE_OFFSET UNITYSDK_OFFSET(0xDC4F9C0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONDEACTIVE_OFFSET UNITYSDK_OFFSET(0xDC4FDA0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONSETTINGCHANGED_OFFSET UNITYSDK_OFFSET(0xDC50210)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETCAMERAAXIS_OFFSET UNITYSDK_OFFSET(0xDC4FCB0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0xDC4FE70)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__SETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0xDC4EB20)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAROT_OFFSET UNITYSDK_OFFSET(0xDC4F650)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xDC4F1D0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATELOOKATANDFOLLOW_OFFSET UNITYSDK_OFFSET(0xDC4EFB0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMAX_OFFSET UNITYSDK_OFFSET(0xDC4FFD0)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMIN_OFFSET UNITYSDK_OFFSET(0xDC50530)
#define RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMSPEED_OFFSET UNITYSDK_OFFSET(0xDC504D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCameraFreeLookState_TypeDefinitionIndex = 54968;

	class UI3DCameraFreeLookState : public ::RPG::GameCore::UI3DCameraStateBase
	{
	public:
		::UnityEngine::Transform* _DummyLookAtTrans; // 0x30
		::System::String* _LookAtPointName; // 0x38
		::RPG::GameCore::UI3DCameraFreeLookSetting* _Setting; // 0x40
		::UnityEngine::Transform* _DummyFollowTrans; // 0x48
		::RPG::Client::InputDataController* _InputController; // 0x50
		::RPG::Client::UI3DFreeLookController* _FreeLookController; // 0x58
		::System::String* _FollowPointName; // 0x60
		::System::Single _ZoomSmoothVelocity; // 0x68
		::System::Single _CurrentZoom; // 0x6C
		::UnityEngine::Vector3 _PerviousLookAtPosition; // 0x70
		::System::Single _SettingChangedTime; // 0x7C
		::System::Single _LastDisSmooth; // 0x80
		::System::Boolean _EnableCameraZoom; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::UI3DVirtualCameraComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INIT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESET_OFFSET))(this);
		}

		::System::Void SetLookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKAT_OFFSET))(this, a1);
		}

		::System::Void SetFollow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOW_OFFSET))(this, a1);
		}

		::System::Void _OnActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONACTIVE_OFFSET))(this);
		}

		::System::Void _OnDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONDEACTIVE_OFFSET))(this);
		}

		::System::Void ResetZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_RESETZOOM_OFFSET))(this);
		}

		::System::Void InitSetting(::RPG::GameCore::UI3DCameraFreeLookSetting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DCameraFreeLookSetting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_INITSETTING_OFFSET))(this, a1);
		}

		::System::Void SetLookAtPointName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETLOOKATPOINTNAME_OFFSET))(this, a1);
		}

		::System::Void SetFollowPointName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETFOLLOWPOINTNAME_OFFSET))(this, a1);
		}

		::System::Void EnableCameraZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_ENABLECAMERAZOOM_OFFSET))(this, a1);
		}

		::System::Void _CreateDummyLookAtPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATEDUMMYLOOKATPOINT_OFFSET))(this);
		}

		::UnityEngine::Transform* _CreateTransform(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CREATETRANSFORM_OFFSET))(this, a1);
		}

		::System::Void _SetInputAxisProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__SETINPUTAXISPROVIDER_OFFSET))(this);
		}

		::System::Single _CalculateZoomRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__CALCULATEZOOMRATIO_OFFSET))(this);
		}

		::System::Single _ZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMIN_OFFSET))(this);
		}

		::System::Single _ZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMMAX_OFFSET))(this);
		}

		::System::Single _ZoomSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ZOOMSPEED_OFFSET))(this);
		}

		::System::Single _DefaultZoom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__DEFAULTZOOM_OFFSET))(this);
		}

		::System::Void _ResetLookAtPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETLOOKATPOSITION_OFFSET))(this);
		}

		::System::Void _UpdateLookAtAndFollow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATELOOKATANDFOLLOW_OFFSET))(this, a1);
		}

		::System::Boolean _NeedLerpPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__NEEDLERPPOSITION_OFFSET))(this);
		}

		::System::Single _LerpDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__LERPDURATION_OFFSET))(this);
		}

		::System::Void _UpdateCameraZoom(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAZOOM_OFFSET))(this, a1);
		}

		::System::Void _UpdateCameraRot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__UPDATECAMERAROT_OFFSET))(this);
		}

		::System::Single _GetOrbitsHeight(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETORBITSHEIGHT_OFFSET))(this, a1);
		}

		::System::Single _GetYAxisClampValue(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETYAXISCLAMPVALUE_OFFSET))(this, a1);
		}

		::System::Single _GetZoomInterp(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETZOOMINTERP_OFFSET))(this, a1);
		}

		::System::Single _GetLerpInterp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__GETLERPINTERP_OFFSET))(this);
		}

		::System::Void _ResetCameraAxis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__RESETCAMERAAXIS_OFFSET))(this);
		}

		::System::Void _OnSettingChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE__ONSETTINGCHANGED_OFFSET))(this);
		}

		::System::Single GetAxisValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUE_OFFSET))(this, a1);
		}

		::System::Single GetAxisValueFromCamera(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GETAXISVALUEFROMCAMERA_OFFSET))(this, a1);
		}

		::System::Void SetAxisValueToCamera(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_SETAXISVALUETOCAMERA_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineFreeLook* get__FreeLookCamera()
		{
			return ((::Cinemachine::CinemachineFreeLook*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSTATE_GET__FREELOOKCAMERA_OFFSET))(this);
		}
	};
}
