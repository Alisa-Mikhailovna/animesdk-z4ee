#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NameValueCollection.h"
#include "unitysdk/System/Net/HttpRequestHeader.h"
#include "unitysdk/System/Net/WebHeaderCollectionType.h"
#include "unitysdk/System/Net/WebHeaderCollection_RfcChar.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class NameObjectCollectionBase_KeysCollection; }
namespace System::Net { class HeaderInfoTable; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_NET_WEBHEADERCOLLECTION_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CD1F890)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x1CD1CF50)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1CD29BC0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ALLOWMULTIVALUES_OFFSET UNITYSDK_OFFSET(0x1CD1F7E0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CHANGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CD292D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CHECKBADCHARS_OFFSET UNITYSDK_OFFSET(0x1CD29480)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CONTAINSNONASCIICHARS_OFFSET UNITYSDK_OFFSET(0x1CD29880)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETASSTRING_OFFSET UNITYSDK_OFFSET(0x1CD2A0D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD2B4A0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETKEY_OFFSET UNITYSDK_OFFSET(0x1CD2ADF0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1CD2A950)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_1_OFFSET UNITYSDK_OFFSET(0x1CD2B640)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1CD1C7C0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_1_OFFSET UNITYSDK_OFFSET(0x1CD2AEE0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLKEYS_OFFSET UNITYSDK_OFFSET(0x1CD2B730)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLOWHTTPREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1CD28FB0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CD2AD60)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_INNERCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1CD28F40)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1CD2B560)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x1CD2AFE0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ISVALIDTOKEN_OFFSET UNITYSDK_OFFSET(0x1CD298E0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_NORMALIZECOMMONHEADERS_OFFSET UNITYSDK_OFFSET(0x1CD28D20)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1CD2A940)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CD293D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1CD29150)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1CD28FF0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CD1F990)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SET_OFFSET UNITYSDK_OFFSET(0x1CD29DF0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1CD2AFD0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_THROWONRESTRICTEDHEADER_OFFSET UNITYSDK_OFFSET(0x1CD299B0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD2A090)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD2B810)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD2A570)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CD2A630)
#define SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1CE20)

namespace System::Net
{
	inline static constexpr unsigned int WebHeaderCollection_TypeDefinitionIndex = 2756;

	class WebHeaderCollection : public ::System::Collections::Specialized::NameValueCollection
	{
	public:
		static ::System::Net::HeaderInfoTable** StaticGet_HInfo()
		{
			return (::System::Net::HeaderInfoTable**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0x2EBF0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_HttpTrimCharacters()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0x2EBF8);
		}
		static ::Il2CppArray<::System::Net::WebHeaderCollection_RfcChar>** StaticGet_RfcCharMap()
		{
			return (::Il2CppArray<::System::Net::WebHeaderCollection_RfcChar>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0x2EC00);
		}
		static ::Il2CppArray<::System::SByte>** StaticGet_s_CommonHeaderHints()
		{
			return (::Il2CppArray<::System::SByte>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0x2EC08);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_CommonHeaderNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WebHeaderCollection_TypeDefinitionIndex)->GetStaticField(0x2EC10);
		}
		::Il2CppArray<::System::String*>* m_CommonHeaders; // 0x60
		::System::Collections::Specialized::NameValueCollection* m_InnerCollection; // 0x68
		::System::Net::WebHeaderCollectionType m_Type; // 0x70
		::System::Int32 m_NumCommonHeaders; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::WebHeaderCollectionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollectionType))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION__CCTOR_OFFSET))();
		}

		::System::Void NormalizeCommonHeaders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_NORMALIZECOMMONHEADERS_OFFSET))(this);
		}

		::System::Collections::Specialized::NameValueCollection* get_InnerCollection()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_INNERCOLLECTION_OFFSET))(this);
		}

		static ::System::Boolean AllowMultiValues(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ALLOWMULTIVALUES_OFFSET))(a1);
		}

		::System::Boolean get_AllowHttpRequestHeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLOWHTTPREQUESTHEADER_OFFSET))(this);
		}

		::System::Void Remove(::System::Net::HttpRequestHeader a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpRequestHeader))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET))(this, a1);
		}

		::System::Void AddInternal(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADDINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void ChangeInternal(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CHANGEINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveInternal(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVEINTERNAL_OFFSET))(this, a1);
		}

		static ::System::String* CheckBadChars(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CHECKBADCHARS_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsValidToken(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ISVALIDTOKEN_OFFSET))(a1);
		}

		static ::System::Boolean ContainsNonAsciiChars(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CONTAINSNONASCIICHARS_OFFSET))(a1);
		}

		::System::Void ThrowOnRestrictedHeader(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_THROWONRESTRICTEDHEADER_OFFSET))(this, a1);
		}

		::System::Void Add(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Add_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_1_OFFSET))(this, a1);
		}

		::System::Void Set(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SET_OFFSET))(this, a1, a2);
		}

		::System::Void SetInternal(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void Remove_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetValues(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_OFFSET))(this);
		}

		static ::System::String* GetAsString(::System::Collections::Specialized::NameValueCollection* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::Collections::Specialized::NameValueCollection*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETASSTRING_OFFSET))(a1, a2, a3);
		}

		::System::Void OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::String* Get(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* get_Keys()
		{
			return ((::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_KEYS_OFFSET))(this);
		}

		::System::String* Get_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetValues_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_1_OFFSET))(this, a1);
		}

		::System::String* GetKey(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETKEY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_AllKeys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLKEYS_OFFSET))(this);
		}
	};
}
