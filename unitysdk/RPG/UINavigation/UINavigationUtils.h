#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_1_OFFSET UNITYSDK_OFFSET(0xDC82670)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xDC82610)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISBEHAVIOURVALID_OFFSET UNITYSDK_OFFSET(0xDC77F40)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISGAMEOBJECTVALID_OFFSET UNITYSDK_OFFSET(0xDC82800)
#define RPG_UINAVIGATION_UINAVIGATIONUTILS_ISNAVIGABLEBUTTON_OFFSET UNITYSDK_OFFSET(0xDC82730)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationUtils_TypeDefinitionIndex = 49422;

	class UINavigationUtils : public ::System::Object
	{
	public:
		static ::RPG::UINavigation::UINavigationZone* GetNavigationZone(::UnityEngine::Transform* a1)
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_OFFSET))(a1);
		}

		static ::RPG::UINavigation::UINavigationZone* GetNavigationZone_1(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_GETNAVIGATIONZONE_1_OFFSET))(a1);
		}

		static ::System::Boolean IsNavigableButton(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_ISNAVIGABLEBUTTON_OFFSET))(a1);
		}

		static ::System::Boolean IsGameObjectValid(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_ISGAMEOBJECTVALID_OFFSET))(a1);
		}

		static ::System::Boolean IsBehaviourValid(::UnityEngine::Behaviour* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONUTILS_ISBEHAVIOURVALID_OFFSET))(a1);
		}
	};
}
