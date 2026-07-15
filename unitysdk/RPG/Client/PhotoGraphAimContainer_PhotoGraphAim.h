#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnionNodeType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTONORMAL_OFFSET UNITYSDK_OFFSET(0xCF6F240)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTOSUCCESS_OFFSET UNITYSDK_OFFSET(0xCF6F320)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM__CTOR_OFFSET UNITYSDK_OFFSET(0xCF6EB80)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimContainer_PhotoGraphAim_TypeDefinitionIndex = 66300;

	class PhotoGraphAimContainer_PhotoGraphAim : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* PendingAimGO; // 0x10
		::UnityEngine::Transform* TargetTransform; // 0x18
		::UnityEngine::UI::Image* NodeImage; // 0x20
		::UnityEngine::Animation* AnimationPending; // 0x28
		::UnityEngine::Transform* NodeFail; // 0x30
		::UnityEngine::RectTransform* RectPending; // 0x38
		::UnityEngine::GameObject* ManualAimGO; // 0x40
		::UnityEngine::Transform* NodeSuccess; // 0x48
		::UnityEngine::Animation* AnimationBg; // 0x50
		::RPG::GameCore::GameEntity* TargetEntity; // 0x58
		::UnityEngine::Transform* NodeStatus; // 0x60
		::UnityEngine::RectTransform* Rect; // 0x68
		::UnityEngine::Collider* TargetCollider; // 0x70
		::UnityEngine::UI::SmoothMask* ProgressSM; // 0x78
		::UnityEngine::Vector3 ExtraAimTagOffset; // 0x80
		::System::Int32 HandlerIndex; // 0x8C
		::System::Int32 UnionNodeUnitIndex; // 0x90
		::RPG::GameCore::PhotoGraphAimIdentifyType IdentifyType; // 0x94
		::RPG::Client::PhotoGraphAimUnionNodeType AimNodeType; // 0x98
		::System::Single ShowTagDirRange; // 0x9C
		::UnityEngine::Vector3 WorldPos; // 0xA0
		::UnityEngine::Vector3 TransformOffset; // 0xAC
		::System::Boolean UseAimUnion; // 0xB8
		::System::Boolean _IsSuccessStyle; // 0xB9
		::System::Boolean IsInUse; // 0xBA
		::System::Boolean ShowTag; // 0xBB
		::System::Int32 UnionIndex; // 0xBC
		::System::Int32 UnionNodeIndex; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM__CTOR_OFFSET))(this);
		}

		::System::Void SwitchToNormal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTONORMAL_OFFSET))(this);
		}

		::System::Void SwitchToSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTOSUCCESS_OFFSET))(this);
		}
	};
}
