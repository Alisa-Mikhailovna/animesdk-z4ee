#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_138_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C17C230)
#define CLASS_1_5B567C8A01BAEDFE_138_CLONE_OFFSET UNITYSDK_OFFSET(0x1C17BED0)
#define CLASS_1_5B567C8A01BAEDFE_138_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C17C030)
#define CLASS_1_5B567C8A01BAEDFE_138_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C17BF40)
#define CLASS_1_5B567C8A01BAEDFE_138_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C17C190)
#define CLASS_1_5B567C8A01BAEDFE_138_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C17C280)
#define CLASS_1_5B567C8A01BAEDFE_138_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C17C250)
#define CLASS_1_5B567C8A01BAEDFE_138_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C17BE20)
#define CLASS_1_5B567C8A01BAEDFE_138_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C17BE80)
#define CLASS_1_5B567C8A01BAEDFE_138_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C17C1C0)
#define CLASS_1_5B567C8A01BAEDFE_138_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C17C220)
#define CLASS_1_5B567C8A01BAEDFE_138__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C17C2D0)
#define CLASS_1_5B567C8A01BAEDFE_138__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C17BEA0)
#define CLASS_1_5B567C8A01BAEDFE_138__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17BE90)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_138_TypeDefinitionIndex = 28046;

class Class_1_5B567C8A01BAEDFE_138 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_138*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_138*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_138_TypeDefinitionIndex)->GetStaticField(0x22A80);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_138* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_138*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_138*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_138*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_138* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_138*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_138* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_138*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_138* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_138*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_138_MERGEFROM_1_OFFSET))(this, a1);
	}
};
