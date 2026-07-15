#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/StoryCharacterApperMode.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace System { class String; }

#define CLASS_2_5FF2340E88CFFA8C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEA7E10)
#define CLASS_2_5FF2340E88CFFA8C_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAEA7FC0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0xAEA8D80)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BD6A0326CCBE110_OFFSET UNITYSDK_OFFSET(0xAEA8510)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_23B529B4DB8AFE59_OFFSET UNITYSDK_OFFSET(0xAEA8590)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xAEA84C0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAEA81E0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_448DA6E72C15D5AB_OFFSET UNITYSDK_OFFSET(0xAEA8400)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_469B5B6FF2B897D9_OFFSET UNITYSDK_OFFSET(0xAEA8230)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_81855C54613E2F49_OFFSET UNITYSDK_OFFSET(0xAEA82A0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAEA8660)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0xAEA8910)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xAEA7E60)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0xAEA86C0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAEA8390)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_D6A423C7D4B0EFDC_OFFSET UNITYSDK_OFFSET(0xAEA9360)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_E855A974FE0C8866_1_OFFSET UNITYSDK_OFFSET(0xAEA9310)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_E855A974FE0C8866_OFFSET UNITYSDK_OFFSET(0xAEA92B0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_EA352B23C235E20F_OFFSET UNITYSDK_OFFSET(0xAEA8790)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAEA9510)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xAEA8BC0)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xAEA8890)
#define CLASS_2_5FF2340E88CFFA8C_METHOD_2_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0xAEA8FF0)
#define CLASS_2_5FF2340E88CFFA8C_TICK_OFFSET UNITYSDK_OFFSET(0xAEA7F50)
#define CLASS_2_5FF2340E88CFFA8C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAEA9520)
#define CLASS_2_5FF2340E88CFFA8C__CTOR_OFFSET UNITYSDK_OFFSET(0xAEA7E00)
#define CLASS_2_5FF2340E88CFFA8C___BEGINFADEIN_ONLYEFFECTMODE_B__16_0_OFFSET UNITYSDK_OFFSET(0xAEA9570)
#define CLASS_2_5FF2340E88CFFA8C___BEGINFADEOUT_ONLYEFFECTMODE_B__17_0_OFFSET UNITYSDK_OFFSET(0xAEA9620)

inline static constexpr unsigned int Class_2_5FF2340E88CFFA8C_TypeDefinitionIndex = 54791;

class Class_2_5FF2340E88CFFA8C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5FF2340E88CFFA8C_TypeDefinitionIndex)->GetStaticField(0x5C7C0);
	}
	::System::String* Field_2_1; // 0x18
	::RPG::GameCore::CharacterVisibleComponent* Field_2_2; // 0x20
	::Class_1_23F67DD15593C8D6* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x38
	::System::Nullable_1<::System::Boolean> Field_2_6; // 0x3C
	::System::Boolean Field_2_7; // 0x3E
	::System::Boolean Field_2_8; // 0x3F
	::System::Boolean Field_2_9; // 0x40
	::System::Nullable_1<::System::Single> Field_2_10; // 0x44
	::System::Boolean Field_2_11; // 0x4C
	::System::Boolean Field_2_12; // 0x4D
	::RPG::GameCore::StoryCharacterApperMode Field_2_13; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_469B5B6FF2B897D9(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_469B5B6FF2B897D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_448DA6E72C15D5AB(::RPG::GameCore::StoryCharacterApperMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StoryCharacterApperMode))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_448DA6E72C15D5AB_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BD6A0326CCBE110(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BD6A0326CCBE110_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_23B529B4DB8AFE59(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_23B529B4DB8AFE59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_81855C54613E2F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_81855C54613E2F49_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_0BA114B592B3A582()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_0BA114B592B3A582_OFFSET))(this);
	}

	::System::Void Method_2_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E855A974FE0C8866()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_E855A974FE0C8866_OFFSET))(this);
	}

	::System::Void Method_2_E855A974FE0C8866_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_E855A974FE0C8866_1_OFFSET))(this);
	}

	::System::Void Method_2_D6A423C7D4B0EFDC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_D6A423C7D4B0EFDC_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA352B23C235E20F(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_EA352B23C235E20F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __BeginFadeIn_OnlyEffectMode_b__16_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___BEGINFADEIN_ONLYEFFECTMODE_B__16_0_OFFSET))(this);
	}

	::System::Void __BeginFadeOut_OnlyEffectMode_b__17_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FF2340E88CFFA8C___BEGINFADEOUT_ONLYEFFECTMODE_B__17_0_OFFSET))(this);
	}
};
