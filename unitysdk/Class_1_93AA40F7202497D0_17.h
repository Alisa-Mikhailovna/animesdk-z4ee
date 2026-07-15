#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A865FEC42C70DCB5.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_93AA40F7202497D0_17_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BDEE460)
#define CLASS_1_93AA40F7202497D0_17_CLONE_OFFSET UNITYSDK_OFFSET(0x1BDEE090)
#define CLASS_1_93AA40F7202497D0_17_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BDEE1C0)
#define CLASS_1_93AA40F7202497D0_17_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BDEE0F0)
#define CLASS_1_93AA40F7202497D0_17_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BDEE330)
#define CLASS_1_93AA40F7202497D0_17_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BDEE560)
#define CLASS_1_93AA40F7202497D0_17_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BDEE530)
#define CLASS_1_93AA40F7202497D0_17_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1BDEE0E0)
#define CLASS_1_93AA40F7202497D0_17_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1BDEE010)
#define CLASS_1_93AA40F7202497D0_17_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1BDEE0D0)
#define CLASS_1_93AA40F7202497D0_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BDEE040)
#define CLASS_1_93AA40F7202497D0_17_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BDEE360)
#define CLASS_1_93AA40F7202497D0_17_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BDEE3C0)
#define CLASS_1_93AA40F7202497D0_17__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDEE6C0)
#define CLASS_1_93AA40F7202497D0_17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDEE060)
#define CLASS_1_93AA40F7202497D0_17__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDEE050)

inline static constexpr unsigned int Class_1_93AA40F7202497D0_17_TypeDefinitionIndex = 30733;

class Class_1_93AA40F7202497D0_17 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_17*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93AA40F7202497D0_17_TypeDefinitionIndex)->GetStaticField(0x49ED0);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Enum_3_A865FEC42C70DCB5 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_93AA40F7202497D0_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_17*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_17*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_93AA40F7202497D0_17*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_93AA40F7202497D0_17* Clone()
	{
		return ((::Class_1_93AA40F7202497D0_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_CLONE_OFFSET))(this);
	}

	::Enum_3_A865FEC42C70DCB5 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_A865FEC42C70DCB5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_A865FEC42C70DCB5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A865FEC42C70DCB5))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_93AA40F7202497D0_17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_93AA40F7202497D0_17*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_93AA40F7202497D0_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93AA40F7202497D0_17*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_93AA40F7202497D0_17_MERGEFROM_1_OFFSET))(this, a1);
	}
};
