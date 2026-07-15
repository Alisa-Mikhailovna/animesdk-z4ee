#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDFIXED32_OFFSET UNITYSDK_OFFSET(0x19816DC0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDFIXED64_OFFSET UNITYSDK_OFFSET(0x19816DF0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDGROUP_OFFSET UNITYSDK_OFFSET(0x19816E70)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDLENGTHDELIMITED_OFFSET UNITYSDK_OFFSET(0x19816E20)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDVARINT_OFFSET UNITYSDK_OFFSET(0x19816D90)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_EQUALS_OFFSET UNITYSDK_OFFSET(0x19815F50)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19816030)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_GETSERIALIZEDSIZE_OFFSET UNITYSDK_OFFSET(0x198165C0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19816CD0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_WRITETO_OFFSET UNITYSDK_OFFSET(0x198160D0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x19815F40)

namespace Google::Protobuf
{
	inline static constexpr unsigned int UnknownField_TypeDefinitionIndex = 5417;

	class UnknownField : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Google::Protobuf::UnknownFieldSet*>* groupList; // 0x10
		::System::Collections::Generic::List_1<::Google::Protobuf::ByteString*>* lengthDelimitedList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt64>* fixed64List; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* fixed32List; // 0x28
		::System::Collections::Generic::List_1<::System::UInt64>* varintList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Int32 a1, ::Google::Protobuf::CodedOutputStream* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_WRITETO_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetSerializedSize(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_GETSERIALIZEDSIZE_OFFSET))(this, a1);
		}

		::Google::Protobuf::UnknownField* MergeFrom(::Google::Protobuf::UnknownField* a1)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::Google::Protobuf::UnknownField*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_MERGEFROM_OFFSET))(this, a1);
		}

		::Google::Protobuf::UnknownField* AddVarint(::System::UInt64 a1)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDVARINT_OFFSET))(this, a1);
		}

		::Google::Protobuf::UnknownField* AddFixed32(::System::UInt32 a1)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDFIXED32_OFFSET))(this, a1);
		}

		::Google::Protobuf::UnknownField* AddFixed64(::System::UInt64 a1)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDFIXED64_OFFSET))(this, a1);
		}

		::Google::Protobuf::UnknownField* AddLengthDelimited(::Google::Protobuf::ByteString* a1)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDLENGTHDELIMITED_OFFSET))(this, a1);
		}

		::Google::Protobuf::UnknownField* AddGroup(::Google::Protobuf::UnknownFieldSet* a1)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::Google::Protobuf::UnknownFieldSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDGROUP_OFFSET))(this, a1);
		}
	};
}
