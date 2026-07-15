#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_CC9EB486A8D01931_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1505BF50)
#define CLASS_2_CC9EB486A8D01931_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1505C160)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x1505AA90)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_22FAC251A3FE2A30_OFFSET UNITYSDK_OFFSET(0x1505B600)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_5978AE219015BACB_OFFSET UNITYSDK_OFFSET(0x1505AA40)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x1505B9B0)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_838C5D7D0059A77B_1_OFFSET UNITYSDK_OFFSET(0x1505AA00)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_838C5D7D0059A77B_OFFSET UNITYSDK_OFFSET(0x1505A9C0)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1505BE60)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_CBA096B6B8D30164_OFFSET UNITYSDK_OFFSET(0x1505BAF0)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x1505B720)
#define CLASS_2_CC9EB486A8D01931_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1505BA50)
#define CLASS_2_CC9EB486A8D01931_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1505BAA0)
#define CLASS_2_CC9EB486A8D01931__CTOR_OFFSET UNITYSDK_OFFSET(0x1505C330)
#define CLASS_2_CC9EB486A8D01931__ONBIND_OFFSET UNITYSDK_OFFSET(0x1505A8A0)

inline static constexpr unsigned int Class_2_CC9EB486A8D01931_TypeDefinitionIndex = 68673;

class Class_2_CC9EB486A8D01931 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::UnityEngine::UI::Image* Field_2_2; // 0x68
	::UnityEngine::UI::Image* Field_2_3; // 0x70
	::UnityEngine::Transform* Field_2_4; // 0x78
	::UnityEngine::UI::Slider* Field_2_5; // 0x80
	::RPG::GameCore::GameEntity* Field_2_6; // 0x88
	::RPG::Client::SPProgress* Field_2_7; // 0x90
	::RPG::Client::SPProgress* Field_2_8; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931__ONBIND_OFFSET))(this);
	}

	::UnityEngine::UI::Image* Method_2_838C5D7D0059A77B()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_838C5D7D0059A77B_OFFSET))(this);
	}

	::UnityEngine::UI::Image* Method_2_838C5D7D0059A77B_1()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_838C5D7D0059A77B_1_OFFSET))(this);
	}

	::RPG::Client::SPProgress* Method_2_5978AE219015BACB()
	{
		return ((::RPG::Client::SPProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_5978AE219015BACB_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_22FAC251A3FE2A30(::RPG::Client::SPProgress* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SPProgress*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_22FAC251A3FE2A30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_CBA096B6B8D30164(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_CBA096B6B8D30164_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
