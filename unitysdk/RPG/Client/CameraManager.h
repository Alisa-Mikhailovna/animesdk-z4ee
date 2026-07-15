#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MainCameraDisableReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Camera; }

#define RPG_CLIENT_CAMERAMANAGER_ADDUICAMERATOCAMERASTACK_OFFSET UNITYSDK_OFFSET(0xBF44820)
#define RPG_CLIENT_CAMERAMANAGER_DISABLEMAINCAMERA_OFFSET UNITYSDK_OFFSET(0xBF44B20)
#define RPG_CLIENT_CAMERAMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF44330)
#define RPG_CLIENT_CAMERAMANAGER_ENABLEMAINCAMERA_OFFSET UNITYSDK_OFFSET(0xBF449F0)
#define RPG_CLIENT_CAMERAMANAGER_GET_ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xBF44D00)
#define RPG_CLIENT_CAMERAMANAGER_GET_DEVICEADAPTEDCAMERARECT_OFFSET UNITYSDK_OFFSET(0xBF44BE0)
#define RPG_CLIENT_CAMERAMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xBF44D20)
#define RPG_CLIENT_CAMERAMANAGER_GET_MAINCAMERA_OFFSET UNITYSDK_OFFSET(0xBF44CA0)
#define RPG_CLIENT_CAMERAMANAGER_GET_UI3DCAMERA_OFFSET UNITYSDK_OFFSET(0xBF44CE0)
#define RPG_CLIENT_CAMERAMANAGER_GET_UICAMERA_OFFSET UNITYSDK_OFFSET(0xBF44CC0)
#define RPG_CLIENT_CAMERAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xBF43F20)
#define RPG_CLIENT_CAMERAMANAGER_MUTEMAINCAMERAMASK_OFFSET UNITYSDK_OFFSET(0xBF44990)
#define RPG_CLIENT_CAMERAMANAGER_RECOVERMAINCAMERAMASK_OFFSET UNITYSDK_OFFSET(0xBF443C0)
#define RPG_CLIENT_CAMERAMANAGER_REFRESHCAMERAADAPTION_OFFSET UNITYSDK_OFFSET(0xBF44050)
#define RPG_CLIENT_CAMERAMANAGER_RESETDISABLEMAINCAMERA_OFFSET UNITYSDK_OFFSET(0xBF43FD0)
#define RPG_CLIENT_CAMERAMANAGER_SETACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xBF44420)
#define RPG_CLIENT_CAMERAMANAGER_SET_ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xBF44D10)
#define RPG_CLIENT_CAMERAMANAGER_SET_MAINCAMERA_OFFSET UNITYSDK_OFFSET(0xBF44CB0)
#define RPG_CLIENT_CAMERAMANAGER_SET_UI3DCAMERA_OFFSET UNITYSDK_OFFSET(0xBF44CF0)
#define RPG_CLIENT_CAMERAMANAGER_SET_UICAMERA_OFFSET UNITYSDK_OFFSET(0xBF44CD0)
#define RPG_CLIENT_CAMERAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBF44D50)
#define RPG_CLIENT_CAMERAMANAGER__REFRESHDISABLEMAINCAMERA_OFFSET UNITYSDK_OFFSET(0xBF44AB0)
#define RPG_CLIENT_CAMERAMANAGER__SETCAMERARECT_OFFSET UNITYSDK_OFFSET(0xBF44C20)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraManager_TypeDefinitionIndex = 66479;

	class CameraManager : public ::System::Object
	{
	public:
		::UnityEngine::Camera* _UICamera_k__BackingField; // 0x10
		::UnityEngine::Camera* _UI3DCamera_k__BackingField; // 0x18
		::UnityEngine::Camera* _MainCamera_k__BackingField; // 0x20
		::UnityEngine::Camera* _ActiveCamera_k__BackingField; // 0x28
		::RPG::Client::ReasonBool_1<::RPG::Client::MainCameraDisableReason> _MainCameraEnableReasonBool; // 0x30
		::System::Int32 _orginalMainCameraMask; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetActiveCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_SETACTIVECAMERA_OFFSET))(this, a1);
		}

		::System::Void AddUICameraToCameraStack(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_ADDUICAMERATOCAMERASTACK_OFFSET))(this, a1);
		}

		::System::Void MuteMainCameraMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_MUTEMAINCAMERAMASK_OFFSET))(this);
		}

		::System::Void RecoverMainCameraMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_RECOVERMAINCAMERAMASK_OFFSET))(this);
		}

		::System::Void EnableMainCamera(::RPG::Client::MainCameraDisableReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainCameraDisableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_ENABLEMAINCAMERA_OFFSET))(this, a1);
		}

		::System::Void DisableMainCamera(::RPG::Client::MainCameraDisableReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainCameraDisableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_DISABLEMAINCAMERA_OFFSET))(this, a1);
		}

		::System::Void ResetDisableMainCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_RESETDISABLEMAINCAMERA_OFFSET))(this);
		}

		::System::Void _RefreshDisableMainCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER__REFRESHDISABLEMAINCAMERA_OFFSET))(this);
		}

		::System::Void RefreshCameraAdaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_REFRESHCAMERAADAPTION_OFFSET))(this);
		}

		::UnityEngine::Rect get_DeviceAdaptedCameraRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_DEVICEADAPTEDCAMERARECT_OFFSET))(this);
		}

		::System::Void _SetCameraRect(::UnityEngine::Camera* a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER__SETCAMERARECT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Camera* get_MainCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_MAINCAMERA_OFFSET))(this);
		}

		::System::Void set_MainCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_SET_MAINCAMERA_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* get_UICamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_UICAMERA_OFFSET))(this);
		}

		::System::Void set_UICamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_SET_UICAMERA_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* get_UI3DCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_UI3DCAMERA_OFFSET))(this);
		}

		::System::Void set_UI3DCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_SET_UI3DCAMERA_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* get_ActiveCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_ACTIVECAMERA_OFFSET))(this);
		}

		::System::Void set_ActiveCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_SET_ACTIVECAMERA_OFFSET))(this, a1);
		}

		static ::RPG::Client::CameraManager* get_Instance()
		{
			return ((::RPG::Client::CameraManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_INSTANCE_OFFSET))();
		}
	};
}
