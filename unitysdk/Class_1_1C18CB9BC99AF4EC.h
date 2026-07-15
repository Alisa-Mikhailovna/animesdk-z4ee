#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1C18CB9BC99AF4EC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C72F4E0)
#define CLASS_1_1C18CB9BC99AF4EC_CLONE_OFFSET UNITYSDK_OFFSET(0x1C72EF40)
#define CLASS_1_1C18CB9BC99AF4EC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C72F0A0)
#define CLASS_1_1C18CB9BC99AF4EC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C72EFE0)
#define CLASS_1_1C18CB9BC99AF4EC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C72F1B0)
#define CLASS_1_1C18CB9BC99AF4EC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C72F5E0)
#define CLASS_1_1C18CB9BC99AF4EC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C72F580)
#define CLASS_1_1C18CB9BC99AF4EC_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C72EDE0)
#define CLASS_1_1C18CB9BC99AF4EC_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C72EFD0)
#define CLASS_1_1C18CB9BC99AF4EC_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1C72EFC0)
#define CLASS_1_1C18CB9BC99AF4EC_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C72EFA0)
#define CLASS_1_1C18CB9BC99AF4EC_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1C72EFB0)
#define CLASS_1_1C18CB9BC99AF4EC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C72EF90)
#define CLASS_1_1C18CB9BC99AF4EC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C72EE40)
#define CLASS_1_1C18CB9BC99AF4EC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C72F2C0)
#define CLASS_1_1C18CB9BC99AF4EC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C72F320)
#define CLASS_1_1C18CB9BC99AF4EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C72F6D0)
#define CLASS_1_1C18CB9BC99AF4EC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C72EEA0)
#define CLASS_1_1C18CB9BC99AF4EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C72EE50)

inline static constexpr unsigned int Class_1_1C18CB9BC99AF4EC_TypeDefinitionIndex = 28914;

class Class_1_1C18CB9BC99AF4EC : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1C18CB9BC99AF4EC*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1C18CB9BC99AF4EC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C18CB9BC99AF4EC_TypeDefinitionIndex)->GetStaticField(0x2E210);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C18CB9BC99AF4EC_TypeDefinitionIndex)->GetStaticField(0x2E218);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::System::Boolean Field_1_8; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1C18CB9BC99AF4EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C18CB9BC99AF4EC*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1C18CB9BC99AF4EC*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1C18CB9BC99AF4EC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1C18CB9BC99AF4EC* Clone()
	{
		return ((::Class_1_1C18CB9BC99AF4EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1C18CB9BC99AF4EC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1C18CB9BC99AF4EC*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1C18CB9BC99AF4EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C18CB9BC99AF4EC*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1C18CB9BC99AF4EC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
