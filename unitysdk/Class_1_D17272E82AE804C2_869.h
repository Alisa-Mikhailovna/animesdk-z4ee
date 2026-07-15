#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_869_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C794D50)
#define CLASS_1_D17272E82AE804C2_869_CLONE_OFFSET UNITYSDK_OFFSET(0x1C794930)
#define CLASS_1_D17272E82AE804C2_869_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C794AC0)
#define CLASS_1_D17272E82AE804C2_869_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7949E0)
#define CLASS_1_D17272E82AE804C2_869_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C794B90)
#define CLASS_1_D17272E82AE804C2_869_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C794F30)
#define CLASS_1_D17272E82AE804C2_869_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C794EE0)
#define CLASS_1_D17272E82AE804C2_869_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C7949A0)
#define CLASS_1_D17272E82AE804C2_869_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C7949C0)
#define CLASS_1_D17272E82AE804C2_869_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C794980)
#define CLASS_1_D17272E82AE804C2_869_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C7948A0)
#define CLASS_1_D17272E82AE804C2_869_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C7949B0)
#define CLASS_1_D17272E82AE804C2_869_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C7949D0)
#define CLASS_1_D17272E82AE804C2_869_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C794990)
#define CLASS_1_D17272E82AE804C2_869_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C7948D0)
#define CLASS_1_D17272E82AE804C2_869_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C794BC0)
#define CLASS_1_D17272E82AE804C2_869_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C794C20)
#define CLASS_1_D17272E82AE804C2_869__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7950D0)
#define CLASS_1_D17272E82AE804C2_869__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C7948F0)
#define CLASS_1_D17272E82AE804C2_869__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7948E0)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_869_TypeDefinitionIndex = 30929;

class Class_1_D17272E82AE804C2_869 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_869*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_869*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_869_TypeDefinitionIndex)->GetStaticField(0x1ABC0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_869* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_869*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_869*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_869*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_869* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_869*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_869* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_869*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_869* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_869*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_869_MERGEFROM_1_OFFSET))(this, a1);
	}
};
