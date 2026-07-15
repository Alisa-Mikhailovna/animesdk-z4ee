#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_GETSTATUSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xAC272D0)
#define EPIC_ONLINESERVICES_FRIENDS_GETSTATUSOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xAC272F0)
#define EPIC_ONLINESERVICES_FRIENDS_GETSTATUSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xAC272E0)
#define EPIC_ONLINESERVICES_FRIENDS_GETSTATUSOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xAC27300)
#define EPIC_ONLINESERVICES_FRIENDS_GETSTATUSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xAC27310)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int GetStatusOptions_TypeDefinitionIndex = 43772;

	class GetStatusOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETSTATUSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETSTATUSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETSTATUSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETSTATUSOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETSTATUSOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}
	};
}
