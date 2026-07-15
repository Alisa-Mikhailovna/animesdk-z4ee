#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsWebsiteViewTabEnum.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEDEFAULTTAB_OFFSET UNITYSDK_OFFSET(0xC95FB20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETONEWPOST_OFFSET UNITYSDK_OFFSET(0xC95FD20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETOPOST_OFFSET UNITYSDK_OFFSET(0xC95FC20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATESELECTEDISSUE_OFFSET UNITYSDK_OFFSET(0xC95FBA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATETOPPOST_OFFSET UNITYSDK_OFFSET(0xC95FCA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xC95FAA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_ISSUEID_OFFSET UNITYSDK_OFFSET(0xC95FDC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_MOVETOPOSTID_OFFSET UNITYSDK_OFFSET(0xC95FE00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_TOPPOSTID_OFFSET UNITYSDK_OFFSET(0xC95FDE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_VIEWTAB_OFFSET UNITYSDK_OFFSET(0xC95FDA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_ISSUEID_OFFSET UNITYSDK_OFFSET(0xC95FDD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_MOVETOPOSTID_OFFSET UNITYSDK_OFFSET(0xC95FE10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_TOPPOSTID_OFFSET UNITYSDK_OFFSET(0xC95FDF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_VIEWTAB_OFFSET UNITYSDK_OFFSET(0xC95FDB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC95FB10)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWebsiteViewModelParam_TypeDefinitionIndex = 75544;

	class LimaoNewsWebsiteViewModelParam : public ::System::Object
	{
	public:
		::System::UInt32 _TopPostID_k__BackingField; // 0x10
		::System::UInt32 _MoveToPostID_k__BackingField; // 0x14
		::System::Boolean IsMoveToNewPost; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsWebsiteViewTabEnum _ViewTab_k__BackingField; // 0x1C
		::System::UInt32 _IssueID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* Create()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATE_OFFSET))();
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* CreateDefaultTab(::RPG::Client::LimaoNews::LimaoNewsWebsiteViewTabEnum a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*(*)(::RPG::Client::LimaoNews::LimaoNewsWebsiteViewTabEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEDEFAULTTAB_OFFSET))(a1);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* CreateSelectedIssue(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATESELECTEDISSUE_OFFSET))(a1);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* CreateMoveToPost(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETOPOST_OFFSET))(a1);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* CreateTopPost(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATETOPPOST_OFFSET))(a1);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam* CreateMoveToNewPost()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWebsiteViewModelParam*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_CREATEMOVETONEWPOST_OFFSET))();
		}

		::RPG::Client::LimaoNews::LimaoNewsWebsiteViewTabEnum get_ViewTab()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWebsiteViewTabEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_VIEWTAB_OFFSET))(this);
		}

		::System::Void set_ViewTab(::RPG::Client::LimaoNews::LimaoNewsWebsiteViewTabEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWebsiteViewTabEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_VIEWTAB_OFFSET))(this, a1);
		}

		::System::UInt32 get_IssueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_ISSUEID_OFFSET))(this);
		}

		::System::Void set_IssueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_ISSUEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TopPostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_TOPPOSTID_OFFSET))(this);
		}

		::System::Void set_TopPostID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_TOPPOSTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MoveToPostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_GET_MOVETOPOSTID_OFFSET))(this);
		}

		::System::Void set_MoveToPostID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEVIEWMODELPARAM_SET_MOVETOPOSTID_OFFSET))(this, a1);
		}
	};
}
