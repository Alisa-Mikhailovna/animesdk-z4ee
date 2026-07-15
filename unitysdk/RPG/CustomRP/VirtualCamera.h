#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define RPG_CUSTOMRP_VIRTUALCAMERA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1AAC2320)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0x1AAC2260)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1AAC22A0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1AAC2240)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1AAC2280)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AAC22C0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_PROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1AAC19D0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1AAC2300)
#define RPG_CUSTOMRP_VIRTUALCAMERA_GET_WORLDTOCAMERAMATRIX_OFFSET UNITYSDK_OFFSET(0x1AAC1FD0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1AAC2430)
#define RPG_CUSTOMRP_VIRTUALCAMERA_RESETPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1AAC2420)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SETORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1AAC24B0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_ASPECT_OFFSET UNITYSDK_OFFSET(0x1AAC2270)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1AAC22B0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1AAC2250)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1AAC2290)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AAC22E0)
#define RPG_CUSTOMRP_VIRTUALCAMERA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1AAC2310)
#define RPG_CUSTOMRP_VIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAC24C0)
#define RPG_CUSTOMRP_VIRTUALCAMERA__SETORTHO_OFFSET UNITYSDK_OFFSET(0x1AAC1D10)
#define RPG_CUSTOMRP_VIRTUALCAMERA__SETPERSPECTIVE_OFFSET UNITYSDK_OFFSET(0x1AAC1EB0)
#define RPG_CUSTOMRP_VIRTUALCAMERA__WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1AAC2130)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VirtualCamera_TypeDefinitionIndex = 36381;

	class VirtualCamera : public ::System::Object
	{
	public:
		::System::Single _OrthographicSize; // 0x10
		::UnityEngine::Quaternion _Rotation; // 0x14
		::System::Single _FarClip; // 0x24
		::System::Single _Aspect; // 0x28
		::UnityEngine::Vector3 _Translate; // 0x2C
		::UnityEngine::Matrix4x4 _View; // 0x38
		::System::Single _NearClip; // 0x78
		::System::Boolean _Orthographic; // 0x7C
		::System::Boolean _ProjectionDirty; // 0x7D
		::System::Boolean _ViewDirty; // 0x7E
		::UnityEngine::Matrix4x4 _Projection; // 0x80
		::System::Single _FOV; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_projectionMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_PROJECTIONMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_worldToCameraMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_WORLDTOCAMERAMATRIX_OFFSET))(this);
		}

		::System::Single get_fieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Void set_fieldOfView(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_FIELDOFVIEW_OFFSET))(this, a1);
		}

		::System::Single get_aspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_ASPECT_OFFSET))(this);
		}

		::System::Void set_aspect(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_ASPECT_OFFSET))(this, a1);
		}

		::System::Single get_nearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_nearClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_NEARCLIPPLANE_OFFSET))(this, a1);
		}

		::System::Single get_farClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_farClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_FARCLIPPLANE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void ResetProjectionMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_RESETPROJECTIONMATRIX_OFFSET))(this);
		}

		::System::Void LookAt(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_LOOKAT_OFFSET))(this, a1);
		}

		::System::Void SetOrthographic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA_SETORTHOGRAPHIC_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 _SetPerspective(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA__SETPERSPECTIVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Matrix4x4 _SetOrtho(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA__SETORTHO_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Matrix4x4 _WorldToLocal(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VIRTUALCAMERA__WORLDTOLOCAL_OFFSET))(this, a1, a2, a3);
		}
	};
}
