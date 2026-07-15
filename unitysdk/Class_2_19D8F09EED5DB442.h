#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }

#define CLASS_2_19D8F09EED5DB442_METHOD_2_2F2F7924D292824D_OFFSET UNITYSDK_OFFSET(0xAFA3780)
#define CLASS_2_19D8F09EED5DB442__CTOR_OFFSET UNITYSDK_OFFSET(0xAFA3A00)
#define CLASS_2_19D8F09EED5DB442__ONBIND_OFFSET UNITYSDK_OFFSET(0xAFA3700)

inline static constexpr unsigned int Class_2_19D8F09EED5DB442_TypeDefinitionIndex = 69074;

class Class_2_19D8F09EED5DB442 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::MonoInControlTip* Field_2_0; // 0x60
	::RPG::Client::LocalizedText* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19D8F09EED5DB442__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19D8F09EED5DB442__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2F2F7924D292824D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19D8F09EED5DB442_METHOD_2_2F2F7924D292824D_OFFSET))(this, a1);
	}
};
