#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_GAMECORE_FIXPOINT_ABS_OFFSET UNITYSDK_OFFSET(0x1BA67BD0)
#define RPG_GAMECORE_FIXPOINT_ACOS_OFFSET UNITYSDK_OFFSET(0x1BA6DA90)
#define RPG_GAMECORE_FIXPOINT_ADDEXTENDED_OFFSET UNITYSDK_OFFSET(0x1BA6A5D0)
#define RPG_GAMECORE_FIXPOINT_ADDOVERFLOWHELPER_OFFSET UNITYSDK_OFFSET(0x1BA6A970)
#define RPG_GAMECORE_FIXPOINT_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1BA6F060)
#define RPG_GAMECORE_FIXPOINT_ATAN2_OFFSET UNITYSDK_OFFSET(0x1BA6E050)
#define RPG_GAMECORE_FIXPOINT_ATAN_OFFSET UNITYSDK_OFFSET(0x1BA6DD10)
#define RPG_GAMECORE_FIXPOINT_BOTHSTANDARDMODE_OFFSET UNITYSDK_OFFSET(0x1BA6A260)
#define RPG_GAMECORE_FIXPOINT_CEILING_OFFSET UNITYSDK_OFFSET(0x1BA6A420)
#define RPG_GAMECORE_FIXPOINT_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x1BA6F540)
#define RPG_GAMECORE_FIXPOINT_CEILTOLONG_OFFSET UNITYSDK_OFFSET(0x1BA6F730)
#define RPG_GAMECORE_FIXPOINT_CLAMP01_OFFSET UNITYSDK_OFFSET(0x1BA6F410)
#define RPG_GAMECORE_FIXPOINT_CLAMPFROMDECIMAL_OFFSET UNITYSDK_OFFSET(0x1BA6EB70)
#define RPG_GAMECORE_FIXPOINT_CLAMPSINVALUE_OFFSET UNITYSDK_OFFSET(0x1BA6CAC0)
#define RPG_GAMECORE_FIXPOINT_CLAMP_OFFSET UNITYSDK_OFFSET(0x1BA6F300)
#define RPG_GAMECORE_FIXPOINT_COMPAREENCODEDRAWVALUES_OFFSET UNITYSDK_OFFSET(0x1BA69EE0)
#define RPG_GAMECORE_FIXPOINT_COMPARESTANDARDTOEXTENDED_OFFSET UNITYSDK_OFFSET(0x1BA69F70)
#define RPG_GAMECORE_FIXPOINT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x39FBF10)
#define RPG_GAMECORE_FIXPOINT_COS_OFFSET UNITYSDK_OFFSET(0x1BA68EA0)
#define RPG_GAMECORE_FIXPOINT_COUNTLEADINGZEROES_OFFSET UNITYSDK_OFFSET(0x1BA6B0A0)
#define RPG_GAMECORE_FIXPOINT_CREATEEXTENDEDRAW_OFFSET UNITYSDK_OFFSET(0x1BA6A1C0)
#define RPG_GAMECORE_FIXPOINT_CREATEEXTENDED_OFFSET UNITYSDK_OFFSET(0x1BA6A150)
#define RPG_GAMECORE_FIXPOINT_CREATEFROMRAWEXTENDED_OFFSET UNITYSDK_OFFSET(0x1BA6EF60)
#define RPG_GAMECORE_FIXPOINT_CREATEFROMRAWSTANDARD_OFFSET UNITYSDK_OFFSET(0x1BA6EF50)
#define RPG_GAMECORE_FIXPOINT_CREATEFROMRAW_OFFSET UNITYSDK_OFFSET(0x1BA6EF30)
#define RPG_GAMECORE_FIXPOINT_CREATESTANDARD_OFFSET UNITYSDK_OFFSET(0x1BA6A140)
#define RPG_GAMECORE_FIXPOINT_DIVEXTENDED_OFFSET UNITYSDK_OFFSET(0x1BA6B0F0)
#define RPG_GAMECORE_FIXPOINT_DIVIDE32_OFFSET UNITYSDK_OFFSET(0x1BA701A0)
#define RPG_GAMECORE_FIXPOINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x39FBE70)
#define RPG_GAMECORE_FIXPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x39FBDC0)
#define RPG_GAMECORE_FIXPOINT_FASTABS_OFFSET UNITYSDK_OFFSET(0x1BA6A300)
#define RPG_GAMECORE_FIXPOINT_FASTADD_OFFSET UNITYSDK_OFFSET(0x1BA6A690)
#define RPG_GAMECORE_FIXPOINT_FASTCOS_OFFSET UNITYSDK_OFFSET(0x1BA6D5A0)
#define RPG_GAMECORE_FIXPOINT_FASTMOD_OFFSET UNITYSDK_OFFSET(0x1BA6B480)
#define RPG_GAMECORE_FIXPOINT_FASTMULEXTENDED_OFFSET UNITYSDK_OFFSET(0x1BA6AFD0)
#define RPG_GAMECORE_FIXPOINT_FASTMUL_OFFSET UNITYSDK_OFFSET(0x1BA6AE30)
#define RPG_GAMECORE_FIXPOINT_FASTSIN_OFFSET UNITYSDK_OFFSET(0x1BA6D000)
#define RPG_GAMECORE_FIXPOINT_FASTSUB_OFFSET UNITYSDK_OFFSET(0x1BA6A860)
#define RPG_GAMECORE_FIXPOINT_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x1BA67B00)
#define RPG_GAMECORE_FIXPOINT_FLOORTOLONG_OFFSET UNITYSDK_OFFSET(0x1BA6F810)
#define RPG_GAMECORE_FIXPOINT_FLOOR_OFFSET UNITYSDK_OFFSET(0x1BA6A390)
#define RPG_GAMECORE_FIXPOINT_FRACTIONALPART_OFFSET UNITYSDK_OFFSET(0x1BA67BA0)
#define RPG_GAMECORE_FIXPOINT_FROMLEGACYCOMPATIBLERAW_OFFSET UNITYSDK_OFFSET(0x1BA6A070)
#define RPG_GAMECORE_FIXPOINT_FROMRAW_OFFSET UNITYSDK_OFFSET(0x1BA6EF20)
#define RPG_GAMECORE_FIXPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x39FBC10)
#define RPG_GAMECORE_FIXPOINT_GETNUMERICHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BA69FA0)
#define RPG_GAMECORE_FIXPOINT_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x2D6CC00)
#define RPG_GAMECORE_FIXPOINT_GET_ACTUALRAWVALUE_OFFSET UNITYSDK_OFFSET(0x39FBC00)
#define RPG_GAMECORE_FIXPOINT_GET_CURRENTFRACTIONALCUT_OFFSET UNITYSDK_OFFSET(0x39FBD30)
#define RPG_GAMECORE_FIXPOINT_GET_CURRENTFRACTIONALPLACES_OFFSET UNITYSDK_OFFSET(0x39FBD10)
#define RPG_GAMECORE_FIXPOINT_GET_CURRENTINTEGERCUT_OFFSET UNITYSDK_OFFSET(0x39FBD50)
#define RPG_GAMECORE_FIXPOINT_GET_CURRENTONE_OFFSET UNITYSDK_OFFSET(0x39FBCF0)
#define RPG_GAMECORE_FIXPOINT_GET_ISEXTENDEDMODE_OFFSET UNITYSDK_OFFSET(0x39FBBF0)
#define RPG_GAMECORE_FIXPOINT_GET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x39FBCD0)
#define RPG_GAMECORE_FIXPOINT_GET_ISPOSITIVE_OFFSET UNITYSDK_OFFSET(0x39FBCE0)
#define RPG_GAMECORE_FIXPOINT_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0x39FBCC0)
#define RPG_GAMECORE_FIXPOINT_GET_LEGACYCOMPATIBLERAWVALUE_OFFSET UNITYSDK_OFFSET(0x39FBC50)
#define RPG_GAMECORE_FIXPOINT_GET_NUMERICHASHCODE_OFFSET UNITYSDK_OFFSET(0x39FBC10)
#define RPG_GAMECORE_FIXPOINT_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x5AA0)
#define RPG_GAMECORE_FIXPOINT_ISALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x1BA6F1B0)
#define RPG_GAMECORE_FIXPOINT_LN_OFFSET UNITYSDK_OFFSET(0x1BA6C270)
#define RPG_GAMECORE_FIXPOINT_LOADLUT_OFFSET UNITYSDK_OFFSET(0x1BA704F0)
#define RPG_GAMECORE_FIXPOINT_LOG2_OFFSET UNITYSDK_OFFSET(0x1BA6BFA0)
#define RPG_GAMECORE_FIXPOINT_MAX_OFFSET UNITYSDK_OFFSET(0x1BA70370)
#define RPG_GAMECORE_FIXPOINT_MIN_OFFSET UNITYSDK_OFFSET(0x1BA70430)
#define RPG_GAMECORE_FIXPOINT_MULEXTENDED_OFFSET UNITYSDK_OFFSET(0x1BA6A990)
#define RPG_GAMECORE_FIXPOINT_MULTIPLYEXTENDED_OFFSET UNITYSDK_OFFSET(0x1BA6ACA0)
#define RPG_GAMECORE_FIXPOINT_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BA6AB30)
#define RPG_GAMECORE_FIXPOINT_NEEDSEXTENDEDMODE_OFFSET UNITYSDK_OFFSET(0x1BA6A270)
#define RPG_GAMECORE_FIXPOINT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BA65FC0)
#define RPG_GAMECORE_FIXPOINT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1BA66DD0)
#define RPG_GAMECORE_FIXPOINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA68380)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BA69960)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1BA6E840)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1BA69AF0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1BA6E900)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1BA69B30)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1BA6E5B0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1BA6E9C0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1BA67E20)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1BA6F000)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1BA66D40)
#define RPG_GAMECORE_FIXPOINT_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BA67C90)
#define RPG_GAMECORE_FIXPOINT_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1BA6B5F0)
#define RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BA6F040)
#define RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BA6BF70)
#define RPG_GAMECORE_FIXPOINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA6B560)
#define RPG_GAMECORE_FIXPOINT_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BA6B7A0)
#define RPG_GAMECORE_FIXPOINT_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1BA6B710)
#define RPG_GAMECORE_FIXPOINT_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1BA6B380)
#define RPG_GAMECORE_FIXPOINT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BA68A40)
#define RPG_GAMECORE_FIXPOINT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1BA68BA0)
#define RPG_GAMECORE_FIXPOINT_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1BA68CD0)
#define RPG_GAMECORE_FIXPOINT_PARSEEXTENDEDMODE_OFFSET UNITYSDK_OFFSET(0x1BA6FF50)
#define RPG_GAMECORE_FIXPOINT_PARSE_OFFSET UNITYSDK_OFFSET(0x1BA6FBD0)
#define RPG_GAMECORE_FIXPOINT_POW2_OFFSET UNITYSDK_OFFSET(0x1BA6B830)
#define RPG_GAMECORE_FIXPOINT_POW_OFFSET UNITYSDK_OFFSET(0x1BA6C290)
#define RPG_GAMECORE_FIXPOINT_REPEATFROMTO_OFFSET UNITYSDK_OFFSET(0x1BA6FBA0)
#define RPG_GAMECORE_FIXPOINT_REPEAT_OFFSET UNITYSDK_OFFSET(0x1BA6FB80)
#define RPG_GAMECORE_FIXPOINT_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x1BA6F620)
#define RPG_GAMECORE_FIXPOINT_ROUNDTOLONG_OFFSET UNITYSDK_OFFSET(0x1BA6F8B0)
#define RPG_GAMECORE_FIXPOINT_ROUND_1_OFFSET UNITYSDK_OFFSET(0x1BA6F9C0)
#define RPG_GAMECORE_FIXPOINT_ROUND_OFFSET UNITYSDK_OFFSET(0x1BA6A4E0)
#define RPG_GAMECORE_FIXPOINT_SIGN_OFFSET UNITYSDK_OFFSET(0x1BA6A2E0)
#define RPG_GAMECORE_FIXPOINT_SIN_OFFSET UNITYSDK_OFFSET(0x1BA68EE0)
#define RPG_GAMECORE_FIXPOINT_SQRTEXTENDED_OFFSET UNITYSDK_OFFSET(0x1BA6C810)
#define RPG_GAMECORE_FIXPOINT_SQRT_OFFSET UNITYSDK_OFFSET(0x1BA6C4B0)
#define RPG_GAMECORE_FIXPOINT_STANDARDTOEXTENDED_OFFSET UNITYSDK_OFFSET(0x1BA6A290)
#define RPG_GAMECORE_FIXPOINT_SUBEXTENDED_OFFSET UNITYSDK_OFFSET(0x1BA6A7A0)
#define RPG_GAMECORE_FIXPOINT_TAN_OFFSET UNITYSDK_OFFSET(0x1BA6D5E0)
#define RPG_GAMECORE_FIXPOINT_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x39FBA20)
#define RPG_GAMECORE_FIXPOINT_TOBYTE_OFFSET UNITYSDK_OFFSET(0x39FBA70)
#define RPG_GAMECORE_FIXPOINT_TOCHAR_OFFSET UNITYSDK_OFFSET(0x39FBA70)
#define RPG_GAMECORE_FIXPOINT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x39FBA90)
#define RPG_GAMECORE_FIXPOINT_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x39FBB40)
#define RPG_GAMECORE_FIXPOINT_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x39FBB10)
#define RPG_GAMECORE_FIXPOINT_TOEXTENDEDMODE_OFFSET UNITYSDK_OFFSET(0x39FBD70)
#define RPG_GAMECORE_FIXPOINT_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x39FBAE0)
#define RPG_GAMECORE_FIXPOINT_TOINT16_OFFSET UNITYSDK_OFFSET(0x39FBA70)
#define RPG_GAMECORE_FIXPOINT_TOINT32_OFFSET UNITYSDK_OFFSET(0x39FBA70)
#define RPG_GAMECORE_FIXPOINT_TOINT64_OFFSET UNITYSDK_OFFSET(0x39FBA70)
#define RPG_GAMECORE_FIXPOINT_TOLEGACYCOMPATIBLERAWVALUE_OFFSET UNITYSDK_OFFSET(0x1BA69FE0)
#define RPG_GAMECORE_FIXPOINT_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x39FBA70)
#define RPG_GAMECORE_FIXPOINT_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x39FBAE0)
#define RPG_GAMECORE_FIXPOINT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x39FBB70)
#define RPG_GAMECORE_FIXPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39FBB70)
#define RPG_GAMECORE_FIXPOINT_TOTYPE_OFFSET UNITYSDK_OFFSET(0x39FBBE0)
#define RPG_GAMECORE_FIXPOINT_TOUINT16_OFFSET UNITYSDK_OFFSET(0x39FBA70)
#define RPG_GAMECORE_FIXPOINT_TOUINT32_OFFSET UNITYSDK_OFFSET(0x39FBA70)
#define RPG_GAMECORE_FIXPOINT_TOUINT64_OFFSET UNITYSDK_OFFSET(0x39FBA70)
#define RPG_GAMECORE_FIXPOINT_TRYTOSTANDARDMODE_OFFSET UNITYSDK_OFFSET(0x39FBD90)
#define RPG_GAMECORE_FIXPOINT_UNLOADLUT_OFFSET UNITYSDK_OFFSET(0x1BA70590)
#define RPG_GAMECORE_FIXPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA71360)
#define RPG_GAMECORE_FIXPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x39FBFA0)
#define RPG_GAMECORE_FIXPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)
#define RPG_GAMECORE_FIXPOINT__GENERATESINLUT_OFFSET UNITYSDK_OFFSET(0x1BA705B0)
#define RPG_GAMECORE_FIXPOINT__GENERATETANLUT_OFFSET UNITYSDK_OFFSET(0x1BA70BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixPoint_TypeDefinitionIndex = 9602;

	struct alignas(8) FixPoint
	{
		static ::Il2CppArray<::System::Int64>** StaticGet_SinLut()
		{
			return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x19D0);
		}
		static ::Il2CppArray<::System::Int64>** StaticGet_TanLut()
		{
			return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0x19D8);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Zero()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xAC0);
		}
		static ::System::Boolean* StaticGet_LutLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xAC8);
		}
		static ::System::Decimal* StaticGet_Precision()
		{
			return (::System::Decimal*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xACC);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_LutInterval()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xAE0);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiOver2()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xAE8);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_LimitModeMinValue()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xAF0);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Pi()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xAF8);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Deg2Rad()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB00);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Ln2()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB08);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Log2Min()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB10);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiInv()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB18);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_One()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB20);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_InvalidFixPoint()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB28);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_s_FixEpsilon()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB30);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Epsilon()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB38);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_EpsilonSquared()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB40);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_MinValue()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB48);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiTimes2()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB50);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Rad2Deg()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB58);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_MaxValue()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB60);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Log2Max()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB68);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_LimitModeMaxValue()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB70);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_E()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB78);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_PiOver2Inv()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixPoint_TypeDefinitionIndex)->GetStaticField(0xB80);
		}
		// static const ::System::Int32 NUM_BITS = 0x40; // 0x0
		// static const ::System::Int64 MODE_MASK = 0x1; // 0x0
		// static const ::System::Int64 VALUE_MASK = 0xFFFFFFFFFFFFFFFE; // 0x0
		// static const ::System::Int64 SIGN_BIT = 0x8000000000000000; // 0x0
		// static const ::System::Int32 STANDARD_FRACTIONAL_PLACES = 0x20; // 0x0
		// static const ::System::Int64 ONE_STANDARD = 0x200000000; // 0x0
		// static const ::System::Int64 FRACTIONAL_CUT_STANDARD = 0x1FFFFFFFE; // 0x0
		// static const ::System::UInt64 INTEGER_CUT_STANDARD = 0xFFFFFFFE00000000; // 0x0
		// static const ::System::Int32 EXTENDED_SLIDE = 0x7; // 0x0
		// static const ::System::Int32 EXTENDED_FRACTIONAL_PLACES = 0x19; // 0x0
		// static const ::System::Int32 EXTENDED_TOTAL_SHIFT = 0x1A; // 0x0
		// static const ::System::Int64 ONE_EXTENDED = 0x4000000; // 0x0
		// static const ::System::Int64 FRACTIONAL_CUT_EXTENDED = 0x3FFFFFE; // 0x0
		// static const ::System::UInt64 INTEGER_CUT_EXTENDED = 0xFFFFFFFFFC000000; // 0x0
		// static const ::System::Int64 STANDARD_MAX_INTEGER = 0x3FFFFFFF; // 0x0
		// static const ::System::Int64 EXTENDED_THRESHOLD_RAW = 0x7FFFFFFE00000000; // 0x0
		// static const ::System::Int64 EXTENDED_MAX_INTEGER = 0x174876E7FF; // 0x0
		// static const ::System::Int64 MAX_VALUE = 0x5D21DB9FFC000001; // 0x0
		// static const ::System::Int64 MIN_VALUE = 0xA2DE246004000001; // 0x0
		// static const ::System::Int64 MAX_VALUE_RAW = 0x5D21DB9FFC000000; // 0x0
		// static const ::System::Int64 MIN_VALUE_RAW = 0xA2DE246004000000; // 0x0
		// static const ::System::Int32 FRACTIONAL_SLIDE = 0x0; // 0x0
		// static const ::System::Int32 FRACTIONAL_PLACES = 0x20; // 0x0
		// static const ::System::Int32 TOTAL_SHIFT = 0x21; // 0x0
		// static const ::System::Int64 ONE = 0x200000000; // 0x0
		// static const ::System::Int64 PI_TIMES_2 = 0xC90FDAA22; // 0x0
		// static const ::System::Int64 PI = 0x6487ED510; // 0x0
		// static const ::System::Int64 PI_OVER_2 = 0x3243F6A88; // 0x0
		// static const ::System::Int64 E_RAW_VALUE = 0x56FC2A2C4; // 0x0
		// static const ::System::Int64 LN2 = 0x162E42FEE; // 0x0
		// static const ::System::Int64 LOG2MAX = 0x4922000000; // 0x0
		// static const ::System::Int64 LOG2MIN = 0xFFFFFFBE00000000; // 0x0
		// static const ::System::Int64 EPSILON = 0x2000; // 0x0
		// static const ::System::Int32 LUT_SIZE = 0x3243; // 0x0
		// static const ::System::Int64 FRACTIONAL_CUT = 0x1FFFFFFFE; // 0x0
		// static const ::System::UInt64 INTEGER_CUT = 0xFFFFFFFE00000000; // 0x0
		::System::Int64 m_rawValue; // 0x10

		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__CCTOR_OFFSET))();
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean ToBoolean(::System::IFormatProvider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Byte ToByte(::System::IFormatProvider* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOBYTE_OFFSET))(this, a1);
		}

		::System::SByte ToSByte(::System::IFormatProvider* a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSBYTE_OFFSET))(this, a1);
		}

		::System::Char ToChar(::System::IFormatProvider* a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOCHAR_OFFSET))(this, a1);
		}

		/*
		::System::DateTime ToDateTime(::System::IFormatProvider* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TODATETIME_OFFSET))(this, a1);
		}
		*/

		::System::Int16 ToInt16(::System::IFormatProvider* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOINT16_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32(::System::IFormatProvider* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOINT32_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64(::System::IFormatProvider* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOINT64_OFFSET))(this, a1);
		}

		::System::UInt16 ToUInt16(::System::IFormatProvider* a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOUINT16_OFFSET))(this, a1);
		}

		::System::UInt32 ToUInt32(::System::IFormatProvider* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOUINT32_OFFSET))(this, a1);
		}

		::System::UInt64 ToUInt64(::System::IFormatProvider* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOUINT64_OFFSET))(this, a1);
		}

		::System::Single ToSingle(::System::IFormatProvider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Double ToDouble(::System::IFormatProvider* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TODOUBLE_OFFSET))(this, a1);
		}

		::System::Decimal ToDecimal(::System::IFormatProvider* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TODECIMAL_OFFSET))(this, a1);
		}

		::System::String* ToString(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSTRING_OFFSET))(this, a1);
		}

		::System::Object* ToType(::System::Type* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOTYPE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsExtendedMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_ISEXTENDEDMODE_OFFSET))(this);
		}

		::System::Int64 get_ActualRawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_ACTUALRAWVALUE_OFFSET))(this);
		}

		::System::Int32 get_NumericHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_NUMERICHASHCODE_OFFSET))(this);
		}

		::System::Int64 get_LegacyCompatibleRawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_LEGACYCOMPATIBLERAWVALUE_OFFSET))(this);
		}

		static ::System::Int32 CompareEncodedRawValues(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COMPAREENCODEDRAWVALUES_OFFSET))(a1, a2);
		}

		static ::System::Int32 CompareStandardToExtended(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COMPARESTANDARDTOEXTENDED_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetNumericHashCode(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GETNUMERICHASHCODE_OFFSET))(a1);
		}

		static ::System::Int64 ToLegacyCompatibleRawValue(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOLEGACYCOMPATIBLERAWVALUE_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint FromLegacyCompatibleRaw(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FROMLEGACYCOMPATIBLERAW_OFFSET))(a1);
		}

		::System::Int64 get_RawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_RAWVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_ISZERO_OFFSET))(this);
		}

		::System::Boolean get_IsNegative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_ISNEGATIVE_OFFSET))(this);
		}

		::System::Boolean get_IsPositive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_ISPOSITIVE_OFFSET))(this);
		}

		::System::Int64 get_CurrentOne()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_CURRENTONE_OFFSET))(this);
		}

		::System::Int32 get_CurrentFractionalPlaces()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_CURRENTFRACTIONALPLACES_OFFSET))(this);
		}

		::System::Int64 get_CurrentFractionalCut()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_CURRENTFRACTIONALCUT_OFFSET))(this);
		}

		::System::UInt64 get_CurrentIntegerCut()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_CURRENTINTEGERCUT_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint CreateStandard(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATESTANDARD_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CreateExtended(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEEXTENDED_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CreateExtendedRaw(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEEXTENDEDRAW_OFFSET))(a1);
		}

		::RPG::GameCore::FixPoint ToExtendedMode()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOEXTENDEDMODE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint TryToStandardMode()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TRYTOSTANDARDMODE_OFFSET))(this);
		}

		static ::System::Boolean BothStandardMode(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_BOTHSTANDARDMODE_OFFSET))(a1, a2);
		}

		static ::System::Boolean NeedsExtendedMode(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_NEEDSEXTENDEDMODE_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint StandardToExtended(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_STANDARDTOEXTENDED_OFFSET))(a1);
		}

		static ::System::Int32 Sign(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SIGN_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Abs(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ABS_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint FastAbs(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTABS_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Floor(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FLOOR_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Ceiling(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CEILING_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Round(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUND_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint FractionalPart(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FRACTIONALPART_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint op_Addition(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint AddExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ADDEXTENDED_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint FastAdd(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTADD_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint op_Subtraction(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint SubExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SUBEXTENDED_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint FastSub(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTSUB_OFFSET))(a1, a2);
		}

		static ::System::Int64 AddOverflowHelper(::System::Int64 a1, ::System::Int64 a2, ::System::Boolean& a3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ADDOVERFLOWHELPER_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint op_Multiply(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint MulExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MULEXTENDED_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Multiply(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean& a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MULTIPLY_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint MultiplyExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean& a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MULTIPLYEXTENDED_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint FastMul(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTMUL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint FastMulExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTMULEXTENDED_OFFSET))(a1, a2);
		}

		static ::System::Int32 CountLeadingZeroes(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COUNTLEADINGZEROES_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint op_Division(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint DivExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_DIVEXTENDED_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint op_Modulus(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_MODULUS_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint FastMod(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTMOD_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint op_UnaryNegation(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Pow2(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_POW2_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Log2(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_LOG2_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Ln(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_LN_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Pow(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_POW_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Sqrt(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SQRT_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint SqrtExtended(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SQRTEXTENDED_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Sin(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SIN_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint FastSin(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTSIN_OFFSET))(a1);
		}

		static ::System::Int64 ClampSinValue(::System::Int64 a1, ::System::Boolean& a2, ::System::Boolean& a3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMPSINVALUE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint Cos(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COS_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint FastCos(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTCOS_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Tan(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TAN_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Acos(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ACOS_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Atan(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ATAN_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Atan2(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ATAN2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint op_Explicit(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_OFFSET))(a1);
		}

		static ::System::Int64 op_Explicit_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint op_Explicit_2(::System::Single a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_2_OFFSET))(a1);
		}

		static ::System::Single op_Explicit_3(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_3_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint op_Explicit_4(::System::Double a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Double))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_4_OFFSET))(a1);
		}

		static ::System::Double op_Explicit_5(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Double(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_5_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint op_Explicit_6(::System::Decimal a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_6_OFFSET))(a1);
		}

		static ::System::UInt32 op_Explicit_7(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_7_OFFSET))(a1);
		}

		static ::System::Decimal op_Explicit_8(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Decimal(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_8_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSTRING_1_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint ClampFromDecimal(::System::Decimal a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMPFROMDECIMAL_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint FromRaw(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FROMRAW_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CreateFromRaw(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEFROMRAW_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CreateFromRawStandard(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEFROMRAWSTANDARD_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CreateFromRawExtended(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEFROMRAWEXTENDED_OFFSET))(a1);
		}

		static ::System::Int32 op_Explicit_9(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_9_OFFSET))(a1);
		}

		::System::Single ToFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOFLOAT_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint op_Implicit(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint op_Implicit_1(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::System::Boolean Approximately(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_APPROXIMATELY_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsAlmostZero(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ISALMOSTZERO_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Clamp(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMP_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint Clamp01(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMP01_OFFSET))(a1);
		}

		static ::System::Int32 CeilToInt(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CEILTOINT_OFFSET))(a1);
		}

		static ::System::Int32 FloorToInt(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FLOORTOINT_OFFSET))(a1);
		}

		static ::System::Int32 RoundToInt(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUNDTOINT_OFFSET))(a1);
		}

		static ::System::Int64 CeilToLong(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CEILTOLONG_OFFSET))(a1);
		}

		static ::System::Int64 FloorToLong(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FLOORTOLONG_OFFSET))(a1);
		}

		static ::System::Int64 RoundToLong(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUNDTOLONG_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint Round_1(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUND_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Repeat(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_REPEAT_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint RepeatFromTo(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_REPEATFROMTO_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint Parse(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_PARSE_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint ParseExtendedMode(::System::String* a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::String*, ::System::Int32, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_PARSEEXTENDEDMODE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int64 Divide32(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_DIVIDE32_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Max(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MAX_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint Min(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MIN_OFFSET))(a1, a2);
		}

		static ::System::Void LoadLut(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_LOADLUT_OFFSET))(a1, a2);
		}

		static ::System::Void UnloadLut()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_UNLOADLUT_OFFSET))();
		}

		static ::System::Void _GenerateSinLut(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__GENERATESINLUT_OFFSET))(a1);
		}

		static ::System::Void _GenerateTanLut(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__GENERATETANLUT_OFFSET))(a1);
		}
	};
}
