#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_21.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7D0DEC5613B44D8A_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BE78A50)
#define CLASS_1_7D0DEC5613B44D8A_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1BE78490)
#define CLASS_1_7D0DEC5613B44D8A_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BE78570)
#define CLASS_1_7D0DEC5613B44D8A_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BE78510)
#define CLASS_1_7D0DEC5613B44D8A_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BE786E0)
#define CLASS_1_7D0DEC5613B44D8A_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BE78C30)
#define CLASS_1_7D0DEC5613B44D8A_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BE78B60)
#define CLASS_1_7D0DEC5613B44D8A_1_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1BE78500)
#define CLASS_1_7D0DEC5613B44D8A_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1BE78290)
#define CLASS_1_7D0DEC5613B44D8A_1_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1BE784F0)
#define CLASS_1_7D0DEC5613B44D8A_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1BE784E0)
#define CLASS_1_7D0DEC5613B44D8A_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BE782F0)
#define CLASS_1_7D0DEC5613B44D8A_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BE788E0)
#define CLASS_1_7D0DEC5613B44D8A_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BE78940)
#define CLASS_1_7D0DEC5613B44D8A_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE78DC0)
#define CLASS_1_7D0DEC5613B44D8A_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE783E0)
#define CLASS_1_7D0DEC5613B44D8A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE78300)

inline static constexpr unsigned int Class_1_7D0DEC5613B44D8A_1_TypeDefinitionIndex = 29066;

class Class_1_7D0DEC5613B44D8A_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7D0DEC5613B44D8A_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7D0DEC5613B44D8A_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D0DEC5613B44D8A_1_TypeDefinitionIndex)->GetStaticField(0x50D80);
	}
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_4608E37A1B3D374A_21>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_4608E37A1B3D374A_21>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D0DEC5613B44D8A_1_TypeDefinitionIndex)->GetStaticField(0x50D88);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D0DEC5613B44D8A_1_TypeDefinitionIndex)->GetStaticField(0x50D90);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D0DEC5613B44D8A_1_TypeDefinitionIndex)->GetStaticField(0x50D98);
	}
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_4608E37A1B3D374A_21>* Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7D0DEC5613B44D8A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D0DEC5613B44D8A_1*))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7D0DEC5613B44D8A_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7D0DEC5613B44D8A_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7D0DEC5613B44D8A_1* Clone()
	{
		return ((::Class_1_7D0DEC5613B44D8A_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_4608E37A1B3D374A_21>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_4608E37A1B3D374A_21>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7D0DEC5613B44D8A_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7D0DEC5613B44D8A_1*))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7D0DEC5613B44D8A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D0DEC5613B44D8A_1*))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7D0DEC5613B44D8A_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
