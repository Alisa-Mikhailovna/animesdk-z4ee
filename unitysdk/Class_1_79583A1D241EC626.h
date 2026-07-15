#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_5;
class Class_1_D17272E82AE804C2_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_79583A1D241EC626_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C4AAFB0)
#define CLASS_1_79583A1D241EC626_CLONE_OFFSET UNITYSDK_OFFSET(0x1C4AA3A0)
#define CLASS_1_79583A1D241EC626_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C4AA620)
#define CLASS_1_79583A1D241EC626_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C4AA5C0)
#define CLASS_1_79583A1D241EC626_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C4AA750)
#define CLASS_1_79583A1D241EC626_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C4AB850)
#define CLASS_1_79583A1D241EC626_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C4AB5B0)
#define CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C4AA430)
#define CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C4AA450)
#define CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1C4AA490)
#define CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1C4AA4B0)
#define CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1C4AA520)
#define CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1C4AA580)
#define CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1C4AA5A0)
#define CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C4AA410)
#define CLASS_1_79583A1D241EC626_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C4AA500)
#define CLASS_1_79583A1D241EC626_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1C4AA540)
#define CLASS_1_79583A1D241EC626_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x1C4AA560)
#define CLASS_1_79583A1D241EC626_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C4AA4E0)
#define CLASS_1_79583A1D241EC626_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1C4AA400)
#define CLASS_1_79583A1D241EC626_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C4AA090)
#define CLASS_1_79583A1D241EC626_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C4AA4D0)
#define CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C4AA440)
#define CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C4AA460)
#define CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1C4AA4A0)
#define CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1C4AA4C0)
#define CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1C4AA530)
#define CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1C4AA590)
#define CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1C4AA5B0)
#define CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C4AA420)
#define CLASS_1_79583A1D241EC626_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C4AA510)
#define CLASS_1_79583A1D241EC626_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1C4AA550)
#define CLASS_1_79583A1D241EC626_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x1C4AA570)
#define CLASS_1_79583A1D241EC626_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C4AA4F0)
#define CLASS_1_79583A1D241EC626_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C4AA480)
#define CLASS_1_79583A1D241EC626_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1C4AA3F0)
#define CLASS_1_79583A1D241EC626_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C4AA470)
#define CLASS_1_79583A1D241EC626_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C4AA0F0)
#define CLASS_1_79583A1D241EC626_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C4AA970)
#define CLASS_1_79583A1D241EC626_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C4AA9D0)
#define CLASS_1_79583A1D241EC626__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4ABB20)
#define CLASS_1_79583A1D241EC626__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4AA150)
#define CLASS_1_79583A1D241EC626__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AA100)

inline static constexpr unsigned int Class_1_79583A1D241EC626_TypeDefinitionIndex = 24222;

class Class_1_79583A1D241EC626 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79583A1D241EC626_TypeDefinitionIndex)->GetStaticField(0x505A0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_79583A1D241EC626*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_79583A1D241EC626*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79583A1D241EC626_TypeDefinitionIndex)->GetStaticField(0x505A8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xF; // 0x0
	::Class_1_D17272E82AE804C2_6* Field_1_17; // 0x10
	::Class_1_D17272E82AE804C2_5* Field_1_18; // 0x18
	::Class_1_D17272E82AE804C2_6* Field_1_19; // 0x20
	::Class_1_D17272E82AE804C2_5* Field_1_20; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_21; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_22; // 0x38
	::System::UInt32 Field_1_23; // 0x40
	::System::UInt32 Field_1_24; // 0x44
	::System::UInt64 Field_1_25; // 0x48
	::System::UInt32 Field_1_26; // 0x50
	::System::Boolean Field_1_27; // 0x54
	::System::UInt32 Field_1_28; // 0x58
	::System::UInt32 Field_1_29; // 0x5C
	::System::UInt32 Field_1_30; // 0x60
	::System::UInt32 Field_1_31; // 0x64
	::System::UInt32 Field_1_32; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_79583A1D241EC626* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79583A1D241EC626*))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_79583A1D241EC626*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_79583A1D241EC626*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_79583A1D241EC626* Clone()
	{
		return ((::Class_1_79583A1D241EC626*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_5*))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_5* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D17272E82AE804C2_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_5*))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_6* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_D17272E82AE804C2_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_D17272E82AE804C2_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_6*))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_6* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_D17272E82AE804C2_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_D17272E82AE804C2_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_6*))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_79583A1D241EC626* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_79583A1D241EC626*))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_79583A1D241EC626* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79583A1D241EC626*))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_79583A1D241EC626_MERGEFROM_1_OFFSET))(this, a1);
	}
};
