#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_16;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_88_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C28C9A0)
#define CLASS_1_242BFB9DE152D766_88_CLONE_OFFSET UNITYSDK_OFFSET(0x1C28C320)
#define CLASS_1_242BFB9DE152D766_88_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C28C560)
#define CLASS_1_242BFB9DE152D766_88_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C28C3F0)
#define CLASS_1_242BFB9DE152D766_88_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C28C830)
#define CLASS_1_242BFB9DE152D766_88_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C28CAF0)
#define CLASS_1_242BFB9DE152D766_88_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C28CA00)
#define CLASS_1_242BFB9DE152D766_88_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C28C3D0)
#define CLASS_1_242BFB9DE152D766_88_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C28C220)
#define CLASS_1_242BFB9DE152D766_88_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C28C3E0)
#define CLASS_1_242BFB9DE152D766_88_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C28C250)
#define CLASS_1_242BFB9DE152D766_88_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C28C8B0)
#define CLASS_1_242BFB9DE152D766_88_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C28C910)
#define CLASS_1_242BFB9DE152D766_88__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C28CC80)
#define CLASS_1_242BFB9DE152D766_88__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C28C270)
#define CLASS_1_242BFB9DE152D766_88__CTOR_OFFSET UNITYSDK_OFFSET(0x1C28C260)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_88_TypeDefinitionIndex = 32063;

class Class_1_242BFB9DE152D766_88 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_88*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_88*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_88_TypeDefinitionIndex)->GetStaticField(0x309F0);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Class_1_EBB10EC01CCC4716_16* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_88*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_88*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_88*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_88* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_88*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_CLONE_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_16* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_16*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_88* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_88*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_88*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_88_MERGEFROM_1_OFFSET))(this, a1);
	}
};
