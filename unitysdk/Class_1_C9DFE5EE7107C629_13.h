#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_57.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_100;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C253300)
#define CLASS_1_C9DFE5EE7107C629_13_CLONE_OFFSET UNITYSDK_OFFSET(0x1C252360)
#define CLASS_1_C9DFE5EE7107C629_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C252620)
#define CLASS_1_C9DFE5EE7107C629_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C2525F0)
#define CLASS_1_C9DFE5EE7107C629_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C252820)
#define CLASS_1_C9DFE5EE7107C629_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C253DA0)
#define CLASS_1_C9DFE5EE7107C629_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C253B90)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C2523C0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C2523F0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1C252460)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1C252480)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1C2524A0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1C2524C0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1C252590)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1C2525D0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C252390)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C252500)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C2524F0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x1C252580)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1C252420)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x1C2523B0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1C252430)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1C252540)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C2523E0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C251FC0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C2523D0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C252400)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1C252470)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1C252490)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1C2524B0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1C2524D0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1C2525A0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1C2525E0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C2523A0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x1C252570)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1C252410)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C252510)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C2524E0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1C252530)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1C252560)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x1C2525C0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C252450)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1C252520)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1C252550)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1C2525B0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C252440)
#define CLASS_1_C9DFE5EE7107C629_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C251FF0)
#define CLASS_1_C9DFE5EE7107C629_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C252BA0)
#define CLASS_1_C9DFE5EE7107C629_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C252C00)
#define CLASS_1_C9DFE5EE7107C629_13__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2541A0)
#define CLASS_1_C9DFE5EE7107C629_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C252100)
#define CLASS_1_C9DFE5EE7107C629_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1C252000)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_13_TypeDefinitionIndex = 30850;

class Class_1_C9DFE5EE7107C629_13 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_13_TypeDefinitionIndex)->GetStaticField(0x2D6E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_13*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_13_TypeDefinitionIndex)->GetStaticField(0x2D6E8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_13_TypeDefinitionIndex)->GetStaticField(0x2D6F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_13_TypeDefinitionIndex)->GetStaticField(0x2D6F8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_13_TypeDefinitionIndex)->GetStaticField(0x2D700);
	}
	// static const ::System::Int32 Field_1_5 = 0x2EF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x44D; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x242; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x651; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x26E; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x6A0; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x35E; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_26; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Field_1_27; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_28; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_29; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_30; // 0x30
	::Class_1_21C7581DFE99F091_100* Field_1_31; // 0x38
	::System::UInt32 Field_1_32; // 0x40
	::System::UInt32 Field_1_33; // 0x44
	::System::UInt32 Field_1_34; // 0x48
	::System::UInt32 Field_1_35; // 0x4C
	::System::UInt32 Field_1_36; // 0x50
	::System::Boolean Field_1_37; // 0x54
	::System::Boolean Field_1_38; // 0x55
	::System::Boolean Field_1_39; // 0x56
	::System::Boolean Field_1_40; // 0x57
	::System::UInt32 Field_1_41; // 0x58
	::System::UInt32 Field_1_42; // 0x5C
	::System::Int64 Field_1_43; // 0x60
	::System::Int64 Field_1_44; // 0x68
	::System::UInt32 Field_1_45; // 0x70
	::System::UInt32 Field_1_46; // 0x74
	::Enum_3_0A3761FE34514D6C_57 Field_1_47; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_13*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_13*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_13*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_13* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_57 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_57(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_57 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_57))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_100* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_100*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_13*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_13*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
