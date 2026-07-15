#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9E417278351157F_4;
class Class_1_D17272E82AE804C2_854;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7E1E05C17C895270_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C70DE30)
#define CLASS_1_7E1E05C17C895270_CLONE_OFFSET UNITYSDK_OFFSET(0x1C70D6A0)
#define CLASS_1_7E1E05C17C895270_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C70D7C0)
#define CLASS_1_7E1E05C17C895270_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C70D790)
#define CLASS_1_7E1E05C17C895270_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C70D970)
#define CLASS_1_7E1E05C17C895270_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C70E100)
#define CLASS_1_7E1E05C17C895270_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C70DFA0)
#define CLASS_1_7E1E05C17C895270_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1C70D710)
#define CLASS_1_7E1E05C17C895270_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C70D700)
#define CLASS_1_7E1E05C17C895270_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C70D770)
#define CLASS_1_7E1E05C17C895270_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C70D760)
#define CLASS_1_7E1E05C17C895270_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C70D480)
#define CLASS_1_7E1E05C17C895270_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C70D6F0)
#define CLASS_1_7E1E05C17C895270_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C70D780)
#define CLASS_1_7E1E05C17C895270_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C70D6E0)
#define CLASS_1_7E1E05C17C895270_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C70D6D0)
#define CLASS_1_7E1E05C17C895270_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C70D4B0)
#define CLASS_1_7E1E05C17C895270_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C70DB70)
#define CLASS_1_7E1E05C17C895270_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C70DBD0)
#define CLASS_1_7E1E05C17C895270__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C70E2B0)
#define CLASS_1_7E1E05C17C895270__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C70D540)
#define CLASS_1_7E1E05C17C895270__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70D4C0)

inline static constexpr unsigned int Class_1_7E1E05C17C895270_TypeDefinitionIndex = 33053;

class Class_1_7E1E05C17C895270 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_854*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_854*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E1E05C17C895270_TypeDefinitionIndex)->GetStaticField(0xA1D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E1E05C17C895270_TypeDefinitionIndex)->GetStaticField(0xA1D8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7E1E05C17C895270*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7E1E05C17C895270*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E1E05C17C895270_TypeDefinitionIndex)->GetStaticField(0xA1E0);
	}
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	::System::String* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_854*>* Field_1_11; // 0x28
	::Class_1_C9E417278351157F_4* Field_1_12; // 0x30
	::System::Boolean Field_1_13; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7E1E05C17C895270* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E1E05C17C895270*))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7E1E05C17C895270*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7E1E05C17C895270*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7E1E05C17C895270* Clone()
	{
		return ((::Class_1_7E1E05C17C895270*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_854*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_854*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_C9E417278351157F_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9E417278351157F_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9E417278351157F_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F_4*))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7E1E05C17C895270* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7E1E05C17C895270*))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7E1E05C17C895270* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E1E05C17C895270*))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7E1E05C17C895270_MERGEFROM_1_OFFSET))(this, a1);
	}
};
