#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_25.h"
#include "unitysdk/System/Object.h"

class Class_1_3C6018135E54E36D_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D69A78F6275E2C58_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C559900)
#define CLASS_1_D69A78F6275E2C58_CLONE_OFFSET UNITYSDK_OFFSET(0x1C559390)
#define CLASS_1_D69A78F6275E2C58_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C559570)
#define CLASS_1_D69A78F6275E2C58_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C559410)
#define CLASS_1_D69A78F6275E2C58_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C5596A0)
#define CLASS_1_D69A78F6275E2C58_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C559BE0)
#define CLASS_1_D69A78F6275E2C58_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C559B30)
#define CLASS_1_D69A78F6275E2C58_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1C559400)
#define CLASS_1_D69A78F6275E2C58_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C5593E0)
#define CLASS_1_D69A78F6275E2C58_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C559270)
#define CLASS_1_D69A78F6275E2C58_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C5593C0)
#define CLASS_1_D69A78F6275E2C58_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C5593D0)
#define CLASS_1_D69A78F6275E2C58_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1C5593F0)
#define CLASS_1_D69A78F6275E2C58_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C5592A0)
#define CLASS_1_D69A78F6275E2C58_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C559720)
#define CLASS_1_D69A78F6275E2C58_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C559780)
#define CLASS_1_D69A78F6275E2C58__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C559DC0)
#define CLASS_1_D69A78F6275E2C58__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5592F0)
#define CLASS_1_D69A78F6275E2C58__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5592B0)

inline static constexpr unsigned int Class_1_D69A78F6275E2C58_TypeDefinitionIndex = 31991;

class Class_1_D69A78F6275E2C58 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D69A78F6275E2C58*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D69A78F6275E2C58*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D69A78F6275E2C58_TypeDefinitionIndex)->GetStaticField(0x1BE10);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3C6018135E54E36D_2*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3C6018135E54E36D_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D69A78F6275E2C58_TypeDefinitionIndex)->GetStaticField(0x1BE18);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D_2*>* Field_1_6; // 0x18
	::System::UInt64 Field_1_7; // 0x20
	::Enum_3_96F6662CA3713095_25 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D69A78F6275E2C58* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D69A78F6275E2C58*))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D69A78F6275E2C58*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D69A78F6275E2C58*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D69A78F6275E2C58* Clone()
	{
		return ((::Class_1_D69A78F6275E2C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_96F6662CA3713095_25 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_25(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_25 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_25))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D69A78F6275E2C58* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D69A78F6275E2C58*))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D69A78F6275E2C58* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D69A78F6275E2C58*))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D69A78F6275E2C58_MERGEFROM_1_OFFSET))(this, a1);
	}
};
