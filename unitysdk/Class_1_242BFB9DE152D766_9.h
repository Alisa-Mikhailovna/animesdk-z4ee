#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A99AF1699F7F17E_10;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BEE2DA0)
#define CLASS_1_242BFB9DE152D766_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1BEE2730)
#define CLASS_1_242BFB9DE152D766_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BEE2940)
#define CLASS_1_242BFB9DE152D766_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BEE27D0)
#define CLASS_1_242BFB9DE152D766_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEE2C10)
#define CLASS_1_242BFB9DE152D766_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BEE2E90)
#define CLASS_1_242BFB9DE152D766_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BEE2E00)
#define CLASS_1_242BFB9DE152D766_9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1BEE27B0)
#define CLASS_1_242BFB9DE152D766_9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1BEE2670)
#define CLASS_1_242BFB9DE152D766_9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1BEE27C0)
#define CLASS_1_242BFB9DE152D766_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BEE26A0)
#define CLASS_1_242BFB9DE152D766_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BEE2CB0)
#define CLASS_1_242BFB9DE152D766_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BEE2D10)
#define CLASS_1_242BFB9DE152D766_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEE3040)
#define CLASS_1_242BFB9DE152D766_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEE26C0)
#define CLASS_1_242BFB9DE152D766_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE26B0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_9_TypeDefinitionIndex = 31461;

class Class_1_242BFB9DE152D766_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_9_TypeDefinitionIndex)->GetStaticField(0x5CA50);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_0A99AF1699F7F17E_10* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_9*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_9* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_CLONE_OFFSET))(this);
	}

	::Class_1_0A99AF1699F7F17E_10* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0A99AF1699F7F17E_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_0A99AF1699F7F17E_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_10*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_9*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_9*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
