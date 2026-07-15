#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1DC128E22A3FA54F.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_70697F531F566942_2;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Text; }

#define CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xAF88FD0)
#define CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xAF89470)
#define CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0xAF89230)
#define CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xAF892E0)
#define CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0xAF891A0)
#define CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_B19D178EAF5F28EA_OFFSET UNITYSDK_OFFSET(0xAF894E0)
#define CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_B7E3C3DAFBD8F4B2_1_OFFSET UNITYSDK_OFFSET(0xAF89060)
#define CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_B7E3C3DAFBD8F4B2_OFFSET UNITYSDK_OFFSET(0xAF88E40)
#define CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xAF893B0)
#define CLASS_3_6F4F4D4CAF9FAFDC_ONRETURN_OFFSET UNITYSDK_OFFSET(0xAF88DF0)
#define CLASS_3_6F4F4D4CAF9FAFDC__CTOR_OFFSET UNITYSDK_OFFSET(0xAF896E0)
#define CLASS_3_6F4F4D4CAF9FAFDC__ONBIND_OFFSET UNITYSDK_OFFSET(0xAF88D70)

inline static constexpr unsigned int Class_3_6F4F4D4CAF9FAFDC_TypeDefinitionIndex = 68504;

class Class_3_6F4F4D4CAF9FAFDC : public ::Class_2_1DC128E22A3FA54F
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	::UnityEngine::Animator* Field_3_7; // 0x68
	::UnityEngine::UI::Text* Field_3_8; // 0x70
	::RPG::GameCore::FixPoint Field_3_9; // 0x78
	::RPG::GameCore::FixPoint Field_3_10; // 0x80
	::System::Boolean Field_3_11; // 0x88
	::RPG::GameCore::EnergyBarState Field_3_12; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_B7E3C3DAFBD8F4B2(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_B7E3C3DAFBD8F4B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_B7E3C3DAFBD8F4B2_1(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_B7E3C3DAFBD8F4B2_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_3_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_3_B19D178EAF5F28EA(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6F4F4D4CAF9FAFDC_METHOD_3_B19D178EAF5F28EA_OFFSET))(this, a1, a2);
	}
};
