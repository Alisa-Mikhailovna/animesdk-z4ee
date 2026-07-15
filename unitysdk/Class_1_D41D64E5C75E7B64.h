#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_097D93F83453E9A1_1;
class Class_1_21DCD4640D389503_2;
class Class_1_45BB92167AED63A0_103;
class Class_1_45BB92167AED63A0_52;
class Class_1_51AD4A996C8C1E92_1;
class Class_1_590EC2E573209D50;
class Class_1_7E1E05C17C895270;
class Class_1_C086E47345F86771_11;
class Class_1_D17272E82AE804C2_1114;
class Class_1_D17272E82AE804C2_1115;
class Class_1_D17272E82AE804C2_575;
class Class_1_D40936EF3BF54118_92;
class Class_1_EBB10EC01CCC4716_11;
class Class_1_F1F83A16E5B8B459_9;
class Class_1_FC8BF52F067E8047;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_D41D64E5C75E7B64_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C7388E0)
#define CLASS_1_D41D64E5C75E7B64_CLONE_OFFSET UNITYSDK_OFFSET(0x1C7376E0)
#define CLASS_1_D41D64E5C75E7B64_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C737910)
#define CLASS_1_D41D64E5C75E7B64_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7378E0)
#define CLASS_1_D41D64E5C75E7B64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C737DE0)
#define CLASS_1_D41D64E5C75E7B64_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C739660)
#define CLASS_1_D41D64E5C75E7B64_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C738DF0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C737740)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1C737770)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x1C7377D0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_4_OFFSET UNITYSDK_OFFSET(0x1C737840)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_5_OFFSET UNITYSDK_OFFSET(0x1C737860)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_6_OFFSET UNITYSDK_OFFSET(0x1C737880)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_7_OFFSET UNITYSDK_OFFSET(0x1C7378A0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C737720)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1C7378D0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C737710)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C737060)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1C7377C0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1C7377B0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1C737790)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1C7377A0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1C7377F0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x1C737800)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_5_OFFSET UNITYSDK_OFFSET(0x1C737810)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_6_OFFSET UNITYSDK_OFFSET(0x1C737820)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_7_OFFSET UNITYSDK_OFFSET(0x1C737830)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_8_OFFSET UNITYSDK_OFFSET(0x1C7378C0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C737760)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C737750)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1C737780)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x1C7377E0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_4_OFFSET UNITYSDK_OFFSET(0x1C737850)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_5_OFFSET UNITYSDK_OFFSET(0x1C737870)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_6_OFFSET UNITYSDK_OFFSET(0x1C737890)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_7_OFFSET UNITYSDK_OFFSET(0x1C7378B0)
#define CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C737730)
#define CLASS_1_D41D64E5C75E7B64_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C737090)
#define CLASS_1_D41D64E5C75E7B64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7382F0)
#define CLASS_1_D41D64E5C75E7B64_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C738350)
#define CLASS_1_D41D64E5C75E7B64__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C739EB0)
#define CLASS_1_D41D64E5C75E7B64__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C737280)
#define CLASS_1_D41D64E5C75E7B64__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7370A0)

inline static constexpr unsigned int Class_1_D41D64E5C75E7B64_TypeDefinitionIndex = 33063;

class Class_1_D41D64E5C75E7B64 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C086E47345F86771_11*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C086E47345F86771_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC020);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C086E47345F86771_11*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C086E47345F86771_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC028);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_45BB92167AED63A0_52*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_45BB92167AED63A0_52*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC030);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FC8BF52F067E8047*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FC8BF52F067E8047*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC038);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_097D93F83453E9A1_1*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_097D93F83453E9A1_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC040);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_590EC2E573209D50*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_590EC2E573209D50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC048);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC050);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_11*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC058);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC060);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D41D64E5C75E7B64*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D41D64E5C75E7B64*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC068);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_575*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_575*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC070);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1115*>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1115*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D41D64E5C75E7B64_TypeDefinitionIndex)->GetStaticField(0xC078);
	}
	// static const ::System::Int32 Field_1_12 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x7AA; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x5AC; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x20D; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xF0; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x46A; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x260; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x43E; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x145; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x57D; // 0x0
	// static const ::System::Int32 Field_1_30 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_31 = 0xF; // 0x0
	::Class_1_21DCD4640D389503_2* Field_1_32; // 0x10
	::Class_1_F1F83A16E5B8B459_9* Field_1_33; // 0x18
	::Class_1_51AD4A996C8C1E92_1* Field_1_34; // 0x20
	::Class_1_D17272E82AE804C2_1114* Field_1_35; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_36; // 0x30
	::Class_1_7E1E05C17C895270* Field_1_37; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_11*>* Field_1_38; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>* Field_1_39; // 0x48
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_097D93F83453E9A1_1*>* Field_1_40; // 0x50
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_11*>* Field_1_41; // 0x58
	::Class_1_45BB92167AED63A0_103* Field_1_42; // 0x60
	::Class_1_075C34D03AFA1215_7* Field_1_43; // 0x68
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_52*>* Field_1_44; // 0x70
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_590EC2E573209D50*>* Field_1_45; // 0x78
	::Class_1_D40936EF3BF54118_92* Field_1_46; // 0x80
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_11*>* Field_1_47; // 0x88
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_48; // 0x90
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1115*>* Field_1_49; // 0x98
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_575*>* Field_1_50; // 0xA0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_51; // 0xA8
	::Proto::ItemList* Field_1_52; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D41D64E5C75E7B64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D41D64E5C75E7B64*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D41D64E5C75E7B64*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D41D64E5C75E7B64*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D41D64E5C75E7B64* Clone()
	{
		return ((::Class_1_D41D64E5C75E7B64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_075C34D03AFA1215_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_1114* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D17272E82AE804C2_1114*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_1114* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1114*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_11*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_103* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_45BB92167AED63A0_103*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_45BB92167AED63A0_103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_103*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_11*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_2* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_21DCD4640D389503_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_21DCD4640D389503_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_2*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_097D93F83453E9A1_1*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_097D93F83453E9A1_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1115*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1115*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_11*>* Method_1_6E1EC2DF63D7020F_5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C086E47345F86771_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_575*>* Method_1_6E1EC2DF63D7020F_6()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_575*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_6_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_52*>* Method_1_6E1EC2DF63D7020F_7()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_52*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_7_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_92* Method_1_24748FC20F375725_4()
	{
		return ((::Class_1_D40936EF3BF54118_92*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_4_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_4(::Class_1_D40936EF3BF54118_92* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_92*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_4_OFFSET))(this, a1);
	}

	::Class_1_7E1E05C17C895270* Method_1_24748FC20F375725_5()
	{
		return ((::Class_1_7E1E05C17C895270*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_5_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_5(::Class_1_7E1E05C17C895270* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E1E05C17C895270*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_5_OFFSET))(this, a1);
	}

	::Class_1_F1F83A16E5B8B459_9* Method_1_24748FC20F375725_6()
	{
		return ((::Class_1_F1F83A16E5B8B459_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_6_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_6(::Class_1_F1F83A16E5B8B459_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_9*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_6_OFFSET))(this, a1);
	}

	::Class_1_51AD4A996C8C1E92_1* Method_1_24748FC20F375725_7()
	{
		return ((::Class_1_51AD4A996C8C1E92_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_24748FC20F375725_7_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_7(::Class_1_51AD4A996C8C1E92_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_51AD4A996C8C1E92_1*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_8C8625211DA811AE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_590EC2E573209D50*>* Method_1_6E1EC2DF63D7020F_8()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_590EC2E573209D50*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_6E1EC2DF63D7020F_8_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D41D64E5C75E7B64* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D41D64E5C75E7B64*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D41D64E5C75E7B64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D41D64E5C75E7B64*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D41D64E5C75E7B64_MERGEFROM_1_OFFSET))(this, a1);
	}
};
