#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21C7581DFE99F091_122_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BE57040)
#define CLASS_1_21C7581DFE99F091_122_CLONE_OFFSET UNITYSDK_OFFSET(0x1BE56B20)
#define CLASS_1_21C7581DFE99F091_122_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BE56C70)
#define CLASS_1_21C7581DFE99F091_122_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BE56C00)
#define CLASS_1_21C7581DFE99F091_122_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BE56D80)
#define CLASS_1_21C7581DFE99F091_122_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BE57140)
#define CLASS_1_21C7581DFE99F091_122_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BE570F0)
#define CLASS_1_21C7581DFE99F091_122_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1BE56BE0)
#define CLASS_1_21C7581DFE99F091_122_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1BE56A80)
#define CLASS_1_21C7581DFE99F091_122_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1BE56BF0)
#define CLASS_1_21C7581DFE99F091_122_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1BE56BB0)
#define CLASS_1_21C7581DFE99F091_122_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1BE56BD0)
#define CLASS_1_21C7581DFE99F091_122_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1BE56B90)
#define CLASS_1_21C7581DFE99F091_122_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1BE56BA0)
#define CLASS_1_21C7581DFE99F091_122_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1BE56BC0)
#define CLASS_1_21C7581DFE99F091_122_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1BE56B80)
#define CLASS_1_21C7581DFE99F091_122_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BE56AB0)
#define CLASS_1_21C7581DFE99F091_122_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BE56DB0)
#define CLASS_1_21C7581DFE99F091_122_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BE56E10)
#define CLASS_1_21C7581DFE99F091_122__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE571F0)
#define CLASS_1_21C7581DFE99F091_122__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE56AD0)
#define CLASS_1_21C7581DFE99F091_122__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE56AC0)

inline static constexpr unsigned int Class_1_21C7581DFE99F091_122_TypeDefinitionIndex = 32303;

class Class_1_21C7581DFE99F091_122 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_122*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_122*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C7581DFE99F091_122_TypeDefinitionIndex)->GetStaticField(0x2D720);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::System::Boolean Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x19
	::System::Boolean Field_1_8; // 0x1A
	::System::UInt32 Field_1_9; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21C7581DFE99F091_122* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_122*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_122*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21C7581DFE99F091_122*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_122* Clone()
	{
		return ((::Class_1_21C7581DFE99F091_122*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21C7581DFE99F091_122* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21C7581DFE99F091_122*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21C7581DFE99F091_122* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_122*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21C7581DFE99F091_122_MERGEFROM_1_OFFSET))(this, a1);
	}
};
