#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define CLASS_1_EF42C41CFEDD15A4_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB6C4720)
#define CLASS_1_EF42C41CFEDD15A4_METHOD_1_25E18DDE0F75BD81_OFFSET UNITYSDK_OFFSET(0xB6C40A0)
#define CLASS_1_EF42C41CFEDD15A4_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0xB6C44D0)
#define CLASS_1_EF42C41CFEDD15A4_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB6C4730)
#define CLASS_1_EF42C41CFEDD15A4__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C3EA0)

inline static constexpr unsigned int Class_1_EF42C41CFEDD15A4_TypeDefinitionIndex = 74483;

class Class_1_EF42C41CFEDD15A4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Boolean _IsFinished_k__BackingField; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Int32 Field_1_5; // 0x2C

	::System::Void _ctor(::System::Single a1, ::System::Int32 a2, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_EF42C41CFEDD15A4__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_25E18DDE0F75BD81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF42C41CFEDD15A4_METHOD_1_25E18DDE0F75BD81_OFFSET))(this, a1);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF42C41CFEDD15A4_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF42C41CFEDD15A4_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF42C41CFEDD15A4_SET_ISFINISHED_OFFSET))(this, a1);
	}
};
