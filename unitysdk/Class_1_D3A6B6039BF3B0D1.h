#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_10F56A639581CEB1_1;
class Class_1_196CAEC5A1F2ACEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D3A6B6039BF3B0D1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C1EC690)
#define CLASS_1_D3A6B6039BF3B0D1_CLONE_OFFSET UNITYSDK_OFFSET(0x1C1EC220)
#define CLASS_1_D3A6B6039BF3B0D1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C1EC310)
#define CLASS_1_D3A6B6039BF3B0D1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C1EC2B0)
#define CLASS_1_D3A6B6039BF3B0D1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C1EC460)
#define CLASS_1_D3A6B6039BF3B0D1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C1EC900)
#define CLASS_1_D3A6B6039BF3B0D1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C1EC7F0)
#define CLASS_1_D3A6B6039BF3B0D1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C1EC290)
#define CLASS_1_D3A6B6039BF3B0D1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C1EC030)
#define CLASS_1_D3A6B6039BF3B0D1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1C1EC280)
#define CLASS_1_D3A6B6039BF3B0D1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C1EC270)
#define CLASS_1_D3A6B6039BF3B0D1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C1EC2A0)
#define CLASS_1_D3A6B6039BF3B0D1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C1EC090)
#define CLASS_1_D3A6B6039BF3B0D1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C1EC4F0)
#define CLASS_1_D3A6B6039BF3B0D1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C1EC550)
#define CLASS_1_D3A6B6039BF3B0D1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1ECB90)
#define CLASS_1_D3A6B6039BF3B0D1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1EC110)
#define CLASS_1_D3A6B6039BF3B0D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1EC0A0)

inline static constexpr unsigned int Class_1_D3A6B6039BF3B0D1_TypeDefinitionIndex = 24328;

class Class_1_D3A6B6039BF3B0D1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D3A6B6039BF3B0D1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D3A6B6039BF3B0D1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3A6B6039BF3B0D1_TypeDefinitionIndex)->GetStaticField(0x26CE0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_196CAEC5A1F2ACEA*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_196CAEC5A1F2ACEA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3A6B6039BF3B0D1_TypeDefinitionIndex)->GetStaticField(0x26CE8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_1*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3A6B6039BF3B0D1_TypeDefinitionIndex)->GetStaticField(0x26CF0);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_1*>* Field_1_7; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_196CAEC5A1F2ACEA*>* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D3A6B6039BF3B0D1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3A6B6039BF3B0D1*))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D3A6B6039BF3B0D1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D3A6B6039BF3B0D1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D3A6B6039BF3B0D1* Clone()
	{
		return ((::Class_1_D3A6B6039BF3B0D1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_196CAEC5A1F2ACEA*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_196CAEC5A1F2ACEA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D3A6B6039BF3B0D1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D3A6B6039BF3B0D1*))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D3A6B6039BF3B0D1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3A6B6039BF3B0D1*))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D3A6B6039BF3B0D1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
