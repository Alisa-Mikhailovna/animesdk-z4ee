#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EA5A5E4D07C4CF2B_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BE7FD90)
#define CLASS_1_EA5A5E4D07C4CF2B_10_CLONE_OFFSET UNITYSDK_OFFSET(0x1BE7F9C0)
#define CLASS_1_EA5A5E4D07C4CF2B_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BE7FAF0)
#define CLASS_1_EA5A5E4D07C4CF2B_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BE7FA20)
#define CLASS_1_EA5A5E4D07C4CF2B_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BE7FC60)
#define CLASS_1_EA5A5E4D07C4CF2B_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BE7FE70)
#define CLASS_1_EA5A5E4D07C4CF2B_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BE7FE40)
#define CLASS_1_EA5A5E4D07C4CF2B_10_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1BE7F940)
#define CLASS_1_EA5A5E4D07C4CF2B_10_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1BE7FA10)
#define CLASS_1_EA5A5E4D07C4CF2B_10_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1BE7FA00)
#define CLASS_1_EA5A5E4D07C4CF2B_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BE7F970)
#define CLASS_1_EA5A5E4D07C4CF2B_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BE7FC90)
#define CLASS_1_EA5A5E4D07C4CF2B_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BE7FCF0)
#define CLASS_1_EA5A5E4D07C4CF2B_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE7FFD0)
#define CLASS_1_EA5A5E4D07C4CF2B_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE7F990)
#define CLASS_1_EA5A5E4D07C4CF2B_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE7F980)

inline static constexpr unsigned int Class_1_EA5A5E4D07C4CF2B_10_TypeDefinitionIndex = 29306;

class Class_1_EA5A5E4D07C4CF2B_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_10*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA5A5E4D07C4CF2B_10_TypeDefinitionIndex)->GetStaticField(0x514C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::Int32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EA5A5E4D07C4CF2B_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_10*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_10*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_10*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EA5A5E4D07C4CF2B_10* Clone()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EA5A5E4D07C4CF2B_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_10*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EA5A5E4D07C4CF2B_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_10*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
