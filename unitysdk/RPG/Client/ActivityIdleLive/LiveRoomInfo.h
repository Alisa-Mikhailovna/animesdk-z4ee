#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveStarData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETCUREXPPROGRESS_OFFSET UNITYSDK_OFFSET(0xBBDA2E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETCURRANKTITLE_OFFSET UNITYSDK_OFFSET(0xBBDA3B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETSTARNUM_OFFSET UNITYSDK_OFFSET(0xBBDA210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_ICONID_OFFSET UNITYSDK_OFFSET(0xBBD9C90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBBD9EA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_SPECIALICONID_OFFSET UNITYSDK_OFFSET(0xBBD9CB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_STARDATA_OFFSET UNITYSDK_OFFSET(0xBBD9CD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xBBD9D60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_ISRANKMAX_OFFSET UNITYSDK_OFFSET(0xBBDA4B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_RESETTITLETODEFAULT_OFFSET UNITYSDK_OFFSET(0xBBDA1C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_ICONID_OFFSET UNITYSDK_OFFSET(0xBBD9CA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_SPECIALICONID_OFFSET UNITYSDK_OFFSET(0xBBD9CC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xBBD9E50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATEICON_1_OFFSET UNITYSDK_OFFSET(0xBBDA0D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATEICON_OFFSET UNITYSDK_OFFSET(0xBBD9FB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATESPECIALICON_OFFSET UNITYSDK_OFFSET(0xBBDA020)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATETITLE_OFFSET UNITYSDK_OFFSET(0xBBD9F20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBBDA580)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int LiveRoomInfo_TypeDefinitionIndex = 71757;

	class LiveRoomInfo : public ::System::Object
	{
	public:
		// static const ::System::String* _DEFAULT_TITLE_TEXT_ID; // 0x0
		::System::String* _IconPath; // 0x10
		::System::String* _Title; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveStarData* _StarData; // 0x20
		::System::String* _SpecialIconPath; // 0x28
		::System::UInt32 _IconId_k__BackingField; // 0x30
		::System::UInt32 _SpecialIconId_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_IconId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_ICONID_OFFSET))(this);
		}

		::System::Void set_IconId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_ICONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpecialIconId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_SPECIALICONID_OFFSET))(this);
		}

		::System::Void set_SpecialIconId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_SPECIALICONID_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveStarData* get_StarData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveStarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_STARDATA_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_TITLE_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void UpdateTitle(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATETITLE_OFFSET))(this, a1);
		}

		::System::Void UpdateIcon(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATEICON_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateIcon_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATEICON_1_OFFSET))(this, a1);
		}

		::System::Void UpdateSpecialIcon(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATESPECIALICON_OFFSET))(this, a1);
		}

		::System::Void ResetTitleToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_RESETTITLETODEFAULT_OFFSET))(this);
		}

		::System::UInt32 GetStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETSTARNUM_OFFSET))(this);
		}

		::System::Single GetCurExpProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETCUREXPPROGRESS_OFFSET))(this);
		}

		::RPG::Client::TextID GetCurRankTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETCURRANKTITLE_OFFSET))(this);
		}

		::System::Boolean IsRankMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_ISRANKMAX_OFFSET))(this);
		}
	};
}
