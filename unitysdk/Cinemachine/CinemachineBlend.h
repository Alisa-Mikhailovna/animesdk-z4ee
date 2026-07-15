#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CINEMACHINE_CINEMACHINEBLEND_GET_BLENDCURVE_OFFSET UNITYSDK_OFFSET(0x156B7730)
#define CINEMACHINE_CINEMACHINEBLEND_GET_BLENDWEIGHT_OFFSET UNITYSDK_OFFSET(0x156B7770)
#define CINEMACHINE_CINEMACHINEBLEND_GET_CAMA_OFFSET UNITYSDK_OFFSET(0x156B76F0)
#define CINEMACHINE_CINEMACHINEBLEND_GET_CAMB_OFFSET UNITYSDK_OFFSET(0x156B7710)
#define CINEMACHINE_CINEMACHINEBLEND_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x156AF730)
#define CINEMACHINE_CINEMACHINEBLEND_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x156B7820)
#define CINEMACHINE_CINEMACHINEBLEND_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x156B7800)
#define CINEMACHINE_CINEMACHINEBLEND_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x156AFD10)
#define CINEMACHINE_CINEMACHINEBLEND_GET_STATE_OFFSET UNITYSDK_OFFSET(0x156B0400)
#define CINEMACHINE_CINEMACHINEBLEND_GET_TIMEINBLEND_OFFSET UNITYSDK_OFFSET(0x156B7750)
#define CINEMACHINE_CINEMACHINEBLEND_SET_BLENDCURVE_OFFSET UNITYSDK_OFFSET(0x156B7740)
#define CINEMACHINE_CINEMACHINEBLEND_SET_CAMA_OFFSET UNITYSDK_OFFSET(0x156B7700)
#define CINEMACHINE_CINEMACHINEBLEND_SET_CAMB_OFFSET UNITYSDK_OFFSET(0x156B7720)
#define CINEMACHINE_CINEMACHINEBLEND_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x156B7830)
#define CINEMACHINE_CINEMACHINEBLEND_SET_TIMEINBLEND_OFFSET UNITYSDK_OFFSET(0x156B7760)
#define CINEMACHINE_CINEMACHINEBLEND_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x156AFFC0)
#define CINEMACHINE_CINEMACHINEBLEND_USES_OFFSET UNITYSDK_OFFSET(0x156B7840)
#define CINEMACHINE_CINEMACHINEBLEND__CTOR_OFFSET UNITYSDK_OFFSET(0x156B7920)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlend_TypeDefinitionIndex = 37646;

	class CinemachineBlend : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* _BlendCurve_k__BackingField; // 0x10
		::Cinemachine::ICinemachineCamera* _CamB_k__BackingField; // 0x18
		::Cinemachine::ICinemachineCamera* _CamA_k__BackingField; // 0x20
		::System::Single _TimeInBlend_k__BackingField; // 0x28
		::System::Single _Duration_k__BackingField; // 0x2C

		::System::Void _ctor(::Cinemachine::ICinemachineCamera* a1, ::Cinemachine::ICinemachineCamera* a2, ::UnityEngine::AnimationCurve* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Cinemachine::ICinemachineCamera* get_CamA()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_CAMA_OFFSET))(this);
		}

		::System::Void set_CamA(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_SET_CAMA_OFFSET))(this, a1);
		}

		::Cinemachine::ICinemachineCamera* get_CamB()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_CAMB_OFFSET))(this);
		}

		::System::Void set_CamB(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_SET_CAMB_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_BlendCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_BLENDCURVE_OFFSET))(this);
		}

		::System::Void set_BlendCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_SET_BLENDCURVE_OFFSET))(this, a1);
		}

		::System::Single get_TimeInBlend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_TIMEINBLEND_OFFSET))(this);
		}

		::System::Void set_TimeInBlend(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_SET_TIMEINBLEND_OFFSET))(this, a1);
		}

		::System::Single get_BlendWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_BLENDWEIGHT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_ISVALID_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_SET_DURATION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Boolean Uses(::Cinemachine::ICinemachineCamera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_USES_OFFSET))(this, a1);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_UPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_STATE_OFFSET))(this);
		}
	};
}
