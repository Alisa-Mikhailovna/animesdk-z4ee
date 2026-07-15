#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0F040833AFEDF4F6;
class Class_1_10F56A639581CEB1_2;
class Class_1_48AADA497C3F117F;
class Class_1_60E3B7F7BA004DCE;
class Class_1_D17272E82AE804C2_29;
class Class_1_D17272E82AE804C2_30;
class Class_1_D17272E82AE804C2_31;
class Class_1_D17272E82AE804C2_32;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2AEC7C4C0F203579_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C828520)
#define CLASS_1_2AEC7C4C0F203579_CLONE_OFFSET UNITYSDK_OFFSET(0x1C827770)
#define CLASS_1_2AEC7C4C0F203579_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8279D0)
#define CLASS_1_2AEC7C4C0F203579_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8279A0)
#define CLASS_1_2AEC7C4C0F203579_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C827C30)
#define CLASS_1_2AEC7C4C0F203579_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C829010)
#define CLASS_1_2AEC7C4C0F203579_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C828C60)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C8277D0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C8277F0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1C827830)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1C827880)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1C8278A0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1C8278F0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1C827930)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1C827960)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C8277B0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C827860)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_47587B9526E5B08E_OFFSET UNITYSDK_OFFSET(0x1C827950)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C8273C0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1C827810)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1C827820)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1C827850)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x1C8278C0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_5_OFFSET UNITYSDK_OFFSET(0x1C827910)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_6_OFFSET UNITYSDK_OFFSET(0x1C827920)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C8277A0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C8277E0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C827800)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1C827840)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1C827890)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1C8278B0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1C827900)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1C827940)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1C827970)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C8277C0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C827870)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1C827990)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C8278E0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1C827980)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C8278D0)
#define CLASS_1_2AEC7C4C0F203579_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8273F0)
#define CLASS_1_2AEC7C4C0F203579_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C827E10)
#define CLASS_1_2AEC7C4C0F203579_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C827E70)
#define CLASS_1_2AEC7C4C0F203579__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C829510)
#define CLASS_1_2AEC7C4C0F203579__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C827550)
#define CLASS_1_2AEC7C4C0F203579__CTOR_OFFSET UNITYSDK_OFFSET(0x1C827400)

inline static constexpr unsigned int Class_1_2AEC7C4C0F203579_TypeDefinitionIndex = 24623;

class Class_1_2AEC7C4C0F203579 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_48AADA497C3F117F*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_48AADA497C3F117F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x27C00);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_0F040833AFEDF4F6*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_0F040833AFEDF4F6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x27C08);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_60E3B7F7BA004DCE*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_60E3B7F7BA004DCE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x27C10);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_2AEC7C4C0F203579*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2AEC7C4C0F203579*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x27C18);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_29*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_29*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x27C20);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x27C28);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_2*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x27C30);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_31*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_31*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x27C38);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_30*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_30*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x27C40);
	}
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_19 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_21 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x13; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x14; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x15; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x16; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Field_1_29; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_29*>* Field_1_30; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_31*>* Field_1_31; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_48AADA497C3F117F*>* Field_1_32; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_2*>* Field_1_33; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0F040833AFEDF4F6*>* Field_1_34; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_30*>* Field_1_35; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_60E3B7F7BA004DCE*>* Field_1_36; // 0x48
	::Class_1_D17272E82AE804C2_32* Field_1_37; // 0x50
	::Google::Protobuf::UnknownFieldSet* Field_1_38; // 0x58
	::System::UInt32 Field_1_39; // 0x60
	::System::UInt32 Field_1_40; // 0x64
	::System::UInt32 Field_1_41; // 0x68
	::System::UInt32 Field_1_42; // 0x6C
	::System::UInt32 Field_1_43; // 0x70
	::System::UInt32 Field_1_44; // 0x74
	::System::UInt32 Field_1_45; // 0x78
	::System::Boolean Field_1_46; // 0x7C
	::System::Boolean Field_1_47; // 0x7D
	::System::UInt32 Field_1_48; // 0x80
	::System::UInt32 Field_1_49; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2AEC7C4C0F203579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2AEC7C4C0F203579*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2AEC7C4C0F203579*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2AEC7C4C0F203579*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2AEC7C4C0F203579* Clone()
	{
		return ((::Class_1_2AEC7C4C0F203579*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_60E3B7F7BA004DCE*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_60E3B7F7BA004DCE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0F040833AFEDF4F6*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0F040833AFEDF4F6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_48AADA497C3F117F*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_48AADA497C3F117F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_30*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_30*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_32* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_32*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_31*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_31*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_2*>* Method_1_6E1EC2DF63D7020F_5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_29*>* Method_1_6E1EC2DF63D7020F_6()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_29*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_6_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Method_1_47587B9526E5B08E()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_47587B9526E5B08E_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2AEC7C4C0F203579* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2AEC7C4C0F203579*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2AEC7C4C0F203579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2AEC7C4C0F203579*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_MERGEFROM_1_OFFSET))(this, a1);
	}
};
