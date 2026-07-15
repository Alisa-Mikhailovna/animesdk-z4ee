#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_32;
class Class_2_2DB5DEF3EA4B57A8;
namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::Client { class ElationBattleBuffViewData; }
namespace RPG::Client { class ElationBuffPresenterUIParam; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER_CREAT_OFFSET UNITYSDK_OFFSET(0xC357D10)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_ONCLOSEOVERVIEWCLICK_OFFSET UNITYSDK_OFFSET(0xC3586C0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_ONOPENOVERVIEWCLICK_OFFSET UNITYSDK_OFFSET(0xC358640)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC357E10)
#define RPG_CLIENT_ELATIONBUFFPRESENTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC357DC0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER__MERGEBUFFDATABYLIFE_OFFSET UNITYSDK_OFFSET(0xC358030)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter_TypeDefinitionIndex = 67979;

	class ElationBuffPresenter : public ::System::Object
	{
	public:
		::UnityEngine::UI::Button* _OpenOverviewBtn; // 0x10
		::UnityEngine::Transform* _LineBottom; // 0x18
		::UnityEngine::Transform* _NodeDesc; // 0x20
		::RPG::Client::NodeListViewPanel_1<::Class_2_2DB5DEF3EA4B57A8*>* _ElationBuffList; // 0x28
		::UnityEngine::UI::Text* _TotalPointText; // 0x30
		::UnityEngine::UI::Text* _TotalDescText; // 0x38
		::UnityEngine::UI::Button* _CloseOverviewBtn; // 0x40

		::System::Void _ctor(::RPG::Client::ElationBuffPresenterUIParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBuffPresenterUIParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ElationBuffPresenter* Creat(::RPG::Client::ElationBuffPresenterUIParam* a1)
		{
			return ((::RPG::Client::ElationBuffPresenter*(*)(::RPG::Client::ElationBuffPresenterUIParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_CREAT_OFFSET))(a1);
		}

		::System::Void SetupView(::RPG::Client::ElationBattleBuffGroupViewData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBattleBuffGroupViewData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_SETUPVIEW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_32*>* _MergeBuffDataByLife(::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_32*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER__MERGEBUFFDATABYLIFE_OFFSET))(this, a1);
		}

		::System::Void OnOpenOverviewClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_ONOPENOVERVIEWCLICK_OFFSET))(this);
		}

		::System::Void OnCloseOverviewClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_ONCLOSEOVERVIEWCLICK_OFFSET))(this);
		}
	};
}
