#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_1_9EBCF6317BDAE2CB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF3E4C0)
#define CLASS_1_9EBCF6317BDAE2CB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF3E500)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AF3E510)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_100_OFFSET UNITYSDK_OFFSET(0x1AF3F570)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_101_OFFSET UNITYSDK_OFFSET(0x1AF3F5A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_102_OFFSET UNITYSDK_OFFSET(0x1AF3F5B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_103_OFFSET UNITYSDK_OFFSET(0x1AF3F5E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_104_OFFSET UNITYSDK_OFFSET(0x1AF3F5F0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_105_OFFSET UNITYSDK_OFFSET(0x1AF3F630)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_106_OFFSET UNITYSDK_OFFSET(0x1AF3F640)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_107_OFFSET UNITYSDK_OFFSET(0x1AF3F650)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_108_OFFSET UNITYSDK_OFFSET(0x1AF3F660)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_109_OFFSET UNITYSDK_OFFSET(0x1AF3F690)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_10_OFFSET UNITYSDK_OFFSET(0x1AF3E7F0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_110_OFFSET UNITYSDK_OFFSET(0x1AF3F6C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_111_OFFSET UNITYSDK_OFFSET(0x1AF3F730)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_112_OFFSET UNITYSDK_OFFSET(0x1AF3F780)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_11_OFFSET UNITYSDK_OFFSET(0x1AF3E840)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_12_OFFSET UNITYSDK_OFFSET(0x1AF3E8A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_13_OFFSET UNITYSDK_OFFSET(0x1AF3E8F0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_14_OFFSET UNITYSDK_OFFSET(0x1AF3E920)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_15_OFFSET UNITYSDK_OFFSET(0x1AF3E930)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_16_OFFSET UNITYSDK_OFFSET(0x1AF3E940)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_17_OFFSET UNITYSDK_OFFSET(0x1AF3E970)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_18_OFFSET UNITYSDK_OFFSET(0x1AF3E980)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_19_OFFSET UNITYSDK_OFFSET(0x1AF3E990)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x1AF3E540)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_20_OFFSET UNITYSDK_OFFSET(0x1AF3E9A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_21_OFFSET UNITYSDK_OFFSET(0x1AF3E9E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_22_OFFSET UNITYSDK_OFFSET(0x1AF3EA20)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_23_OFFSET UNITYSDK_OFFSET(0x1AF3EA30)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_24_OFFSET UNITYSDK_OFFSET(0x1AF3EA70)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_25_OFFSET UNITYSDK_OFFSET(0x1AF3EAB0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_26_OFFSET UNITYSDK_OFFSET(0x1AF3EB00)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_27_OFFSET UNITYSDK_OFFSET(0x1AF3EB50)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_28_OFFSET UNITYSDK_OFFSET(0x1AF3EBA0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_29_OFFSET UNITYSDK_OFFSET(0x1AF3EBD0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_2_OFFSET UNITYSDK_OFFSET(0x1AF3E590)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_30_OFFSET UNITYSDK_OFFSET(0x1AF3EC10)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_31_OFFSET UNITYSDK_OFFSET(0x1AF3EC40)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_32_OFFSET UNITYSDK_OFFSET(0x1AF3EC70)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_33_OFFSET UNITYSDK_OFFSET(0x1AF3EC80)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_34_OFFSET UNITYSDK_OFFSET(0x1AF3ECB0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_35_OFFSET UNITYSDK_OFFSET(0x1AF3ECC0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_36_OFFSET UNITYSDK_OFFSET(0x1AF3ED00)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_37_OFFSET UNITYSDK_OFFSET(0x1AF3ED10)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_38_OFFSET UNITYSDK_OFFSET(0x1AF3ED20)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_39_OFFSET UNITYSDK_OFFSET(0x1AF3ED60)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_3_OFFSET UNITYSDK_OFFSET(0x1AF3E5C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_40_OFFSET UNITYSDK_OFFSET(0x1AF3ED90)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_41_OFFSET UNITYSDK_OFFSET(0x1AF3EDA0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_42_OFFSET UNITYSDK_OFFSET(0x1AF3EDE0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_43_OFFSET UNITYSDK_OFFSET(0x1AF3EE30)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_44_OFFSET UNITYSDK_OFFSET(0x1AF3EE60)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_45_OFFSET UNITYSDK_OFFSET(0x1AF3EE70)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_46_OFFSET UNITYSDK_OFFSET(0x1AF3EEC0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_47_OFFSET UNITYSDK_OFFSET(0x1AF3EED0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_48_OFFSET UNITYSDK_OFFSET(0x1AF3EEE0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_49_OFFSET UNITYSDK_OFFSET(0x1AF3EF10)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_4_OFFSET UNITYSDK_OFFSET(0x1AF3E610)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_50_OFFSET UNITYSDK_OFFSET(0x1AF3EF20)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_51_OFFSET UNITYSDK_OFFSET(0x1AF3EF30)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_52_OFFSET UNITYSDK_OFFSET(0x1AF3EF40)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_53_OFFSET UNITYSDK_OFFSET(0x1AF3EF50)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_54_OFFSET UNITYSDK_OFFSET(0x1AF3EF90)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_55_OFFSET UNITYSDK_OFFSET(0x1AF3EFD0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_56_OFFSET UNITYSDK_OFFSET(0x1AF3F010)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_57_OFFSET UNITYSDK_OFFSET(0x1AF3F020)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_58_OFFSET UNITYSDK_OFFSET(0x1AF3F030)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_59_OFFSET UNITYSDK_OFFSET(0x1AF3F040)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_5_OFFSET UNITYSDK_OFFSET(0x1AF3E650)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_60_OFFSET UNITYSDK_OFFSET(0x1AF3F050)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_61_OFFSET UNITYSDK_OFFSET(0x1AF3F060)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_62_OFFSET UNITYSDK_OFFSET(0x1AF3F0A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_63_OFFSET UNITYSDK_OFFSET(0x1AF3F0B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_64_OFFSET UNITYSDK_OFFSET(0x1AF3F0F0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_65_OFFSET UNITYSDK_OFFSET(0x1AF3F130)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_66_OFFSET UNITYSDK_OFFSET(0x1AF3F140)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_67_OFFSET UNITYSDK_OFFSET(0x1AF3F150)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_68_OFFSET UNITYSDK_OFFSET(0x1AF3F160)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_69_OFFSET UNITYSDK_OFFSET(0x1AF3F170)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_6_OFFSET UNITYSDK_OFFSET(0x1AF3E6A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_70_OFFSET UNITYSDK_OFFSET(0x1AF3F180)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_71_OFFSET UNITYSDK_OFFSET(0x1AF3F1C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_72_OFFSET UNITYSDK_OFFSET(0x1AF3F200)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_73_OFFSET UNITYSDK_OFFSET(0x1AF3F240)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_74_OFFSET UNITYSDK_OFFSET(0x1AF3F270)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_75_OFFSET UNITYSDK_OFFSET(0x1AF3F2B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_76_OFFSET UNITYSDK_OFFSET(0x1AF3F2C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_77_OFFSET UNITYSDK_OFFSET(0x1AF3F2D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_78_OFFSET UNITYSDK_OFFSET(0x1AF3F2E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_79_OFFSET UNITYSDK_OFFSET(0x1AF3F320)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_7_OFFSET UNITYSDK_OFFSET(0x1AF3E6D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_80_OFFSET UNITYSDK_OFFSET(0x1AF3F330)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_81_OFFSET UNITYSDK_OFFSET(0x1AF3F360)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_82_OFFSET UNITYSDK_OFFSET(0x1AF3F370)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_83_OFFSET UNITYSDK_OFFSET(0x1AF3F380)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_84_OFFSET UNITYSDK_OFFSET(0x1AF3F390)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_85_OFFSET UNITYSDK_OFFSET(0x1AF3F3D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_86_OFFSET UNITYSDK_OFFSET(0x1AF3F400)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_87_OFFSET UNITYSDK_OFFSET(0x1AF3F410)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_88_OFFSET UNITYSDK_OFFSET(0x1AF3F420)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_89_OFFSET UNITYSDK_OFFSET(0x1AF3F450)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_8_OFFSET UNITYSDK_OFFSET(0x1AF3E740)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_90_OFFSET UNITYSDK_OFFSET(0x1AF3F460)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_91_OFFSET UNITYSDK_OFFSET(0x1AF3F490)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_92_OFFSET UNITYSDK_OFFSET(0x1AF3F4A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_93_OFFSET UNITYSDK_OFFSET(0x1AF3F4B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_94_OFFSET UNITYSDK_OFFSET(0x1AF3F4C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_95_OFFSET UNITYSDK_OFFSET(0x1AF3F500)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_96_OFFSET UNITYSDK_OFFSET(0x1AF3F530)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_97_OFFSET UNITYSDK_OFFSET(0x1AF3F540)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_98_OFFSET UNITYSDK_OFFSET(0x1AF3F550)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_99_OFFSET UNITYSDK_OFFSET(0x1AF3F560)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_9_OFFSET UNITYSDK_OFFSET(0x1AF3E770)

inline static constexpr unsigned int Class_1_9EBCF6317BDAE2CB___c_TypeDefinitionIndex = 23007;

class Class_1_9EBCF6317BDAE2CB___c : public ::System::Object
{
public:
	static ::Class_1_9EBCF6317BDAE2CB___c** StaticGet___9()
	{
		return (::Class_1_9EBCF6317BDAE2CB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EBCF6317BDAE2CB___c_TypeDefinitionIndex)->GetStaticField(0x577A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_0(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_0_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_1(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_2(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_3(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_3_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_4(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_4_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_5(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_5_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_6(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_6_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_7(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_7_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_8(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_8_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_9(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_9_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_10(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_10_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_11(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_11_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_12(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_12_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_13(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_13_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_14(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_14_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_15(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_15_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_16(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_16_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_17(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_17_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_18(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_18_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_19(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_19_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_20(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_20_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_21(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_21_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_22(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_22_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_23(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_23_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_24(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_24_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_25(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_25_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_26(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_26_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_27(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_27_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_28(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_28_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_29(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_29_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_30(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_30_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_31(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_31_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_32(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_32_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_33(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_33_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_34(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_34_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_35(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_35_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_36(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_36_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_37(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_37_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_38(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_38_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_39(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_39_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_40(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_40_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_41(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_41_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_42(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_42_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_43(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_43_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_44(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_44_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_45(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_45_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_46(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_46_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_47(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_47_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_48(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_48_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_49(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_49_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_50(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_50_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_51(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_51_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_52(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_52_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_53(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_53_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_54(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_54_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_55(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_55_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_56(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_56_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_57(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_57_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_58(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_58_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_59(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_59_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_60(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_60_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_61(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_61_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_62(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_62_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_63(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_63_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_64(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_64_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_65(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_65_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_66(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_66_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_67(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_67_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_68(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_68_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_69(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_69_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_70(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_70_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_71(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_71_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_72(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_72_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_73(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_73_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_74(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_74_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_75(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_75_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_76(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_76_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_77(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_77_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_78(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_78_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_79(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_79_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_80(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_80_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_81(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_81_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_82(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_82_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_83(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_83_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_84(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_84_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_85(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_85_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_86(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_86_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_87(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_87_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_88(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_88_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_89(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_89_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_90(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_90_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_91(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_91_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_92(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_92_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_93(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_93_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_94(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_94_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_95(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_95_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_96(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_96_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_97(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_97_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_98(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_98_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_99(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_99_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_100(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_100_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_101(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_101_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_102(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_102_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_103(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_103_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_104(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_104_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_105(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_105_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_106(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_106_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_107(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_107_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_108(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_108_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_109(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_109_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_110(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_110_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_111(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_111_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_112(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_112_OFFSET))(this, a1);
	}
};
