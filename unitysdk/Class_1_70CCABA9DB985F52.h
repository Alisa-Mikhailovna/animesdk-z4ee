#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/Struct_2_B57FD4EDC70CAC4C.h"
#include "unitysdk/System/Object.h"

class Class_1_09994FA7935E2E36;
class Class_1_56A1684BE394769D;
class Class_1_5E9C16BFAA602EE3;
class Class_2_291F7DA21A504FC4;
class Class_3_BB8B7764D3497776;
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_1_OFFSET UNITYSDK_OFFSET(0x1549C6B0)
#define CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_OFFSET UNITYSDK_OFFSET(0x1549C480)
#define CLASS_1_70CCABA9DB985F52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1549C8E0)
#define CLASS_1_70CCABA9DB985F52__CTOR_OFFSET UNITYSDK_OFFSET(0x1549C350)

inline static constexpr unsigned int Class_1_70CCABA9DB985F52_TypeDefinitionIndex = 51379;

class Class_1_70CCABA9DB985F52 : public ::System::Object
{
public:
	::Struct_2_3A335394524C9E44 Field_1_0; // 0x10
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_1; // 0xC8
	::Class_1_56A1684BE394769D* Field_1_2; // 0xD0
	::Class_1_5E9C16BFAA602EE3* Field_1_3; // 0xD8
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* Field_1_4; // 0xE0
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_5; // 0xE8
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_6; // 0xF0
	::System::String* Field_1_7; // 0xF8
	::Class_2_291F7DA21A504FC4* Field_1_8; // 0x100
	::Class_3_BB8B7764D3497776* Field_1_9; // 0x108
	::Class_3_BB8B7764D3497776* Field_1_10; // 0x110
	::Class_3_BB8B7764D3497776* Field_1_11; // 0x118
	::RPG::GameCore::FixPoint Field_1_12; // 0x120
	::RPG::GameCore::FixPoint Field_1_13; // 0x128
	::RPG::GameCore::FixPoint Field_1_14; // 0x130
	::RPG::GameCore::FixPoint Field_1_15; // 0x138
	::RPG::GameCore::FixPoint Field_1_16; // 0x140
	::RPG::GameCore::FixPoint Field_1_17; // 0x148
	::RPG::GameCore::FixPoint Field_1_18; // 0x150
	::RPG::GameCore::FixPoint Field_1_19; // 0x158
	::RPG::GameCore::AbilityLinearProperty Field_1_20; // 0x160
	::RPG::GameCore::FixPoint Field_1_21; // 0x1A8
	::RPG::GameCore::FixPoint Field_1_22; // 0x1B0
	::RPG::GameCore::FixPoint Field_1_23; // 0x1B8
	::RPG::GameCore::FixPoint Field_1_24; // 0x1C0
	::RPG::GameCore::FixPoint Field_1_25; // 0x1C8
	::RPG::GameCore::FixPoint Field_1_26; // 0x1D0
	::RPG::GameCore::FixPoint Field_1_27; // 0x1D8
	::RPG::GameCore::FixPoint Field_1_28; // 0x1E0
	::RPG::GameCore::FixPoint Field_1_29; // 0x1E8
	::RPG::GameCore::FinalDamageFormulaType Field_1_30; // 0x1F0
	::RPG::GameCore::DamageBlockType Field_1_31; // 0x1F4
	::RPG::GameCore::FixPoint Field_1_32; // 0x1F8
	::RPG::GameCore::FixPoint Field_1_33; // 0x200
	::RPG::GameCore::FixPoint Field_1_34; // 0x208
	::RPG::GameCore::FixPoint Field_1_35; // 0x210
	::RPG::GameCore::FixPoint Field_1_36; // 0x218
	::RPG::GameCore::FixPoint Field_1_37; // 0x220
	::RPG::GameCore::FixPoint Field_1_38; // 0x228
	::RPG::GameCore::FixPoint Field_1_39; // 0x230
	::RPG::GameCore::AttackType Field_1_40; // 0x238
	::RPG::GameCore::AttackDamageType Field_1_41; // 0x23C
	::RPG::GameCore::FixPoint Field_1_42; // 0x240
	::RPG::GameCore::FixPoint Field_1_43; // 0x248
	::RPG::GameCore::FixPoint Field_1_44; // 0x250
	::RPG::GameCore::FixPoint Field_1_45; // 0x258
	::RPG::GameCore::FixPoint Field_1_46; // 0x260
	::RPG::GameCore::FixPoint Field_1_47; // 0x268
	::RPG::GameCore::FixPoint Field_1_48; // 0x270
	::RPG::GameCore::FixPoint Field_1_49; // 0x278
	::RPG::GameCore::AbilityLinearProperty Field_1_50; // 0x280
	::RPG::GameCore::FixPoint Field_1_51; // 0x2C8
	::System::Boolean Field_1_52; // 0x2D0
	::System::Boolean Field_1_53; // 0x2D1
	::System::Boolean Field_1_54; // 0x2D2
	::System::Boolean Field_1_55; // 0x2D3
	::System::UInt32 Field_1_56; // 0x2D4
	::RPG::GameCore::FixPoint Field_1_57; // 0x2D8
	::RPG::GameCore::FixPoint Field_1_58; // 0x2E0
	::RPG::GameCore::FixPoint Field_1_59; // 0x2E8
	::System::Boolean Field_1_60; // 0x2F0
	::System::Boolean Field_1_61; // 0x2F1
	::System::Boolean Field_1_62; // 0x2F2
	::System::Boolean Field_1_63; // 0x2F3
	::System::Boolean Field_1_64; // 0x2F4
	::System::Boolean Field_1_65; // 0x2F5
	::System::Boolean Field_1_66; // 0x2F6
	::System::Boolean Field_1_67; // 0x2F7
	::RPG::GameCore::FixPoint Field_1_68; // 0x2F8
	::RPG::GameCore::FixPoint Field_1_69; // 0x300
	::RPG::GameCore::FixPoint Field_1_70; // 0x308
	::RPG::GameCore::FixPoint Field_1_71; // 0x310
	::RPG::GameCore::FixPoint Field_1_72; // 0x318
	::RPG::GameCore::FixPoint Field_1_73; // 0x320
	::RPG::GameCore::FixPoint Field_1_74; // 0x328
	::RPG::GameCore::FixPoint Field_1_75; // 0x330
	::RPG::GameCore::FixPoint Field_1_76; // 0x338
	::RPG::GameCore::FixPoint Field_1_77; // 0x340
	::RPG::GameCore::FixPoint Field_1_78; // 0x348
	::RPG::GameCore::FixPoint Field_1_79; // 0x350
	::RPG::GameCore::FixPoint Field_1_80; // 0x358
	::Struct_2_B57FD4EDC70CAC4C Field_1_81; // 0x360
	::RPG::GameCore::FixPoint Field_1_82; // 0x3E8
	::RPG::GameCore::FixPoint Field_1_83; // 0x3F0
	::RPG::GameCore::FixPoint Field_1_84; // 0x3F8
	::RPG::GameCore::FixPoint Field_1_85; // 0x400
	::RPG::GameCore::FixPoint Field_1_86; // 0x408
	::RPG::GameCore::FixPoint Field_1_87; // 0x410
	::RPG::GameCore::FixPoint Field_1_88; // 0x418
	::RPG::GameCore::FixPoint Field_1_89; // 0x420
	::RPG::GameCore::FixPoint Field_1_90; // 0x428
	::RPG::GameCore::FixPoint Field_1_91; // 0x430
	::RPG::GameCore::FixPoint Field_1_92; // 0x438
	::RPG::GameCore::FixPoint Field_1_93; // 0x440
	::RPG::GameCore::FixPoint Field_1_94; // 0x448
	::RPG::GameCore::FixPoint Field_1_95; // 0x450
	::RPG::GameCore::FixPoint Field_1_96; // 0x458
	::RPG::GameCore::FixPoint Field_1_97; // 0x460
	::RPG::GameCore::FixPoint Field_1_98; // 0x468
	::RPG::GameCore::FixPoint Field_1_99; // 0x470
	::RPG::GameCore::FixPoint Field_1_100; // 0x478
	::RPG::GameCore::FixPoint Field_1_101; // 0x480
	::RPG::GameCore::FixPoint Field_1_102; // 0x488
	::RPG::GameCore::FixPoint Field_1_103; // 0x490
	::RPG::GameCore::FixPoint Field_1_104; // 0x498
	::RPG::GameCore::FixPoint Field_1_105; // 0x4A0
	::RPG::GameCore::FixPoint Field_1_106; // 0x4A8
	::RPG::GameCore::FixPoint Field_1_107; // 0x4B0
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_108; // 0x4B8
	::RPG::GameCore::FixPoint Field_1_109; // 0x508
	::RPG::GameCore::FixPoint Field_1_110; // 0x510
	::RPG::GameCore::SkillEffect Field_1_111; // 0x518
	::RPG::GameCore::AttackDamageType Field_1_112; // 0x51C
	::RPG::GameCore::FixPoint Field_1_113; // 0x520
	::RPG::GameCore::FixPoint Field_1_114; // 0x528
	::RPG::GameCore::FixPoint Field_1_115; // 0x530
	::RPG::GameCore::FixPoint Field_1_116; // 0x538
	::RPG::GameCore::FixPoint Field_1_117; // 0x540
	::System::UInt32 Field_1_118; // 0x548
	::System::Boolean Field_1_119; // 0x54C
	::System::Boolean Field_1_120; // 0x54D
	::System::Boolean Field_1_121; // 0x54E
	::System::Boolean Field_1_122; // 0x54F
	::RPG::GameCore::FixPoint Field_1_123; // 0x550
	::RPG::GameCore::FixPoint Field_1_124; // 0x558
	::RPG::GameCore::FixPoint Field_1_125; // 0x560
	::RPG::GameCore::FixPoint Field_1_126; // 0x568
	::RPG::GameCore::FixPoint Field_1_127; // 0x570
	::RPG::GameCore::FixPoint Field_1_128; // 0x578
	::RPG::GameCore::AttackFormulaType Field_1_129; // 0x580
	::RPG::GameCore::AttackFormulaType Field_1_130; // 0x584
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_131; // 0x588
	::RPG::GameCore::FixPoint Field_1_132; // 0x5D8
	::RPG::GameCore::FixPoint Field_1_133; // 0x5E0
	::RPG::GameCore::FixPoint Field_1_134; // 0x5E8
	::RPG::GameCore::FixPoint Field_1_135; // 0x5F0
	::RPG::GameCore::FixPoint Field_1_136; // 0x5F8
	::RPG::GameCore::FixPoint Field_1_137; // 0x600
	::RPG::GameCore::FixPoint Field_1_138; // 0x608
	::RPG::GameCore::FixPoint Field_1_139; // 0x610
	::RPG::GameCore::FixPoint Field_1_140; // 0x618
	::RPG::GameCore::FixPoint Field_1_141; // 0x620
	::RPG::GameCore::FixPoint Field_1_142; // 0x628
	::RPG::GameCore::FixPoint Field_1_143; // 0x630
	::RPG::GameCore::FixPoint Field_1_144; // 0x638
	::RPG::GameCore::FixPoint Field_1_145; // 0x640
	::RPG::GameCore::FixPoint Field_1_146; // 0x648
	::RPG::GameCore::AbilityLinearProperty Field_1_147; // 0x650
	::RPG::GameCore::FixPoint Field_1_148; // 0x698
	::RPG::GameCore::FixPoint Field_1_149; // 0x6A0
	::RPG::GameCore::FixPoint Field_1_150; // 0x6A8
	::RPG::GameCore::FixPoint Field_1_151; // 0x6B0
	::RPG::GameCore::AbilityLinearProperty Field_1_152; // 0x6B8
	::RPG::GameCore::FixPoint Field_1_153; // 0x700

	::System::Void _ctor(::Class_3_BB8B7764D3497776* a1, ::Class_3_BB8B7764D3497776* a2, ::Class_3_BB8B7764D3497776* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_METHOD_1_38CF1CC114148ECD_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70CCABA9DB985F52_TOSTRING_OFFSET))(this);
	}
};
