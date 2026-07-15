#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_10F56A639581CEB1_7;
class Class_1_10F56A639581CEB1_8;
class Class_1_333B902B2174BECA_3;
class Class_1_69AEC40D50978859;
class Class_1_6BFCE774F61D7A81;
class Class_1_D17272E82AE804C2_209;
class Class_1_D17272E82AE804C2_210;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D7F3D169C3137F53_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C04F290)
#define CLASS_1_D7F3D169C3137F53_CLONE_OFFSET UNITYSDK_OFFSET(0x1C04E560)
#define CLASS_1_D7F3D169C3137F53_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C04E7E0)
#define CLASS_1_D7F3D169C3137F53_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C04E780)
#define CLASS_1_D7F3D169C3137F53_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C04EA40)
#define CLASS_1_D7F3D169C3137F53_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C04FCE0)
#define CLASS_1_D7F3D169C3137F53_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C04F9D0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C04E5F0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C04E610)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1C04E660)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1C04E680)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1C04E6B0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1C04E6D0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1C04E710)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1C04E730)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1C04E750)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C04E5B0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C04E220)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1C04E5E0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1C04E630)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1C04E6A0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x1C04E6F0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_5_OFFSET UNITYSDK_OFFSET(0x1C04E700)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_6_OFFSET UNITYSDK_OFFSET(0x1C04E770)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C04E5D0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C04E600)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C04E620)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1C04E670)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1C04E690)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1C04E6C0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1C04E6E0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1C04E720)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1C04E740)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1C04E760)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C04E5C0)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1C04E650)
#define CLASS_1_D7F3D169C3137F53_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1C04E640)
#define CLASS_1_D7F3D169C3137F53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C04E280)
#define CLASS_1_D7F3D169C3137F53_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C04ECA0)
#define CLASS_1_D7F3D169C3137F53_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C04ED00)
#define CLASS_1_D7F3D169C3137F53__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C050120)
#define CLASS_1_D7F3D169C3137F53__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C04E3C0)
#define CLASS_1_D7F3D169C3137F53__CTOR_OFFSET UNITYSDK_OFFSET(0x1C04E290)

inline static constexpr unsigned int Class_1_D7F3D169C3137F53_TypeDefinitionIndex = 26082;

class Class_1_D7F3D169C3137F53 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6BFCE774F61D7A81*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6BFCE774F61D7A81*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7F3D169C3137F53_TypeDefinitionIndex)->GetStaticField(0x68030);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_210*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_210*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7F3D169C3137F53_TypeDefinitionIndex)->GetStaticField(0x68038);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_7*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7F3D169C3137F53_TypeDefinitionIndex)->GetStaticField(0x68040);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_69AEC40D50978859*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_69AEC40D50978859*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7F3D169C3137F53_TypeDefinitionIndex)->GetStaticField(0x68048);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_333B902B2174BECA_3*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_333B902B2174BECA_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7F3D169C3137F53_TypeDefinitionIndex)->GetStaticField(0x68050);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D7F3D169C3137F53*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D7F3D169C3137F53*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7F3D169C3137F53_TypeDefinitionIndex)->GetStaticField(0x68058);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_8*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7F3D169C3137F53_TypeDefinitionIndex)->GetStaticField(0x68060);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_209*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_209*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7F3D169C3137F53_TypeDefinitionIndex)->GetStaticField(0x68068);
	}
	// static const ::System::Int32 Field_1_8 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x427; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x14; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x7FB; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x13E; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6BFCE774F61D7A81*>* Field_1_26; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_209*>* Field_1_27; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69AEC40D50978859*>* Field_1_28; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_210*>* Field_1_29; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_8*>* Field_1_30; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_31; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_333B902B2174BECA_3*>* Field_1_32; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_7*>* Field_1_33; // 0x48
	::System::UInt32 Field_1_34; // 0x50
	::System::UInt32 Field_1_35; // 0x54
	::System::Double Field_1_36; // 0x58
	::System::UInt32 Field_1_37; // 0x60
	::System::UInt32 Field_1_38; // 0x64
	::System::UInt32 Field_1_39; // 0x68
	::System::UInt32 Field_1_40; // 0x6C
	::System::UInt32 Field_1_41; // 0x70
	::System::UInt32 Field_1_42; // 0x74
	::System::UInt32 Field_1_43; // 0x78
	::System::UInt32 Field_1_44; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D7F3D169C3137F53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53*))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D7F3D169C3137F53*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D7F3D169C3137F53*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D7F3D169C3137F53* Clone()
	{
		return ((::Class_1_D7F3D169C3137F53*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6BFCE774F61D7A81*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6BFCE774F61D7A81*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_209*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_209*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69AEC40D50978859*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69AEC40D50978859*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_333B902B2174BECA_3*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_333B902B2174BECA_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_7*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_210*>* Method_1_6E1EC2DF63D7020F_5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_210*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_8*>* Method_1_6E1EC2DF63D7020F_6()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_METHOD_1_6E1EC2DF63D7020F_6_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D7F3D169C3137F53* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D7F3D169C3137F53*))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D7F3D169C3137F53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53*))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D7F3D169C3137F53_MERGEFROM_1_OFFSET))(this, a1);
	}
};
