#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"
#include "unitysdk/System/DateTime.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client { template <typename T> class PrefList_1; }
namespace System { class String; }

#define RPG_CLIENT_APPPREFS_GET_AUDIOBLACKLIST_OFFSET UNITYSDK_OFFSET(0xBD9B380)
#define RPG_CLIENT_APPPREFS_GET_DEBUGLASTLANGINDEX_OFFSET UNITYSDK_OFFSET(0xBD9AD60)
#define RPG_CLIENT_APPPREFS_GET_DEVFORCEDOWNLOADALLTXTLANG_OFFSET UNITYSDK_OFFSET(0xBD9ABC0)
#define RPG_CLIENT_APPPREFS_GET_FORCEUPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0xBD9B550)
#define RPG_CLIENT_APPPREFS_GET_FORCEUPDATEVIDEO_OFFSET UNITYSDK_OFFSET(0xBD9B620)
#define RPG_CLIENT_APPPREFS_GET_LASTCRASHREPORTTIME_OFFSET UNITYSDK_OFFSET(0xBD9AC90)
#define RPG_CLIENT_APPPREFS_GET_LASTDEVACCOUNTUID_OFFSET UNITYSDK_OFFSET(0xBD9A960)
#define RPG_CLIENT_APPPREFS_GET_LASTDEVUID_OFFSET UNITYSDK_OFFSET(0xBD9AAF0)
#define RPG_CLIENT_APPPREFS_GET_LASTSERVERNAME_OFFSET UNITYSDK_OFFSET(0xBD9A6A0)
#define RPG_CLIENT_APPPREFS_GET_LASTSERVERS_OFFSET UNITYSDK_OFFSET(0xBD9A900)
#define RPG_CLIENT_APPPREFS_GET_LASTUSERID_OFFSET UNITYSDK_OFFSET(0xBD9A830)
#define RPG_CLIENT_APPPREFS_GET_NEEDDOWNLOADALLASSETS_OFFSET UNITYSDK_OFFSET(0xBD9B120)
#define RPG_CLIENT_APPPREFS_GET_PERMANENTTASKLIST_OFFSET UNITYSDK_OFFSET(0xBD9B440)
#define RPG_CLIENT_APPPREFS_GET_PERMANENTWHITELIST_OFFSET UNITYSDK_OFFSET(0xBD9B500)
#define RPG_CLIENT_APPPREFS_GET_RPGDEVICEID_OFFSET UNITYSDK_OFFSET(0xBD9B1F0)
#define RPG_CLIENT_APPPREFS_GET_TEMPTASKLIST_OFFSET UNITYSDK_OFFSET(0xBD9B4B0)
#define RPG_CLIENT_APPPREFS_GET_VIDEOBLACKLIST_OFFSET UNITYSDK_OFFSET(0xBD9B3E0)
#define RPG_CLIENT_APPPREFS_SET_DEBUGLASTLANGINDEX_OFFSET UNITYSDK_OFFSET(0xBD9ADC0)
#define RPG_CLIENT_APPPREFS_SET_DEVFORCEDOWNLOADALLTXTLANG_OFFSET UNITYSDK_OFFSET(0xBD9AC20)
#define RPG_CLIENT_APPPREFS_SET_FORCEUPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0xBD9B5B0)
#define RPG_CLIENT_APPPREFS_SET_FORCEUPDATEVIDEO_OFFSET UNITYSDK_OFFSET(0xBD9B680)
#define RPG_CLIENT_APPPREFS_SET_LASTCRASHREPORTTIME_OFFSET UNITYSDK_OFFSET(0xBD9ACF0)
#define RPG_CLIENT_APPPREFS_SET_LASTDEVACCOUNTUID_OFFSET UNITYSDK_OFFSET(0xBD9AA30)
#define RPG_CLIENT_APPPREFS_SET_LASTDEVUID_OFFSET UNITYSDK_OFFSET(0xBD9AB50)
#define RPG_CLIENT_APPPREFS_SET_LASTSERVERNAME_OFFSET UNITYSDK_OFFSET(0xBD9A770)
#define RPG_CLIENT_APPPREFS_SET_LASTUSERID_OFFSET UNITYSDK_OFFSET(0xBD9A890)
#define RPG_CLIENT_APPPREFS_SET_NEEDDOWNLOADALLASSETS_OFFSET UNITYSDK_OFFSET(0xBD9B180)
#define RPG_CLIENT_APPPREFS_SET_RPGDEVICEID_OFFSET UNITYSDK_OFFSET(0xBD9B2C0)
#define RPG_CLIENT_APPPREFS_UPDATERECENTSERVER_OFFSET UNITYSDK_OFFSET(0xBD9AE30)
#define RPG_CLIENT_APPPREFS__CTOR_OFFSET UNITYSDK_OFFSET(0xBD9A620)

namespace RPG::Client
{
	inline static constexpr unsigned int AppPrefs_TypeDefinitionIndex = 56708;

	class AppPrefs : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_LastServerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTSERVERNAME_OFFSET))(this);
		}

		::System::Void set_LastServerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_LASTSERVERNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastUserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTUSERID_OFFSET))(this);
		}

		::System::Void set_LastUserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_LASTUSERID_OFFSET))(this, a1);
		}

		::RPG::Client::PrefList_1<::System::String*>* get_LastServers()
		{
			return ((::RPG::Client::PrefList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTSERVERS_OFFSET))(this);
		}

		::System::String* get_LastDevAccountUID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTDEVACCOUNTUID_OFFSET))(this);
		}

		::System::Void set_LastDevAccountUID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_LASTDEVACCOUNTUID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastDevUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTDEVUID_OFFSET))(this);
		}

		::System::Void set_LastDevUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_LASTDEVUID_OFFSET))(this, a1);
		}

		::System::Boolean get_DevForceDownloadAllTxtLang()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_DEVFORCEDOWNLOADALLTXTLANG_OFFSET))(this);
		}

		::System::Void set_DevForceDownloadAllTxtLang(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_DEVFORCEDOWNLOADALLTXTLANG_OFFSET))(this, a1);
		}

		::System::DateTime get_LastCrashReportTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTCRASHREPORTTIME_OFFSET))(this);
		}

		::System::Void set_LastCrashReportTime(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_LASTCRASHREPORTTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_DebugLastLangIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_DEBUGLASTLANGINDEX_OFFSET))(this);
		}

		::System::Void set_DebugLastLangIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_DEBUGLASTLANGINDEX_OFFSET))(this, a1);
		}

		::System::Void UpdateRecentServer(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_UPDATERECENTSERVER_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedDownloadAllAssets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_NEEDDOWNLOADALLASSETS_OFFSET))(this);
		}

		::System::Void set_NeedDownloadAllAssets(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_NEEDDOWNLOADALLASSETS_OFFSET))(this, a1);
		}

		::System::String* get_RPGDeviceID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_RPGDEVICEID_OFFSET))(this);
		}

		::System::Void set_RPGDeviceID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_RPGDEVICEID_OFFSET))(this, a1);
		}

		::RPG::Client::PrefHashSet_1<::System::String*>* get_AudioBlacklist()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_AUDIOBLACKLIST_OFFSET))(this);
		}

		::RPG::Client::PrefHashSet_1<::System::String*>* get_VideoBlacklist()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_VIDEOBLACKLIST_OFFSET))(this);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get_PermanentTaskList()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_PERMANENTTASKLIST_OFFSET))(this);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get_TempTaskList()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_TEMPTASKLIST_OFFSET))(this);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get_PermanentWhiteList()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_PERMANENTWHITELIST_OFFSET))(this);
		}

		::System::Boolean get_ForceUpdateAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_FORCEUPDATEAUDIO_OFFSET))(this);
		}

		::System::Void set_ForceUpdateAudio(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_FORCEUPDATEAUDIO_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceUpdateVideo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_FORCEUPDATEVIDEO_OFFSET))(this);
		}

		::System::Void set_ForceUpdateVideo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_FORCEUPDATEVIDEO_OFFSET))(this, a1);
		}
	};
}
