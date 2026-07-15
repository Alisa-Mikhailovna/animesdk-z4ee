#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E9AC8675DA072FB_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_71_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C234340)
#define CLASS_1_242BFB9DE152D766_71_CLONE_OFFSET UNITYSDK_OFFSET(0x1C233C30)
#define CLASS_1_242BFB9DE152D766_71_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C233E40)
#define CLASS_1_242BFB9DE152D766_71_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C233CD0)
#define CLASS_1_242BFB9DE152D766_71_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C234110)
#define CLASS_1_242BFB9DE152D766_71_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C2344A0)
#define CLASS_1_242BFB9DE152D766_71_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C2343A0)
#define CLASS_1_242BFB9DE152D766_71_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C233CB0)
#define CLASS_1_242BFB9DE152D766_71_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C233B70)
#define CLASS_1_242BFB9DE152D766_71_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C233CC0)
#define CLASS_1_242BFB9DE152D766_71_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C233BA0)
#define CLASS_1_242BFB9DE152D766_71_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C234250)
#define CLASS_1_242BFB9DE152D766_71_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C2342B0)
#define CLASS_1_242BFB9DE152D766_71__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C234670)
#define CLASS_1_242BFB9DE152D766_71__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C233BC0)
#define CLASS_1_242BFB9DE152D766_71__CTOR_OFFSET UNITYSDK_OFFSET(0x1C233BB0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_71_TypeDefinitionIndex = 31487;

class Class_1_242BFB9DE152D766_71 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_71*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_71*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_71_TypeDefinitionIndex)->GetStaticField(0x2B360);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_7E9AC8675DA072FB_3* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_71*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_71*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_71*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_71* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_71*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_CLONE_OFFSET))(this);
	}

	::Class_1_7E9AC8675DA072FB_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7E9AC8675DA072FB_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7E9AC8675DA072FB_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E9AC8675DA072FB_3*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_71* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_71*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_71*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_71_MERGEFROM_1_OFFSET))(this, a1);
	}
};
