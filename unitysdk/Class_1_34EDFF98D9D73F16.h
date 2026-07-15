#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_80;
class Class_1_70D5AA87C5BBA20B_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_34EDFF98D9D73F16_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C808FF0)
#define CLASS_1_34EDFF98D9D73F16_CLONE_OFFSET UNITYSDK_OFFSET(0x1C808700)
#define CLASS_1_34EDFF98D9D73F16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C808860)
#define CLASS_1_34EDFF98D9D73F16_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C808800)
#define CLASS_1_34EDFF98D9D73F16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C808A70)
#define CLASS_1_34EDFF98D9D73F16_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C809410)
#define CLASS_1_34EDFF98D9D73F16_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8091F0)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C8087E0)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C8087C0)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C8087A0)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C808780)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C8084C0)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C808770)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C8087F0)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C8087D0)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C8087B0)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C808790)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C808760)
#define CLASS_1_34EDFF98D9D73F16_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C808750)
#define CLASS_1_34EDFF98D9D73F16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C808520)
#define CLASS_1_34EDFF98D9D73F16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C808CE0)
#define CLASS_1_34EDFF98D9D73F16_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C808D40)
#define CLASS_1_34EDFF98D9D73F16__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C809620)
#define CLASS_1_34EDFF98D9D73F16__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C808580)
#define CLASS_1_34EDFF98D9D73F16__CTOR_OFFSET UNITYSDK_OFFSET(0x1C808530)

inline static constexpr unsigned int Class_1_34EDFF98D9D73F16_TypeDefinitionIndex = 30505;

class Class_1_34EDFF98D9D73F16 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_70D5AA87C5BBA20B_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_70D5AA87C5BBA20B_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34EDFF98D9D73F16_TypeDefinitionIndex)->GetStaticField(0x260C0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_34EDFF98D9D73F16*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_34EDFF98D9D73F16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34EDFF98D9D73F16_TypeDefinitionIndex)->GetStaticField(0x260C8);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::Class_1_075C34D03AFA1215_80* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_70D5AA87C5BBA20B_4*>* Field_1_10; // 0x20
	::Class_1_075C34D03AFA1215_80* Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x30
	::System::Boolean Field_1_13; // 0x34
	::System::UInt32 Field_1_14; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_34EDFF98D9D73F16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34EDFF98D9D73F16*))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_34EDFF98D9D73F16*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_34EDFF98D9D73F16*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_34EDFF98D9D73F16* Clone()
	{
		return ((::Class_1_34EDFF98D9D73F16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_70D5AA87C5BBA20B_4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_70D5AA87C5BBA20B_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_80* Method_1_24748FC20F375725()
	{
		return ((::Class_1_075C34D03AFA1215_80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_075C34D03AFA1215_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_80*))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_075C34D03AFA1215_80* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_075C34D03AFA1215_80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_075C34D03AFA1215_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_80*))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_34EDFF98D9D73F16* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_34EDFF98D9D73F16*))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_34EDFF98D9D73F16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34EDFF98D9D73F16*))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_34EDFF98D9D73F16_MERGEFROM_1_OFFSET))(this, a1);
	}
};
