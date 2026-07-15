#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_UTILITY_DAMPER_DAMP_1_OFFSET UNITYSDK_OFFSET(0x15700060)
#define CINEMACHINE_UTILITY_DAMPER_DAMP_2_OFFSET UNITYSDK_OFFSET(0x157003D0)
#define CINEMACHINE_UTILITY_DAMPER_DAMP_OFFSET UNITYSDK_OFFSET(0x156FFFF0)
#define CINEMACHINE_UTILITY_DAMPER_DECAYCONSTANT_OFFSET UNITYSDK_OFFSET(0x156FFF90)
#define CINEMACHINE_UTILITY_DAMPER_DECAYEDREMAINDER_OFFSET UNITYSDK_OFFSET(0x156FFFC0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int Damper_TypeDefinitionIndex = 37737;

	class Damper : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0
		// static const ::System::Single kNegligibleResidual; // 0x0
		// static const ::System::Single kLogNegligibleResidual; // 0x0

		static ::System::Single DecayConstant(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DECAYCONSTANT_OFFSET))(a1, a2);
		}

		static ::System::Single DecayedRemainder(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DECAYEDREMAINDER_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Damp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DAMP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 Damp_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DAMP_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 Damp_2(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_DAMPER_DAMP_2_OFFSET))(a1, a2, a3);
		}
	};
}
