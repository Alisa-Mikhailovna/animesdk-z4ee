#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/MatchTargetFields.h"

#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_HASANY_OFFSET UNITYSDK_OFFSET(0x1CFBE500)
#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1CFBE540)
#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFBE550)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MatchTargetFieldConstants_TypeDefinitionIndex = 36623;

	class MatchTargetFieldConstants : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_Position()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x13FD0);
		}
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_All()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x13FD4);
		}
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_Rotation()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x13FD8);
		}
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_None()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x13FDC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS__CCTOR_OFFSET))();
		}

		static ::System::Boolean HasAny(::UnityEngine::Timeline::MatchTargetFields a1, ::UnityEngine::Timeline::MatchTargetFields a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::MatchTargetFields, ::UnityEngine::Timeline::MatchTargetFields))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_HASANY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Timeline::MatchTargetFields Toggle(::UnityEngine::Timeline::MatchTargetFields a1, ::UnityEngine::Timeline::MatchTargetFields a2)
		{
			return ((::UnityEngine::Timeline::MatchTargetFields(*)(::UnityEngine::Timeline::MatchTargetFields, ::UnityEngine::Timeline::MatchTargetFields))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_TOGGLE_OFFSET))(a1, a2);
		}
	};
}
