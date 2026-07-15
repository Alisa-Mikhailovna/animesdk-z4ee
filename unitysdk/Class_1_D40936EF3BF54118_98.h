#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9A27691571A52F2A;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_98_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BDD0770)
#define CLASS_1_D40936EF3BF54118_98_CLONE_OFFSET UNITYSDK_OFFSET(0x1BDD0350)
#define CLASS_1_D40936EF3BF54118_98_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BDD04D0)
#define CLASS_1_D40936EF3BF54118_98_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BDD0390)
#define CLASS_1_D40936EF3BF54118_98_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BDD05F0)
#define CLASS_1_D40936EF3BF54118_98_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BDD08B0)
#define CLASS_1_D40936EF3BF54118_98_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BDD0810)
#define CLASS_1_D40936EF3BF54118_98_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1BDD0210)
#define CLASS_1_D40936EF3BF54118_98_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1BDD0380)
#define CLASS_1_D40936EF3BF54118_98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BDD0240)
#define CLASS_1_D40936EF3BF54118_98_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BDD0660)
#define CLASS_1_D40936EF3BF54118_98_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BDD06C0)
#define CLASS_1_D40936EF3BF54118_98__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDD0A70)
#define CLASS_1_D40936EF3BF54118_98__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDD02A0)
#define CLASS_1_D40936EF3BF54118_98__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD0250)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_98_TypeDefinitionIndex = 33362;

class Class_1_D40936EF3BF54118_98 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9A27691571A52F2A*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9A27691571A52F2A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_98_TypeDefinitionIndex)->GetStaticField(0x1DC90);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_98*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_98_TypeDefinitionIndex)->GetStaticField(0x1DC98);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9A27691571A52F2A*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_98*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_98*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_98*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_98* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9A27691571A52F2A*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9A27691571A52F2A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_98* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_98*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_98*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_98_MERGEFROM_1_OFFSET))(this, a1);
	}
};
