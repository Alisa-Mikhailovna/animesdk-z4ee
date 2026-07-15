#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Leg.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Pelvis.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/RootMotion/NativeCurve.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABC6490)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET UNITYSDK_OFFSET(0xABC8B40)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET UNITYSDK_OFFSET(0xABC6500)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0xABC8DD0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0xABC6470)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET UNITYSDK_OFFSET(0xABC68D0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0xABC87C0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0xABBD560)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0xABB8520)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_TypeDefinitionIndex = 42678;

	class GroundingThread : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::GroundingThread_Pelvis pelvis; // 0x10
		::RootMotion::IKJob::IKTransformRef root; // 0x40
		::Il2CppArray<::RootMotion::FinalIK::GroundingThread_Leg>* legs; // 0x50
		::System::Single footRotationSpeed; // 0x58
		::System::Boolean stayOriginIfNoGround; // 0x5C
		::System::Boolean IsRootMove; // 0x5D
		::System::Boolean useToeBone; // 0x5E
		::System::Boolean bUseStepUp; // 0x5F
		::System::Single maxFootRotationAngle; // 0x60
		::RootMotion::FinalIK::GroundRaycastHit rootHit; // 0x64
		::UnityEngine::Vector3 deltaRootPosition; // 0x88
		::UnityEngine::Quaternion deltaRootRotation; // 0x94
		::System::Single rootSphereCastRadius; // 0xA4
		::System::Single prediction; // 0xA8
		::System::Single footSpeed; // 0xAC
		::UnityEngine::Vector3 lastRootPosition; // 0xB0
		::System::Single footRadius; // 0xBC
		::System::Single IKRotationWeight; // 0xC0
		::System::Single pelvisSpeed; // 0xC4
		::System::Single IKPositionWeight; // 0xC8
		::System::Single maxStep; // 0xCC
		::System::Single pelvisDamper; // 0xD0
		::System::Boolean rotateSolver; // 0xD4
		::System::Boolean isGrounded; // 0xD5
		::System::Single heightOffset; // 0xD8
		::UnityEngine::LayerMask layers; // 0xDC
		::RootMotion::NativeCurve maxFootUpperRotateRatioCurve; // 0xE0
		::System::Single liftPelvisWeight; // 0xF8
		::System::Single lowerPelvisWeight; // 0xFC
		::System::Single maxFootRotationRollAngle; // 0x100
		::UnityEngine::Quaternion lastRootRotation; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD__CTOR_OFFSET))(this);
		}

		::System::Boolean get_rootGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET))(this);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetRootHit(::System::Single a1)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET))(this);
		}

		::UnityEngine::Vector3 Flatten(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET))(this, a1);
		}

		::System::Single GetVerticalOffset(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_useRootRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET))(this);
		}
	};
}
