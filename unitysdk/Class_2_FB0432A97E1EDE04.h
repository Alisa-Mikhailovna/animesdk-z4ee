#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_155.h"

namespace RPG::Client { class UIController; }

#define CLASS_2_FB0432A97E1EDE04_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x149D9300)
#define CLASS_2_FB0432A97E1EDE04_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x149D91C0)
#define CLASS_2_FB0432A97E1EDE04_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x149D9080)
#define CLASS_2_FB0432A97E1EDE04_ONTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0x149D9380)
#define CLASS_2_FB0432A97E1EDE04__CTOR_OFFSET UNITYSDK_OFFSET(0x149D9070)

inline static constexpr unsigned int Class_2_FB0432A97E1EDE04_TypeDefinitionIndex = 69769;

class Class_2_FB0432A97E1EDE04 : public ::Class_1_43BD383C98B4C0C5_155
{
public:
	::RPG::Client::UIController* Field_2_0; // 0x10
	::RPG::Client::UIController* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_FB0432A97E1EDE04__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExitBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB0432A97E1EDE04_ONEXITBEGIN_OFFSET))(this);
	}

	::System::Void OnEnterBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB0432A97E1EDE04_ONENTERBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB0432A97E1EDE04_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void OnTransitionEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB0432A97E1EDE04_ONTRANSITIONEND_OFFSET))(this);
	}
};
