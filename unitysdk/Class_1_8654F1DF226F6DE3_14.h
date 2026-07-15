#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8654F1DF226F6DE3_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C0631F0)
#define CLASS_1_8654F1DF226F6DE3_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1C062C40)
#define CLASS_1_8654F1DF226F6DE3_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C062E50)
#define CLASS_1_8654F1DF226F6DE3_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C062D40)
#define CLASS_1_8654F1DF226F6DE3_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C062F60)
#define CLASS_1_8654F1DF226F6DE3_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C0633E0)
#define CLASS_1_8654F1DF226F6DE3_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C063380)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1C062CD0)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C062CC0)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C062BA0)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1C062D30)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1C062CB0)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1C062D20)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1C062CA0)
#define CLASS_1_8654F1DF226F6DE3_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C062BD0)
#define CLASS_1_8654F1DF226F6DE3_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C063010)
#define CLASS_1_8654F1DF226F6DE3_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C063070)
#define CLASS_1_8654F1DF226F6DE3_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0635B0)
#define CLASS_1_8654F1DF226F6DE3_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C062BF0)
#define CLASS_1_8654F1DF226F6DE3_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1C062BE0)

inline static constexpr unsigned int Class_1_8654F1DF226F6DE3_14_TypeDefinitionIndex = 32706;

class Class_1_8654F1DF226F6DE3_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_14*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8654F1DF226F6DE3_14_TypeDefinitionIndex)->GetStaticField(0x225D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::Int32 Field_1_6; // 0x20
	::System::Int32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8654F1DF226F6DE3_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_14*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_14*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8654F1DF226F6DE3_14* Clone()
	{
		return ((::Class_1_8654F1DF226F6DE3_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8654F1DF226F6DE3_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_14*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8654F1DF226F6DE3_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_14*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
