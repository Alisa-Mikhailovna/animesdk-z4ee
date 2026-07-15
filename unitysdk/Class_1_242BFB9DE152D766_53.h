#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4FAF093E822EB0B3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_53_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BDBDF60)
#define CLASS_1_242BFB9DE152D766_53_CLONE_OFFSET UNITYSDK_OFFSET(0x1BDBD920)
#define CLASS_1_242BFB9DE152D766_53_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BDBDB50)
#define CLASS_1_242BFB9DE152D766_53_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BDBD9E0)
#define CLASS_1_242BFB9DE152D766_53_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BDBDE20)
#define CLASS_1_242BFB9DE152D766_53_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BDBE0F0)
#define CLASS_1_242BFB9DE152D766_53_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BDBDFC0)
#define CLASS_1_242BFB9DE152D766_53_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1BDBD9C0)
#define CLASS_1_242BFB9DE152D766_53_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1BDBD840)
#define CLASS_1_242BFB9DE152D766_53_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1BDBD9D0)
#define CLASS_1_242BFB9DE152D766_53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BDBD870)
#define CLASS_1_242BFB9DE152D766_53_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BDBDE70)
#define CLASS_1_242BFB9DE152D766_53_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BDBDED0)
#define CLASS_1_242BFB9DE152D766_53__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDBE310)
#define CLASS_1_242BFB9DE152D766_53__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDBD890)
#define CLASS_1_242BFB9DE152D766_53__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBD880)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_53_TypeDefinitionIndex = 30713;

class Class_1_242BFB9DE152D766_53 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_53*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_53*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_53_TypeDefinitionIndex)->GetStaticField(0x1D0C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_4FAF093E822EB0B3* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_53*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_53*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_53*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_53* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_53*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_CLONE_OFFSET))(this);
	}

	::Class_1_4FAF093E822EB0B3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4FAF093E822EB0B3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4FAF093E822EB0B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4FAF093E822EB0B3*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_53* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_53*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_53*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_53_MERGEFROM_1_OFFSET))(this, a1);
	}
};
