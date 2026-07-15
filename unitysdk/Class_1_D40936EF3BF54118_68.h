#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_805;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_68_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BBDAB80)
#define CLASS_1_D40936EF3BF54118_68_CLONE_OFFSET UNITYSDK_OFFSET(0x1BBDA700)
#define CLASS_1_D40936EF3BF54118_68_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BBDA8E0)
#define CLASS_1_D40936EF3BF54118_68_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BBDA760)
#define CLASS_1_D40936EF3BF54118_68_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BBDAA00)
#define CLASS_1_D40936EF3BF54118_68_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BBDACC0)
#define CLASS_1_D40936EF3BF54118_68_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BBDAC20)
#define CLASS_1_D40936EF3BF54118_68_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1BBDA590)
#define CLASS_1_D40936EF3BF54118_68_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1BBDA750)
#define CLASS_1_D40936EF3BF54118_68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BBDA5F0)
#define CLASS_1_D40936EF3BF54118_68_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BBDAA70)
#define CLASS_1_D40936EF3BF54118_68_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BBDAAD0)
#define CLASS_1_D40936EF3BF54118_68__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBDAE80)
#define CLASS_1_D40936EF3BF54118_68__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BBDA650)
#define CLASS_1_D40936EF3BF54118_68__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDA600)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_68_TypeDefinitionIndex = 30372;

class Class_1_D40936EF3BF54118_68 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_805*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_805*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_68_TypeDefinitionIndex)->GetStaticField(0x33440);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_68*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_68*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_68_TypeDefinitionIndex)->GetStaticField(0x33448);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_805*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_68*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_68*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_68*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_68* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_68*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_805*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_805*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_68* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_68*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_68*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_68_MERGEFROM_1_OFFSET))(this, a1);
	}
};
