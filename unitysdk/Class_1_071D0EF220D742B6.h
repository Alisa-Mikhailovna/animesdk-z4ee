#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDD0194E81BF2FD8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_071D0EF220D742B6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C5E4E40)
#define CLASS_1_071D0EF220D742B6_CLONE_OFFSET UNITYSDK_OFFSET(0x1C5E49C0)
#define CLASS_1_071D0EF220D742B6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C5E4BA0)
#define CLASS_1_071D0EF220D742B6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C5E4A20)
#define CLASS_1_071D0EF220D742B6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C5E4CC0)
#define CLASS_1_071D0EF220D742B6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C5E4F50)
#define CLASS_1_071D0EF220D742B6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C5E4EE0)
#define CLASS_1_071D0EF220D742B6_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1C5E4A10)
#define CLASS_1_071D0EF220D742B6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C5E4850)
#define CLASS_1_071D0EF220D742B6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C5E48B0)
#define CLASS_1_071D0EF220D742B6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C5E4D30)
#define CLASS_1_071D0EF220D742B6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C5E4D90)
#define CLASS_1_071D0EF220D742B6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5E5110)
#define CLASS_1_071D0EF220D742B6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5E4910)
#define CLASS_1_071D0EF220D742B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E48C0)

inline static constexpr unsigned int Class_1_071D0EF220D742B6_TypeDefinitionIndex = 24275;

class Class_1_071D0EF220D742B6 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_DDD0194E81BF2FD8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_DDD0194E81BF2FD8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_071D0EF220D742B6_TypeDefinitionIndex)->GetStaticField(0x5F8B0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_071D0EF220D742B6*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_071D0EF220D742B6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_071D0EF220D742B6_TypeDefinitionIndex)->GetStaticField(0x5F8B8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_DDD0194E81BF2FD8*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_071D0EF220D742B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_071D0EF220D742B6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_071D0EF220D742B6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_071D0EF220D742B6* Clone()
	{
		return ((::Class_1_071D0EF220D742B6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_DDD0194E81BF2FD8*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_DDD0194E81BF2FD8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_071D0EF220D742B6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_071D0EF220D742B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
