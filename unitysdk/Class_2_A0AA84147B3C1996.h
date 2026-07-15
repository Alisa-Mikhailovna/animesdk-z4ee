#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }

#define CLASS_2_A0AA84147B3C1996_METHOD_2_01ED1C1F22416698_OFFSET UNITYSDK_OFFSET(0xB90E110)
#define CLASS_2_A0AA84147B3C1996__CTOR_OFFSET UNITYSDK_OFFSET(0xB90E170)
#define CLASS_2_A0AA84147B3C1996__ONBIND_OFFSET UNITYSDK_OFFSET(0xB90E0B0)

inline static constexpr unsigned int Class_2_A0AA84147B3C1996_TypeDefinitionIndex = 69020;

class Class_2_A0AA84147B3C1996 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::Client::LocalizedText* Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0AA84147B3C1996__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0AA84147B3C1996__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_01ED1C1F22416698(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A0AA84147B3C1996_METHOD_2_01ED1C1F22416698_OFFSET))(this, a1);
	}
};
