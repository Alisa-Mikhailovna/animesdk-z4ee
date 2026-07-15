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

#define CLASS_1_C6C2D5E97597FDCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C5399E0)
#define CLASS_1_C6C2D5E97597FDCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1C5393C0)
#define CLASS_1_C6C2D5E97597FDCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C5394F0)
#define CLASS_1_C6C2D5E97597FDCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C539490)
#define CLASS_1_C6C2D5E97597FDCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C539590)
#define CLASS_1_C6C2D5E97597FDCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C539C50)
#define CLASS_1_C6C2D5E97597FDCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C539BD0)
#define CLASS_1_C6C2D5E97597FDCB_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C539470)
#define CLASS_1_C6C2D5E97597FDCB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C539410)
#define CLASS_1_C6C2D5E97597FDCB_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C5391C0)
#define CLASS_1_C6C2D5E97597FDCB_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1C539460)
#define CLASS_1_C6C2D5E97597FDCB_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C539430)
#define CLASS_1_C6C2D5E97597FDCB_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C539480)
#define CLASS_1_C6C2D5E97597FDCB_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C539420)
#define CLASS_1_C6C2D5E97597FDCB_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C539450)
#define CLASS_1_C6C2D5E97597FDCB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C539440)
#define CLASS_1_C6C2D5E97597FDCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C539220)
#define CLASS_1_C6C2D5E97597FDCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C539760)
#define CLASS_1_C6C2D5E97597FDCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C5397C0)
#define CLASS_1_C6C2D5E97597FDCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C539DC0)
#define CLASS_1_C6C2D5E97597FDCB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5392C0)
#define CLASS_1_C6C2D5E97597FDCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C539230)

inline static constexpr unsigned int Class_1_C6C2D5E97597FDCB_TypeDefinitionIndex = 28244;

class Class_1_C6C2D5E97597FDCB : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6C2D5E97597FDCB_TypeDefinitionIndex)->GetStaticField(0x5CC30);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C6C2D5E97597FDCB*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C6C2D5E97597FDCB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6C2D5E97597FDCB_TypeDefinitionIndex)->GetStaticField(0x5CC38);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6C2D5E97597FDCB_TypeDefinitionIndex)->GetStaticField(0x5CC40);
	}
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::System::Boolean Field_1_13; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C6C2D5E97597FDCB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6C2D5E97597FDCB*))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C6C2D5E97597FDCB*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C6C2D5E97597FDCB*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C6C2D5E97597FDCB* Clone()
	{
		return ((::Class_1_C6C2D5E97597FDCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C6C2D5E97597FDCB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C6C2D5E97597FDCB*))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C6C2D5E97597FDCB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6C2D5E97597FDCB*))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C6C2D5E97597FDCB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
