#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/InfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Presence/Status.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class DataRecord; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0xAC8BFF0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xAC8BFB0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0xAC8C050)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0xAC8BFD0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_RECORDS_OFFSET UNITYSDK_OFFSET(0xAC8C030)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0xAC8C010)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xAC8BF70)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_GET_USERID_OFFSET UNITYSDK_OFFSET(0xAC8BF90)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_1_OFFSET UNITYSDK_OFFSET(0xAC8CCB0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_OFFSET UNITYSDK_OFFSET(0xAC8C070)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0xAC8C000)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xAC8BFC0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0xAC8C060)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0xAC8BFE0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_RECORDS_OFFSET UNITYSDK_OFFSET(0xAC8C040)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0xAC8C020)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xAC8BF80)
#define EPIC_ONLINESERVICES_PRESENCE_INFO_SET_USERID_OFFSET UNITYSDK_OFFSET(0xAC8BFA0)
#define EPIC_ONLINESERVICES_PRESENCE_INFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAC8CE00)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int Info_TypeDefinitionIndex = 43254;

	class Info : public ::System::Object
	{
	public:
		::System::String* _RichText_k__BackingField; // 0x10
		::System::String* _ProductName_k__BackingField; // 0x18
		::System::String* _Platform_k__BackingField; // 0x20
		::System::String* _ProductId_k__BackingField; // 0x28
		::Epic::OnlineServices::EpicAccountId* _UserId_k__BackingField; // 0x30
		::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* _Records_k__BackingField; // 0x38
		::System::String* _ProductVersion_k__BackingField; // 0x40
		::Epic::OnlineServices::Presence::Status _Status_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Presence::Status get_Status()
		{
			return ((::Epic::OnlineServices::Presence::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Epic::OnlineServices::Presence::Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::Status))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_STATUS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_UserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_USERID_OFFSET))(this, a1);
		}

		::System::String* get_ProductId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTID_OFFSET))(this);
		}

		::System::Void set_ProductId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTID_OFFSET))(this, a1);
		}

		::System::String* get_ProductVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTVERSION_OFFSET))(this);
		}

		::System::Void set_ProductVersion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTVERSION_OFFSET))(this, a1);
		}

		::System::String* get_Platform()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PLATFORM_OFFSET))(this);
		}

		::System::Void set_Platform(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PLATFORM_OFFSET))(this, a1);
		}

		::System::String* get_RichText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_RICHTEXT_OFFSET))(this);
		}

		::System::Void set_RichText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_RICHTEXT_OFFSET))(this, a1);
		}

		::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* get_Records()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_RECORDS_OFFSET))(this);
		}

		::System::Void set_Records(::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_RECORDS_OFFSET))(this, a1);
		}

		::System::String* get_ProductName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_GET_PRODUCTNAME_OFFSET))(this);
		}

		::System::Void set_ProductName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_PRODUCTNAME_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Presence::InfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Presence::InfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_INFO_SET_1_OFFSET))(this, a1);
		}
	};
}
