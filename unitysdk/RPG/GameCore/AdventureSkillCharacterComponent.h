#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityCursorInfo.h"
#include "unitysdk/RPG/GameCore/AdventureSkillAbortReason.h"
#include "unitysdk/RPG/GameCore/AdventureSkillCharacterComponent_CustomForbidTag.h"
#include "unitysdk/RPG/GameCore/AdventureSkillCharacterComponent_SkillAllowUseCheckResult.h"
#include "unitysdk/RPG/GameCore/AdventureSkillSlotState.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/CostMpPhase.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/SpecialStateType.h"

class Class_0_16E4307DCC419505_20;
class Class_0_16E4307DCC419505_425;
class Class_1_512CC108C22F737B;
class Class_1_A2D8E5AB4B623162;
class Class_2_A171F95E026CBAD1;
class Class_2_F67FF7EB526BF85C;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent_AdventureCharacterUseSkillNotifyData; }
namespace RPG::GameCore { class AdventureSkillConfig; }
namespace RPG::GameCore { class AdventureSkillData; }
namespace RPG::GameCore { class AdventureSkillSlotData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ABORTMANUALTRIGGERABILITY_OFFSET UNITYSDK_OFFSET(0xD973FC0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ABORTSKILL_OFFSET UNITYSDK_OFFSET(0xD974880)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ADDWAITABILITY_OFFSET UNITYSDK_OFFSET(0xD9765E0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWTRIGGERABILITY_OFFSET UNITYSDK_OFFSET(0xD977070)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_1_OFFSET UNITYSDK_OFFSET(0xD972E60)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_CUSTOM_OFFSET UNITYSDK_OFFSET(0xD973B90)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_FORBIDPLOTCHARACTER_OFFSET UNITYSDK_OFFSET(0xD973880)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_LOCKMODULE_OFFSET UNITYSDK_OFFSET(0xD973AB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xD9739B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_OFFSET UNITYSDK_OFFSET(0xD95D9A0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CLEARSKILLCOMBO_OFFSET UNITYSDK_OFFSET(0xD978290)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD971BB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ENDSKILLCOMBO_OFFSET UNITYSDK_OFFSET(0xD977D30)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GENERATESKILLCURSORBYSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xD95DA30)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCURRENTSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xD9777B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCUSTOMSKILLANIMHASH_OFFSET UNITYSDK_OFFSET(0xD977890)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCUSTOMSKILLANIMS_OFFSET UNITYSDK_OFFSET(0xD977AB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLCDREMAINED_OFFSET UNITYSDK_OFFSET(0xD973C50)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLDATABYINDEX_OFFSET UNITYSDK_OFFSET(0xD972D90)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLINDEXBYSKILLNAME_OFFSET UNITYSDK_OFFSET(0xD9774B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLNAMEBYABILITYNAME_OFFSET UNITYSDK_OFFSET(0xD974930)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLSLOTDATA_OFFSET UNITYSDK_OFFSET(0xD95D8D0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLTARGETCURSORINFO_OFFSET UNITYSDK_OFFSET(0xD972B60)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0xD972E10)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLUSETIMEBYINDEX_OFFSET UNITYSDK_OFFSET(0xD977800)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSYNCSERVERSKILLINDEXBYJSONSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xD975D10)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLMAINABILITY_OFFSET UNITYSDK_OFFSET(0xD9786B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLSUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0xD9786A0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLTARGETLIST_OFFSET UNITYSDK_OFFSET(0xD978230)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xD978250)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTUSESKILLUSEID_OFFSET UNITYSDK_OFFSET(0xD9786C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_ISWAITINGSKILLINPUT_OFFSET UNITYSDK_OFFSET(0xD9786D0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_MUTESKILLINPUTPRIORITY_OFFSET UNITYSDK_OFFSET(0xD9786F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0xD978680)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLCOUNT_OFFSET UNITYSDK_OFFSET(0xD9780F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0xD978660)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_USETYPEAHEADSKILLINPUT_OFFSET UNITYSDK_OFFSET(0xD977380)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xD971EA0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ISCURRENTSKILLFINISH_OFFSET UNITYSDK_OFFSET(0xD973C00)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_MANUALTRIGGERABILITY_OFFSET UNITYSDK_OFFSET(0xD976B90)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONCHARACTERFOREGROUND_OFFSET UNITYSDK_OFFSET(0xD973DB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xD9726A0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xD972B20)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_PRECOSTMPWHENHITVALIDTARGET_OFFSET UNITYSDK_OFFSET(0xD9754D0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_RESETSKILL_OFFSET UNITYSDK_OFFSET(0xD973E90)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SETSKILLSLOTDATA_OFFSET UNITYSDK_OFFSET(0xD977DC0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SETSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xD977FB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_CURRENTSKILLTARGETLIST_OFFSET UNITYSDK_OFFSET(0xD978240)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_CURRENTSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xD978260)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_ISWAITINGSKILLINPUT_OFFSET UNITYSDK_OFFSET(0xD9786E0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_MUTESKILLINPUTPRIORITY_OFFSET UNITYSDK_OFFSET(0xD978700)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_SKILLACTUALATTACKER_OFFSET UNITYSDK_OFFSET(0xD978690)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0xD978670)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SHOWNOTALLOWUSESKILLTOAST_OFFSET UNITYSDK_OFFSET(0xD973CE0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_STARTSKILLCOMBO_OFFSET UNITYSDK_OFFSET(0xD977C70)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SUMMITSKILLTOSERVER_OFFSET UNITYSDK_OFFSET(0xD976860)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SYNCNPCSTATUSWHENSKILLABORT_OFFSET UNITYSDK_OFFSET(0xD9784C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SYNCNPCSTATUSWHENSKILLFINISH_OFFSET UNITYSDK_OFFSET(0xD978320)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TAKECURRENTSPECIALSTATESEQUENCEONFORCEEXIT_OFFSET UNITYSDK_OFFSET(0xD9780A0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xD977200)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TRYGETCOMBOSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xD95D7E0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TRYUSESKILL_OFFSET UNITYSDK_OFFSET(0xD9769C0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_USESKILL_OFFSET UNITYSDK_OFFSET(0xD95DAB0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_INTERNALCONFIG_OFFSET UNITYSDK_OFFSET(0xD973370)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_LIGHTTEAMMPCOST_OFFSET UNITYSDK_OFFSET(0xD9735A0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_TARGETVAILD_OFFSET UNITYSDK_OFFSET(0xD9734F0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKSKILLFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xD9763B0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__COSTMAZESKILLMP_OFFSET UNITYSDK_OFFSET(0xD975900)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD971AD0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__GETNEXTSKILLUSEID_OFFSET UNITYSDK_OFFSET(0xD976A80)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__INITSKILLDATAALL_OFFSET UNITYSDK_OFFSET(0xD972090)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__NOTIFYMAZESKILLCASTEVENT_OFFSET UNITYSDK_OFFSET(0xD9766D0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xD976780)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONSKILLFINISH_OFFSET UNITYSDK_OFFSET(0xD974460)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONTELEPORT_OFFSET UNITYSDK_OFFSET(0xD9767D0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SHOWUSINGMAZESKILLNAME_OFFSET UNITYSDK_OFFSET(0xD975D70)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SKILLABILITYFINISH_OFFSET UNITYSDK_OFFSET(0xD974220)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__STARTSKILLABILITY_OFFSET UNITYSDK_OFFSET(0xD976920)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SYNCNPCSTATUSWHENUSESKILL_OFFSET UNITYSDK_OFFSET(0xD976AE0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TICKSKILLCD_OFFSET UNITYSDK_OFFSET(0xD977130)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TICKWAITABILITY_OFFSET UNITYSDK_OFFSET(0xD977270)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TRYUSEPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0xD972720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillCharacterComponent_TypeDefinitionIndex = 54320;

	class AdventureSkillCharacterComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::System::UInt32* StaticGet__SkillUseID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AdventureSkillCharacterComponent_TypeDefinitionIndex)->GetStaticField(0x10630);
		}
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CurrentSkillTargetList_k__BackingField; // 0x18
		::Class_1_A2D8E5AB4B623162* _MainAbility; // 0x20
		::Class_0_16E4307DCC419505_20* _JsonConfigRef; // 0x28
		::Il2CppArray<::RPG::GameCore::AdventureSkillSlotData*>* _SkillSlots; // 0x30
		::RPG::GameCore::GameEntity* _SkillPointEntity_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureSkillType, ::System::Int32>* _SkillComboMap; // 0x40
		::System::Collections::Generic::List_1<::Class_1_A2D8E5AB4B623162*>* _WaitAbilityList; // 0x48
		::RPG::GameCore::AdventureCharacterDataComponent* _CharacterDataRef; // 0x50
		::RPG::GameCore::AbilityComponent* _AbilityComponentRef; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureSkillData*>* _SkillDataList; // 0x60
		::RPG::GameCore::AdventureCharacterController* _AdvCharacterController; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _CustomSkillAnimToHash; // 0x70
		::Class_3_07C3C4D2990C49EE* _CurrentSpecialStateSequenceOnForceExit; // 0x78
		::RPG::GameCore::AdventureSkillCharacterComponent_AdventureCharacterUseSkillNotifyData* _AdvUseSkillNotifyData; // 0x80
		::RPG::GameCore::GameEntity* _SkillActualAttacker_k__BackingField; // 0x88
		::System::Collections::Generic::List_1<::System::Int32>* _CustomSkillAnims; // 0x90
		::RPG::GameCore::AdventureAbilityComponent* _AdvAbilityComponentRef; // 0x98
		::Class_2_F67FF7EB526BF85C* _TargetingComponentRef; // 0xA0
		::System::Int32 _CurrentUseSkillIndex; // 0xA8
		::System::Int32 _CurrentCacheCustomSkillAnimsSkillIndex; // 0xAC
		::System::Boolean _IsUseSkillFirstFrame; // 0xB0
		::System::Boolean _AllWaitAbilityFinish; // 0xB1
		::System::Boolean _IsWaitingSkillInput_k__BackingField; // 0xB2
		::System::Boolean _IsAbortSkillFirstFrame; // 0xB3
		::RPG::GameCore::AdventureSkillCharacterComponent_CustomForbidTag ForbidTag; // 0xB4
		::RPG::GameCore::SpecialStateType _CurrentSpecialState_k__BackingField; // 0xB8
		::System::UInt32 _CurrentUseSkillUseId; // 0xBC
		::System::Int32 _MuteSkillInputPriority_k__BackingField; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent(::Class_0_16E4307DCC419505_20* a1, ::RPG::GameCore::AdventureCharacterDataComponent* a2, ::RPG::GameCore::AdventureAbilityComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_20*, ::RPG::GameCore::AdventureCharacterDataComponent*, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_INITCOMPONENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCursorInfo GetSkillTargetCursorInfo(::System::Int32 a1)
		{
			return ((::RPG::GameCore::AbilityCursorInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLTARGETCURSORINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GetSkillTargetEntityList(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLTARGETENTITYLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult CheckAllowUseSkill(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _CheckAllowUseSkill_InternalConfig(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_INTERNALCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAllowUseSkill_TargetVaild(::RPG::GameCore::AdventureSkillData* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureSkillData*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_TARGETVAILD_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckAllowUseSkill_LightTeamMPCost(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKALLOWUSESKILL_LIGHTTEAMMPCOST_OFFSET))(this, a1);
		}

		::System::Boolean CheckAllowUseSkill_ForbidPlotCharacter(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_FORBIDPLOTCHARACTER_OFFSET))(this, a1);
		}

		::System::Boolean CheckAllowUseSkill_MapRotation(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_MAPROTATION_OFFSET))(this, a1);
		}

		::System::Boolean CheckAllowUseSkill_LockModule(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_LOCKMODULE_OFFSET))(this, a1);
		}

		::System::Boolean CheckAllowUseSkill_Custom(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_CUSTOM_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult CheckAllowUseSkill_1(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWUSESKILL_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ShowNotAllowUseSkillToast(::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillCharacterComponent_SkillAllowUseCheckResult, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SHOWNOTALLOWUSESKILLTOAST_OFFSET))(this, a1, a2);
		}

		::System::Single GetSkillCDRemained(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLCDREMAINED_OFFSET))(this, a1);
		}

		::System::Void OnCharacterForeGround(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ONCHARACTERFOREGROUND_OFFSET))(this, a1);
		}

		::System::Void ResetSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_RESETSKILL_OFFSET))(this);
		}

		::System::Void AbortSkill(::RPG::GameCore::AdventureSkillAbortReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillAbortReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ABORTSKILL_OFFSET))(this, a1);
		}

		::System::Void AbortManualTriggerAbility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ABORTMANUALTRIGGERABILITY_OFFSET))(this);
		}

		::System::String* GetSkillNameByAbilityName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLNAMEBYABILITYNAME_OFFSET))(this, a1);
		}

		::System::Void PreCostMpWhenHitValidTarget(::RPG::GameCore::TaskContext* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::UInt32 a4, ::RPG::GameCore::CostMpPhase a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::UInt32, ::System::Int32, ::System::UInt32, ::RPG::GameCore::CostMpPhase))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_PRECOSTMPWHENHITVALIDTARGET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetSyncServerSkillIndexByJsonSkillIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSYNCSERVERSKILLINDEXBYJSONSKILLINDEX_OFFSET))(this, a1);
		}

		::System::Void _SkillAbilityFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SKILLABILITYFINISH_OFFSET))(this);
		}

		::System::Void _ShowUsingMazeSkillName(::RPG::GameCore::AdventureSkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SHOWUSINGMAZESKILLNAME_OFFSET))(this, a1);
		}

		::System::Void _CostMazeSkillMp(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__COSTMAZESKILLMP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _CheckSkillFinishState(::Class_2_A171F95E026CBAD1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A171F95E026CBAD1*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__CHECKSKILLFINISHSTATE_OFFSET))(this, a1);
		}

		::System::Void _NotifyMazeSkillCastEvent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__NOTIFYMAZESKILLCASTEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnBeforeDestroy(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONBEFOREDESTROY_OFFSET))(this, a1);
		}

		::System::Void _OnTeleport(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONTELEPORT_OFFSET))(this, a1);
		}

		::System::Void SummitSkillToServer(::Class_2_A171F95E026CBAD1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A171F95E026CBAD1*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SUMMITSKILLTOSERVER_OFFSET))(this, a1);
		}

		::Class_2_A171F95E026CBAD1* _StartSkillAbility(::RPG::GameCore::AdventureSkillConfig* a1, ::Class_1_512CC108C22F737B* a2)
		{
			return ((::Class_2_A171F95E026CBAD1*(*)(::PVOID, ::RPG::GameCore::AdventureSkillConfig*, ::Class_1_512CC108C22F737B*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__STARTSKILLABILITY_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryUseSkill(::System::Int32 a1, ::RPG::GameCore::AbilityCursorInfo a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AbilityCursorInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TRYUSESKILL_OFFSET))(this, a1, a2);
		}

		::System::Void UseSkill(::System::Int32 a1, ::RPG::GameCore::AbilityCursorInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AbilityCursorInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_USESKILL_OFFSET))(this, a1, a2);
		}

		::System::Boolean ManualTriggerAbility(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureSkillType a2, ::System::String* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureSkillType, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_MANUALTRIGGERABILITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CheckAllowTriggerAbility(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CHECKALLOWTRIGGERABILITY_OFFSET))(this, a1);
		}

		::System::Void _TickSkillCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TICKSKILLCD_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void AddWaitAbility(::Class_1_A2D8E5AB4B623162* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A2D8E5AB4B623162*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ADDWAITABILITY_OFFSET))(this, a1);
		}

		::System::Boolean get_UseTypeAheadSkillInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_USETYPEAHEADSKILLINPUT_OFFSET))(this);
		}

		::System::Boolean IsCurrentSkillFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ISCURRENTSKILLFINISH_OFFSET))(this);
		}

		::System::Int32 GetSkillIndexBySkillName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLINDEXBYSKILLNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::AbilityCursorInfo GenerateSkillCursorBySkillIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::AbilityCursorInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GENERATESKILLCURSORBYSKILLINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetCurrentSkillindex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCURRENTSKILLINDEX_OFFSET))(this);
		}

		::System::Int32 GetSkillUseTimeByIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLUSETIMEBYINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetCustomSkillAnimHash(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCUSTOMSKILLANIMHASH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetCustomSkillAnims(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETCUSTOMSKILLANIMS_OFFSET))(this, a1);
		}

		::System::Void StartSkillCombo(::RPG::GameCore::AdventureSkillType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_STARTSKILLCOMBO_OFFSET))(this, a1, a2);
		}

		::System::Void EndSkillCombo(::RPG::GameCore::AdventureSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ENDSKILLCOMBO_OFFSET))(this, a1);
		}

		::System::Boolean TryGetComboSkillIndex(::RPG::GameCore::AdventureSkillType a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureSkillType, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TRYGETCOMBOSKILLINDEX_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AdventureSkillData* GetSkillDataByIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::AdventureSkillData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLDATABYINDEX_OFFSET))(this, a1);
		}

		::System::Void SetSkillSlotData(::RPG::GameCore::AdventureSkillType a1, ::RPG::GameCore::AdventureSkillSlotState a2, ::System::Int32 a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillType, ::RPG::GameCore::AdventureSkillSlotState, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SETSKILLSLOTDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::AdventureSkillSlotData* GetSkillSlotData(::RPG::GameCore::AdventureSkillType a1)
		{
			return ((::RPG::GameCore::AdventureSkillSlotData*(*)(::PVOID, ::RPG::GameCore::AdventureSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GETSKILLSLOTDATA_OFFSET))(this, a1);
		}

		::System::Void SetSpecialState(::RPG::GameCore::SpecialStateType a1, ::Class_3_07C3C4D2990C49EE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialStateType, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SETSPECIALSTATE_OFFSET))(this, a1, a2);
		}

		::Class_3_07C3C4D2990C49EE* TakeCurrentSpecialStateSequenceOnForceExit()
		{
			return ((::Class_3_07C3C4D2990C49EE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_TAKECURRENTSPECIALSTATESEQUENCEONFORCEEXIT_OFFSET))(this);
		}

		::System::Int32 get_SkillCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CurrentSkillTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLTARGETLIST_OFFSET))(this);
		}

		::System::Void set_CurrentSkillTargetList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_CURRENTSKILLTARGETLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::SpecialStateType get_CurrentSpecialState()
		{
			return ((::RPG::GameCore::SpecialStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSPECIALSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentSpecialState(::RPG::GameCore::SpecialStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialStateType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_CURRENTSPECIALSTATE_OFFSET))(this, a1);
		}

		::System::Void _InitSkillDataAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__INITSKILLDATAALL_OFFSET))(this);
		}

		::System::Void ClearSkillCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_CLEARSKILLCOMBO_OFFSET))(this);
		}

		::System::UInt32 _GetNextSkillUseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__GETNEXTSKILLUSEID_OFFSET))(this);
		}

		::System::Void _OnSkillFinish(::System::Boolean a1, ::RPG::GameCore::AdventureSkillAbortReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureSkillAbortReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__ONSKILLFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void _TryUsePassiveSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TRYUSEPASSIVESKILL_OFFSET))(this);
		}

		::System::Void _TickWaitAbility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__TICKWAITABILITY_OFFSET))(this);
		}

		::System::Void _SyncNpcStatusWhenUseSkill(::RPG::GameCore::AdventureSkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureSkillData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT__SYNCNPCSTATUSWHENUSESKILL_OFFSET))(this, a1);
		}

		::System::Void SyncNpcStatusWhenSkillFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SYNCNPCSTATUSWHENSKILLFINISH_OFFSET))(this);
		}

		::System::Void SyncNpcStatusWhenSkillAbort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SYNCNPCSTATUSWHENSKILLABORT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SkillPointEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLPOINTENTITY_OFFSET))(this);
		}

		::System::Void set_SkillPointEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_SKILLPOINTENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_SkillActualAttacker()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_SKILLACTUALATTACKER_OFFSET))(this);
		}

		::System::Void set_SkillActualAttacker(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_SKILLACTUALATTACKER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CurrentSkillSubTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLSUBTARGETLIST_OFFSET))(this);
		}

		::Class_1_A2D8E5AB4B623162* get_CurrentSkillMainAbility()
		{
			return ((::Class_1_A2D8E5AB4B623162*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTSKILLMAINABILITY_OFFSET))(this);
		}

		::System::UInt32 get_CurrentUseSkillUseId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_CURRENTUSESKILLUSEID_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingSkillInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_ISWAITINGSKILLINPUT_OFFSET))(this);
		}

		::System::Void set_IsWaitingSkillInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_ISWAITINGSKILLINPUT_OFFSET))(this, a1);
		}

		::System::Int32 get_MuteSkillInputPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_GET_MUTESKILLINPUTPRIORITY_OFFSET))(this);
		}

		::System::Void set_MuteSkillInputPriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_SET_MUTESKILLINPUTPRIORITY_OFFSET))(this, a1);
		}
	};
}
