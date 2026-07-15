#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarEventAction.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/RPG/Client/ActionBarLinkOrder.h"
#include "unitysdk/RPG/Client/ActionBarUpdateTiming.h"
#include "unitysdk/RPG/Client/ActionDelayVisibleType.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_425;
class Class_1_1FFDD73C4573633F;
class Class_1_2A97E60807F449E7;
class Class_1_815CE3ECBEA68E49;
class Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D;
class Class_1_ABFB5B7BFEBBC8F7;
class Class_1_B4CDE3278E4B50C2;
class Class_1_D3ADF079E7A3324D;
class Class_1_DDDB57AA67C3A9EA;
class Class_1_F44322B28A360184;
class Class_2_356A85032C965661;
namespace RPG::Client { class ShowAttackTimeParam; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_AB817CB39E494C61_GET_ACTIONBARMGRREF_OFFSET UNITYSDK_OFFSET(0xAFD5E20)
#define CLASS_1_AB817CB39E494C61_GET_ACTIONBARRECT_OFFSET UNITYSDK_OFFSET(0xAFD5F00)
#define CLASS_1_AB817CB39E494C61_GET_ACTIONBARUPDATETIMINGCACHE_OFFSET UNITYSDK_OFFSET(0xAFD6130)
#define CLASS_1_AB817CB39E494C61_GET_ALLPOS_OFFSET UNITYSDK_OFFSET(0xAFD61C0)
#define CLASS_1_AB817CB39E494C61_GET_AUTOSETTUTORIALDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xAFD6330)
#define CLASS_1_AB817CB39E494C61_GET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xAFD5E40)
#define CLASS_1_AB817CB39E494C61_GET_COUNTDOWNWARNINGTIME_OFFSET UNITYSDK_OFFSET(0xAFD6310)
#define CLASS_1_AB817CB39E494C61_GET_CUSTOMEFFECTS_OFFSET UNITYSDK_OFFSET(0xAFD6210)
#define CLASS_1_AB817CB39E494C61_GET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET UNITYSDK_OFFSET(0xAFD60F0)
#define CLASS_1_AB817CB39E494C61_GET_ISTICKING_OFFSET UNITYSDK_OFFSET(0xAFD61A0)
#define CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL1COUNT_OFFSET UNITYSDK_OFFSET(0xAFD62D0)
#define CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL2COUNT_OFFSET UNITYSDK_OFFSET(0xAFD62F0)
#define CLASS_1_AB817CB39E494C61_GET_SKILLPREVIEWREMOVECACHE_OFFSET UNITYSDK_OFFSET(0xAFD62B0)
#define CLASS_1_AB817CB39E494C61_GET_TOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0xAFD6110)
#define CLASS_1_AB817CB39E494C61_METHOD_1_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xAFD42F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_0A604A5B360F30A7_OFFSET UNITYSDK_OFFSET(0xAFD3A70)
#define CLASS_1_AB817CB39E494C61_METHOD_1_146B82294136F2AB_OFFSET UNITYSDK_OFFSET(0xAFD4010)
#define CLASS_1_AB817CB39E494C61_METHOD_1_153DB45DA48D91A6_OFFSET UNITYSDK_OFFSET(0xAFD5F20)
#define CLASS_1_AB817CB39E494C61_METHOD_1_1AF42459E8A3BD99_OFFSET UNITYSDK_OFFSET(0xAFD7200)
#define CLASS_1_AB817CB39E494C61_METHOD_1_1B741D19A85DAA63_OFFSET UNITYSDK_OFFSET(0xAFD2260)
#define CLASS_1_AB817CB39E494C61_METHOD_1_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0xAFD4BF0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_21303BBD2FC9F58A_OFFSET UNITYSDK_OFFSET(0xAFD61D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_227F7CD1F3A93BBB_OFFSET UNITYSDK_OFFSET(0xAFD7470)
#define CLASS_1_AB817CB39E494C61_METHOD_1_247C15FF5EDC5F21_OFFSET UNITYSDK_OFFSET(0xAFD2DD0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_26BF70A07B7953F1_OFFSET UNITYSDK_OFFSET(0xAFD1F10)
#define CLASS_1_AB817CB39E494C61_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0xAFD00E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_2A4B5628CE2AC075_OFFSET UNITYSDK_OFFSET(0xAFD5670)
#define CLASS_1_AB817CB39E494C61_METHOD_1_2D2DBBE52259A093_OFFSET UNITYSDK_OFFSET(0xAFD5320)
#define CLASS_1_AB817CB39E494C61_METHOD_1_30A6A74133DD3A05_OFFSET UNITYSDK_OFFSET(0xAFD6350)
#define CLASS_1_AB817CB39E494C61_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xAFD6150)
#define CLASS_1_AB817CB39E494C61_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAFD1FE0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_3B55ECD4A0DFB7B0_OFFSET UNITYSDK_OFFSET(0xAFD7970)
#define CLASS_1_AB817CB39E494C61_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0xAFD0760)
#define CLASS_1_AB817CB39E494C61_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xAFD0490)
#define CLASS_1_AB817CB39E494C61_METHOD_1_4013D60CB58EADCD_OFFSET UNITYSDK_OFFSET(0xAFD2540)
#define CLASS_1_AB817CB39E494C61_METHOD_1_40E6AFCB91524816_OFFSET UNITYSDK_OFFSET(0xAFD0B60)
#define CLASS_1_AB817CB39E494C61_METHOD_1_47B18B228592626B_OFFSET UNITYSDK_OFFSET(0xAFD45A0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_4C10B76DCE350A5D_OFFSET UNITYSDK_OFFSET(0xAFD2960)
#define CLASS_1_AB817CB39E494C61_METHOD_1_565706B64B509AA6_OFFSET UNITYSDK_OFFSET(0xAFD26E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_568C3D3E2A595537_OFFSET UNITYSDK_OFFSET(0xAFD58D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_1_OFFSET UNITYSDK_OFFSET(0xAFD29D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_2_OFFSET UNITYSDK_OFFSET(0xAFD2AE0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_OFFSET UNITYSDK_OFFSET(0xAFD2850)
#define CLASS_1_AB817CB39E494C61_METHOD_1_5AA52FE5CE867D63_OFFSET UNITYSDK_OFFSET(0xAFD1E20)
#define CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_1_OFFSET UNITYSDK_OFFSET(0xAFD5CC0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_OFFSET UNITYSDK_OFFSET(0xAFD5C20)
#define CLASS_1_AB817CB39E494C61_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xAFD0DB0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_687D729E0EE2E034_OFFSET UNITYSDK_OFFSET(0xAFD1EB0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_6F7881D70A7B0045_OFFSET UNITYSDK_OFFSET(0xAFD2030)
#define CLASS_1_AB817CB39E494C61_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xAFD0050)
#define CLASS_1_AB817CB39E494C61_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xAFD6680)
#define CLASS_1_AB817CB39E494C61_METHOD_1_78EDB0CEF4C09D63_OFFSET UNITYSDK_OFFSET(0xAFCFDB0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_7AA084BCCD5BD789_OFFSET UNITYSDK_OFFSET(0xAFD38E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xAFCFE60)
#define CLASS_1_AB817CB39E494C61_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xAFD2190)
#define CLASS_1_AB817CB39E494C61_METHOD_1_8ACE7543A5502AD9_OFFSET UNITYSDK_OFFSET(0xAFD3440)
#define CLASS_1_AB817CB39E494C61_METHOD_1_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0xAFD27A0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_8E39513D4E086B50_OFFSET UNITYSDK_OFFSET(0xAFD66D0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_901A4F07F0046C04_OFFSET UNITYSDK_OFFSET(0xAFD2D40)
#define CLASS_1_AB817CB39E494C61_METHOD_1_913E99F13DD2381F_OFFSET UNITYSDK_OFFSET(0xAFD1C50)
#define CLASS_1_AB817CB39E494C61_METHOD_1_933B770C8AC988CB_OFFSET UNITYSDK_OFFSET(0xAFD6D50)
#define CLASS_1_AB817CB39E494C61_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAFD0A80)
#define CLASS_1_AB817CB39E494C61_METHOD_1_96BDC4B57CCFE000_1_OFFSET UNITYSDK_OFFSET(0xAFD39A0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xAFD2BF0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xAFD6260)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A535E19C50EAF933_OFFSET UNITYSDK_OFFSET(0xAFD44F0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A6D76F57494D3A55_OFFSET UNITYSDK_OFFSET(0xAFD7A80)
#define CLASS_1_AB817CB39E494C61_METHOD_1_A6FFCB8633531F0D_OFFSET UNITYSDK_OFFSET(0xAFD77E0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_B1C3B03E2A683CEC_OFFSET UNITYSDK_OFFSET(0xAFD53A0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xAFD6B80)
#define CLASS_1_AB817CB39E494C61_METHOD_1_BE09F7964133B0EA_OFFSET UNITYSDK_OFFSET(0xAFD6F60)
#define CLASS_1_AB817CB39E494C61_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xAFD3AC0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_C7B58231E4F61838_OFFSET UNITYSDK_OFFSET(0xAFD3CB0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_C8A43F43DF1E99F0_OFFSET UNITYSDK_OFFSET(0xAFD3770)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAFD7410)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAFD0D50)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CAD108B4AFF59F09_OFFSET UNITYSDK_OFFSET(0xAFD1BB0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_CECBB3A062B4DB69_OFFSET UNITYSDK_OFFSET(0xAFD55B0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0xAFD2080)
#define CLASS_1_AB817CB39E494C61_METHOD_1_D3260B8F64623BF5_OFFSET UNITYSDK_OFFSET(0xAFD2450)
#define CLASS_1_AB817CB39E494C61_METHOD_1_D60F4BA24E06086B_OFFSET UNITYSDK_OFFSET(0xAFD3050)
#define CLASS_1_AB817CB39E494C61_METHOD_1_D7B22F939A68E4AA_OFFSET UNITYSDK_OFFSET(0xAFD6C40)
#define CLASS_1_AB817CB39E494C61_METHOD_1_DA41DCAD7C27DB4D_1_OFFSET UNITYSDK_OFFSET(0xAFD7B20)
#define CLASS_1_AB817CB39E494C61_METHOD_1_DA41DCAD7C27DB4D_OFFSET UNITYSDK_OFFSET(0xAFD7790)
#define CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0xAFD5D60)
#define CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xAFD2C80)
#define CLASS_1_AB817CB39E494C61_METHOD_1_E6A464C09590E175_OFFSET UNITYSDK_OFFSET(0xAFD3290)
#define CLASS_1_AB817CB39E494C61_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xAFD0CE0)
#define CLASS_1_AB817CB39E494C61_METHOD_1_EE5330C7D3A9E645_OFFSET UNITYSDK_OFFSET(0xAFD5A60)
#define CLASS_1_AB817CB39E494C61_METHOD_1_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0xAFD1470)
#define CLASS_1_AB817CB39E494C61_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xAFD0A30)
#define CLASS_1_AB817CB39E494C61_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xAFD6220)
#define CLASS_1_AB817CB39E494C61_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0xAFD6080)
#define CLASS_1_AB817CB39E494C61_METHOD_1_FC626B9B626ADBFC_OFFSET UNITYSDK_OFFSET(0xAFD5E60)
#define CLASS_1_AB817CB39E494C61_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0xAFD0870)
#define CLASS_1_AB817CB39E494C61_METHOD_1_FE2023B029BCB581_OFFSET UNITYSDK_OFFSET(0xAFD2740)
#define CLASS_1_AB817CB39E494C61_SET_ACTIONBARMGRREF_OFFSET UNITYSDK_OFFSET(0xAFD5E30)
#define CLASS_1_AB817CB39E494C61_SET_ACTIONBARRECT_OFFSET UNITYSDK_OFFSET(0xAFD5F10)
#define CLASS_1_AB817CB39E494C61_SET_ACTIONBARUPDATETIMINGCACHE_OFFSET UNITYSDK_OFFSET(0xAFD6140)
#define CLASS_1_AB817CB39E494C61_SET_AUTOSETTUTORIALDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xAFD6340)
#define CLASS_1_AB817CB39E494C61_SET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xAFD5E50)
#define CLASS_1_AB817CB39E494C61_SET_COUNTDOWNWARNINGTIME_OFFSET UNITYSDK_OFFSET(0xAFD6320)
#define CLASS_1_AB817CB39E494C61_SET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET UNITYSDK_OFFSET(0xAFD6100)
#define CLASS_1_AB817CB39E494C61_SET_ISTICKING_OFFSET UNITYSDK_OFFSET(0xAFD61B0)
#define CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL1COUNT_OFFSET UNITYSDK_OFFSET(0xAFD62E0)
#define CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL2COUNT_OFFSET UNITYSDK_OFFSET(0xAFD6300)
#define CLASS_1_AB817CB39E494C61_SET_SKILLPREVIEWREMOVECACHE_OFFSET UNITYSDK_OFFSET(0xAFD62C0)
#define CLASS_1_AB817CB39E494C61_SET_TOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0xAFD6120)
#define CLASS_1_AB817CB39E494C61__CCTOR_OFFSET UNITYSDK_OFFSET(0xAFD7F80)
#define CLASS_1_AB817CB39E494C61__CTOR_OFFSET UNITYSDK_OFFSET(0xAFD7B60)

inline static constexpr unsigned int Class_1_AB817CB39E494C61_TypeDefinitionIndex = 67991;

class Class_1_AB817CB39E494C61 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB817CB39E494C61_TypeDefinitionIndex)->GetStaticField(0x62EA0);
	}
	::Class_1_815CE3ECBEA68E49* Field_1_1; // 0x10
	::UnityEngine::RectTransform* _ActionBarRect_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelEntityActionDelayChanged*>* Field_1_3; // 0x20
	::RPG::GameCore::EventManager* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::Class_1_D3ADF079E7A3324D*>* Field_1_5; // 0x30
	::Class_2_356A85032C965661* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::ShowAttackTimeParam*>* Field_1_7; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* _SkillPreviewRemoveCache_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*>* _AllPos_k__BackingField; // 0x50
	::Il2CppArray<::RPG::Client::ActionBarItemUIStyle>* Field_1_10; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>* Field_1_11; // 0x60
	::Class_1_ABFB5B7BFEBBC8F7* _ActionBarMgrRef_k__BackingField; // 0x68
	::RPG::GameCore::LevelUIComponent* Field_1_13; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*>*>* _CustomEffects_k__BackingField; // 0x78
	::System::Collections::Generic::List_1<::Class_1_B4CDE3278E4B50C2*>* Field_1_15; // 0x80
	::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_16; // 0x88
	::RPG::GameCore::BattleInstance* _BattleInstanceRef_k__BackingField; // 0x90
	::Il2CppArray<::UnityEngine::Vector2>* Field_1_18; // 0x98
	::System::Single _TotalHeight_k__BackingField; // 0xA0
	::System::Boolean _AutoSetTutorialDynamicKey_k__BackingField; // 0xA4
	::System::Boolean _IsAnimNodeActionBarFadeInPlaying_k__BackingField; // 0xA5
	::System::Boolean Field_1_22; // 0xA6
	::System::Boolean _IsTicking_k__BackingField; // 0xA7
	::UnityEngine::Vector3 Field_1_24; // 0xA8
	::System::Single Field_1_25; // 0xB4
	::RPG::Client::ActionBarUpdateTiming _ActionBarUpdateTimingCache_k__BackingField; // 0xB8
	::System::Single Field_1_27; // 0xBC
	::RPG::GameCore::TurnState Field_1_28; // 0xC0
	::System::Int32 Field_1_29; // 0xC4
	::System::Int32 Field_1_30; // 0xC8
	::System::Int32 _ShenJunLevel2Count_k__BackingField; // 0xCC
	::System::Single Field_1_32; // 0xD0
	::System::Single Field_1_33; // 0xD4
	::System::Int32 _CountDownWarningTime_k__BackingField; // 0xD8
	::System::Int32 Field_1_35; // 0xDC
	::System::Int32 _ShenJunLevel1Count_k__BackingField; // 0xE0
	::System::Single Field_1_37; // 0xE4
	::UnityEngine::Vector3 Field_1_38; // 0xE8
	::System::Int32 Field_1_39; // 0xF4
	::System::Int32 Field_1_40; // 0xF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61__CCTOR_OFFSET))();
	}

	::System::Void Method_1_78EDB0CEF4C09D63(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_78EDB0CEF4C09D63_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_40E6AFCB91524816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_40E6AFCB91524816_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* Method_1_CAD108B4AFF59F09(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CAD108B4AFF59F09_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelEntityActionDelayChanged* Method_1_5AA52FE5CE867D63(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LevelEntityActionDelayChanged*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5AA52FE5CE867D63_OFFSET))(this, a1);
	}

	::System::Void Method_1_687D729E0EE2E034(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_687D729E0EE2E034_OFFSET))(this, a1);
	}

	::RPG::Client::ShowAttackTimeParam* Method_1_26BF70A07B7953F1(::System::UInt32 a1)
	{
		return ((::RPG::Client::ShowAttackTimeParam*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_26BF70A07B7953F1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_6F7881D70A7B0045(::RPG::Client::ActionDelayVisibleType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionDelayVisibleType))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_6F7881D70A7B0045_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_913E99F13DD2381F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_913E99F13DD2381F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_1B741D19A85DAA63(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_1B741D19A85DAA63_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4013D60CB58EADCD(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_4013D60CB58EADCD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_565706B64B509AA6(::RPG::Client::ActionBarItemUIStyle a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_565706B64B509AA6_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_FE2023B029BCB581(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_FE2023B029BCB581_OFFSET))(this, a1);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_1_5934C7451F9426C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5934C7451F9426C2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5934C7451F9426C2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_5934C7451F9426C2_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_901A4F07F0046C04(::Class_1_F44322B28A360184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F44322B28A360184*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_901A4F07F0046C04_OFFSET))(this, a1);
	}

	::System::Void Method_1_247C15FF5EDC5F21(::Class_1_F44322B28A360184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F44322B28A360184*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_247C15FF5EDC5F21_OFFSET))(this, a1);
	}

	::System::Void Method_1_D60F4BA24E06086B(::Class_1_F44322B28A360184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F44322B28A360184*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_D60F4BA24E06086B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6A464C09590E175(::Class_1_F44322B28A360184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F44322B28A360184*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_E6A464C09590E175_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_7AA084BCCD5BD789(::Class_1_1FFDD73C4573633F* a1, ::Class_1_1FFDD73C4573633F* a2)
	{
		return ((::System::Boolean(*)(::Class_1_1FFDD73C4573633F*, ::Class_1_1FFDD73C4573633F*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_7AA084BCCD5BD789_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8ACE7543A5502AD9(::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>* a1, ::Il2CppArray<::Class_1_1FFDD73C4573633F*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*, ::Il2CppArray<::Class_1_1FFDD73C4573633F*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_8ACE7543A5502AD9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C8A43F43DF1E99F0(::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>* a1, ::Il2CppArray<::Class_1_1FFDD73C4573633F*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*, ::Il2CppArray<::Class_1_1FFDD73C4573633F*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_C8A43F43DF1E99F0_OFFSET))(a1, a2);
	}

	::System::Void Method_1_96BDC4B57CCFE000_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_96BDC4B57CCFE000_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A604A5B360F30A7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_0A604A5B360F30A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7B58231E4F61838(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_C7B58231E4F61838_OFFSET))(this, a1);
	}

	::System::Void Method_1_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A535E19C50EAF933(::RPG::GameCore::ActionDelayChangeReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A535E19C50EAF933_OFFSET))(this, a1);
	}

	::System::Void Method_1_47B18B228592626B(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_47B18B228592626B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C10B76DCE350A5D(::RPG::Client::ActionDelayVisibleType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionDelayVisibleType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_4C10B76DCE350A5D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Boolean Method_1_146B82294136F2AB(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_146B82294136F2AB_OFFSET))(this, a1);
	}

	::RPG::Client::ActionBarItemAction Method_1_2D2DBBE52259A093(::RPG::Client::ActionBarItemAction a1, ::RPG::Client::ActionBarItemAction a2)
	{
		return ((::RPG::Client::ActionBarItemAction(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_2D2DBBE52259A093_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_20E8013D4AB67E17()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_20E8013D4AB67E17_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_D3260B8F64623BF5(::RPG::Client::ActionBarItemUIStyle a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_D3260B8F64623BF5_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_B1C3B03E2A683CEC(::RPG::Client::ActionBarItemUIStyle a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_B1C3B03E2A683CEC_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_2A4B5628CE2AC075(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_2A4B5628CE2AC075_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_CECBB3A062B4DB69(::RPG::Client::ActionBarItemUIStyle a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CECBB3A062B4DB69_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_65A40CF3D1400890(::RPG::Client::ActionBarItemUIStyle a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_65A40CF3D1400890_1(::RPG::Client::ActionBarItemUIStyle a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_65A40CF3D1400890_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_568C3D3E2A595537(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_568C3D3E2A595537_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_EE5330C7D3A9E645(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_EE5330C7D3A9E645_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
	}

	::Class_1_ABFB5B7BFEBBC8F7* get_ActionBarMgrRef()
	{
		return ((::Class_1_ABFB5B7BFEBBC8F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ACTIONBARMGRREF_OFFSET))(this);
	}

	::System::Void set_ActionBarMgrRef(::Class_1_ABFB5B7BFEBBC8F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ABFB5B7BFEBBC8F7*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ACTIONBARMGRREF_OFFSET))(this, a1);
	}

	::RPG::GameCore::BattleInstance* get_BattleInstanceRef()
	{
		return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_BATTLEINSTANCEREF_OFFSET))(this);
	}

	::System::Void set_BattleInstanceRef(::RPG::GameCore::BattleInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_BATTLEINSTANCEREF_OFFSET))(this, a1);
	}

	::System::Void Method_1_FC626B9B626ADBFC(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_FC626B9B626ADBFC_OFFSET))(this, a1);
	}

	::UnityEngine::RectTransform* get_ActionBarRect()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ACTIONBARRECT_OFFSET))(this);
	}

	::System::Void set_ActionBarRect(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ACTIONBARRECT_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_153DB45DA48D91A6()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_153DB45DA48D91A6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::System::Boolean get_IsAnimNodeActionBarFadeInPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET))(this);
	}

	::System::Void set_IsAnimNodeActionBarFadeInPlaying(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ISANIMNODEACTIONBARFADEINPLAYING_OFFSET))(this, a1);
	}

	::System::Single get_TotalHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_TOTALHEIGHT_OFFSET))(this);
	}

	::System::Void set_TotalHeight(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_TOTALHEIGHT_OFFSET))(this, a1);
	}

	::RPG::Client::ActionBarUpdateTiming get_ActionBarUpdateTimingCache()
	{
		return ((::RPG::Client::ActionBarUpdateTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ACTIONBARUPDATETIMINGCACHE_OFFSET))(this);
	}

	::System::Void set_ActionBarUpdateTimingCache(::RPG::Client::ActionBarUpdateTiming a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarUpdateTiming))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ACTIONBARUPDATETIMINGCACHE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean get_IsTicking()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ISTICKING_OFFSET))(this);
	}

	::System::Void set_IsTicking(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_ISTICKING_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*>* get_AllPos()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_ALLPOS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>* Method_1_21303BBD2FC9F58A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActionBarItemUIStyle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_21303BBD2FC9F58A_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*>*>* get_CustomEffects()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_CUSTOMEFFECTS_OFFSET))(this);
	}

	::Class_1_815CE3ECBEA68E49* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_815CE3ECBEA68E49*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* get_SkillPreviewRemoveCache()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_SKILLPREVIEWREMOVECACHE_OFFSET))(this);
	}

	::System::Void set_SkillPreviewRemoveCache(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_SKILLPREVIEWREMOVECACHE_OFFSET))(this, a1);
	}

	::System::Int32 get_ShenJunLevel1Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL1COUNT_OFFSET))(this);
	}

	::System::Void set_ShenJunLevel1Count(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL1COUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_ShenJunLevel2Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_SHENJUNLEVEL2COUNT_OFFSET))(this);
	}

	::System::Void set_ShenJunLevel2Count(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_SHENJUNLEVEL2COUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_CountDownWarningTime()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_COUNTDOWNWARNINGTIME_OFFSET))(this);
	}

	::System::Void set_CountDownWarningTime(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_COUNTDOWNWARNINGTIME_OFFSET))(this, a1);
	}

	::System::Boolean get_AutoSetTutorialDynamicKey()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_GET_AUTOSETTUTORIALDYNAMICKEY_OFFSET))(this);
	}

	::System::Void set_AutoSetTutorialDynamicKey(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_SET_AUTOSETTUTORIALDYNAMICKEY_OFFSET))(this, a1);
	}

	::System::Void Method_1_30A6A74133DD3A05(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_30A6A74133DD3A05_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E39513D4E086B50(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_8E39513D4E086B50_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::RPG::Client::ActionBarLinkOrder Method_1_D7B22F939A68E4AA(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActionBarLinkOrder(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_D7B22F939A68E4AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_1_933B770C8AC988CB(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_933B770C8AC988CB_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_BE09F7964133B0EA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_BE09F7964133B0EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE7339DA6ECF5F6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_EE7339DA6ECF5F6D_OFFSET))(this);
	}

	::System::Void Method_1_227F7CD1F3A93BBB(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_227F7CD1F3A93BBB_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ActionBarEventAction Method_1_A6FFCB8633531F0D(::System::Int32 a1, ::System::Boolean a2, ::Class_1_B4CDE3278E4B50C2*& a3)
	{
		return ((::RPG::Client::ActionBarEventAction(*)(::PVOID, ::System::Int32, ::System::Boolean, ::Class_1_B4CDE3278E4B50C2*&))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A6FFCB8633531F0D_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_3B55ECD4A0DFB7B0(::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_3B55ECD4A0DFB7B0_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_A6D76F57494D3A55(::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D* a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Class_1_AB817CB39E494C61_Class_1_3537A676BB29747D*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_A6D76F57494D3A55_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1AF42459E8A3BD99(::Class_1_DDDB57AA67C3A9EA* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_1AF42459E8A3BD99_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_B4CDE3278E4B50C2*>* Method_1_DA41DCAD7C27DB4D()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_B4CDE3278E4B50C2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_DA41DCAD7C27DB4D_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_D3ADF079E7A3324D*>* Method_1_DA41DCAD7C27DB4D_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_D3ADF079E7A3324D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61_METHOD_1_DA41DCAD7C27DB4D_1_OFFSET))(this);
	}
};
