#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D90D29A0DA06B4F8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/GameCore/GridFightPropertyType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/Struct_2_34C03801479AC814.h"

class Class_0_16E4307DCC419505_425;
class Class_0_16E4307DCC419505_540;
class Class_1_12ABE890CAA92AB9;
class Class_1_1C6D038ACA57B217;
class Class_1_22B8FDC4E33ACC56;
class Class_1_34CD5A7B272AF994;
class Class_1_4AAB34DEAFC894B3;
class Class_1_8D398246A70BD04C_1;
class Class_1_8EC2A64207E05751;
class Class_1_9015B34004B876E5;
class Class_1_AE4553DBAC72BB2D;
class Class_1_B3478091817B6770;
class Class_1_D17272E82AE804C2_41;
class Class_1_FDFA365FE186E8F2;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }
namespace RPG::GameCore { class GridFightManager_GridFightCustomValue; }
namespace RPG::GameCore { class GridFightManager_GridFightCustomValueLookup; }
namespace RPG::GameCore { class GridFightManager_GridFightProgressRule; }
namespace RPG::GameCore { class GridFightManager_WaveKillRecordData; }
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace RPG::GameCore { class GridFightWaveInfo; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelCustomizeStringEvent; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GRIDFIGHTMANAGER_ADDDROPENTRY_OFFSET UNITYSDK_OFFSET(0xDAB94F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTYBYTRAITID_OFFSET UNITYSDK_OFFSET(0xDAB62F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTY_OFFSET UNITYSDK_OFFSET(0xDAB6090)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_CALCULATEPOWERGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xDAB3890)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_COLLECTAVATARTRAITLIST_OFFSET UNITYSDK_OFFSET(0xDAB1920)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAB3240)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xDAB1660)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVETRAITINCLUDESUBTRAITLIST_OFFSET UNITYSDK_OFFSET(0xDAB1E90)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVITYPROPERTY_OFFSET UNITYSDK_OFFSET(0xDAB2910)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAUGMENTSTT_OFFSET UNITYSDK_OFFSET(0xDAB3160)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYCHARACTERID_OFFSET UNITYSDK_OFFSET(0xDAB1CF0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYROLE_OFFSET UNITYSDK_OFFSET(0xDAB9090)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATAS_OFFSET UNITYSDK_OFFSET(0xDAB91F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARSTAR_OFFSET UNITYSDK_OFFSET(0xDAB1830)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDALLTEAMPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xDAB8A90)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xDAB1720)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDOWNERPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xDAB8E40)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_AUGMENTUPLOADDATA_OFFSET UNITYSDK_OFFSET(0xDABA660)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_BATTLEPERCENT_OFFSET UNITYSDK_OFFSET(0xDAB4180)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_DEADLINEKILLPERCENT_OFFSET UNITYSDK_OFFSET(0xDAB9A10)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_LOSEHP_OFFSET UNITYSDK_OFFSET(0xDAB95D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_PORTALUPLOADDATA_OFFSET UNITYSDK_OFFSET(0xDABA880)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_TRAITUPLOADDATA_OFFSET UNITYSDK_OFFSET(0xDAB9B50)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_WAVESTTINFO_OFFSET UNITYSDK_OFFSET(0xDABAAA0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETBEENTITYBYTRAITID_OFFSET UNITYSDK_OFFSET(0xDAB89C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCOUNTDOWNENTITY_OFFSET UNITYSDK_OFFSET(0xDAB2E90)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCURRENTTRAITBONUSLAYER_OFFSET UNITYSDK_OFFSET(0xDAB26F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0xDAB1EE0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xDABB290)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETFILTEREDEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xDAB2D70)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETLOSEGLOBALHP_OFFSET UNITYSDK_OFFSET(0xDAB9640)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETNPCDATAS_OFFSET UNITYSDK_OFFSET(0xDAB9420)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETPENALTYBONUSRULEID_OFFSET UNITYSDK_OFFSET(0xDAB3410)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETROLESTT_OFFSET UNITYSDK_OFFSET(0xDAB31D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETSHOPLEVEL_OFFSET UNITYSDK_OFFSET(0xDAB16D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYID_OFFSET UNITYSDK_OFFSET(0xDAB25C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xDAB86F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMAUGMENTS_OFFSET UNITYSDK_OFFSET(0xDAB1E40)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMTRAITLIST_OFFSET UNITYSDK_OFFSET(0xDAB1DD0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITBONUSTHESHOLDVALUE_OFFSET UNITYSDK_OFFSET(0xDAB23C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITSTT_OFFSET UNITYSDK_OFFSET(0xDAB30F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GETWHITEBOXSETTLEBONUSLIST_OFFSET UNITYSDK_OFFSET(0xDAB34F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xDAAF120)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ADDDYNAMICEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xDABB310)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_CURRENTBATTLEPROGRESS_OFFSET UNITYSDK_OFFSET(0xDAB37D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_DEADLINEKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xDABB1F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GLOBALVALUEMAP_OFFSET UNITYSDK_OFFSET(0xDABB230)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GRIDFIGHTSTATISTICS_OFFSET UNITYSDK_OFFSET(0xDAB30D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_HASCYRENEINFRONT_OFFSET UNITYSDK_OFFSET(0xDABB210)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_MONSTERDIFFICULTYLVROW_OFFSET UNITYSDK_OFFSET(0xDABB2F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_OWNERGAMEMODE_OFFSET UNITYSDK_OFFSET(0xDAAF470)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_SHOWTRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xDABB1D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GET_TOTALBATTLEPROGRESS_OFFSET UNITYSDK_OFFSET(0xDAB3830)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0xDAB4F60)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xDAB0750)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xDAAF130)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_REGISTERPROGRESSTARGETREMAP_OFFSET UNITYSDK_OFFSET(0xDABB330)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SETAUTOREFRESHGRIDFIGHTPROGRESSUI_OFFSET UNITYSDK_OFFSET(0xDAB3E90)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SETCUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0xDAB20A0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SETGLOBALHP_OFFSET UNITYSDK_OFFSET(0xDAB33D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_ADDDYNAMICEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xDABB320)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_DEADLINEKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xDABB200)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_GRIDFIGHTSTATISTICS_OFFSET UNITYSDK_OFFSET(0xDAB30E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_HASCYRENEINFRONT_OFFSET UNITYSDK_OFFSET(0xDABB220)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_MONSTERDIFFICULTYLVROW_OFFSET UNITYSDK_OFFSET(0xDABB300)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_SET_SHOWTRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xDABB1E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xDAB3E40)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERSTAGEBONUS_OFFSET UNITYSDK_OFFSET(0xDAB34A0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERTRAITBONUS_OFFSET UNITYSDK_OFFSET(0xDAB3460)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__CACHETRAITBE_OFFSET UNITYSDK_OFFSET(0xDAB87E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__CREATEBACKENDENTITYFORLINUPDATA_OFFSET UNITYSDK_OFFSET(0xDAB67F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xDABB800)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__INITBEMAPABILITY_OFFSET UNITYSDK_OFFSET(0xDAB76C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__INITELATIONEQUIPS_OFFSET UNITYSDK_OFFSET(0xDAB81E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__INITMAZEBUFFENHANCE_OFFSET UNITYSDK_OFFSET(0xDAB7960)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ISTRAITINCLUDEBE_OFFSET UNITYSDK_OFFSET(0xDAB85E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONBATTLEPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0xDAB4000)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONCREATEPLAYERTEAMFINISH_OFFSET UNITYSDK_OFFSET(0xDAB6670)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONCUSTOMVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xDAB6550)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELBATTLEEVENTCREATE_OFFSET UNITYSDK_OFFSET(0xDAB7640)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0xDAB4330)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELINFINITEWAVEPROGRESSCHANGE_OFFSET UNITYSDK_OFFSET(0xDAB6D10)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONPROGRESSTARGETREMAPPED_OFFSET UNITYSDK_OFFSET(0xDABB040)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__ONSHOWTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xDABB090)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__POSTONALLROLECREATEDEND_OFFSET UNITYSDK_OFFSET(0xDAB4F20)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__POSTUPDATEROLEDATA_OFFSET UNITYSDK_OFFSET(0xDAB5B10)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKLIGHTTEAM_OFFSET UNITYSDK_OFFSET(0xDAB5BC0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKROLEDATA_OFFSET UNITYSDK_OFFSET(0xDAB5660)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPAUGMENTDATA_OFFSET UNITYSDK_OFFSET(0xDAB06D0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPBACKENDAVATARABILITY_OFFSET UNITYSDK_OFFSET(0xDAB4450)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPGLOBALVALUEDATA_OFFSET UNITYSDK_OFFSET(0xDAAF480)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPGRIDFIGHTDAMAGECARRYOVERRIDE_OFFSET UNITYSDK_OFFSET(0xDAB5100)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPORTALDATA_OFFSET UNITYSDK_OFFSET(0xDAB0710)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPROGRESSSTATISTICS_OFFSET UNITYSDK_OFFSET(0xDAB13E0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPROLEDATA_OFFSET UNITYSDK_OFFSET(0xDAAF6C0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPTRAITDATA_OFFSET UNITYSDK_OFFSET(0xDAAFAE0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEGRIDFIGHTPROGRESSUI_OFFSET UNITYSDK_OFFSET(0xDAB3F40)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDEQUIPMENTEFFECT_OFFSET UNITYSDK_OFFSET(0xDAB5560)
#define RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDRANKLIST_OFFSET UNITYSDK_OFFSET(0xDAB53A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightManager_TypeDefinitionIndex = 53643;

	class GridFightManager : public ::Class_1_D90D29A0DA06B4F8
	{
	public:
		::RPG::GameCore::GridFightPenaltyRuleConfigRow* _PenaltyRuleConfigRow; // 0x38
		::Class_1_34CD5A7B272AF994* _GridFightStatistics_k__BackingField; // 0x40
		::RPG::GameCore::GameEntity* _CountDownEntity; // 0x48
		::Class_1_22B8FDC4E33ACC56* _BattleGridFight; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* _BeEntityByTraitID; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _KillMonsterRuntimeIDSet; // 0x60
		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* _MonsterDifficultyLvRow_k__BackingField; // 0x68
		::RPG::GameCore::StageRow* _StageConfig; // 0x70
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightManager_WaveKillRecordData*>* _WaveKillMonsterRecordData; // 0x78
		::RPG::GameCore::GridFightManager_GridFightProgressRule* _GridFightProgressRule; // 0x80
		::RPG::GameCore::GridFightWaveInfo* _NextWaveInfo; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _BackendEntityList; // 0x90
		::RPG::GameCore::GridFightManager_GridFightCustomValueLookup* _CustomValueLookUp; // 0x98
		::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>* BattleDropList; // 0xA0
		::System::Collections::Generic::List_1<::Class_1_B3478091817B6770*>* _ShowTraitEffectList_k__BackingField; // 0xA8
		::System::Int32 _CurrentWaveIndex; // 0xB0
		::System::Boolean _ShowGridFightProgress; // 0xB4
		::System::Boolean _bSkipWaves; // 0xB5
		::System::Boolean _ForceFullProgress; // 0xB6
		::System::Boolean _HasCyreneInFront_k__BackingField; // 0xB7
		::System::UInt32 _AddDynamicEquipCount_k__BackingField; // 0xB8
		::RPG::GameCore::FixPoint _DeadLineKillProgress_k__BackingField; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::UInt32 GetShopLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETSHOPLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetBackendGameEntity(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDGAMEENTITY_OFFSET))(this, a1);
		}

		::System::UInt32 GetAvatarStar(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARSTAR_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::System::UInt32>* CollectAvatarTraitList(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_COLLECTAVATARTRAITLIST_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* GetTeamTraitList(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMTRAITLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_9015B34004B876E5*>* GetTeamAugments()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_9015B34004B876E5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTEAMAUGMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* GetActiveTraitIncludeSubTraitList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVETRAITINCLUDESUBTRAITLIST_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetCustomProperty(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMPROPERTY_OFFSET))(this, a1);
		}

		::System::Void SetCustomProperty(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SETCUSTOMPROPERTY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetTraitBonusThesholdValue(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitBonusType a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitBonusType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITBONUSTHESHOLDVALUE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint GetCurrentTraitBonusLayer(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitBonusType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitBonusType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCURRENTTRAITBONUSLAYER_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetActivityProperty(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GridFightPropertyType a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightPropertyType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETACTIVITYPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetFilteredEquipCount(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETFILTEREDEQUIPCOUNT_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* GetCountdownEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCOUNTDOWNENTITY_OFFSET))(this);
		}

		::Class_1_34CD5A7B272AF994* get_GridFightStatistics()
		{
			return ((::Class_1_34CD5A7B272AF994*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GRIDFIGHTSTATISTICS_OFFSET))(this);
		}

		::System::Void set_GridFightStatistics(::Class_1_34CD5A7B272AF994* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_34CD5A7B272AF994*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_GRIDFIGHTSTATISTICS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>* GetTraitStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTRAITSTT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>* GetAugmentStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1C6D038ACA57B217*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAUGMENTSTT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1C6D038ACA57B217*>* GetRoleStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1C6D038ACA57B217*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETROLESTT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetGlobalHp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SETGLOBALHP_OFFSET))(this);
		}

		::System::UInt32 GetPenaltyBonusRuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETPENALTYBONUSRULEID_OFFSET))(this);
		}

		::System::Void TriggerTraitBonus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERTRAITBONUS_OFFSET))(this);
		}

		::System::Void TriggerStageBonus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERSTAGEBONUS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetWhiteboxSettleBonusList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETWHITEBOXSETTLEBONUSLIST_OFFSET))(this);
		}

		::System::Void CalculatePowerGridFight(::RPG::GameCore::BattleGridFightAvatarData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_CALCULATEPOWERGRIDFIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerNextWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_TRIGGERNEXTWAVE_OFFSET))(this);
		}

		::System::Void SetAutoRefreshGridFightProgressUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SETAUTOREFRESHGRIDFIGHTPROGRESSUI_OFFSET))(this, a1);
		}

		::System::Void _OnBattleProgressChanged(::Class_0_16E4307DCC419505_540* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_540*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONBATTLEPROGRESSCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCustomString(::RPG::GameCore::LevelCustomizeStringEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCustomizeStringEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELCUSTOMSTRING_OFFSET))(this, a1);
		}

		::System::Void OnAfterPlayerCreate(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ONAFTERPLAYERCREATE_OFFSET))(this, a1);
		}

		::System::Void _SetupGridFightDamageCarryOverride(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPGRIDFIGHTDAMAGECARRYOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void _SetupBackendAvatarAbility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPBACKENDAVATARABILITY_OFFSET))(this);
		}

		::System::Void _PostOnAllRoleCreatedEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__POSTONALLROLECREATEDEND_OFFSET))(this);
		}

		::System::Void _UpdateRoleBackendRankList(::RPG::GameCore::BattleGridFightAvatarData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDRANKLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateRoleBackendEquipmentEffect(::RPG::GameCore::BattleGridFightAvatarData* a1, ::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEROLEBACKENDEQUIPMENTEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupRoleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPROLEDATA_OFFSET))(this);
		}

		::System::Void _PrecheckRoleData(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKROLEDATA_OFFSET))(this, a1);
		}

		::System::Void _PrecheckLightTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__PRECHECKLIGHTTEAM_OFFSET))(this);
		}

		::System::Void _PostUpdateRoleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__POSTUPDATEROLEDATA_OFFSET))(this);
		}

		::System::Void _SetupTraitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPTRAITDATA_OFFSET))(this);
		}

		::System::Void _SetupAugmentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPAUGMENTDATA_OFFSET))(this);
		}

		::System::Void _SetupPortalData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPORTALDATA_OFFSET))(this);
		}

		::System::Void _SetupGlobalValueData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPGLOBALVALUEDATA_OFFSET))(this);
		}

		::System::Void ApplyProjectionProperty(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTY_OFFSET))(this, a1);
		}

		::System::Void ApplyProjectionPropertyByTraitID(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_APPLYPROJECTIONPROPERTYBYTRAITID_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCustomValueChanged(::RPG::GameCore::GridFightManager_GridFightCustomValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager_GridFightCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONCUSTOMVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnCreatePlayerTeamFinish(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONCREATEPLAYERTEAMFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnLevelInfiniteWaveProgressChange(::RPG::GameCore::LevelCharacterDie* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELINFINITEWAVEPROGRESSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelBattleEventCreate(::RPG::GameCore::LevelBattleEventCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONLEVELBATTLEEVENTCREATE_OFFSET))(this, a1);
		}

		::System::Void _InitBEMapAbility(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__INITBEMAPABILITY_OFFSET))(this, a1);
		}

		::System::Void _InitMazeBuffEnhance(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__INITMAZEBUFFENHANCE_OFFSET))(this, a1);
		}

		::System::Void _InitElationEquips(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__INITELATIONEQUIPS_OFFSET))(this, a1);
		}

		::System::Boolean _IsTraitIncludeBE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ISTRAITINCLUDEBE_OFFSET))(this, a1, a2);
		}

		::System::Void _CacheTraitBE(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__CACHETRAITBE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* GetBEEntityByTraitID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBEENTITYBYTRAITID_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleGridFightTeamTraitData* GetTargetTraitByUniqueName(::System::String* a1)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYUNIQUENAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleGridFightTeamTraitData* GetTargetTraitByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETTARGETTRAITBYID_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>* GetBackendAllTeamPropertyList()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDALLTEAMPROPERTYLIST_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>* GetBackendOwnerPropertyList(::System::UInt32 a1)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBACKENDOWNERPROPERTYLIST_OFFSET))(this, a1);
		}

		::System::Void _UpdateGridFightProgressUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__UPDATEGRIDFIGHTPROGRESSUI_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _CreateBackendEntityForLinupData(::RPG::GameCore::LineUpCharacter* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__CREATEBACKENDENTITYFORLINUPDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleGridFightAvatarData* GetAvatarDataByCharacterID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYCHARACTERID_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleGridFightAvatarData* GetAvatarDataByRole(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATABYROLE_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>* GetAvatarDatas(::RPG::GameCore::GridFightPreset a1)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>*(*)(::PVOID, ::RPG::GameCore::GridFightPreset))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETAVATARDATAS_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::Class_1_AE4553DBAC72BB2D*>* GetNPCDatas()
		{
			return ((::RPG::PoolList_1<::Class_1_AE4553DBAC72BB2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETNPCDATAS_OFFSET))(this);
		}

		::System::Void AddDropEntry(::RPG::GameCore::GameEntity* a1, ::Struct_2_34C03801479AC814 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_34C03801479AC814))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_ADDDROPENTRY_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetBattleRst_LoseHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_LOSEHP_OFFSET))(this);
		}

		::System::UInt32 GetBattleRst_BattlePercent(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_BATTLEPERCENT_OFFSET))(this, a1);
		}

		::System::UInt32 GetBattleRst_DeadLineKillPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_DEADLINEKILLPERCENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_8EC2A64207E05751*>* GetBattleRst_TraitUploadData()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_8EC2A64207E05751*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_TRAITUPLOADDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_8D398246A70BD04C_1*>* GetBattleRst_AugmentUploadData()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_8D398246A70BD04C_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_AUGMENTUPLOADDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_41*>* GetBattleRst_PortalUploadData()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_41*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_PORTALUPLOADDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_FDFA365FE186E8F2*>* GetBattleRst_WaveSttInfo()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_FDFA365FE186E8F2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETBATTLERST_WAVESTTINFO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CurrentBattleProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_CURRENTBATTLEPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TotalBattleProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_TOTALBATTLEPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetLoseGlobalHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETLOSEGLOBALHP_OFFSET))(this);
		}

		::System::Void _SetupProgressStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__SETUPPROGRESSSTATISTICS_OFFSET))(this);
		}

		::System::Void _OnProgressTargetRemapped(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONPROGRESSTARGETREMAPPED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnShowTraitEffect(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER__ONSHOWTRAITEFFECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_B3478091817B6770*>* get_ShowTraitEffectList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_B3478091817B6770*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_SHOWTRAITEFFECTLIST_OFFSET))(this);
		}

		::System::Void set_ShowTraitEffectList(::System::Collections::Generic::List_1<::Class_1_B3478091817B6770*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B3478091817B6770*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_SHOWTRAITEFFECTLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnBasedGameMode* get_OwnerGameMode()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_OWNERGAMEMODE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DeadLineKillProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_DEADLINEKILLPROGRESS_OFFSET))(this);
		}

		::System::Void set_DeadLineKillProgress(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_DEADLINEKILLPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasCyreneInFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_HASCYRENEINFRONT_OFFSET))(this);
		}

		::System::Void set_HasCyreneInFront(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_HASCYRENEINFRONT_OFFSET))(this, a1);
		}

		::Class_1_12ABE890CAA92AB9* get_GlobalValueMap()
		{
			return ((::Class_1_12ABE890CAA92AB9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_GLOBALVALUEMAP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetCustomValue(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GETCUSTOMVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* get_MonsterDifficultyLvRow()
		{
			return ((::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_MONSTERDIFFICULTYLVROW_OFFSET))(this);
		}

		::System::Void set_MonsterDifficultyLvRow(::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_MONSTERDIFFICULTYLVROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddDynamicEquipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GET_ADDDYNAMICEQUIPCOUNT_OFFSET))(this);
		}

		::System::Void set_AddDynamicEquipCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_SET_ADDDYNAMICEQUIPCOUNT_OFFSET))(this, a1);
		}

		::System::Void RegisterProgressTargetRemap(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_REGISTERPROGRESSTARGETREMAP_OFFSET))(this, a1, a2);
		}
	};
}
