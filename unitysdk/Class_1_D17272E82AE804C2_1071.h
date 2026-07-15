#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_1071_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C208D60)
#define CLASS_1_D17272E82AE804C2_1071_CLONE_OFFSET UNITYSDK_OFFSET(0x1C2089B0)
#define CLASS_1_D17272E82AE804C2_1071_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C208B20)
#define CLASS_1_D17272E82AE804C2_1071_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C208A40)
#define CLASS_1_D17272E82AE804C2_1071_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C208BF0)
#define CLASS_1_D17272E82AE804C2_1071_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C208EB0)
#define CLASS_1_D17272E82AE804C2_1071_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C208E70)
#define CLASS_1_D17272E82AE804C2_1071_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C208A20)
#define CLASS_1_D17272E82AE804C2_1071_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C208A00)
#define CLASS_1_D17272E82AE804C2_1071_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C208930)
#define CLASS_1_D17272E82AE804C2_1071_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C208A30)
#define CLASS_1_D17272E82AE804C2_1071_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C208A10)
#define CLASS_1_D17272E82AE804C2_1071_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C208960)
#define CLASS_1_D17272E82AE804C2_1071_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C208C20)
#define CLASS_1_D17272E82AE804C2_1071_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C208C80)
#define CLASS_1_D17272E82AE804C2_1071__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C209030)
#define CLASS_1_D17272E82AE804C2_1071__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C208980)
#define CLASS_1_D17272E82AE804C2_1071__CTOR_OFFSET UNITYSDK_OFFSET(0x1C208970)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_1071_TypeDefinitionIndex = 32736;

class Class_1_D17272E82AE804C2_1071 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1071*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1071*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_1071_TypeDefinitionIndex)->GetStaticField(0x28770);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_1071* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1071*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1071*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_1071*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_1071* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_1071*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_1071* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_1071*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_1071* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1071*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_1071_MERGEFROM_1_OFFSET))(this, a1);
	}
};
