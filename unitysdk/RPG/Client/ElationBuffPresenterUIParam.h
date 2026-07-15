#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2DB5DEF3EA4B57A8;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC358830)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenterUIParam_TypeDefinitionIndex = 67982;

	class ElationBuffPresenterUIParam : public ::System::Object
	{
	public:
		::UnityEngine::UI::Button* OpenOverviewBtn; // 0x10
		::UnityEngine::UI::Button* CloseOverviewBtn; // 0x18
		::RPG::Client::NodeListViewPanel_1<::Class_2_2DB5DEF3EA4B57A8*>* ElationBuffList; // 0x20
		::UnityEngine::Transform* NodeDesc; // 0x28
		::UnityEngine::UI::Text* TotalDescText; // 0x30
		::UnityEngine::Transform* LineBottom; // 0x38
		::UnityEngine::UI::Text* TotalPointText; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTERUIPARAM__CTOR_OFFSET))(this);
		}
	};
}
