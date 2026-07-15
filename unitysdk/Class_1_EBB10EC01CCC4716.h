#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C167010)
#define CLASS_1_EBB10EC01CCC4716_CLONE_OFFSET UNITYSDK_OFFSET(0x1C1669F0)
#define CLASS_1_EBB10EC01CCC4716_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C166C10)
#define CLASS_1_EBB10EC01CCC4716_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C166B60)
#define CLASS_1_EBB10EC01CCC4716_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C166C80)
#define CLASS_1_EBB10EC01CCC4716_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C1673E0)
#define CLASS_1_EBB10EC01CCC4716_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C167370)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C166AC0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C166B00)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1C166B20)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1C166B40)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C166A80)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1C166AB0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C166920)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C166AD0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C166B10)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1C166B30)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1C166B50)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C166A90)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C166AF0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1C166AA0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C166AE0)
#define CLASS_1_EBB10EC01CCC4716_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C166980)
#define CLASS_1_EBB10EC01CCC4716_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C166CD0)
#define CLASS_1_EBB10EC01CCC4716_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C166D30)
#define CLASS_1_EBB10EC01CCC4716__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1674E0)
#define CLASS_1_EBB10EC01CCC4716__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1669A0)
#define CLASS_1_EBB10EC01CCC4716__CTOR_OFFSET UNITYSDK_OFFSET(0x1C166990)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_TypeDefinitionIndex = 24242;

class Class_1_EBB10EC01CCC4716 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB10EC01CCC4716_TypeDefinitionIndex)->GetStaticField(0x213D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::System::UInt32 Field_1_9; // 0x18
	::System::UInt32 Field_1_10; // 0x1C
	::System::Boolean Field_1_11; // 0x20
	::System::UInt32 Field_1_12; // 0x24
	::System::UInt64 Field_1_13; // 0x28
	::System::UInt32 Field_1_14; // 0x30
	::System::UInt32 Field_1_15; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_MERGEFROM_1_OFFSET))(this, a1);
	}
};
