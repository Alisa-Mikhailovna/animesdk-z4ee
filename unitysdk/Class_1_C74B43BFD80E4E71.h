#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_C74B43BFD80E4E71_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C67B810)
#define CLASS_1_C74B43BFD80E4E71_CLONE_OFFSET UNITYSDK_OFFSET(0x1C67B320)
#define CLASS_1_C74B43BFD80E4E71_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C67B4E0)
#define CLASS_1_C74B43BFD80E4E71_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C67B380)
#define CLASS_1_C74B43BFD80E4E71_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C67B610)
#define CLASS_1_C74B43BFD80E4E71_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C67B940)
#define CLASS_1_C74B43BFD80E4E71_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C67B8A0)
#define CLASS_1_C74B43BFD80E4E71_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x1C67B370)
#define CLASS_1_C74B43BFD80E4E71_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C67B210)
#define CLASS_1_C74B43BFD80E4E71_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C67B360)
#define CLASS_1_C74B43BFD80E4E71_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C67B350)
#define CLASS_1_C74B43BFD80E4E71_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C67B240)
#define CLASS_1_C74B43BFD80E4E71_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C67B680)
#define CLASS_1_C74B43BFD80E4E71_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C67B6E0)
#define CLASS_1_C74B43BFD80E4E71__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C67BB00)
#define CLASS_1_C74B43BFD80E4E71__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C67B290)
#define CLASS_1_C74B43BFD80E4E71__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67B250)

inline static constexpr unsigned int Class_1_C74B43BFD80E4E71_TypeDefinitionIndex = 28964;

class Class_1_C74B43BFD80E4E71 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C74B43BFD80E4E71_TypeDefinitionIndex)->GetStaticField(0x66F50);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C74B43BFD80E4E71*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C74B43BFD80E4E71*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C74B43BFD80E4E71_TypeDefinitionIndex)->GetStaticField(0x66F58);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C74B43BFD80E4E71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74B43BFD80E4E71*))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C74B43BFD80E4E71*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C74B43BFD80E4E71*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C74B43BFD80E4E71* Clone()
	{
		return ((::Class_1_C74B43BFD80E4E71*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C74B43BFD80E4E71* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C74B43BFD80E4E71*))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C74B43BFD80E4E71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74B43BFD80E4E71*))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C74B43BFD80E4E71_MERGEFROM_1_OFFSET))(this, a1);
	}
};
