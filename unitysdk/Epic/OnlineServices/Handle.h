#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_HANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAC2AA40)
#define EPIC_ONLINESERVICES_HANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xAC2A9A0)
#define EPIC_ONLINESERVICES_HANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAC2AAA0)
#define EPIC_ONLINESERVICES_HANDLE_GET_INNERHANDLE_OFFSET UNITYSDK_OFFSET(0xAC2A980)
#define EPIC_ONLINESERVICES_HANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xAC2AAB0)
#define EPIC_ONLINESERVICES_HANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xAC2AB10)
#define EPIC_ONLINESERVICES_HANDLE_SET_INNERHANDLE_OFFSET UNITYSDK_OFFSET(0xAC2A990)
#define EPIC_ONLINESERVICES_HANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAC17480)
#define EPIC_ONLINESERVICES_HANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC17460)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Handle_TypeDefinitionIndex = 42725;

	class Handle : public ::System::Object
	{
	public:
		::System::IntPtr _InnerHandle_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE__CTOR_1_OFFSET))(this, a1);
		}

		::System::IntPtr get_InnerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_GET_INNERHANDLE_OFFSET))(this);
		}

		::System::Void set_InnerHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_SET_INNERHANDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::Epic::OnlineServices::Handle* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Epic::OnlineServices::Handle*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::Epic::OnlineServices::Handle* a1, ::Epic::OnlineServices::Handle* a2)
		{
			return ((::System::Boolean(*)(::Epic::OnlineServices::Handle*, ::Epic::OnlineServices::Handle*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::Epic::OnlineServices::Handle* a1, ::Epic::OnlineServices::Handle* a2)
		{
			return ((::System::Boolean(*)(::Epic::OnlineServices::Handle*, ::Epic::OnlineServices::Handle*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
