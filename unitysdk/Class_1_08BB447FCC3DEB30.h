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
namespace System { class String; }

#define CLASS_1_08BB447FCC3DEB30_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BF3FBA0)
#define CLASS_1_08BB447FCC3DEB30_CLONE_OFFSET UNITYSDK_OFFSET(0x1BF3F610)
#define CLASS_1_08BB447FCC3DEB30_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BF3F770)
#define CLASS_1_08BB447FCC3DEB30_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BF3F6D0)
#define CLASS_1_08BB447FCC3DEB30_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BF3F800)
#define CLASS_1_08BB447FCC3DEB30_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BF3FE40)
#define CLASS_1_08BB447FCC3DEB30_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BF3FDD0)
#define CLASS_1_08BB447FCC3DEB30_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1BF3F660)
#define CLASS_1_08BB447FCC3DEB30_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1BF3F640)
#define CLASS_1_08BB447FCC3DEB30_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1BF3F690)
#define CLASS_1_08BB447FCC3DEB30_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1BF3F6C0)
#define CLASS_1_08BB447FCC3DEB30_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1BF3F4E0)
#define CLASS_1_08BB447FCC3DEB30_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1BF3F670)
#define CLASS_1_08BB447FCC3DEB30_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1BF3F650)
#define CLASS_1_08BB447FCC3DEB30_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1BF3F680)
#define CLASS_1_08BB447FCC3DEB30_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1BF3F6B0)
#define CLASS_1_08BB447FCC3DEB30_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1BF3F6A0)
#define CLASS_1_08BB447FCC3DEB30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BF3F510)
#define CLASS_1_08BB447FCC3DEB30_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BF3F920)
#define CLASS_1_08BB447FCC3DEB30_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BF3F980)
#define CLASS_1_08BB447FCC3DEB30__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF3FF50)
#define CLASS_1_08BB447FCC3DEB30__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF3F570)
#define CLASS_1_08BB447FCC3DEB30__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3F520)

inline static constexpr unsigned int Class_1_08BB447FCC3DEB30_TypeDefinitionIndex = 30609;

class Class_1_08BB447FCC3DEB30 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_08BB447FCC3DEB30*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_08BB447FCC3DEB30*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_08BB447FCC3DEB30_TypeDefinitionIndex)->GetStaticField(0x5F5C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_08BB447FCC3DEB30_TypeDefinitionIndex)->GetStaticField(0x5F5C8);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::System::Boolean Field_1_9; // 0x20
	::System::Int64 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x30
	::System::UInt32 Field_1_12; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_08BB447FCC3DEB30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_08BB447FCC3DEB30*))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_08BB447FCC3DEB30*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_08BB447FCC3DEB30*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_08BB447FCC3DEB30* Clone()
	{
		return ((::Class_1_08BB447FCC3DEB30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_08BB447FCC3DEB30* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_08BB447FCC3DEB30*))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_08BB447FCC3DEB30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_08BB447FCC3DEB30*))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_08BB447FCC3DEB30_MERGEFROM_1_OFFSET))(this, a1);
	}
};
