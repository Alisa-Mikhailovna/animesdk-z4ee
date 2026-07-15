#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_52;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_29_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BEC0130)
#define CLASS_1_242BFB9DE152D766_29_CLONE_OFFSET UNITYSDK_OFFSET(0x1BEBFA60)
#define CLASS_1_242BFB9DE152D766_29_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BEBFD10)
#define CLASS_1_242BFB9DE152D766_29_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BEBFB70)
#define CLASS_1_242BFB9DE152D766_29_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEBFFE0)
#define CLASS_1_242BFB9DE152D766_29_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BEC0250)
#define CLASS_1_242BFB9DE152D766_29_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BEC0190)
#define CLASS_1_242BFB9DE152D766_29_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1BEBFB50)
#define CLASS_1_242BFB9DE152D766_29_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1BEBF940)
#define CLASS_1_242BFB9DE152D766_29_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1BEBFB60)
#define CLASS_1_242BFB9DE152D766_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BEBF9A0)
#define CLASS_1_242BFB9DE152D766_29_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BEC0040)
#define CLASS_1_242BFB9DE152D766_29_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BEC00A0)
#define CLASS_1_242BFB9DE152D766_29__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEC03E0)
#define CLASS_1_242BFB9DE152D766_29__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEBF9C0)
#define CLASS_1_242BFB9DE152D766_29__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEBF9B0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_29_TypeDefinitionIndex = 28106;

class Class_1_242BFB9DE152D766_29 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_29*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_29*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_29_TypeDefinitionIndex)->GetStaticField(0x57850);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_21C7581DFE99F091_52* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_29*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_29*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_29*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_29* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_CLONE_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_52* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_52*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_52*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_29* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_29*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_29*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_29_MERGEFROM_1_OFFSET))(this, a1);
	}
};
