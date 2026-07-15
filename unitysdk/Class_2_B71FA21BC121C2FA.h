#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillCharacterComponent_UseSkillErrorInfo.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1058;
class Class_1_A474572029D08468;
class Class_2_397009915F388B35;
class Class_2_A8EECF54527683EC;
class Class_2_BD07726827556B99;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_B71FA21BC121C2FA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x154AC130)
#define CLASS_2_B71FA21BC121C2FA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x154AC2D0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x154A8450)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x154AAE90)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0x154A9E80)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x154A9280)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_0C6D78F7FB2736C2_OFFSET UNITYSDK_OFFSET(0x154AB8A0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x154AB090)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x154AB500)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_17316B7970434885_OFFSET UNITYSDK_OFFSET(0x154ABDF0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x154AB7C0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0x154A93D0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x154AA070)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x154A9FD0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x154A8B50)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0x154A8F90)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0x154A8CC0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_5111094324C9672F_OFFSET UNITYSDK_OFFSET(0x154AA110)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_52E2776E94369952_OFFSET UNITYSDK_OFFSET(0x154A9560)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_557CBF1730FC2E87_OFFSET UNITYSDK_OFFSET(0x154AAF20)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x154AA020)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_66E43F6577A10103_OFFSET UNITYSDK_OFFSET(0x154ABDA0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_735EE20B25F86BF4_1_OFFSET UNITYSDK_OFFSET(0x154AACC0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x154AAC20)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x154AAE40)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x154A9000)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_7B3034CA2BF9712E_OFFSET UNITYSDK_OFFSET(0x154A8D90)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_7B41A1215ECDFB54_OFFSET UNITYSDK_OFFSET(0x154AA0C0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_7D1D8EF45782963B_OFFSET UNITYSDK_OFFSET(0x154AAA40)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_81396C9FDDABAA8F_OFFSET UNITYSDK_OFFSET(0x154A96C0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_81C93B4F2172FCC2_OFFSET UNITYSDK_OFFSET(0x154AB900)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_8853F27ABBCBCB6D_OFFSET UNITYSDK_OFFSET(0x154AA3C0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_9280DA3AEE0B403B_OFFSET UNITYSDK_OFFSET(0x154A9EE0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x154AAFE0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x154ABE40)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x154A8810)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x154AA900)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_A9F4FF606733DC08_OFFSET UNITYSDK_OFFSET(0x154ABAB0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_AFB4DE3138035970_OFFSET UNITYSDK_OFFSET(0x154AA540)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_B128C90853E23A16_OFFSET UNITYSDK_OFFSET(0x154AB610)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_BC3F0B0BF50E9A0D_OFFSET UNITYSDK_OFFSET(0x154A9890)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x154A8780)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x154AAD60)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_BFF777A41DE1C9B0_1_OFFSET UNITYSDK_OFFSET(0x154A9370)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_BFF777A41DE1C9B0_OFFSET UNITYSDK_OFFSET(0x154A9310)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x154A8DE0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_DB9AB52C64DD6A32_OFFSET UNITYSDK_OFFSET(0x154ABBE0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_DE95B0FA01D09B41_OFFSET UNITYSDK_OFFSET(0x154AAAA0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_E0A65DE7257F4F7A_OFFSET UNITYSDK_OFFSET(0x154A88C0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_E334B5F5EEF15B46_OFFSET UNITYSDK_OFFSET(0x154A8F00)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_E4ECAEA9652528F0_OFFSET UNITYSDK_OFFSET(0x154AA680)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x154AB1B0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_E7AB99EDC5373156_OFFSET UNITYSDK_OFFSET(0x154ABC40)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x154A9C10)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x154A9DE0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x154AAB80)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_F125ECC0726D0181_OFFSET UNITYSDK_OFFSET(0x154AA990)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x154ABFD0)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x154AC060)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x154ABF40)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_F7C7233DCCBCA0C6_OFFSET UNITYSDK_OFFSET(0x154AAB10)
#define CLASS_2_B71FA21BC121C2FA_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x154ABD60)
#define CLASS_2_B71FA21BC121C2FA__CTOR_OFFSET UNITYSDK_OFFSET(0x154AC440)
#define CLASS_2_B71FA21BC121C2FA__ONBIND_OFFSET UNITYSDK_OFFSET(0x154A7D40)
#define CLASS_2_B71FA21BC121C2FA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x154A9220)

inline static constexpr unsigned int Class_2_B71FA21BC121C2FA_TypeDefinitionIndex = 68632;

class Class_2_B71FA21BC121C2FA : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	::UnityEngine::Transform* Field_2_12; // 0x60
	::UnityEngine::Animation* Field_2_13; // 0x68
	::UnityEngine::Transform* Field_2_14; // 0x70
	::UnityEngine::Transform* Field_2_15; // 0x78
	::UnityEngine::Transform* Field_2_16; // 0x80
	::UnityEngine::Animation* Field_2_17; // 0x88
	::UnityEngine::UI::Image* Field_2_18; // 0x90
	::RPG::Client::LongPressEvent* Field_2_19; // 0x98
	::UnityEngine::RectTransform* Field_2_20; // 0xA0
	::RPG::GameCore::LevelUIComponent* Field_2_21; // 0xA8
	::UnityEngine::Transform* Field_2_22; // 0xB0
	::RPG::GameCore::BattleInstance* Field_2_23; // 0xB8
	::UnityEngine::Transform* Field_2_24; // 0xC0
	::RPG::Client::MonoInControlButton* Field_2_25; // 0xC8
	::RPG::GameCore::GameEntity* Field_2_26; // 0xD0
	::RPG::Client::AnimatorButton* Field_2_27; // 0xD8
	::RPG::Client::MonoInControlTip* Field_2_28; // 0xE0
	::Class_2_A8EECF54527683EC* Field_2_29; // 0xE8
	::RPG::Client::LocalizedText* Field_2_30; // 0xF0
	::Class_2_397009915F388B35* Field_2_31; // 0xF8
	::UnityEngine::UI::Image* Field_2_32; // 0x100
	::Class_2_BD07726827556B99* Field_2_33; // 0x108
	::UnityEngine::Transform* Field_2_34; // 0x110
	::UnityEngine::Transform* Field_2_35; // 0x118
	::UnityEngine::Transform* Field_2_36; // 0x120
	::Class_1_A474572029D08468* Field_2_37; // 0x128
	::Class_0_16E4307DCC419505_1058* Field_2_38; // 0x130
	::UnityEngine::Transform* Field_2_39; // 0x138
	::UnityEngine::Animation* Field_2_40; // 0x140
	::RPG::Client::UISkillIndex Field_2_41; // 0x148
	::System::Boolean Field_2_42; // 0x14C
	::System::Boolean Field_2_43; // 0x14D
	::System::Boolean Field_2_44; // 0x14E
	::System::Boolean Field_2_45; // 0x14F
	::System::Boolean Field_2_46; // 0x150
	::System::Boolean Field_2_47; // 0x151

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_4BE99DDCF7F1FD88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_4BE99DDCF7F1FD88_OFFSET))(this);
	}

	::System::Void Method_2_E334B5F5EEF15B46(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_E334B5F5EEF15B46_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_BFF777A41DE1C9B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_BFF777A41DE1C9B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_BFF777A41DE1C9B0_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_BFF777A41DE1C9B0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_2_81396C9FDDABAA8F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_81396C9FDDABAA8F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_04E967564E8CD234(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_04E967564E8CD234_OFFSET))(this, a1);
	}

	::System::Void Method_2_9280DA3AEE0B403B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_9280DA3AEE0B403B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_7B41A1215ECDFB54()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_7B41A1215ECDFB54_OFFSET))(this);
	}

	::System::Void Method_2_BC3F0B0BF50E9A0D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_BC3F0B0BF50E9A0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AFB4DE3138035970(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_AFB4DE3138035970_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52E2776E94369952(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_52E2776E94369952_OFFSET))(this, a1);
	}

	::System::Void Method_2_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Void Method_2_42D74E8C949A6883(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_42D74E8C949A6883_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_F7C7233DCCBCA0C6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_F7C7233DCCBCA0C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_735EE20B25F86BF4_1_OFFSET))(this);
	}

	::System::Void Method_2_DE95B0FA01D09B41(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_DE95B0FA01D09B41_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0A65DE7257F4F7A(::RPG::Client::LongPressEvent* a1, ::RPG::Client::MonoInControlTip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LongPressEvent*, ::RPG::Client::MonoInControlTip*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_E0A65DE7257F4F7A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_2_557CBF1730FC2E87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_557CBF1730FC2E87_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_0C6D78F7FB2736C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_0C6D78F7FB2736C2_OFFSET))(this);
	}

	::System::Boolean Method_2_B128C90853E23A16()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_B128C90853E23A16_OFFSET))(this);
	}

	::System::Boolean Method_2_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Boolean Method_2_DB9AB52C64DD6A32(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_DB9AB52C64DD6A32_OFFSET))(this, a1);
	}

	::System::Void Method_2_F125ECC0726D0181(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_F125ECC0726D0181_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D1D8EF45782963B(::RPG::GameCore::ControlSkillType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_7D1D8EF45782963B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A9F4FF606733DC08(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_A9F4FF606733DC08_OFFSET))(this, a1);
	}

	::System::Void Method_2_5111094324C9672F(::System::Int32 a1, ::RPG::GameCore::ICharacterSkillRowData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_5111094324C9672F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8853F27ABBCBCB6D(::RPG::GameCore::ICharacterSkillRowData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_8853F27ABBCBCB6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E4ECAEA9652528F0(::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_E4ECAEA9652528F0_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7AB99EDC5373156(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_E7AB99EDC5373156_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_81C93B4F2172FCC2()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_81C93B4F2172FCC2_OFFSET))(this);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::RPG::Client::MonoInControlButton* Method_2_66E43F6577A10103()
	{
		return ((::RPG::Client::MonoInControlButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_66E43F6577A10103_OFFSET))(this);
	}

	::RPG::Client::MonoInControlTip* Method_2_7B3034CA2BF9712E()
	{
		return ((::RPG::Client::MonoInControlTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_7B3034CA2BF9712E_OFFSET))(this);
	}

	::RPG::Client::LongPressEvent* Method_2_17316B7970434885()
	{
		return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_17316B7970434885_OFFSET))(this);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
