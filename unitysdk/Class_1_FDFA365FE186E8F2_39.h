#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A5E4D07C4CF2B_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FDFA365FE186E8F2_39_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C840040)
#define CLASS_1_FDFA365FE186E8F2_39_CLONE_OFFSET UNITYSDK_OFFSET(0x1C83F9A0)
#define CLASS_1_FDFA365FE186E8F2_39_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C83FC00)
#define CLASS_1_FDFA365FE186E8F2_39_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C83FA20)
#define CLASS_1_FDFA365FE186E8F2_39_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C83FDA0)
#define CLASS_1_FDFA365FE186E8F2_39_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C8401E0)
#define CLASS_1_FDFA365FE186E8F2_39_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C840120)
#define CLASS_1_FDFA365FE186E8F2_39_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C83FA00)
#define CLASS_1_FDFA365FE186E8F2_39_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C83F810)
#define CLASS_1_FDFA365FE186E8F2_39_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C83F9F0)
#define CLASS_1_FDFA365FE186E8F2_39_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C83FA10)
#define CLASS_1_FDFA365FE186E8F2_39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C83F870)
#define CLASS_1_FDFA365FE186E8F2_39_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C83FED0)
#define CLASS_1_FDFA365FE186E8F2_39_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C83FF30)
#define CLASS_1_FDFA365FE186E8F2_39__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8403D0)
#define CLASS_1_FDFA365FE186E8F2_39__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C83F8D0)
#define CLASS_1_FDFA365FE186E8F2_39__CTOR_OFFSET UNITYSDK_OFFSET(0x1C83F880)

inline static constexpr unsigned int Class_1_FDFA365FE186E8F2_39_TypeDefinitionIndex = 33691;

class Class_1_FDFA365FE186E8F2_39 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDFA365FE186E8F2_39_TypeDefinitionIndex)->GetStaticField(0x29010);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_39*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_39*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDFA365FE186E8F2_39_TypeDefinitionIndex)->GetStaticField(0x29018);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Class_1_EA5A5E4D07C4CF2B_1* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FDFA365FE186E8F2_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_39*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_39*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_39*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FDFA365FE186E8F2_39* Clone()
	{
		return ((::Class_1_FDFA365FE186E8F2_39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_EA5A5E4D07C4CF2B_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EA5A5E4D07C4CF2B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_1*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FDFA365FE186E8F2_39* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_39*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FDFA365FE186E8F2_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_39*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_39_MERGEFROM_1_OFFSET))(this, a1);
	}
};
