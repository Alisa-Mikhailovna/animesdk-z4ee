#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/AxisState.h"
#include "unitysdk/Cinemachine/AxisState_Recentering.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineOrbitalTransposer_Heading.h"
#include "unitysdk/Cinemachine/CinemachineTransposer.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_TransitionParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineOrbitalTransposer_UpdateHeadingDelegate; }
namespace Cinemachine { class ICinemachineCamera; }
namespace Cinemachine::Utility { class HeadingTracker; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x156E4520)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETAXISCLOSESTVALUE_OFFSET UNITYSDK_OFFSET(0x156D7DE0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETFULLNAME_OFFSET UNITYSDK_OFFSET(0x156E7150)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x156D9460)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETHEADING_OFFSET UNITYSDK_OFFSET(0x156E3110)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_LASTHEADING_OFFSET UNITYSDK_OFFSET(0x156E4C80)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_PREVIOUSTARGET_OFFSET UNITYSDK_OFFSET(0x156E39E0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x156E4CA0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x156E38C0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x156E3A00)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x156E49C0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x156E28A0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONWORLDWARPED_OFFSET UNITYSDK_OFFSET(0x156E3E00)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_SET_LASTHEADING_OFFSET UNITYSDK_OFFSET(0x156E4C90)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_SET_PREVIOUSTARGET_OFFSET UNITYSDK_OFFSET(0x156E39F0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_1_OFFSET UNITYSDK_OFFSET(0x156DAC20)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_OFFSET UNITYSDK_OFFSET(0x156E2A50)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x156E3960)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x156E7220)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer_TypeDefinitionIndex = 37625;

	class CinemachineOrbitalTransposer : public ::Cinemachine::CinemachineTransposer
	{
	public:
		::Cinemachine::CinemachineOrbitalTransposer_Heading m_Heading; // 0xC8
		::Cinemachine::AxisState_Recentering m_RecenterToTargetHeading; // 0xD4
		::Cinemachine::AxisState m_XAxis; // 0xF0
		::System::Single m_LegacyRadius; // 0x168
		::System::Single m_LegacyHeightOffset; // 0x16C
		::System::Single m_LegacyHeadingBias; // 0x170
		::System::Boolean m_HeadingIsSlave; // 0x174
		::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate* HeadingUpdater; // 0x178
		::UnityEngine::Vector3 mLastTargetPosition; // 0x180
		::Cinemachine::Utility::HeadingTracker* mHeadingTracker; // 0x190
		::UnityEngine::Rigidbody* mTargetRigidBody; // 0x198
		::UnityEngine::Transform* _PreviousTarget_k__BackingField; // 0x1A0
		::UnityEngine::Vector3 mLastCameraPosition; // 0x1A8
		::System::Single _LastHeading_k__BackingField; // 0x1B4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONVALIDATE_OFFSET))(this);
		}

		::System::Single UpdateHeading(::System::Single a1, ::UnityEngine::Vector3 a2, ::Cinemachine::AxisState& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::Cinemachine::AxisState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Single UpdateHeading_1(::System::Single a1, ::UnityEngine::Vector3 a2, ::Cinemachine::AxisState& a3, ::Cinemachine::AxisState_Recentering& a4, ::System::Boolean a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::Cinemachine::AxisState&, ::Cinemachine::AxisState_Recentering&, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateInputAxisProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEINPUTAXISPROVIDER_OFFSET))(this);
		}

		::UnityEngine::Transform* get_PreviousTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_PREVIOUSTARGET_OFFSET))(this);
		}

		::System::Void set_PreviousTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_SET_PREVIOUSTARGET_OFFSET))(this, a1);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void OnWorldWarped(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONWORLDWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single GetAxisClosestValue(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETAXISCLOSESTVALUE_OFFSET))(this, a1, a2);
		}

		::System::Single get_LastHeading()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_LASTHEADING_OFFSET))(this);
		}

		::System::Void set_LastHeading(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_SET_LASTHEADING_OFFSET))(this, a1);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_MUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetTargetCameraPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET))(this, a1);
		}

		static ::System::String* GetFullName(::UnityEngine::GameObject* a1)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETFULLNAME_OFFSET))(a1);
		}

		::System::Single GetTargetHeading(::System::Single a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETHEADING_OFFSET))(this, a1, a2);
		}
	};
}
