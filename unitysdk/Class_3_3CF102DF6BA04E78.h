#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4156D5F344F828BD.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

class Class_1_274386B6ECA5E606;
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define CLASS_3_3CF102DF6BA04E78_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBAA6920)
#define CLASS_3_3CF102DF6BA04E78_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBAA6B20)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xBAA5D30)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_29388402F1C16287_OFFSET UNITYSDK_OFFSET(0xBAA4870)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_1_OFFSET UNITYSDK_OFFSET(0xBAA6750)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_OFFSET UNITYSDK_OFFSET(0xBAA65B0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xBAA67E0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_427D56D899C161B9_OFFSET UNITYSDK_OFFSET(0xBAA45C0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0xBAA5EC0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xBAA44E0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBAA5E30)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xBAA4FD0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0xBAA4780)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0xBAA49E0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xBAA5A90)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xBAA6830)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0xBAA6640)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_CBA096B6B8D30164_OFFSET UNITYSDK_OFFSET(0xBAA6240)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xBAA59D0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_1_OFFSET UNITYSDK_OFFSET(0xBAA5DC0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0xBAA5A20)
#define CLASS_3_3CF102DF6BA04E78_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBAA43D0)
#define CLASS_3_3CF102DF6BA04E78__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA6D20)
#define CLASS_3_3CF102DF6BA04E78__ONBIND_OFFSET UNITYSDK_OFFSET(0xBAA4100)

inline static constexpr unsigned int Class_3_3CF102DF6BA04E78_TypeDefinitionIndex = 68663;

class Class_3_3CF102DF6BA04E78 : public ::Class_2_4156D5F344F828BD
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::RPG::GameCore::ModifierBehaviorFlag Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	// static const ::System::String* Field_3_7; // 0x0
	// static const ::System::String* Field_3_8; // 0x0
	::UnityEngine::UI::Image* Field_3_9; // 0xB8
	::RPG::Client::SPProgress* Field_3_10; // 0xC0
	::UnityEngine::Animation* Field_3_11; // 0xC8
	::UnityEngine::Transform* Field_3_12; // 0xD0
	::Class_1_274386B6ECA5E606* Field_3_13; // 0xD8
	::UnityEngine::ParticleSystem* Field_3_14; // 0xE0
	::UnityEngine::UI::Image* Field_3_15; // 0xE8
	::UnityEngine::Transform* Field_3_16; // 0xF0
	::UnityEngine::UI::SmoothMask* Field_3_17; // 0xF8
	::UnityEngine::UI::Image* Field_3_18; // 0x100
	::UnityEngine::UI::Image* Field_3_19; // 0x108
	::UnityEngine::UI::Image* Field_3_20; // 0x110
	::UnityEngine::UI::Image* Field_3_21; // 0x118
	::System::Boolean Field_3_22; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_3_29388402F1C16287(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_29388402F1C16287_OFFSET))(this, a1);
	}

	::System::Void Method_3_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void Method_3_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_3_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_3_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_F5B4708E7805566C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_1_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_3_CBA096B6B8D30164(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_CBA096B6B8D30164_OFFSET))(this, a1);
	}

	::System::Void Method_3_2D5FD057B7606DE5(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_OFFSET))(this, a1);
	}

	::System::Void Method_3_2D5FD057B7606DE5_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_1_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void Method_3_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_C4E2F930A41E34C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_C4E2F930A41E34C0_OFFSET))(this, a1);
	}

	::System::Void Method_3_427D56D899C161B9(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_427D56D899C161B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
