#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/SetPresenceCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xAC93490)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xAC93450)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xAC93470)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xAC93430)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xAC93890)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xAC93460)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xAC93480)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xAC934B0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xAC93440)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAC939B0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int SetPresenceCallbackInfo_TypeDefinitionIndex = 43284;

	class SetPresenceCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Presence::SetPresenceCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Presence::SetPresenceCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCECALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
