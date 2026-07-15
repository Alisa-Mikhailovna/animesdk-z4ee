#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_100;
class Class_1_0AF9A5CCF0C0D579;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_838AF0FA954DA998;
class Class_1_BF3E397EFAF143B7;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_E14606C29D124093_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A334100)
#define CLASS_1_E14606C29D124093_METHOD_1_1ECC242658BCEB1C_OFFSET UNITYSDK_OFFSET(0x1A331DB0)
#define CLASS_1_E14606C29D124093_METHOD_1_2A62584A54EE40E0_OFFSET UNITYSDK_OFFSET(0x1A3315D0)
#define CLASS_1_E14606C29D124093_METHOD_1_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x1A332590)
#define CLASS_1_E14606C29D124093_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1A331340)
#define CLASS_1_E14606C29D124093_METHOD_1_A1339EC5662B08C8_1_OFFSET UNITYSDK_OFFSET(0x1A3318B0)
#define CLASS_1_E14606C29D124093_METHOD_1_A1339EC5662B08C8_OFFSET UNITYSDK_OFFSET(0x1A331640)
#define CLASS_1_E14606C29D124093_METHOD_1_C391C8EAFA3E6FB7_OFFSET UNITYSDK_OFFSET(0x1A331B30)
#define CLASS_1_E14606C29D124093_METHOD_1_FE2CB6F4268D5D2D_OFFSET UNITYSDK_OFFSET(0x1A331ED0)
#define CLASS_1_E14606C29D124093__CTOR_OFFSET UNITYSDK_OFFSET(0x1A331390)

inline static constexpr unsigned int Class_1_E14606C29D124093_TypeDefinitionIndex = 39392;

class Class_1_E14606C29D124093 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x10; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x10; // 0x0
	::System::String* Field_1_2; // 0x10
	::Class_1_1B9BBF1B9A8CC806* Field_1_3; // 0x18
	::Class_1_0AF9A5CCF0C0D579* Field_1_4; // 0x20
	::Il2CppArray<::System::Byte>* Field_1_5; // 0x28
	::Il2CppArray<::Class_0_16E4307DCC419505_100*>* Field_1_6; // 0x30
	::System::Boolean Field_1_7; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_E14606C29D124093__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14606C29D124093_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579*>* Method_1_2A62584A54EE40E0()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14606C29D124093_METHOD_1_2A62584A54EE40E0_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579*>* Method_1_A1339EC5662B08C8(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E14606C29D124093_METHOD_1_A1339EC5662B08C8_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_BF3E397EFAF143B7*>* Method_1_A1339EC5662B08C8_1(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_BF3E397EFAF143B7*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E14606C29D124093_METHOD_1_A1339EC5662B08C8_1_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_838AF0FA954DA998*>* Method_1_C391C8EAFA3E6FB7(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_838AF0FA954DA998*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E14606C29D124093_METHOD_1_C391C8EAFA3E6FB7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1ECC242658BCEB1C(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_E14606C29D124093_METHOD_1_1ECC242658BCEB1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FE2CB6F4268D5D2D(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_E14606C29D124093_METHOD_1_FE2CB6F4268D5D2D_OFFSET))(this, a1);
	}

	::System::Void Method_1_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14606C29D124093_METHOD_1_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14606C29D124093_DISPOSE_OFFSET))(this);
	}
};
