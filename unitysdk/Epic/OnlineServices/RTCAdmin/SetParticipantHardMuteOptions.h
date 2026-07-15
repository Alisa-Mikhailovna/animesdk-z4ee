#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_MUTE_OFFSET UNITYSDK_OFFSET(0xACA2FC0)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xACA2F80)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xACA2FA0)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_MUTE_OFFSET UNITYSDK_OFFSET(0xACA2FD0)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xACA2F90)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xACA2FB0)
#define EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xACA2FE0)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int SetParticipantHardMuteOptions_TypeDefinitionIndex = 43178;

	class SetParticipantHardMuteOptions : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x18
		::System::Boolean _Mute_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Boolean get_Mute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_GET_MUTE_OFFSET))(this);
		}

		::System::Void set_Mute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_SETPARTICIPANTHARDMUTEOPTIONS_SET_MUTE_OFFSET))(this, a1);
		}
	};
}
