#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19823970)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_CLONE_OFFSET UNITYSDK_OFFSET(0x1981B620)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x198236E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x198235B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1981BB30)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19823220)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x19823550)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x198231C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x198239E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1981C2C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19823400)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x19823560)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19823880)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_WRITETO_OFFSET UNITYSDK_OFFSET(0x198238E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19823B70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19823460)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1981C2B0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int SourceContext_TypeDefinitionIndex = 5431;

	class SourceContext : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::SourceContext*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::SourceContext*>**)Il2CppClass::FromTypeDefinitionIndex(SourceContext_TypeDefinitionIndex)->GetStaticField(0x44C90);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::String* fileName_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::SourceContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::SourceContext*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::SourceContext*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::SourceContext*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::SourceContext* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::SourceContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_CLONE_OFFSET))(this);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_FileName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_SET_FILENAME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::SourceContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::SourceContext*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::SourceContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::SourceContext*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
