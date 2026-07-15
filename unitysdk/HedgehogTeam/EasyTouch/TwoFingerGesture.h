#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x15791AD0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET UNITYSDK_OFFSET(0x15791DB0)
#define HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1578A960)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int TwoFingerGesture_TypeDefinitionIndex = 38187;

	class TwoFingerGesture : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* pickedUIElement; // 0x10
		::UnityEngine::GameObject* pickedObject; // 0x18
		::UnityEngine::Camera* pickedCamera; // 0x20
		::UnityEngine::GameObject* oldPickedObject; // 0x28
		::System::Boolean isOverGui; // 0x30
		::System::Boolean inSingleDoubleTaps; // 0x31
		::System::Boolean dragStart; // 0x32
		::System::Boolean swipeStart; // 0x33
		::System::Boolean lockTwist; // 0x34
		::System::Boolean lockPinch; // 0x35
		::System::Boolean isGuiCamera; // 0x36
		::System::Single oldFingerDistance; // 0x38
		::System::Single startDistance; // 0x3C
		::System::Int32 finger1; // 0x40
		::System::Single tapCurentTime; // 0x44
		::System::Single fingerDistance; // 0x48
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType currentGesture; // 0x4C
		::System::Single lastTwistAngle; // 0x50
		::System::Single timeSinceStartAction; // 0x54
		::HedgehogTeam::EasyTouch::EasyTouch_GestureType oldGesture; // 0x58
		::UnityEngine::Vector2 position; // 0x5C
		::System::Single lastPinch; // 0x64
		::System::Int32 finger0; // 0x68
		::UnityEngine::Vector2 deltaPosition; // 0x6C
		::UnityEngine::Vector2 startPosition; // 0x74
		::System::Single startTimeAction; // 0x7C
		::UnityEngine::Vector2 oldStartPosition; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE__CTOR_OFFSET))(this);
		}

		::System::Void ClearPickedObjectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDOBJECTDATA_OFFSET))(this);
		}

		::System::Void ClearPickedUIData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_TWOFINGERGESTURE_CLEARPICKEDUIDATA_OFFSET))(this);
		}
	};
}
