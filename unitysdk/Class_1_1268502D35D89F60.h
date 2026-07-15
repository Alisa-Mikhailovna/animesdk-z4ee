#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class HeliobusChallengeLineup; }
namespace System { class String; }

#define CLASS_1_1268502D35D89F60_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C45BBF0)
#define CLASS_1_1268502D35D89F60_CLONE_OFFSET UNITYSDK_OFFSET(0x1C45B4F0)
#define CLASS_1_1268502D35D89F60_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C45B700)
#define CLASS_1_1268502D35D89F60_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C45B590)
#define CLASS_1_1268502D35D89F60_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C45B9D0)
#define CLASS_1_1268502D35D89F60_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C45BD40)
#define CLASS_1_1268502D35D89F60_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C45BC50)
#define CLASS_1_1268502D35D89F60_METHOD_1_52252D4E87F031B5_OFFSET UNITYSDK_OFFSET(0x1C45B570)
#define CLASS_1_1268502D35D89F60_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C45B430)
#define CLASS_1_1268502D35D89F60_METHOD_1_77F8C554D3EA21B6_OFFSET UNITYSDK_OFFSET(0x1C45B580)
#define CLASS_1_1268502D35D89F60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C45B460)
#define CLASS_1_1268502D35D89F60_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C45BB00)
#define CLASS_1_1268502D35D89F60_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C45BB60)
#define CLASS_1_1268502D35D89F60__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C45BF10)
#define CLASS_1_1268502D35D89F60__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C45B480)
#define CLASS_1_1268502D35D89F60__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45B470)

inline static constexpr unsigned int Class_1_1268502D35D89F60_TypeDefinitionIndex = 28581;

class Class_1_1268502D35D89F60 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1268502D35D89F60*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1268502D35D89F60*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1268502D35D89F60_TypeDefinitionIndex)->GetStaticField(0x55C20);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Proto::HeliobusChallengeLineup* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1268502D35D89F60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1268502D35D89F60*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1268502D35D89F60*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1268502D35D89F60*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1268502D35D89F60* Clone()
	{
		return ((::Class_1_1268502D35D89F60*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_CLONE_OFFSET))(this);
	}

	::Proto::HeliobusChallengeLineup* Method_1_52252D4E87F031B5()
	{
		return ((::Proto::HeliobusChallengeLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_METHOD_1_52252D4E87F031B5_OFFSET))(this);
	}

	::System::Void Method_1_77F8C554D3EA21B6(::Proto::HeliobusChallengeLineup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_METHOD_1_77F8C554D3EA21B6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1268502D35D89F60* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1268502D35D89F60*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1268502D35D89F60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1268502D35D89F60*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1268502D35D89F60_MERGEFROM_1_OFFSET))(this, a1);
	}
};
