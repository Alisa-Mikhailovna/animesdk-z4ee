#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4F96E8997F9D5BB1_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_963E317C37FB5E9A_88_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C285860)
#define CLASS_1_963E317C37FB5E9A_88_CLONE_OFFSET UNITYSDK_OFFSET(0x1C2852A0)
#define CLASS_1_963E317C37FB5E9A_88_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C285500)
#define CLASS_1_963E317C37FB5E9A_88_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C285380)
#define CLASS_1_963E317C37FB5E9A_88_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C285680)
#define CLASS_1_963E317C37FB5E9A_88_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C2859C0)
#define CLASS_1_963E317C37FB5E9A_88_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C285930)
#define CLASS_1_963E317C37FB5E9A_88_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C285360)
#define CLASS_1_963E317C37FB5E9A_88_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C285340)
#define CLASS_1_963E317C37FB5E9A_88_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C2851C0)
#define CLASS_1_963E317C37FB5E9A_88_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C285370)
#define CLASS_1_963E317C37FB5E9A_88_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C285350)
#define CLASS_1_963E317C37FB5E9A_88_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C2851F0)
#define CLASS_1_963E317C37FB5E9A_88_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C285720)
#define CLASS_1_963E317C37FB5E9A_88_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C285780)
#define CLASS_1_963E317C37FB5E9A_88__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C285B70)
#define CLASS_1_963E317C37FB5E9A_88__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C285210)
#define CLASS_1_963E317C37FB5E9A_88__CTOR_OFFSET UNITYSDK_OFFSET(0x1C285200)

inline static constexpr unsigned int Class_1_963E317C37FB5E9A_88_TypeDefinitionIndex = 32108;

class Class_1_963E317C37FB5E9A_88 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_963E317C37FB5E9A_88*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_963E317C37FB5E9A_88*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_963E317C37FB5E9A_88_TypeDefinitionIndex)->GetStaticField(0x30500);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	::Class_1_4F96E8997F9D5BB1_4* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_963E317C37FB5E9A_88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_88*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_963E317C37FB5E9A_88*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_963E317C37FB5E9A_88*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_963E317C37FB5E9A_88* Clone()
	{
		return ((::Class_1_963E317C37FB5E9A_88*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_CLONE_OFFSET))(this);
	}

	::Class_1_4F96E8997F9D5BB1_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4F96E8997F9D5BB1_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4F96E8997F9D5BB1_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F96E8997F9D5BB1_4*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_963E317C37FB5E9A_88* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_963E317C37FB5E9A_88*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_963E317C37FB5E9A_88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_88*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_963E317C37FB5E9A_88_MERGEFROM_1_OFFSET))(this, a1);
	}
};
