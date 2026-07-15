#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_GET_BADGEEXPIRETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD0A0890)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_GET_BADGEICONPATH_OFFSET UNITYSDK_OFFSET(0xD0A0870)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_GET_HASBADGE_OFFSET UNITYSDK_OFFSET(0xD0A0850)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_GET_ISSPECIALTARGETACHIEVED_OFFSET UNITYSDK_OFFSET(0xD0A0830)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xD0A0810)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_RESET_OFFSET UNITYSDK_OFFSET(0xD0A0930)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SET_BADGEEXPIRETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD0A08A0)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SET_BADGEICONPATH_OFFSET UNITYSDK_OFFSET(0xD0A0880)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SET_HASBADGE_OFFSET UNITYSDK_OFFSET(0xD0A0860)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SET_ISSPECIALTARGETACHIEVED_OFFSET UNITYSDK_OFFSET(0xD0A0840)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xD0A0820)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SYNC_OFFSET UNITYSDK_OFFSET(0xD0A08B0)
#define RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A0980)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeTierceBriefRecord_TypeDefinitionIndex = 61358;

	class PlayerChallengeTierceBriefRecord : public ::System::Object
	{
	public:
		::System::String* _BadgeIconPath_k__BackingField; // 0x10
		::System::UInt32 _BadgeExpireTimeStamp_k__BackingField; // 0x18
		::System::Boolean _IsValid_k__BackingField; // 0x1C
		::System::Boolean _IsSpecialTargetAchieved_k__BackingField; // 0x1D
		::System::Boolean _HasBadge_k__BackingField; // 0x1E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SET_ISVALID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpecialTargetAchieved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_GET_ISSPECIALTARGETACHIEVED_OFFSET))(this);
		}

		::System::Void set_IsSpecialTargetAchieved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SET_ISSPECIALTARGETACHIEVED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasBadge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_GET_HASBADGE_OFFSET))(this);
		}

		::System::Void set_HasBadge(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SET_HASBADGE_OFFSET))(this, a1);
		}

		::System::String* get_BadgeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_GET_BADGEICONPATH_OFFSET))(this);
		}

		::System::Void set_BadgeIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SET_BADGEICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_BadgeExpireTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_GET_BADGEEXPIRETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BadgeExpireTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SET_BADGEEXPIRETIMESTAMP_OFFSET))(this, a1);
		}

		::System::Void Sync(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_SYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCEBRIEFRECORD_RESET_OFFSET))(this);
		}
	};
}
