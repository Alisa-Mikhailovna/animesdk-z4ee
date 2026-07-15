#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35D7E19A6BADFE2D;
class Class_1_D17272E82AE804C2_24;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6CB2450063991035_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C2280C0)
#define CLASS_1_6CB2450063991035_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1C227B90)
#define CLASS_1_6CB2450063991035_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C227C90)
#define CLASS_1_6CB2450063991035_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C227C30)
#define CLASS_1_6CB2450063991035_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C227E70)
#define CLASS_1_6CB2450063991035_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C228340)
#define CLASS_1_6CB2450063991035_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C228220)
#define CLASS_1_6CB2450063991035_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C227C10)
#define CLASS_1_6CB2450063991035_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C227BF0)
#define CLASS_1_6CB2450063991035_4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C2279A0)
#define CLASS_1_6CB2450063991035_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C227BE0)
#define CLASS_1_6CB2450063991035_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C227C20)
#define CLASS_1_6CB2450063991035_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C227C00)
#define CLASS_1_6CB2450063991035_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C227A00)
#define CLASS_1_6CB2450063991035_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C227F00)
#define CLASS_1_6CB2450063991035_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C227F60)
#define CLASS_1_6CB2450063991035_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C228550)
#define CLASS_1_6CB2450063991035_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C227A60)
#define CLASS_1_6CB2450063991035_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C227A10)

inline static constexpr unsigned int Class_1_6CB2450063991035_4_TypeDefinitionIndex = 26974;

class Class_1_6CB2450063991035_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CB2450063991035_4_TypeDefinitionIndex)->GetStaticField(0x2A810);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_35D7E19A6BADFE2D*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_35D7E19A6BADFE2D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CB2450063991035_4_TypeDefinitionIndex)->GetStaticField(0x2A818);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	::Class_1_D17272E82AE804C2_24* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35D7E19A6BADFE2D*>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6CB2450063991035_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CB2450063991035_4*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035_4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6CB2450063991035_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6CB2450063991035_4* Clone()
	{
		return ((::Class_1_6CB2450063991035_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35D7E19A6BADFE2D*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35D7E19A6BADFE2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_24* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_24*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6CB2450063991035_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6CB2450063991035_4*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6CB2450063991035_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CB2450063991035_4*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6CB2450063991035_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
