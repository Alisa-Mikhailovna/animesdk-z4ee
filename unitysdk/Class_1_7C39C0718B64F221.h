#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7C39C0718B64F221_Enum_3_2E741879C8CDBAFC_8.h"
#include "unitysdk/System/Object.h"

class Class_1_FDFA365FE186E8F2_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7C39C0718B64F221_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C688D70)
#define CLASS_1_7C39C0718B64F221_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6888C0)
#define CLASS_1_7C39C0718B64F221_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C688940)
#define CLASS_1_7C39C0718B64F221_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C688910)
#define CLASS_1_7C39C0718B64F221_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C688B60)
#define CLASS_1_7C39C0718B64F221_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C688FD0)
#define CLASS_1_7C39C0718B64F221_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C688E20)
#define CLASS_1_7C39C0718B64F221_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1C6888F0)
#define CLASS_1_7C39C0718B64F221_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1C688840)
#define CLASS_1_7C39C0718B64F221_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C688720)
#define CLASS_1_7C39C0718B64F221_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C688900)
#define CLASS_1_7C39C0718B64F221_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C6888A0)
#define CLASS_1_7C39C0718B64F221_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C688750)
#define CLASS_1_7C39C0718B64F221_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C688C60)
#define CLASS_1_7C39C0718B64F221_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C688CC0)
#define CLASS_1_7C39C0718B64F221__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C689210)
#define CLASS_1_7C39C0718B64F221__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C688770)
#define CLASS_1_7C39C0718B64F221__CTOR_OFFSET UNITYSDK_OFFSET(0x1C688760)

inline static constexpr unsigned int Class_1_7C39C0718B64F221_TypeDefinitionIndex = 26635;

class Class_1_7C39C0718B64F221 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7C39C0718B64F221*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7C39C0718B64F221*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C39C0718B64F221_TypeDefinitionIndex)->GetStaticField(0x67490);
	}
	// static const ::System::Int32 Field_1_1 = 0x79F; // 0x0
	::System::Object* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18
	::Class_1_7C39C0718B64F221_Enum_3_2E741879C8CDBAFC_8 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7C39C0718B64F221* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C39C0718B64F221*))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7C39C0718B64F221*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7C39C0718B64F221*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7C39C0718B64F221* Clone()
	{
		return ((::Class_1_7C39C0718B64F221*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_CLONE_OFFSET))(this);
	}

	::Class_1_FDFA365FE186E8F2_12* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_FDFA365FE186E8F2_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FDFA365FE186E8F2_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_12*))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_7C39C0718B64F221_Enum_3_2E741879C8CDBAFC_8 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_7C39C0718B64F221_Enum_3_2E741879C8CDBAFC_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7C39C0718B64F221* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7C39C0718B64F221*))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7C39C0718B64F221* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C39C0718B64F221*))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7C39C0718B64F221_MERGEFROM_1_OFFSET))(this, a1);
	}
};
