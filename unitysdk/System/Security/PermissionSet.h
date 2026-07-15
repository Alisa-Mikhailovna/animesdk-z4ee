#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }
namespace System::Security::Policy { class PolicyLevel; }

#define SYSTEM_SECURITY_PERMISSIONSET_CASONLYDEMAND_OFFSET UNITYSDK_OFFSET(0x19FDA930)
#define SYSTEM_SECURITY_PERMISSIONSET_COPYTO_OFFSET UNITYSDK_OFFSET(0x19FD9CE0)
#define SYSTEM_SECURITY_PERMISSIONSET_DEMAND_OFFSET UNITYSDK_OFFSET(0x19FD9F30)
#define SYSTEM_SECURITY_PERMISSIONSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x19FD9450)
#define SYSTEM_SECURITY_PERMISSIONSET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19FDA9D0)
#define SYSTEM_SECURITY_PERMISSIONSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19FD9AE0)
#define SYSTEM_SECURITY_PERMISSIONSET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19FDADD0)
#define SYSTEM_SECURITY_PERMISSIONSET_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19FDAE60)
#define SYSTEM_SECURITY_PERMISSIONSET_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x19FDAEF0)
#define SYSTEM_SECURITY_PERMISSIONSET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x19FDA340)
#define SYSTEM_SECURITY_PERMISSIONSET_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x19FDA910)
#define SYSTEM_SECURITY_PERMISSIONSET_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x19FDAF00)
#define SYSTEM_SECURITY_PERMISSIONSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19FDAAF0)
#define SYSTEM_SECURITY_PERMISSIONSET_TOXML_OFFSET UNITYSDK_OFFSET(0x19FD8AF0)
#define SYSTEM_SECURITY_PERMISSIONSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FDAF10)
#define SYSTEM_SECURITY_PERMISSIONSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FD8910)
#define SYSTEM_SECURITY_PERMISSIONSET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19FD9C10)
#define SYSTEM_SECURITY_PERMISSIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x19FD8810)

namespace System::Security
{
	inline static constexpr unsigned int PermissionSet_TypeDefinitionIndex = 939;

	class PermissionSet : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_action()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PermissionSet_TypeDefinitionIndex)->GetStaticField(0x1B520);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_psUnrestricted()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PermissionSet_TypeDefinitionIndex)->GetStaticField(0x1B528);
		}
		::Il2CppArray<::System::Boolean>* _ignored; // 0x10
		::System::Security::Policy::PolicyLevel* _policyLevel; // 0x18
		::System::Collections::ArrayList* list; // 0x20
		::System::Security::Permissions::PermissionState state; // 0x28
		::System::Boolean _readOnly; // 0x2C
		::System::Boolean _declsec; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Permissions::PermissionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Security::IPermission* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET__CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET__CCTOR_OFFSET))();
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Void Demand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_DEMAND_OFFSET))(this);
		}

		::System::Void CasOnlyDemand(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_CASONLYDEMAND_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_TOSTRING_OFFSET))(this);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_TOXML_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GETHASHCODE_OFFSET))(this);
		}
	};
}
