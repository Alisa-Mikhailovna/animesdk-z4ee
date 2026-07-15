#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_5F4D64A4B97E38F9;
class Class_1_6639441D78E72F56_1;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace RPG::Client { class UIMeta; }
namespace RPG::Client::LimaoNews { class LimaoNewsForumControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsSponsorControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsWebsiteViewModel; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC961B70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xC95FE20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__EXITVIEW_OFFSET UNITYSDK_OFFSET(0xC961E80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__INITNAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0xC9619B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC960AE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xC961C50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xC961F60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xC961E30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC95FF00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSCLOSEWEBSITE_OFFSET UNITYSDK_OFFSET(0xC9628B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSFORUMOPERATION_OFFSET UNITYSDK_OFFSET(0xC9622F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET UNITYSDK_OFFSET(0xC9626C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET UNITYSDK_OFFSET(0xC9622A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITISSUE_OFFSET UNITYSDK_OFFSET(0xC9620D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET UNITYSDK_OFFSET(0xC962200)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSWEBSITESTATECHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC962020)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONREFRESHCONDITION_OFFSET UNITYSDK_OFFSET(0xC962140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONREFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0xC9624F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__REFRESHREDDOTNODE_OFFSET UNITYSDK_OFFSET(0xC962540)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC961370)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC960A20)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWebsiteWindow_TypeDefinitionIndex = 75501;

	class LimaoNewsWebsiteWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::AnimatorButton* _BtnClose; // 0x40
		::UnityEngine::Transform* _NodeForumRedDot; // 0x48
		::UnityEngine::Transform* _NodeBtnIssueTag; // 0x50
		::UnityEngine::Transform* _NodeBtnForumTag; // 0x58
		::RPG::Client::MonoPrefabSwitcher* _MonoPrefabSwitcher; // 0x60
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x68
		::RPG::Client::UIMeta* _UIMeta; // 0x70
		::RPG::Client::LimaoNews::LimaoNewsSponsorControl* _SponsorControl; // 0x78
		::RPG::Client::AnimatorButton* _BtnIssue; // 0x80
		::RPG::Client::LimaoNews::LimaoNewsIssueControl* _IssueControl; // 0x88
		::RPG::Client::AnimatorButton* _BtnForum; // 0x90
		::UnityEngine::Transform* _NodeForumRedDotPoint; // 0x98
		::UnityEngine::Transform* _NodeForumRedDotNew; // 0xA0
		::UnityEngine::Transform* _NodeIssueRedDot; // 0xA8
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0xB0
		::RPG::Client::LimaoNews::LimaoNewsForumControl* _ForumControl; // 0xB8

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void _OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _ExitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__EXITVIEW_OFFSET))(this);
		}

		::System::Void _InitNavigationTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__INITNAVIGATIONTARGET_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsWebsiteStateChangeMessage(::Class_1_6639441D78E72F56_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6639441D78E72F56_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSWEBSITESTATECHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsSubmitIssue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITISSUE_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshCondition(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONREFRESHCONDITION_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsSubmitPost(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSSUBMITPOST_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsReplayPost(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREPLAYPOST_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsForumOperation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSFORUMOPERATION_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshRedDot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONREFRESHREDDOT_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsRefreshUpvote(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSREFRESHUPVOTE_OFFSET))(this, a1);
		}

		::System::Void _OnLimaoNewsCloseWebsite(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__ONLIMAONEWSCLOSEWEBSITE_OFFSET))(this, a1);
		}

		::System::Void _RefreshRedDotNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__REFRESHREDDOTNODE_OFFSET))(this);
		}

		::System::Void _RefreshView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW__REFRESHVIEW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
