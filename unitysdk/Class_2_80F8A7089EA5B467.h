#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_80F8A7089EA5B467_IdleLiveBossHPVisibilitySource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_18B9B3DE0FF2C630;
class Class_2_19AD1CB994DC4847;
class Class_2_DF912921EB86ACC5_1;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IdleLiveUiVisibleData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_80F8A7089EA5B467_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB4B2B70)
#define CLASS_2_80F8A7089EA5B467_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB4B2CB0)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_04EAA728819FA889_OFFSET UNITYSDK_OFFSET(0xB4B1B40)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xB4B2210)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xB4B17C0)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0xB4B1680)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_614288621F812149_OFFSET UNITYSDK_OFFSET(0xB4B1630)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_6FFF4E44B49A8A7C_OFFSET UNITYSDK_OFFSET(0xB4B1C50)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_726DF6C08E5647AA_OFFSET UNITYSDK_OFFSET(0xB4B16D0)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_8DA5BE17AFCAE31B_OFFSET UNITYSDK_OFFSET(0xB4B1820)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xB4B2A70)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_9F77613D8501BD62_OFFSET UNITYSDK_OFFSET(0xB4B27D0)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0xB4B2590)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0xB4B21C0)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xB4B2980)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_D89E9B7A3325AE84_OFFSET UNITYSDK_OFFSET(0xB4B28C0)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_E7955EC696E7ED3A_OFFSET UNITYSDK_OFFSET(0xB4B1E00)
#define CLASS_2_80F8A7089EA5B467_METHOD_2_F52727C95AED49F6_OFFSET UNITYSDK_OFFSET(0xB4B1A00)
#define CLASS_2_80F8A7089EA5B467__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B2DD0)
#define CLASS_2_80F8A7089EA5B467__INITBERSERKPANEL_B__17_0_OFFSET UNITYSDK_OFFSET(0xB4B2E80)
#define CLASS_2_80F8A7089EA5B467__ONBIND_OFFSET UNITYSDK_OFFSET(0xB4B1EC0)
#define CLASS_2_80F8A7089EA5B467__ONTICK_OFFSET UNITYSDK_OFFSET(0xB4B2530)

inline static constexpr unsigned int Class_2_80F8A7089EA5B467_TypeDefinitionIndex = 68490;

class Class_2_80F8A7089EA5B467 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::Class_2_80F8A7089EA5B467_IdleLiveBossHPVisibilitySource, ::System::Boolean>* Field_2_1; // 0x60
	::UnityEngine::UI::Text* Field_2_2; // 0x68
	::Class_2_18B9B3DE0FF2C630* Field_2_3; // 0x70
	::Class_2_DF912921EB86ACC5_1* Field_2_4; // 0x78
	::RPG::GameCore::GameEntity* Field_2_5; // 0x80
	::Class_2_19AD1CB994DC4847* Field_2_6; // 0x88
	::UnityEngine::Vector3 Field_2_7; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_614288621F812149_OFFSET))(this);
	}

	::Class_2_19AD1CB994DC4847* Method_2_457717A0CF438A7C()
	{
		return ((::Class_2_19AD1CB994DC4847*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Void Method_2_726DF6C08E5647AA(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_726DF6C08E5647AA_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::System::String* Method_2_8DA5BE17AFCAE31B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_8DA5BE17AFCAE31B_OFFSET))(this);
	}

	::System::Void Method_2_F52727C95AED49F6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_F52727C95AED49F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_04EAA728819FA889()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_04EAA728819FA889_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_6FFF4E44B49A8A7C()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_6FFF4E44B49A8A7C_OFFSET))(this);
	}

	::System::Void Method_2_E7955EC696E7ED3A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_E7955EC696E7ED3A_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_A1C7122184516C18_OFFSET))(this);
	}

	::System::Void Method_2_9F77613D8501BD62(::RPG::GameCore::IdleLiveUiVisibleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveUiVisibleData*))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_9F77613D8501BD62_OFFSET))(this, a1);
	}

	::System::Void Method_2_D89E9B7A3325AE84(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_D89E9B7A3325AE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void _InitBerserkPanel_b__17_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467__INITBERSERKPANEL_B__17_0_OFFSET))(this);
	}
};
