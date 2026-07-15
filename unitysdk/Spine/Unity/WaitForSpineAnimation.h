#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/WaitForSpineAnimation_AnimationEventTypes.h"
#include "unitysdk/System/Object.h"

namespace Spine { class TrackEntry; }

#define SPINE_UNITY_WAITFORSPINEANIMATION_HANDLECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C9C2D70)
#define SPINE_UNITY_WAITFORSPINEANIMATION_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x1C9C2C20)
#define SPINE_UNITY_WAITFORSPINEANIMATION_SAFESUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1C9C2850)
#define SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C9C2D60)
#define SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C9C2C40)
#define SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C9C2D50)
#define SPINE_UNITY_WAITFORSPINEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C2840)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineAnimation_TypeDefinitionIndex = 42302;

	class WaitForSpineAnimation : public ::System::Object
	{
	public:
		::System::Boolean m_WasFired; // 0x10

		::System::Void _ctor(::Spine::TrackEntry* a1, ::Spine::Unity::WaitForSpineAnimation_AnimationEventTypes a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Unity::WaitForSpineAnimation_AnimationEventTypes))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION__CTOR_OFFSET))(this, a1, a2);
		}

		::Spine::Unity::WaitForSpineAnimation* NowWaitFor(::Spine::TrackEntry* a1, ::Spine::Unity::WaitForSpineAnimation_AnimationEventTypes a2)
		{
			return ((::Spine::Unity::WaitForSpineAnimation*(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Unity::WaitForSpineAnimation_AnimationEventTypes))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_NOWWAITFOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void SafeSubscribe(::Spine::TrackEntry* a1, ::Spine::Unity::WaitForSpineAnimation_AnimationEventTypes a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Unity::WaitForSpineAnimation_AnimationEventTypes))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_SAFESUBSCRIBE_OFFSET))(this, a1, a2);
		}

		::System::Void HandleComplete(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_HANDLECOMPLETE_OFFSET))(this, a1);
		}
	};
}
