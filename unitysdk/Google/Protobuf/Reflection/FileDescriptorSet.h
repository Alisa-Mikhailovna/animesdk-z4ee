#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class FileDescriptorProto; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197F98D0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CLONE_OFFSET UNITYSDK_OFFSET(0x197F9460)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197F9630)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x197F94B0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197F9750)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197F9120)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x197F90C0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197F9A10)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197F9970)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197F9300)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197F97C0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_WRITETO_OFFSET UNITYSDK_OFFSET(0x197F9820)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x197F9BD0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197F93B0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_OFFSET UNITYSDK_OFFSET(0x197F9360)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorSet_TypeDefinitionIndex = 5461;

	class FileDescriptorSet : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FileDescriptorProto*>** StaticGet__repeated_file_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FileDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorSet_TypeDefinitionIndex)->GetStaticField(0x433A0);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorSet*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorSet*>**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorSet_TypeDefinitionIndex)->GetStaticField(0x433A8);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FileDescriptorProto*>* file_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::FileDescriptorSet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptorSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorSet*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FileDescriptorSet*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileDescriptorSet* Clone()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptorSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::FileDescriptorSet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptorSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::FileDescriptorSet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptorSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
