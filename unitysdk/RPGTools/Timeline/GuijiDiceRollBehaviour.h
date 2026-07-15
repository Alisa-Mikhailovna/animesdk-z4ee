#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4BA5BF6D6AE6A5EC;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class GuijiDiceRollClip; }
namespace System { class Object; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xDCDF310)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xDCDFF30)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0xDCDF8C0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xDCDFEE0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0xDCE0260)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDCDF6D0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xDCDF5F0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0xDCE0210)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xDCDFB70)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_F5447CD65612575D_1_OFFSET UNITYSDK_OFFSET(0xDCE0360)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xDCDF770)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xDCDFDA0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xDCDF330)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xDCE0100)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xDCDFFE0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xDCDF320)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xDCE0660)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int GuijiDiceRollBehaviour_TypeDefinitionIndex = 46359;

	class GuijiDiceRollBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::GuijiDiceRollClip* _Clip_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _Entity; // 0x18
		::UnityEngine::Transform* _RootTrans; // 0x20
		::UnityEngine::Transform* _ArtTrans; // 0x28
		::UnityEngine::Animator* _Animator; // 0x30
		::RPG::Client::RPGAnimationEvent* _AnimationEvent; // 0x38
		::UnityEngine::Transform* _ResultNode; // 0x40
		::Class_1_4BA5BF6D6AE6A5EC* _EffectController; // 0x48
		::UnityEngine::Playables::Playable _Playable; // 0x50
		::UnityEngine::Playables::FrameData _FrameData; // 0x60
		::UnityEngine::AnimationClip* _AnimationClip; // 0xA0
		::UnityEngine::Playables::PlayableGraph _AnimationGraph; // 0xA8
		::UnityEngine::Vector3 _TargetPosition; // 0xB8
		::UnityEngine::Quaternion _TargetRotation; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::GuijiDiceRollClip* get_Clip()
		{
			return ((::RPGTools::Timeline::GuijiDiceRollClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::GuijiDiceRollClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::GuijiDiceRollClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void Method_2_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_2_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_2_3D6722B9F8F20694()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_3D6722B9F8F20694_OFFSET))(this);
		}

		::System::Void Method_2_BADDA70ED68283AE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_BADDA70ED68283AE_OFFSET))(this);
		}

		::System::Void Method_2_8D61BE16C9463302()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_8D61BE16C9463302_OFFSET))(this);
		}

		::System::Void Method_2_7646FFE662147970()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_7646FFE662147970_OFFSET))(this);
		}

		::System::Void Method_2_F5447CD65612575D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_F5447CD65612575D_1_OFFSET))(this);
		}

		::System::Void Method_2_D3129FE8DF635B48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
		}

		::System::Void Method_2_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLBEHAVIOUR_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}
