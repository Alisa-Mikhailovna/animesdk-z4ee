#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/DamageIntegerizeCategory.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/Struct_2_B57FD4EDC70CAC4C.h"
#include "unitysdk/Struct_2_EF7C37AF69DC7CE6.h"
#include "unitysdk/System/Object.h"

class Class_1_09994FA7935E2E36;
class Class_1_5E9C16BFAA602EE3;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_1_OFFSET UNITYSDK_OFFSET(0xB26B1A0)
#define CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_OFFSET UNITYSDK_OFFSET(0xB26AF70)
#define CLASS_1_843DD6330B22E422_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB26B3D0)
#define CLASS_1_843DD6330B22E422__CTOR_OFFSET UNITYSDK_OFFSET(0xB26AEA0)

inline static constexpr unsigned int Class_1_843DD6330B22E422_TypeDefinitionIndex = 51951;

class Class_1_843DD6330B22E422 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonEnum*>* Field_1_1; // 0x18
	::Class_1_5E9C16BFAA602EE3* Field_1_2; // 0x20
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_3; // 0x28
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_4; // 0x30
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_5; // 0x38
	::Struct_2_3A335394524C9E44 Field_1_6; // 0x40
	::RPG::PoolList_1<::Struct_2_EF7C37AF69DC7CE6>* Field_1_7; // 0xF8
	::System::String* Field_1_8; // 0x100
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_9; // 0x108
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_10; // 0x110
	::Il2CppArray<::Class_1_09994FA7935E2E36*>* Field_1_11; // 0x118
	::RPG::GameCore::FixPoint Field_1_12; // 0x120
	::RPG::GameCore::FixPoint Field_1_13; // 0x128
	::RPG::GameCore::FixPoint Field_1_14; // 0x130
	::RPG::GameCore::AbilityLinearProperty Field_1_15; // 0x138
	::RPG::GameCore::FixPoint Field_1_16; // 0x180
	::RPG::GameCore::FixPoint Field_1_17; // 0x188
	::RPG::GameCore::FixPoint Field_1_18; // 0x190
	::RPG::GameCore::FixPoint Field_1_19; // 0x198
	::RPG::GameCore::FixPoint Field_1_20; // 0x1A0
	::RPG::GameCore::FixPoint Field_1_21; // 0x1A8
	::RPG::GameCore::FixPoint Field_1_22; // 0x1B0
	::RPG::GameCore::FixPoint Field_1_23; // 0x1B8
	::RPG::GameCore::FixPoint Field_1_24; // 0x1C0
	::RPG::GameCore::FixPoint Field_1_25; // 0x1C8
	::RPG::GameCore::FixPoint Field_1_26; // 0x1D0
	::RPG::GameCore::FixPoint Field_1_27; // 0x1D8
	::RPG::GameCore::FixPoint Field_1_28; // 0x1E0
	::RPG::GameCore::FixPoint Field_1_29; // 0x1E8
	::RPG::GameCore::FixPoint Field_1_30; // 0x1F0
	::RPG::GameCore::FinalDamageFormulaType Field_1_31; // 0x1F8
	::RPG::GameCore::AttackDamageType Field_1_32; // 0x1FC
	::RPG::GameCore::FixPoint Field_1_33; // 0x200
	::RPG::GameCore::FixPoint Field_1_34; // 0x208
	::RPG::GameCore::FixPoint Field_1_35; // 0x210
	::RPG::GameCore::FixPoint Field_1_36; // 0x218
	::RPG::GameCore::FixPoint Field_1_37; // 0x220
	::RPG::GameCore::FixPoint Field_1_38; // 0x228
	::RPG::GameCore::FixPoint Field_1_39; // 0x230
	::RPG::GameCore::FixPoint Field_1_40; // 0x238
	::RPG::GameCore::FixPoint Field_1_41; // 0x240
	::RPG::GameCore::FixPoint Field_1_42; // 0x248
	::RPG::GameCore::FixPoint Field_1_43; // 0x250
	::RPG::GameCore::FixPoint Field_1_44; // 0x258
	::RPG::GameCore::FixPoint Field_1_45; // 0x260
	::RPG::GameCore::FixPoint Field_1_46; // 0x268
	::RPG::GameCore::FixPoint Field_1_47; // 0x270
	::RPG::GameCore::FixPoint Field_1_48; // 0x278
	::RPG::GameCore::FixPoint Field_1_49; // 0x280
	::RPG::GameCore::FixPoint Field_1_50; // 0x288
	::RPG::GameCore::FixPoint Field_1_51; // 0x290
	::RPG::GameCore::FixPoint Field_1_52; // 0x298
	::RPG::GameCore::FixPoint Field_1_53; // 0x2A0
	::RPG::GameCore::FixPoint Field_1_54; // 0x2A8
	::RPG::GameCore::FixPoint Field_1_55; // 0x2B0
	::RPG::GameCore::FixPoint Field_1_56; // 0x2B8
	::RPG::GameCore::FixPoint Field_1_57; // 0x2C0
	::RPG::GameCore::FixPoint Field_1_58; // 0x2C8
	::RPG::GameCore::FixPoint Field_1_59; // 0x2D0
	::RPG::GameCore::FixPoint Field_1_60; // 0x2D8
	::RPG::GameCore::FixPoint Field_1_61; // 0x2E0
	::RPG::GameCore::FixPoint Field_1_62; // 0x2E8
	::RPG::GameCore::FixPoint Field_1_63; // 0x2F0
	::RPG::GameCore::FixPoint Field_1_64; // 0x2F8
	::RPG::GameCore::FixPoint Field_1_65; // 0x300
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_66; // 0x308
	::RPG::GameCore::FixPoint Field_1_67; // 0x358
	::RPG::GameCore::FixPoint Field_1_68; // 0x360
	::RPG::GameCore::FixPoint Field_1_69; // 0x368
	::RPG::GameCore::FixPoint Field_1_70; // 0x370
	::RPG::GameCore::FixPoint Field_1_71; // 0x378
	::RPG::GameCore::FixPoint Field_1_72; // 0x380
	::RPG::GameCore::FixPoint Field_1_73; // 0x388
	::RPG::GameCore::FixPoint Field_1_74; // 0x390
	::RPG::GameCore::FixPoint Field_1_75; // 0x398
	::RPG::GameCore::FixPoint Field_1_76; // 0x3A0
	::RPG::GameCore::FixPoint Field_1_77; // 0x3A8
	::RPG::GameCore::FixPoint Field_1_78; // 0x3B0
	::RPG::GameCore::FixPoint Field_1_79; // 0x3B8
	::RPG::GameCore::FixPoint Field_1_80; // 0x3C0
	::RPG::GameCore::FixPoint Field_1_81; // 0x3C8
	::RPG::GameCore::FixPoint Field_1_82; // 0x3D0
	::RPG::GameCore::FixPoint Field_1_83; // 0x3D8
	::RPG::GameCore::FixPoint Field_1_84; // 0x3E0
	::RPG::GameCore::DamageBlockType Field_1_85; // 0x3E8
	::System::UInt32 Field_1_86; // 0x3EC
	::RPG::GameCore::FixPoint Field_1_87; // 0x3F0
	::RPG::GameCore::FixPoint Field_1_88; // 0x3F8
	::RPG::GameCore::FixPoint Field_1_89; // 0x400
	::RPG::GameCore::FixPoint Field_1_90; // 0x408
	::RPG::GameCore::FixPoint Field_1_91; // 0x410
	::RPG::GameCore::FixPoint Field_1_92; // 0x418
	::RPG::GameCore::AbilityLinearProperty Field_1_93; // 0x420
	::RPG::GameCore::FixPoint Field_1_94; // 0x468
	::RPG::GameCore::FixPoint Field_1_95; // 0x470
	::RPG::GameCore::FixPoint Field_1_96; // 0x478
	::RPG::GameCore::FixPoint Field_1_97; // 0x480
	::RPG::GameCore::FixPoint Field_1_98; // 0x488
	::RPG::GameCore::FixPoint Field_1_99; // 0x490
	::RPG::GameCore::FixPoint Field_1_100; // 0x498
	::RPG::GameCore::FixPoint Field_1_101; // 0x4A0
	::RPG::GameCore::FixPoint Field_1_102; // 0x4A8
	::RPG::GameCore::FixPoint Field_1_103; // 0x4B0
	::RPG::GameCore::FixPoint Field_1_104; // 0x4B8
	::RPG::GameCore::FixPoint Field_1_105; // 0x4C0
	::System::Boolean Field_1_106; // 0x4C8
	::System::Boolean Field_1_107; // 0x4C9
	::System::Boolean Field_1_108; // 0x4CA
	::System::Boolean Field_1_109; // 0x4CB
	::RPG::GameCore::AttackFormulaType Field_1_110; // 0x4CC
	::RPG::GameCore::FixPoint Field_1_111; // 0x4D0
	::RPG::GameCore::FixPoint Field_1_112; // 0x4D8
	::RPG::GameCore::FixPoint Field_1_113; // 0x4E0
	::RPG::GameCore::FixPoint Field_1_114; // 0x4E8
	::RPG::GameCore::FixPoint Field_1_115; // 0x4F0
	::RPG::GameCore::AttackType Field_1_116; // 0x4F8
	::System::Boolean Field_1_117; // 0x4FC
	::System::Boolean Field_1_118; // 0x4FD
	::System::Boolean Field_1_119; // 0x4FE
	::System::Boolean Field_1_120; // 0x4FF
	::System::UInt32 Field_1_121; // 0x500
	::System::Boolean Field_1_122; // 0x504
	::System::Boolean Field_1_123; // 0x505
	::System::Boolean Field_1_124; // 0x506
	::System::Boolean Field_1_125; // 0x507
	::RPG::GameCore::FixPoint Field_1_126; // 0x508
	::RPG::GameCore::FixPoint Field_1_127; // 0x510
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_128; // 0x518
	::RPG::GameCore::FixPoint Field_1_129; // 0x568
	::RPG::GameCore::FixPoint Field_1_130; // 0x570
	::RPG::GameCore::FixPoint Field_1_131; // 0x578
	::RPG::GameCore::FixPoint Field_1_132; // 0x580
	::RPG::GameCore::FixPoint Field_1_133; // 0x588
	::RPG::GameCore::DamageIntegerizeCategory Field_1_134; // 0x590
	::RPG::GameCore::AttackFormulaType Field_1_135; // 0x594
	::RPG::GameCore::FixPoint Field_1_136; // 0x598
	::RPG::GameCore::AbilityLinearProperty Field_1_137; // 0x5A0
	::RPG::GameCore::FixPoint Field_1_138; // 0x5E8
	::RPG::GameCore::FixPoint Field_1_139; // 0x5F0
	::RPG::GameCore::SkillEffect Field_1_140; // 0x5F8
	::System::Boolean Field_1_141; // 0x5FC
	::System::Boolean Field_1_142; // 0x5FD
	::System::Boolean Field_1_143; // 0x5FE
	::System::Boolean Field_1_144; // 0x5FF
	::RPG::GameCore::FixPoint Field_1_145; // 0x600
	::RPG::GameCore::FixPoint Field_1_146; // 0x608
	::RPG::GameCore::AbilityLinearProperty Field_1_147; // 0x610
	::RPG::GameCore::FixPoint Field_1_148; // 0x658
	::RPG::GameCore::AttackDamageType Field_1_149; // 0x660
	::System::Boolean Field_1_150; // 0x664
	::System::Boolean Field_1_151; // 0x665
	::System::Boolean Field_1_152; // 0x666
	::System::Boolean Field_1_153; // 0x667
	::RPG::GameCore::FixPoint Field_1_154; // 0x668
	::RPG::GameCore::FixPoint Field_1_155; // 0x670
	::RPG::GameCore::FixPoint Field_1_156; // 0x678
	::RPG::GameCore::FixPoint Field_1_157; // 0x680
	::Struct_2_B57FD4EDC70CAC4C Field_1_158; // 0x688
	::RPG::GameCore::FixPoint Field_1_159; // 0x710
	::RPG::GameCore::FixPoint Field_1_160; // 0x718
	::RPG::GameCore::FixPoint Field_1_161; // 0x720
	::RPG::GameCore::FixPoint Field_1_162; // 0x728

	::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_38CF1CC114148ECD_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_METHOD_1_38CF1CC114148ECD_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DD6330B22E422_TOSTRING_OFFSET))(this);
	}
};
