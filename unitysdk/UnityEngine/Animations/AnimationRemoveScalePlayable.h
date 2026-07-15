#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CFE9F60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CFE9E30)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1CFE9C00)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1CFE9AA0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A230C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x2D156E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1CFE9E80)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFE9F70)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3A22FB0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationRemoveScalePlayable_TypeDefinitionIndex = 5183;

	struct alignas(8) AnimationRemoveScalePlayable
	{
		static ::UnityEngine::Animations::AnimationRemoveScalePlayable* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Animations::AnimationRemoveScalePlayable*)Il2CppClass::FromTypeDefinitionIndex(AnimationRemoveScalePlayable_TypeDefinitionIndex)->GetStaticField(0x9950);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10

		::System::Void _ctor(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Animations::AnimationRemoveScalePlayable Create(::UnityEngine::Playables::PlayableGraph a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Animations::AnimationRemoveScalePlayable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLE_OFFSET))(a1, a2);
		}
		*/

		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Playables::Playable op_Implicit(::UnityEngine::Animations::AnimationRemoveScalePlayable a1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Animations::AnimationRemoveScalePlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Animations::AnimationRemoveScalePlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationRemoveScalePlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_EQUALS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::PlayableHandle& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Playables::PlayableHandle& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Playables::PlayableHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(a1, a2);
		}
		*/
	};
}
