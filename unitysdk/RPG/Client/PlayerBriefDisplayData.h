#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_89C8B004269BF563;
namespace Proto { class AssistSimpleInfo; }
namespace Proto { class PlayerSimpleInfo; }
namespace RPG::Client { class FriendModule; }
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerDefaultInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xD09B730)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xD09A5D0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYONLINEPLAYROOMPLAYERSIMPLEINFO_OFFSET UNITYSDK_OFFSET(0xD09AC70)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYPLAYERSIMPLEINFO_OFFSET UNITYSDK_OFFSET(0xD099FC0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYAVATARID_OFFSET UNITYSDK_OFFSET(0xD09B340)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0xD09B0B0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYPOS_OFFSET UNITYSDK_OFFSET(0xD09ACC0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_APPLYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD09C0A0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ASSISTAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xD09BA60)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HASREMARKNAME_OFFSET UNITYSDK_OFFSET(0xD09BBC0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0xD09BC80)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xD08B6B0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xD09BED0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0xD09C000)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0xD08BF20)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LASTLOGOUTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD08C080)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LOGOUTTIMESPAN_OFFSET UNITYSDK_OFFSET(0xD09BC90)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD08B4E0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xD09BDF0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0xD09BFE0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0xD09BE40)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD09C0C0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET__FRIENDMODULE_OFFSET UNITYSDK_OFFSET(0xD09B9D0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_APPLYTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD09C0B0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xD09A4D0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xD09A550)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0xD09BFF0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0xD09A430)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD09C0D0)
#define RPG_CLIENT_PLAYERBRIEFDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD099EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerBriefDisplayData_TypeDefinitionIndex = 61342;

	class PlayerBriefDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x10
		::Class_1_075C34D03AFA1215_7* _PlayerOutfit_k__BackingField; // 0x18
		::System::String* OriginName; // 0x20
		::RPG::Client::PlayerPlatformInfo* PlatformInfo; // 0x28
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x30
		::System::Collections::Generic::IList_1<::Proto::AssistSimpleInfo*>* _AssistInfos; // 0x38
		::RPG::Client::DateTimePro _LastLogoutTime; // 0x40
		::System::Int64 _UpdateTimeStamp_k__BackingField; // 0x48
		::System::UInt32 AssistAvatarDressedSkinID; // 0x50
		::System::UInt32 _LastLogoutTimeStamp; // 0x54
		::System::UInt32 BubbleID; // 0x58
		::System::UInt32 UID; // 0x5C
		::System::UInt32 _ApplyTimeStamp_k__BackingField; // 0x60
		::System::UInt32 Level; // 0x64
		::System::Boolean IsOnline; // 0x68
		::System::Boolean IsBanned; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerBriefDisplayData* CreateByPlayerSimpleInfo(::Proto::PlayerSimpleInfo* a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYPLAYERSIMPLEINFO_OFFSET))(a1);
		}

		static ::RPG::Client::PlayerBriefDisplayData* CreateByLocalPlayer()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYLOCALPLAYER_OFFSET))();
		}

		static ::RPG::Client::PlayerBriefDisplayData* CreateByOnlinePlayRoomPlayerSimpleInfo(::Class_1_89C8B004269BF563* a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::Class_1_89C8B004269BF563*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_CREATEBYONLINEPLAYROOMPLAYERSIMPLEINFO_OFFSET))(a1);
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByPos(::System::Int32 a1)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYPOS_OFFSET))(this, a1);
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByIndex(::System::Int32 a1)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYINDEX_OFFSET))(this, a1);
		}

		::Proto::AssistSimpleInfo* GetAssistInfoByAvatarID(::System::Int32 a1)
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GETASSISTINFOBYAVATARID_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 get_AssistAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ASSISTAVATARCOUNT_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_HasRemarkName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HASREMARKNAME_OFFSET))(this);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::TimeSpan get_LogoutTimeSpan()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LOGOUTTIMESPAN_OFFSET))(this);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_HEADICONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::Void set_PersonalCardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PERSONALCARDID_OFFSET))(this, a1);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_SIGNATURE_OFFSET))(this, a1);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::Class_1_075C34D03AFA1215_7* get_PlayerOutfit()
		{
			return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_PLAYEROUTFIT_OFFSET))(this);
		}

		::System::Void set_PlayerOutfit(::Class_1_075C34D03AFA1215_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_PLAYEROUTFIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMarked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISMARKED_OFFSET))(this);
		}

		::System::Boolean get_IsFriend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_ISFRIEND_OFFSET))(this);
		}

		::System::UInt32 get_LastLogoutTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_LASTLOGOUTTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_ApplyTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_APPLYTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_ApplyTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_APPLYTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Int64 get_UpdateTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET_UPDATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_UpdateTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_SET_UPDATETIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::FriendModule* get__FriendModule()
		{
			return ((::RPG::Client::FriendModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBRIEFDISPLAYDATA_GET__FRIENDMODULE_OFFSET))(this);
		}
	};
}
