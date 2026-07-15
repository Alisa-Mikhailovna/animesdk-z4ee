#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkMonitorErrorCode.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/ChapterRecordUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/InGameTeamSlotUiData.h"
#include "unitysdk/RPG/Client/ActivityModule_ActivityType.h"
#include "unitysdk/RPG/Client/AlleyEventInfo.h"
#include "unitysdk/RPG/Client/AlleyTransportRouteState.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/FightActivityGroupInfo.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameEventReason.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TextmapDownloadManager_TextmapApplyChangeErrorCode.h"
#include "unitysdk/RPG/Client/TextmapDownloadManager_TextmapSizeErrorCode.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoRarityData.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoWorldData.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HudType.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Spine/Unity/MeshGeneratorBuffers.h"
#include "unitysdk/Struct_2_CC45B4503679E14E.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E_3.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/XLua/DelegateBridgeBase.h"

class AkCallbackInfo;
class Class_0_16E4307DCC419505_374;
class Class_0_16E4307DCC419505_375;
class Class_0_16E4307DCC419505_376;
class Class_0_16E4307DCC419505_378;
class Class_0_16E4307DCC419505_379;
class Class_0_16E4307DCC419505_380;
class Class_0_16E4307DCC419505_381;
class Class_1_1CB8CBC69B962B41;
class Class_1_2375E47039821420;
class Class_1_2CEBEAE10BD13F6B;
class Class_1_303D5A33D1401D59;
class Class_1_3497D086B05ACE3A;
class Class_1_43BD383C98B4C0C5_116;
class Class_1_43BD383C98B4C0C5_117;
class Class_1_47EB23CB5C4B2615_32;
class Class_1_4CEDF380BFE8D93F;
class Class_1_5469D397DAE62876;
class Class_1_718B8238EA10D3FF;
class Class_1_7E9AC8675DA072FB_1;
class Class_1_9C8BB23B0435A836;
class Class_1_9D40F9D90905A4A4;
class Class_1_B1050BB558D637BF;
class Class_1_BEB73AACF0CDA957;
class Class_1_D0948460F4810867;
class Class_1_D17272E82AE804C2_370;
class Class_1_D17272E82AE804C2_371;
class Class_1_D17272E82AE804C2_373;
class Class_2_0748E0E1B406181B;
class Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53;
class Class_2_E6C0556C909C8254;
class Class_3_1C169A0F2ACF26E7;
namespace Google::Protobuf { class ByteString; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace InControl { class InputDevice; }
namespace Proto { class ItemCost; }
namespace Proto { class StrongChallengeAvatar; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ActivityHotCoreRewardData; }
namespace RPG::Client { class ActivityHotData; }
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::Client { class AetherDivideGymDataItem; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class AssistData; }
namespace RPG::Client { class AvatarEnhancedHint; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::Client { class BaseGachaGroupData; }
namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::Client { class BookContentData; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class CakeCatchCatData; }
namespace RPG::Client { class CakeRaceBattleItemDataItem; }
namespace RPG::Client { class CakeRaceHandbookCatItem; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChatReportReason; }
namespace RPG::Client { class ChenLingBattleDeckData; }
namespace RPG::Client { class ChenLingPrivilege; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueSubMissionReplayDataItem; }
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class CompanionMissionActivityBannerData; }
namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace RPG::Client { class DrinkMakerCheersBartendDrinkDataExtend; }
namespace RPG::Client { class DrinkMakerCheersGroupData; }
namespace RPG::Client { class DrinkMakerCheersGuestCommentData; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client { class ElfShopItemData; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildMixData; }
namespace RPG::Client { class EvolveBuildScMixData; }
namespace RPG::Client { class FantasticStoryChapterData; }
namespace RPG::Client { class FantasticStoryParagraphData; }
namespace RPG::Client { class FateHandbookHouguItem; }
namespace RPG::Client { class FateHandbookReijuItem; }
namespace RPG::Client { class FightFestCoachSkill; }
namespace RPG::Client { class FightFestPhase; }
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class FuncEntranceData; }
namespace RPG::Client { class GachaGroupData; }
namespace RPG::Client { class GachaItemData; }
namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightDivisionConfig; }
namespace RPG::Client { class GridFightDivisionLevelConfig; }
namespace RPG::Client { class GridFightDivisionLevelReward; }
namespace RPG::Client { class GridFightDivisionStageConfig; }
namespace RPG::Client { class GridFightEnemyDifficultyLvConfig; }
namespace RPG::Client { class GridFightEquipCategoryInfoConfig; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeConfig; }
namespace RPG::Client { class GridFightGameFormationEditor_EditEvent; }
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightHandBookEquipItemConfig; }
namespace RPG::Client { class GridFightHandbookRole; }
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class GridFightNPCConfig; }
namespace RPG::Client { class GridFightOrbData; }
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightPresentEntity; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::Client { class GridFightRolePropertyConfig; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTutorialStageConfig; }
namespace RPG::Client { class HeadIconDisplayData; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class IResidentActivityPanelData; }
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class IRogueTournPersonaRoomCard; }
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class LightConeRecommendData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client { class MatchThreeBirdData; }
namespace RPG::Client { class MessageItemData; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoRogueHexChessBoardItem; }
namespace RPG::Client { class MonoSceneObjClickHint; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class MultipleDropData; }
namespace RPG::Client { class NPCWarningTipConfig; }
namespace RPG::Client { class NewsTickerItem; }
namespace RPG::Client { class PCResolution; }
namespace RPG::Client { class ParkourRank; }
namespace RPG::Client { class PenaconyEndmostChronicleEvent; }
namespace RPG::Client { class PlanetFesCardData; }
namespace RPG::Client { class PlanetFesMiniGameBingoRewardLevel; }
namespace RPG::Client { class PlanetFesSkillPhase; }
namespace RPG::Client { class PlanetFesThemeData; }
namespace RPG::Client { class PlanetFesToastItem; }
namespace RPG::Client { class PlanetFesTradingCardApplyItem; }
namespace RPG::Client { class PlanetFesTradingCardExchangeHistoryItem; }
namespace RPG::Client { class PlanetFesTradingCardOfferItem; }
namespace RPG::Client { class PlayerBoardInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client { class PopupMenuProxy_Option; }
namespace RPG::Client { class PunkLordData; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RechargeGiftData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueMagicAreaDataItem; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace RPG::Client { class RogueNousDiceSurfaceDataItem; }
namespace RPG::Client { class RogueTournArchiveData; }
namespace RPG::Client { class RogueTournAreaDataItem; }
namespace RPG::Client { class RogueTournHexData; }
namespace RPG::Client { class RoleTrialActivityData; }
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client { class SettledPunkLordData; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client { class SuitRecommendAvatarData; }
namespace RPG::Client { class SuperDropDown; }
namespace RPG::Client { class SwitchHandCoinData; }
namespace RPG::Client { class SwordTrainingEndingDataItem; }
namespace RPG::Client { class SwordTrainingSkillData; }
namespace RPG::Client { class TarotBookCard; }
namespace RPG::Client { class TarotBookCharacter; }
namespace RPG::Client { class TarotBookClue; }
namespace RPG::Client { class TarotBookDeleteData; }
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::Client { class TarotBookReadReward; }
namespace RPG::Client { class TarotBookStory; }
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client { class UIBubbleItem; }
namespace RPG::Client { class UIBubbleManager; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::Client { class VirtualRankChimeraTeam; }
namespace RPG::Client { class WheelItem; }
namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace RPG::Client::ActivityIdleLive { class AmphoreusTarotData; }
namespace RPG::Client::ActivityIdleLive { class CaptainData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAdvTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaPoolConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace RPG::Client::ActivityIdleLive { class SpSlotUiData; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::Challenge { class IChallengeEnvironmentHintViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeProgressHintViewModel; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionCardInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionDiceInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }
namespace RPG::Client::DiceCombat { class DiceCombatForceRefreshEvent; }
namespace RPG::Client::DiceCombat { class DiceCombatGlossaryTermData; }
namespace RPG::Client::DiceCombat { class DiceCombatPerformanceBattleEvent; }
namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleGroupData; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::FateRin::Battle { class CardAnimationEventArgs; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardMoveToGrailParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardMoveToTeamParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardSetupScaleParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowGrailParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowLineParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowRewardParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowTeamParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardSimpleTalkParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardTrackTeamParams; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Promises { class ExceptionEventArgs; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class JigsawItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::SwordTraining { class SwordTrainingCandidatePartnerAbilityData; }
namespace RPG::Client::TeamTowers { class TeamTowersPlayerSkillViewModel; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingRankInfo; }
namespace RPG::Client::TrainParty { class TrainPartyRecordGroup; }
namespace RPG::GameCore { class ActivityFightGroupRow; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventurePlayerRow; }
namespace RPG::GameCore { class AdventurePlayerRow_AdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class AvatarPromotionRow; }
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class BuffConfig; }
namespace RPG::GameCore { class CEBattlePresetConfig; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class DialogueGroupRow; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager_GridFightCustomValue; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class ItemComefromRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace RPG::GameCore { class MainMissionRow; }
namespace RPG::GameCore { class MainMissionSortedItem; }
namespace RPG::GameCore { class MapEntryRow; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class MessageItemRow; }
namespace RPG::GameCore { class MissionCondition; }
namespace RPG::GameCore { class MonsterGuideTagConfigRow; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterSkillRow; }
namespace RPG::GameCore { class PerformanceERow; }
namespace RPG::GameCore { class PerformanceIDPair; }
namespace RPG::GameCore { class PerformanceSkipOverrideRow; }
namespace RPG::GameCore { class PlaneEventRow; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class RewardRow; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueDLCAeonCrossRow; }
namespace RPG::GameCore { class RogueDLCMainStoryRewardRow; }
namespace RPG::GameCore { class RogueImageRow; }
namespace RPG::GameCore { class RogueNousAeonCrossRow; }
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace RPG::GameCore { class StageMonsterRewardItem; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TalkSentenceConfigRow; }
namespace RPG::GameCore { class TextmapRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace RPG::GameCore { class VoiceConfigRow; }
namespace Spine { class Event; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class ISkeletonAnimation; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace SuperScrollView { class LoopFlexibleGridView; }
namespace SuperScrollView { class LoopFlexibleGridViewItem; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace SuperScrollView { class LoopStaggeredGridView; }
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace System { class Delegate; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class MemberInfo; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_TextInfo; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class EventTrigger_Entry; }
namespace UnityEngine::EventSystems { class IBeginDragHandler; }
namespace UnityEngine::EventSystems { class ICancelHandler; }
namespace UnityEngine::EventSystems { class IDeselectHandler; }
namespace UnityEngine::EventSystems { class IDragHandler; }
namespace UnityEngine::EventSystems { class IDropHandler; }
namespace UnityEngine::EventSystems { class IEndDragHandler; }
namespace UnityEngine::EventSystems { class IIgnoreHandler; }
namespace UnityEngine::EventSystems { class IInitializePotentialDragHandler; }
namespace UnityEngine::EventSystems { class IMoveHandler; }
namespace UnityEngine::EventSystems { class IPointerClickHandler; }
namespace UnityEngine::EventSystems { class IPointerDownHandler; }
namespace UnityEngine::EventSystems { class IPointerEnterHandler; }
namespace UnityEngine::EventSystems { class IPointerExitHandler; }
namespace UnityEngine::EventSystems { class IPointerUpHandler; }
namespace UnityEngine::EventSystems { class IScrollHandler; }
namespace UnityEngine::EventSystems { class ISelectHandler; }
namespace UnityEngine::EventSystems { class ISubmitHandler; }
namespace UnityEngine::EventSystems { class IUpdateSelectedHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::UI { class Dropdown_DropdownItem; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class ILayoutElement; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Toggle; }
namespace XLua { class LuaBase; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaTable; }

#define XLUA_DELEGATEBRIDGE_ACTION_OFFSET UNITYSDK_OFFSET(0x13D88A10)
#define XLUA_DELEGATEBRIDGE_GETDELEGATEBYTYPE_OFFSET UNITYSDK_OFFSET(0x13D738E0)
#define XLUA_DELEGATEBRIDGE_PCALL_OFFSET UNITYSDK_OFFSET(0x13CDF220)
#define XLUA_DELEGATEBRIDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D6EE80)
#define XLUA_DELEGATEBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x13D889B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP0_OFFSET UNITYSDK_OFFSET(0x13CC95F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP100_OFFSET UNITYSDK_OFFSET(0x13CDB260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP101_OFFSET UNITYSDK_OFFSET(0x13CDB490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP102_OFFSET UNITYSDK_OFFSET(0x13CDB840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP103_OFFSET UNITYSDK_OFFSET(0x13CDBB20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP104_OFFSET UNITYSDK_OFFSET(0x13CDBD50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP105_OFFSET UNITYSDK_OFFSET(0x13CDC070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP106_OFFSET UNITYSDK_OFFSET(0x13CDC350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP107_OFFSET UNITYSDK_OFFSET(0x13CDC580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP108_OFFSET UNITYSDK_OFFSET(0x13CDC8A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP109_OFFSET UNITYSDK_OFFSET(0x13CDCB80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP10_OFFSET UNITYSDK_OFFSET(0x13CCADB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP110_OFFSET UNITYSDK_OFFSET(0x13CDCDB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP111_OFFSET UNITYSDK_OFFSET(0x13CDD0D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP112_OFFSET UNITYSDK_OFFSET(0x13CDD300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP113_OFFSET UNITYSDK_OFFSET(0x13CDD5E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP114_OFFSET UNITYSDK_OFFSET(0x13CDD810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP115_OFFSET UNITYSDK_OFFSET(0x13CDDB30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP116_OFFSET UNITYSDK_OFFSET(0x13CDDE10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP117_OFFSET UNITYSDK_OFFSET(0x13CDE040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP118_OFFSET UNITYSDK_OFFSET(0x13CDE360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP119_OFFSET UNITYSDK_OFFSET(0x13CDE590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP11_OFFSET UNITYSDK_OFFSET(0x13CCB040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP120_OFFSET UNITYSDK_OFFSET(0x13CDE830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP121_OFFSET UNITYSDK_OFFSET(0x13CDEB60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP122_OFFSET UNITYSDK_OFFSET(0x13CDEF20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP123_OFFSET UNITYSDK_OFFSET(0x13CDF2E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP124_OFFSET UNITYSDK_OFFSET(0x13CDF510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP125_OFFSET UNITYSDK_OFFSET(0x13CDF7B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP126_OFFSET UNITYSDK_OFFSET(0x13CDFB60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP127_OFFSET UNITYSDK_OFFSET(0x13CDFD90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP128_OFFSET UNITYSDK_OFFSET(0x13CE0090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP129_OFFSET UNITYSDK_OFFSET(0x13CE0370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP12_OFFSET UNITYSDK_OFFSET(0x13CCB2E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP130_OFFSET UNITYSDK_OFFSET(0x13CE05A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP131_OFFSET UNITYSDK_OFFSET(0x13CE08C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP132_OFFSET UNITYSDK_OFFSET(0x13CE0BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP133_OFFSET UNITYSDK_OFFSET(0x13CE0DD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP134_OFFSET UNITYSDK_OFFSET(0x13CE1000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP135_OFFSET UNITYSDK_OFFSET(0x13CE1310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP136_OFFSET UNITYSDK_OFFSET(0x13CE15F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP137_OFFSET UNITYSDK_OFFSET(0x13CE1820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP138_OFFSET UNITYSDK_OFFSET(0x13CE1A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP139_OFFSET UNITYSDK_OFFSET(0x13CE1CE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP13_OFFSET UNITYSDK_OFFSET(0x13CCB530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP140_OFFSET UNITYSDK_OFFSET(0x13CE2050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP141_OFFSET UNITYSDK_OFFSET(0x13CE2380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP142_OFFSET UNITYSDK_OFFSET(0x13CE25B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP143_OFFSET UNITYSDK_OFFSET(0x13CE27E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP144_OFFSET UNITYSDK_OFFSET(0x13CE2A80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP145_OFFSET UNITYSDK_OFFSET(0x13CE2D40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP146_OFFSET UNITYSDK_OFFSET(0x13CE2F70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP147_OFFSET UNITYSDK_OFFSET(0x13CE3210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP148_OFFSET UNITYSDK_OFFSET(0x13CE3440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP149_OFFSET UNITYSDK_OFFSET(0x13CE37E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP14_OFFSET UNITYSDK_OFFSET(0x13CCB780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP150_OFFSET UNITYSDK_OFFSET(0x13CE3A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP151_OFFSET UNITYSDK_OFFSET(0x13CE3D20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP152_OFFSET UNITYSDK_OFFSET(0x13CE3F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP153_OFFSET UNITYSDK_OFFSET(0x13CE4270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP154_OFFSET UNITYSDK_OFFSET(0x13CE44A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP155_OFFSET UNITYSDK_OFFSET(0x13CE4750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP156_OFFSET UNITYSDK_OFFSET(0x13CE4980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP157_OFFSET UNITYSDK_OFFSET(0x13CE4C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP158_OFFSET UNITYSDK_OFFSET(0x13CE4E90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP159_OFFSET UNITYSDK_OFFSET(0x13CE50E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP15_OFFSET UNITYSDK_OFFSET(0x13CCBA20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP160_OFFSET UNITYSDK_OFFSET(0x13CE5350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP161_OFFSET UNITYSDK_OFFSET(0x13CE5620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP162_OFFSET UNITYSDK_OFFSET(0x13CE58C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP163_OFFSET UNITYSDK_OFFSET(0x13CE5AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP164_OFFSET UNITYSDK_OFFSET(0x13CE5D20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP165_OFFSET UNITYSDK_OFFSET(0x13CE6040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP166_OFFSET UNITYSDK_OFFSET(0x13CE6370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP167_OFFSET UNITYSDK_OFFSET(0x13CE6650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP168_OFFSET UNITYSDK_OFFSET(0x13CE6880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP169_OFFSET UNITYSDK_OFFSET(0x13CE6BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP16_OFFSET UNITYSDK_OFFSET(0x13CCBCD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP170_OFFSET UNITYSDK_OFFSET(0x13CE6DD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP171_OFFSET UNITYSDK_OFFSET(0x13CE70B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP172_OFFSET UNITYSDK_OFFSET(0x13CE72E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP173_OFFSET UNITYSDK_OFFSET(0x13CE7600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP174_OFFSET UNITYSDK_OFFSET(0x13CE7830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP175_OFFSET UNITYSDK_OFFSET(0x13CE7AD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP176_OFFSET UNITYSDK_OFFSET(0x13CE7D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP177_OFFSET UNITYSDK_OFFSET(0x13CE8050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP178_OFFSET UNITYSDK_OFFSET(0x13CE8280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP179_OFFSET UNITYSDK_OFFSET(0x13CE85A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP17_OFFSET UNITYSDK_OFFSET(0x13CCBFF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP180_OFFSET UNITYSDK_OFFSET(0x13CE8880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP181_OFFSET UNITYSDK_OFFSET(0x13CE8AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP182_OFFSET UNITYSDK_OFFSET(0x13CE8DD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP183_OFFSET UNITYSDK_OFFSET(0x13CE90B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP184_OFFSET UNITYSDK_OFFSET(0x13CE92E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP185_OFFSET UNITYSDK_OFFSET(0x13CE9600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP186_OFFSET UNITYSDK_OFFSET(0x13CE9830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP187_OFFSET UNITYSDK_OFFSET(0x13CE9AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP188_OFFSET UNITYSDK_OFFSET(0x13CE9D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP189_OFFSET UNITYSDK_OFFSET(0x13CEA030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP18_OFFSET UNITYSDK_OFFSET(0x13CCC2B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP190_OFFSET UNITYSDK_OFFSET(0x13CEA260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP191_OFFSET UNITYSDK_OFFSET(0x13CEA490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP192_OFFSET UNITYSDK_OFFSET(0x13CEA730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP193_OFFSET UNITYSDK_OFFSET(0x13CEAA10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP194_OFFSET UNITYSDK_OFFSET(0x13CEAC40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP195_OFFSET UNITYSDK_OFFSET(0x13CEAF20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP196_OFFSET UNITYSDK_OFFSET(0x13CEB150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP197_OFFSET UNITYSDK_OFFSET(0x13CEB470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP198_OFFSET UNITYSDK_OFFSET(0x13CEB750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP199_OFFSET UNITYSDK_OFFSET(0x13CEB980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP19_OFFSET UNITYSDK_OFFSET(0x13CCC5D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1_OFFSET UNITYSDK_OFFSET(0x13CC97E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP200_OFFSET UNITYSDK_OFFSET(0x13CEBCA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP201_OFFSET UNITYSDK_OFFSET(0x13CEBF80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP202_OFFSET UNITYSDK_OFFSET(0x13CEC1B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP203_OFFSET UNITYSDK_OFFSET(0x13CEC4D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP204_OFFSET UNITYSDK_OFFSET(0x13CEC700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP205_OFFSET UNITYSDK_OFFSET(0x13CECA80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP206_OFFSET UNITYSDK_OFFSET(0x13CECD60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP207_OFFSET UNITYSDK_OFFSET(0x13CECF90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP208_OFFSET UNITYSDK_OFFSET(0x13CED2B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP209_OFFSET UNITYSDK_OFFSET(0x13CED590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP20_OFFSET UNITYSDK_OFFSET(0x13CCC8A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP210_OFFSET UNITYSDK_OFFSET(0x13CED7C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP211_OFFSET UNITYSDK_OFFSET(0x13CEDAE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP212_OFFSET UNITYSDK_OFFSET(0x13CEDDC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP213_OFFSET UNITYSDK_OFFSET(0x13CEDFF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP214_OFFSET UNITYSDK_OFFSET(0x13CEE310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP215_OFFSET UNITYSDK_OFFSET(0x13CEE540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP216_OFFSET UNITYSDK_OFFSET(0x13CEE7B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP217_OFFSET UNITYSDK_OFFSET(0x13CEEA30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP218_OFFSET UNITYSDK_OFFSET(0x13CEEC60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP219_OFFSET UNITYSDK_OFFSET(0x13CEEE90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP21_OFFSET UNITYSDK_OFFSET(0x13CCCB70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP220_OFFSET UNITYSDK_OFFSET(0x13CEF230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP221_OFFSET UNITYSDK_OFFSET(0x13CEF550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP222_OFFSET UNITYSDK_OFFSET(0x13CEF830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP223_OFFSET UNITYSDK_OFFSET(0x13CEFB00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP224_OFFSET UNITYSDK_OFFSET(0x13CEFD30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP225_OFFSET UNITYSDK_OFFSET(0x13CEFF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP226_OFFSET UNITYSDK_OFFSET(0x13CF0240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP227_OFFSET UNITYSDK_OFFSET(0x13CF0470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP228_OFFSET UNITYSDK_OFFSET(0x13CF0790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP229_OFFSET UNITYSDK_OFFSET(0x13CF0B10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP22_OFFSET UNITYSDK_OFFSET(0x13CCCE40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP230_OFFSET UNITYSDK_OFFSET(0x13CF0D40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP231_OFFSET UNITYSDK_OFFSET(0x13CF0F70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP232_OFFSET UNITYSDK_OFFSET(0x13CF1310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP233_OFFSET UNITYSDK_OFFSET(0x13CF16B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP234_OFFSET UNITYSDK_OFFSET(0x13CF18E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP235_OFFSET UNITYSDK_OFFSET(0x13CF1C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP236_OFFSET UNITYSDK_OFFSET(0x13CF1E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP237_OFFSET UNITYSDK_OFFSET(0x13CF2130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP238_OFFSET UNITYSDK_OFFSET(0x13CF2360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP239_OFFSET UNITYSDK_OFFSET(0x13CF2630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP23_OFFSET UNITYSDK_OFFSET(0x13CCD0C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP240_OFFSET UNITYSDK_OFFSET(0x13CF2910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP241_OFFSET UNITYSDK_OFFSET(0x13CF2B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP242_OFFSET UNITYSDK_OFFSET(0x13CF2E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP243_OFFSET UNITYSDK_OFFSET(0x13CF3140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP244_OFFSET UNITYSDK_OFFSET(0x13CF3370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP245_OFFSET UNITYSDK_OFFSET(0x13CF3690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP246_OFFSET UNITYSDK_OFFSET(0x13CF38F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP247_OFFSET UNITYSDK_OFFSET(0x13CF3BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP248_OFFSET UNITYSDK_OFFSET(0x13CF3EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP249_OFFSET UNITYSDK_OFFSET(0x13CF40D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP24_OFFSET UNITYSDK_OFFSET(0x13CCD330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP250_OFFSET UNITYSDK_OFFSET(0x13CF43F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP251_OFFSET UNITYSDK_OFFSET(0x13CF46D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP252_OFFSET UNITYSDK_OFFSET(0x13CF4900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP253_OFFSET UNITYSDK_OFFSET(0x13CF4C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP254_OFFSET UNITYSDK_OFFSET(0x13CF4E50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP255_OFFSET UNITYSDK_OFFSET(0x13CF50C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP256_OFFSET UNITYSDK_OFFSET(0x13CF53A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP257_OFFSET UNITYSDK_OFFSET(0x13CF55D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP258_OFFSET UNITYSDK_OFFSET(0x13CF58F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP259_OFFSET UNITYSDK_OFFSET(0x13CF5BD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP25_OFFSET UNITYSDK_OFFSET(0x13CCD5D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP260_OFFSET UNITYSDK_OFFSET(0x13CF5E00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP261_OFFSET UNITYSDK_OFFSET(0x13CF6120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP262_OFFSET UNITYSDK_OFFSET(0x13CF6460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP263_OFFSET UNITYSDK_OFFSET(0x13CF66E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP264_OFFSET UNITYSDK_OFFSET(0x13CF6A70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP265_OFFSET UNITYSDK_OFFSET(0x13CF6D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP266_OFFSET UNITYSDK_OFFSET(0x13CF6F80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP267_OFFSET UNITYSDK_OFFSET(0x13CF72A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP268_OFFSET UNITYSDK_OFFSET(0x13CF7540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP269_OFFSET UNITYSDK_OFFSET(0x13CF7820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP26_OFFSET UNITYSDK_OFFSET(0x13CCD8F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP270_OFFSET UNITYSDK_OFFSET(0x13CF7A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP271_OFFSET UNITYSDK_OFFSET(0x13CF7D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP272_OFFSET UNITYSDK_OFFSET(0x13CF7FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP273_OFFSET UNITYSDK_OFFSET(0x13CF8240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP274_OFFSET UNITYSDK_OFFSET(0x13CF8470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP275_OFFSET UNITYSDK_OFFSET(0x13CF8780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP276_OFFSET UNITYSDK_OFFSET(0x13CF89B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP277_OFFSET UNITYSDK_OFFSET(0x13CF8C90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP278_OFFSET UNITYSDK_OFFSET(0x13CF8EC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP279_OFFSET UNITYSDK_OFFSET(0x13CF91E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP27_OFFSET UNITYSDK_OFFSET(0x13CCDBA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP280_OFFSET UNITYSDK_OFFSET(0x13CF9430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP281_OFFSET UNITYSDK_OFFSET(0x13CF9660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP282_OFFSET UNITYSDK_OFFSET(0x13CF9920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP283_OFFSET UNITYSDK_OFFSET(0x13CF9C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP284_OFFSET UNITYSDK_OFFSET(0x13CF9E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP285_OFFSET UNITYSDK_OFFSET(0x13CFA150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP286_OFFSET UNITYSDK_OFFSET(0x13CFA380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP287_OFFSET UNITYSDK_OFFSET(0x13CFA5B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP288_OFFSET UNITYSDK_OFFSET(0x13CFA7E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP289_OFFSET UNITYSDK_OFFSET(0x13CFAA10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP28_OFFSET UNITYSDK_OFFSET(0x13CCDE40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP290_OFFSET UNITYSDK_OFFSET(0x13CFAC40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP291_OFFSET UNITYSDK_OFFSET(0x13CFAF80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP292_OFFSET UNITYSDK_OFFSET(0x13CFB200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP293_OFFSET UNITYSDK_OFFSET(0x13CFB590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP294_OFFSET UNITYSDK_OFFSET(0x13CFB870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP295_OFFSET UNITYSDK_OFFSET(0x13CFBAA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP296_OFFSET UNITYSDK_OFFSET(0x13CFBDC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP297_OFFSET UNITYSDK_OFFSET(0x13CFC090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP298_OFFSET UNITYSDK_OFFSET(0x13CFC2C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP299_OFFSET UNITYSDK_OFFSET(0x13CFC5A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP29_OFFSET UNITYSDK_OFFSET(0x13CCE0A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP2_OFFSET UNITYSDK_OFFSET(0x13CC9A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP300_OFFSET UNITYSDK_OFFSET(0x13CFC7D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP301_OFFSET UNITYSDK_OFFSET(0x13CFCAF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP302_OFFSET UNITYSDK_OFFSET(0x13CFCE90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP303_OFFSET UNITYSDK_OFFSET(0x13CFD150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP304_OFFSET UNITYSDK_OFFSET(0x13CFD3F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP305_OFFSET UNITYSDK_OFFSET(0x13CFD620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP306_OFFSET UNITYSDK_OFFSET(0x13CFD850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP307_OFFSET UNITYSDK_OFFSET(0x13CFDAE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP308_OFFSET UNITYSDK_OFFSET(0x13CFDDC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP309_OFFSET UNITYSDK_OFFSET(0x13CFDFF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP30_OFFSET UNITYSDK_OFFSET(0x13CCE300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP310_OFFSET UNITYSDK_OFFSET(0x13CFE310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP311_OFFSET UNITYSDK_OFFSET(0x13CFE580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP312_OFFSET UNITYSDK_OFFSET(0x13CFE860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP313_OFFSET UNITYSDK_OFFSET(0x13CFEA90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP314_OFFSET UNITYSDK_OFFSET(0x13CFEDB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP315_OFFSET UNITYSDK_OFFSET(0x13CFF100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP316_OFFSET UNITYSDK_OFFSET(0x13CFF3A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP317_OFFSET UNITYSDK_OFFSET(0x13CFF7C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP318_OFFSET UNITYSDK_OFFSET(0x13CFFAA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP319_OFFSET UNITYSDK_OFFSET(0x13CFFCD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP31_OFFSET UNITYSDK_OFFSET(0x13CCE740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP320_OFFSET UNITYSDK_OFFSET(0x13CFFFF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP321_OFFSET UNITYSDK_OFFSET(0x13D002D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP322_OFFSET UNITYSDK_OFFSET(0x13D00500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP323_OFFSET UNITYSDK_OFFSET(0x13D00820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP324_OFFSET UNITYSDK_OFFSET(0x13D00B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP325_OFFSET UNITYSDK_OFFSET(0x13D00D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP326_OFFSET UNITYSDK_OFFSET(0x13D01050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP327_OFFSET UNITYSDK_OFFSET(0x13D01330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP328_OFFSET UNITYSDK_OFFSET(0x13D01560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP329_OFFSET UNITYSDK_OFFSET(0x13D01880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP32_OFFSET UNITYSDK_OFFSET(0x13CCEC60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP330_OFFSET UNITYSDK_OFFSET(0x13D01AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP331_OFFSET UNITYSDK_OFFSET(0x13D01D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP332_OFFSET UNITYSDK_OFFSET(0x13D02070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP333_OFFSET UNITYSDK_OFFSET(0x13D022A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP334_OFFSET UNITYSDK_OFFSET(0x13D025C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP335_OFFSET UNITYSDK_OFFSET(0x13D027F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP336_OFFSET UNITYSDK_OFFSET(0x13D02A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP337_OFFSET UNITYSDK_OFFSET(0x13D02D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP338_OFFSET UNITYSDK_OFFSET(0x13D02FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP339_OFFSET UNITYSDK_OFFSET(0x13D032C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP33_OFFSET UNITYSDK_OFFSET(0x13CCF0A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP340_OFFSET UNITYSDK_OFFSET(0x13D035A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP341_OFFSET UNITYSDK_OFFSET(0x13D037D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP342_OFFSET UNITYSDK_OFFSET(0x13D03AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP343_OFFSET UNITYSDK_OFFSET(0x13D03DD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP344_OFFSET UNITYSDK_OFFSET(0x13D04000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP345_OFFSET UNITYSDK_OFFSET(0x13D04320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP346_OFFSET UNITYSDK_OFFSET(0x13D04600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP347_OFFSET UNITYSDK_OFFSET(0x13D04830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP348_OFFSET UNITYSDK_OFFSET(0x13D04B50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP349_OFFSET UNITYSDK_OFFSET(0x13D04E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP34_OFFSET UNITYSDK_OFFSET(0x13CCF4E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP350_OFFSET UNITYSDK_OFFSET(0x13D05060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP351_OFFSET UNITYSDK_OFFSET(0x13D05380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP352_OFFSET UNITYSDK_OFFSET(0x13D05660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP353_OFFSET UNITYSDK_OFFSET(0x13D05890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP354_OFFSET UNITYSDK_OFFSET(0x13D05BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP355_OFFSET UNITYSDK_OFFSET(0x13D05E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP356_OFFSET UNITYSDK_OFFSET(0x13D06120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP357_OFFSET UNITYSDK_OFFSET(0x13D06350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP358_OFFSET UNITYSDK_OFFSET(0x13D06630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP359_OFFSET UNITYSDK_OFFSET(0x13D06860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP35_OFFSET UNITYSDK_OFFSET(0x13CCF950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP360_OFFSET UNITYSDK_OFFSET(0x13D06B80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP361_OFFSET UNITYSDK_OFFSET(0x13D06E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP362_OFFSET UNITYSDK_OFFSET(0x13D07090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP363_OFFSET UNITYSDK_OFFSET(0x13D073B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP364_OFFSET UNITYSDK_OFFSET(0x13D07690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP365_OFFSET UNITYSDK_OFFSET(0x13D078C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP366_OFFSET UNITYSDK_OFFSET(0x13D07BE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP367_OFFSET UNITYSDK_OFFSET(0x13D07E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP368_OFFSET UNITYSDK_OFFSET(0x13D08080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP369_OFFSET UNITYSDK_OFFSET(0x13D08360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP36_OFFSET UNITYSDK_OFFSET(0x13CCFCA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP370_OFFSET UNITYSDK_OFFSET(0x13D08590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP371_OFFSET UNITYSDK_OFFSET(0x13D088B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP372_OFFSET UNITYSDK_OFFSET(0x13D08B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP373_OFFSET UNITYSDK_OFFSET(0x13D08DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP374_OFFSET UNITYSDK_OFFSET(0x13D090E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP375_OFFSET UNITYSDK_OFFSET(0x13D09430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP376_OFFSET UNITYSDK_OFFSET(0x13D096D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP377_OFFSET UNITYSDK_OFFSET(0x13D09AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP378_OFFSET UNITYSDK_OFFSET(0x13D09DE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP379_OFFSET UNITYSDK_OFFSET(0x13D0A020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP37_OFFSET UNITYSDK_OFFSET(0x13CD0040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP380_OFFSET UNITYSDK_OFFSET(0x13D0A350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP381_OFFSET UNITYSDK_OFFSET(0x13D0A660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP382_OFFSET UNITYSDK_OFFSET(0x13D0AA00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP383_OFFSET UNITYSDK_OFFSET(0x13D0ACE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP384_OFFSET UNITYSDK_OFFSET(0x13D0AF10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP385_OFFSET UNITYSDK_OFFSET(0x13D0B230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP386_OFFSET UNITYSDK_OFFSET(0x13D0B510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP387_OFFSET UNITYSDK_OFFSET(0x13D0B740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP388_OFFSET UNITYSDK_OFFSET(0x13D0BA60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP389_OFFSET UNITYSDK_OFFSET(0x13D0BD40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP38_OFFSET UNITYSDK_OFFSET(0x13CD0350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP390_OFFSET UNITYSDK_OFFSET(0x13D0BF70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP391_OFFSET UNITYSDK_OFFSET(0x13D0C290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP392_OFFSET UNITYSDK_OFFSET(0x13D0C570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP393_OFFSET UNITYSDK_OFFSET(0x13D0C7A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP394_OFFSET UNITYSDK_OFFSET(0x13D0CAC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP395_OFFSET UNITYSDK_OFFSET(0x13D0CDA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP396_OFFSET UNITYSDK_OFFSET(0x13D0CFD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP397_OFFSET UNITYSDK_OFFSET(0x13D0D2F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP398_OFFSET UNITYSDK_OFFSET(0x13D0D600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP399_OFFSET UNITYSDK_OFFSET(0x13D0D880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP39_OFFSET UNITYSDK_OFFSET(0x13CD0600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP3_OFFSET UNITYSDK_OFFSET(0x13CC9C40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP400_OFFSET UNITYSDK_OFFSET(0x13D0DAB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP401_OFFSET UNITYSDK_OFFSET(0x13D0DD00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP402_OFFSET UNITYSDK_OFFSET(0x13D0DFC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP403_OFFSET UNITYSDK_OFFSET(0x13D0E2A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP404_OFFSET UNITYSDK_OFFSET(0x13D0E4D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP405_OFFSET UNITYSDK_OFFSET(0x13D0E7F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP406_OFFSET UNITYSDK_OFFSET(0x13D0EAD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP407_OFFSET UNITYSDK_OFFSET(0x13D0ED00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP408_OFFSET UNITYSDK_OFFSET(0x13D0F020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP409_OFFSET UNITYSDK_OFFSET(0x13D0F2A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP40_OFFSET UNITYSDK_OFFSET(0x13CD0900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP410_OFFSET UNITYSDK_OFFSET(0x13D0F580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP411_OFFSET UNITYSDK_OFFSET(0x13D0F7B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP412_OFFSET UNITYSDK_OFFSET(0x13D0FAD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP413_OFFSET UNITYSDK_OFFSET(0x13D0FDB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP414_OFFSET UNITYSDK_OFFSET(0x13D0FFE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP415_OFFSET UNITYSDK_OFFSET(0x13D10300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP416_OFFSET UNITYSDK_OFFSET(0x13D105E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP417_OFFSET UNITYSDK_OFFSET(0x13D10810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP418_OFFSET UNITYSDK_OFFSET(0x13D10B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP419_OFFSET UNITYSDK_OFFSET(0x13D10E10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP41_OFFSET UNITYSDK_OFFSET(0x13CD0B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP420_OFFSET UNITYSDK_OFFSET(0x13D11040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP421_OFFSET UNITYSDK_OFFSET(0x13D11360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP422_OFFSET UNITYSDK_OFFSET(0x13D11590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP423_OFFSET UNITYSDK_OFFSET(0x13D11870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP424_OFFSET UNITYSDK_OFFSET(0x13D11AA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP425_OFFSET UNITYSDK_OFFSET(0x13D11DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP426_OFFSET UNITYSDK_OFFSET(0x13D120A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP427_OFFSET UNITYSDK_OFFSET(0x13D122D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP428_OFFSET UNITYSDK_OFFSET(0x13D125F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP429_OFFSET UNITYSDK_OFFSET(0x13D128D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP42_OFFSET UNITYSDK_OFFSET(0x13CD0D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP430_OFFSET UNITYSDK_OFFSET(0x13D12B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP431_OFFSET UNITYSDK_OFFSET(0x13D12E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP432_OFFSET UNITYSDK_OFFSET(0x13D13100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP433_OFFSET UNITYSDK_OFFSET(0x13D13330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP434_OFFSET UNITYSDK_OFFSET(0x13D13650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP435_OFFSET UNITYSDK_OFFSET(0x13D13880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP436_OFFSET UNITYSDK_OFFSET(0x13D13AD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP437_OFFSET UNITYSDK_OFFSET(0x13D13DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP438_OFFSET UNITYSDK_OFFSET(0x13D13FE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP439_OFFSET UNITYSDK_OFFSET(0x13D14300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP43_OFFSET UNITYSDK_OFFSET(0x13CD0F60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP440_OFFSET UNITYSDK_OFFSET(0x13D14600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP441_OFFSET UNITYSDK_OFFSET(0x13D14850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP442_OFFSET UNITYSDK_OFFSET(0x13D14BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP443_OFFSET UNITYSDK_OFFSET(0x13D14E90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP444_OFFSET UNITYSDK_OFFSET(0x13D150C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP445_OFFSET UNITYSDK_OFFSET(0x13D153E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP446_OFFSET UNITYSDK_OFFSET(0x13D156C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP447_OFFSET UNITYSDK_OFFSET(0x13D158F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP448_OFFSET UNITYSDK_OFFSET(0x13D15C10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP449_OFFSET UNITYSDK_OFFSET(0x13D15EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP44_OFFSET UNITYSDK_OFFSET(0x13CD1290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP450_OFFSET UNITYSDK_OFFSET(0x13D16120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP451_OFFSET UNITYSDK_OFFSET(0x13D16440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP452_OFFSET UNITYSDK_OFFSET(0x13D16720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP453_OFFSET UNITYSDK_OFFSET(0x13D16950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP454_OFFSET UNITYSDK_OFFSET(0x13D16C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP455_OFFSET UNITYSDK_OFFSET(0x13D16F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP456_OFFSET UNITYSDK_OFFSET(0x13D17180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP457_OFFSET UNITYSDK_OFFSET(0x13D174A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP458_OFFSET UNITYSDK_OFFSET(0x13D17780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP459_OFFSET UNITYSDK_OFFSET(0x13D179B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP45_OFFSET UNITYSDK_OFFSET(0x13CD1530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP460_OFFSET UNITYSDK_OFFSET(0x13D17CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP461_OFFSET UNITYSDK_OFFSET(0x13D17F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP462_OFFSET UNITYSDK_OFFSET(0x13D18130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP463_OFFSET UNITYSDK_OFFSET(0x13D18410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP464_OFFSET UNITYSDK_OFFSET(0x13D18640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP465_OFFSET UNITYSDK_OFFSET(0x13D18960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP466_OFFSET UNITYSDK_OFFSET(0x13D18C40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP467_OFFSET UNITYSDK_OFFSET(0x13D18E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP468_OFFSET UNITYSDK_OFFSET(0x13D19190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP469_OFFSET UNITYSDK_OFFSET(0x13D19470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP46_OFFSET UNITYSDK_OFFSET(0x13CD1840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP470_OFFSET UNITYSDK_OFFSET(0x13D196A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP471_OFFSET UNITYSDK_OFFSET(0x13D199C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP472_OFFSET UNITYSDK_OFFSET(0x13D19CA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP473_OFFSET UNITYSDK_OFFSET(0x13D19ED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP474_OFFSET UNITYSDK_OFFSET(0x13D1A1F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP475_OFFSET UNITYSDK_OFFSET(0x13D1A490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP476_OFFSET UNITYSDK_OFFSET(0x13D1A6F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP477_OFFSET UNITYSDK_OFFSET(0x13D1AAA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP478_OFFSET UNITYSDK_OFFSET(0x13D1ADC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP479_OFFSET UNITYSDK_OFFSET(0x13D1B0A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP47_OFFSET UNITYSDK_OFFSET(0x13CD1AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP480_OFFSET UNITYSDK_OFFSET(0x13D1B2D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP481_OFFSET UNITYSDK_OFFSET(0x13D1B5F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP482_OFFSET UNITYSDK_OFFSET(0x13D1B8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP483_OFFSET UNITYSDK_OFFSET(0x13D1BB00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP484_OFFSET UNITYSDK_OFFSET(0x13D1BE20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP485_OFFSET UNITYSDK_OFFSET(0x13D1C100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP486_OFFSET UNITYSDK_OFFSET(0x13D1C330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP487_OFFSET UNITYSDK_OFFSET(0x13D1C650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP488_OFFSET UNITYSDK_OFFSET(0x13D1C9C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP489_OFFSET UNITYSDK_OFFSET(0x13D1CC10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP48_OFFSET UNITYSDK_OFFSET(0x13CD1D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP490_OFFSET UNITYSDK_OFFSET(0x13D1CE40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP491_OFFSET UNITYSDK_OFFSET(0x13D1D110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP492_OFFSET UNITYSDK_OFFSET(0x13D1D3D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP493_OFFSET UNITYSDK_OFFSET(0x13D1D6B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP494_OFFSET UNITYSDK_OFFSET(0x13D1D8E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP495_OFFSET UNITYSDK_OFFSET(0x13D1DC00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP496_OFFSET UNITYSDK_OFFSET(0x13D1DEE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP497_OFFSET UNITYSDK_OFFSET(0x13D1E110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP498_OFFSET UNITYSDK_OFFSET(0x13D1E430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP499_OFFSET UNITYSDK_OFFSET(0x13D1E6D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP49_OFFSET UNITYSDK_OFFSET(0x13CD1F20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP4_OFFSET UNITYSDK_OFFSET(0x13CC9EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP500_OFFSET UNITYSDK_OFFSET(0x13D1E9B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP501_OFFSET UNITYSDK_OFFSET(0x13D1EBE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP502_OFFSET UNITYSDK_OFFSET(0x13D1EF00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP503_OFFSET UNITYSDK_OFFSET(0x13D1F290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP504_OFFSET UNITYSDK_OFFSET(0x13D1F570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP505_OFFSET UNITYSDK_OFFSET(0x13D1F7A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP506_OFFSET UNITYSDK_OFFSET(0x13D1FAC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP507_OFFSET UNITYSDK_OFFSET(0x13D1FDA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP508_OFFSET UNITYSDK_OFFSET(0x13D1FFD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP509_OFFSET UNITYSDK_OFFSET(0x13D202F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP50_OFFSET UNITYSDK_OFFSET(0x13CD2230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP510_OFFSET UNITYSDK_OFFSET(0x13D205D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP511_OFFSET UNITYSDK_OFFSET(0x13D20800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP512_OFFSET UNITYSDK_OFFSET(0x13D20B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP513_OFFSET UNITYSDK_OFFSET(0x13D20E00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP514_OFFSET UNITYSDK_OFFSET(0x13D21030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP515_OFFSET UNITYSDK_OFFSET(0x13D21350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP516_OFFSET UNITYSDK_OFFSET(0x13D215A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP517_OFFSET UNITYSDK_OFFSET(0x13D217F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP518_OFFSET UNITYSDK_OFFSET(0x13D21A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP519_OFFSET UNITYSDK_OFFSET(0x13D21C90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP51_OFFSET UNITYSDK_OFFSET(0x13CD24D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP520_OFFSET UNITYSDK_OFFSET(0x13D21EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP521_OFFSET UNITYSDK_OFFSET(0x13D22130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP522_OFFSET UNITYSDK_OFFSET(0x13D22380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP523_OFFSET UNITYSDK_OFFSET(0x13D225D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP524_OFFSET UNITYSDK_OFFSET(0x13D22820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP525_OFFSET UNITYSDK_OFFSET(0x13D22A70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP526_OFFSET UNITYSDK_OFFSET(0x13D22CC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP527_OFFSET UNITYSDK_OFFSET(0x13D22F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP528_OFFSET UNITYSDK_OFFSET(0x13D23160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP529_OFFSET UNITYSDK_OFFSET(0x13D233B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP52_OFFSET UNITYSDK_OFFSET(0x13CD2800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP530_OFFSET UNITYSDK_OFFSET(0x13D23600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP531_OFFSET UNITYSDK_OFFSET(0x13D23850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP532_OFFSET UNITYSDK_OFFSET(0x13D23AA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP533_OFFSET UNITYSDK_OFFSET(0x13D23CF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP534_OFFSET UNITYSDK_OFFSET(0x13D23FD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP535_OFFSET UNITYSDK_OFFSET(0x13D24200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP536_OFFSET UNITYSDK_OFFSET(0x13D24520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP537_OFFSET UNITYSDK_OFFSET(0x13D24800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP538_OFFSET UNITYSDK_OFFSET(0x13D24A30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP539_OFFSET UNITYSDK_OFFSET(0x13D24D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP53_OFFSET UNITYSDK_OFFSET(0x13CD2BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP540_OFFSET UNITYSDK_OFFSET(0x13D25030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP541_OFFSET UNITYSDK_OFFSET(0x13D25260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP542_OFFSET UNITYSDK_OFFSET(0x13D25540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP543_OFFSET UNITYSDK_OFFSET(0x13D25770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP544_OFFSET UNITYSDK_OFFSET(0x13D25A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP545_OFFSET UNITYSDK_OFFSET(0x13D25D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP546_OFFSET UNITYSDK_OFFSET(0x13D25FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP547_OFFSET UNITYSDK_OFFSET(0x13D262C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP548_OFFSET UNITYSDK_OFFSET(0x13D265A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP549_OFFSET UNITYSDK_OFFSET(0x13D267D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP54_OFFSET UNITYSDK_OFFSET(0x13CD2EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP550_OFFSET UNITYSDK_OFFSET(0x13D26AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP551_OFFSET UNITYSDK_OFFSET(0x13D26D40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP552_OFFSET UNITYSDK_OFFSET(0x13D26F70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP553_OFFSET UNITYSDK_OFFSET(0x13D27290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP554_OFFSET UNITYSDK_OFFSET(0x13D27570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP555_OFFSET UNITYSDK_OFFSET(0x13D277A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP556_OFFSET UNITYSDK_OFFSET(0x13D27AC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP557_OFFSET UNITYSDK_OFFSET(0x13D27DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP558_OFFSET UNITYSDK_OFFSET(0x13D27FD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP559_OFFSET UNITYSDK_OFFSET(0x13D282F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP55_OFFSET UNITYSDK_OFFSET(0x13CD3180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP560_OFFSET UNITYSDK_OFFSET(0x13D285D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP561_OFFSET UNITYSDK_OFFSET(0x13D28800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP562_OFFSET UNITYSDK_OFFSET(0x13D28B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP563_OFFSET UNITYSDK_OFFSET(0x13D28E00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP564_OFFSET UNITYSDK_OFFSET(0x13D29030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP565_OFFSET UNITYSDK_OFFSET(0x13D29350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP566_OFFSET UNITYSDK_OFFSET(0x13D29630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP567_OFFSET UNITYSDK_OFFSET(0x13D29860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP568_OFFSET UNITYSDK_OFFSET(0x13D29B80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP569_OFFSET UNITYSDK_OFFSET(0x13D29E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP56_OFFSET UNITYSDK_OFFSET(0x13CD33B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP570_OFFSET UNITYSDK_OFFSET(0x13D2A090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP571_OFFSET UNITYSDK_OFFSET(0x13D2A3B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP572_OFFSET UNITYSDK_OFFSET(0x13D2A6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP573_OFFSET UNITYSDK_OFFSET(0x13D2A920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP574_OFFSET UNITYSDK_OFFSET(0x13D2ACC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP575_OFFSET UNITYSDK_OFFSET(0x13D2AFA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP576_OFFSET UNITYSDK_OFFSET(0x13D2B1D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP577_OFFSET UNITYSDK_OFFSET(0x13D2B4F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP578_OFFSET UNITYSDK_OFFSET(0x13D2B7D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP579_OFFSET UNITYSDK_OFFSET(0x13D2BA00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP57_OFFSET UNITYSDK_OFFSET(0x13CD3650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP580_OFFSET UNITYSDK_OFFSET(0x13D2BD20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP581_OFFSET UNITYSDK_OFFSET(0x13D2BFC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP582_OFFSET UNITYSDK_OFFSET(0x13D2C2A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP583_OFFSET UNITYSDK_OFFSET(0x13D2C4D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP584_OFFSET UNITYSDK_OFFSET(0x13D2C7F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP585_OFFSET UNITYSDK_OFFSET(0x13D2CAD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP586_OFFSET UNITYSDK_OFFSET(0x13D2CD00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP587_OFFSET UNITYSDK_OFFSET(0x13D2D020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP588_OFFSET UNITYSDK_OFFSET(0x13D2D300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP589_OFFSET UNITYSDK_OFFSET(0x13D2D530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP58_OFFSET UNITYSDK_OFFSET(0x13CD3880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP590_OFFSET UNITYSDK_OFFSET(0x13D2D850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP591_OFFSET UNITYSDK_OFFSET(0x13D2DB30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP592_OFFSET UNITYSDK_OFFSET(0x13D2DD60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP593_OFFSET UNITYSDK_OFFSET(0x13D2E080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP594_OFFSET UNITYSDK_OFFSET(0x13D2E360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP595_OFFSET UNITYSDK_OFFSET(0x13D2E590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP596_OFFSET UNITYSDK_OFFSET(0x13D2E8B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP597_OFFSET UNITYSDK_OFFSET(0x13D2EB90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP598_OFFSET UNITYSDK_OFFSET(0x13D2EDC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP599_OFFSET UNITYSDK_OFFSET(0x13D2F0E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP59_OFFSET UNITYSDK_OFFSET(0x13CD3B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP5_OFFSET UNITYSDK_OFFSET(0x13CCA0D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP600_OFFSET UNITYSDK_OFFSET(0x13D2F3C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP601_OFFSET UNITYSDK_OFFSET(0x13D2F5F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP602_OFFSET UNITYSDK_OFFSET(0x13D2F910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP603_OFFSET UNITYSDK_OFFSET(0x13D2FBF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP604_OFFSET UNITYSDK_OFFSET(0x13D2FE20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP605_OFFSET UNITYSDK_OFFSET(0x13D30140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP606_OFFSET UNITYSDK_OFFSET(0x13D30420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP607_OFFSET UNITYSDK_OFFSET(0x13D30650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP608_OFFSET UNITYSDK_OFFSET(0x13D30970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP609_OFFSET UNITYSDK_OFFSET(0x13D30C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP60_OFFSET UNITYSDK_OFFSET(0x13CD3DD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP610_OFFSET UNITYSDK_OFFSET(0x13D30E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP611_OFFSET UNITYSDK_OFFSET(0x13D311A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP612_OFFSET UNITYSDK_OFFSET(0x13D31480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP613_OFFSET UNITYSDK_OFFSET(0x13D316B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP614_OFFSET UNITYSDK_OFFSET(0x13D319D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP615_OFFSET UNITYSDK_OFFSET(0x13D31CB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP616_OFFSET UNITYSDK_OFFSET(0x13D31EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP617_OFFSET UNITYSDK_OFFSET(0x13D32200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP618_OFFSET UNITYSDK_OFFSET(0x13D32430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP619_OFFSET UNITYSDK_OFFSET(0x13D32660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP61_OFFSET UNITYSDK_OFFSET(0x13CD4030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP620_OFFSET UNITYSDK_OFFSET(0x13D32940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP621_OFFSET UNITYSDK_OFFSET(0x13D32C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP622_OFFSET UNITYSDK_OFFSET(0x13D32E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP623_OFFSET UNITYSDK_OFFSET(0x13D330C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP624_OFFSET UNITYSDK_OFFSET(0x13D333A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP625_OFFSET UNITYSDK_OFFSET(0x13D335D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP626_OFFSET UNITYSDK_OFFSET(0x13D338F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP627_OFFSET UNITYSDK_OFFSET(0x13D33C10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP628_OFFSET UNITYSDK_OFFSET(0x13D33EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP629_OFFSET UNITYSDK_OFFSET(0x13D34120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP62_OFFSET UNITYSDK_OFFSET(0x13CD4260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP630_OFFSET UNITYSDK_OFFSET(0x13D34440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP631_OFFSET UNITYSDK_OFFSET(0x13D34720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP632_OFFSET UNITYSDK_OFFSET(0x13D34950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP633_OFFSET UNITYSDK_OFFSET(0x13D34C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP634_OFFSET UNITYSDK_OFFSET(0x13D34F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP635_OFFSET UNITYSDK_OFFSET(0x13D35180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP636_OFFSET UNITYSDK_OFFSET(0x13D354A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP637_OFFSET UNITYSDK_OFFSET(0x13D35780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP638_OFFSET UNITYSDK_OFFSET(0x13D359B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP639_OFFSET UNITYSDK_OFFSET(0x13D35CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP63_OFFSET UNITYSDK_OFFSET(0x13CD4540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP640_OFFSET UNITYSDK_OFFSET(0x13D35FB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP641_OFFSET UNITYSDK_OFFSET(0x13D361E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP642_OFFSET UNITYSDK_OFFSET(0x13D36500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP643_OFFSET UNITYSDK_OFFSET(0x13D36820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP644_OFFSET UNITYSDK_OFFSET(0x13D36B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP645_OFFSET UNITYSDK_OFFSET(0x13D36D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP646_OFFSET UNITYSDK_OFFSET(0x13D37050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP647_OFFSET UNITYSDK_OFFSET(0x13D37280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP648_OFFSET UNITYSDK_OFFSET(0x13D37560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP649_OFFSET UNITYSDK_OFFSET(0x13D37790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP64_OFFSET UNITYSDK_OFFSET(0x13CD47B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP650_OFFSET UNITYSDK_OFFSET(0x13D37AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP651_OFFSET UNITYSDK_OFFSET(0x13D37F20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP652_OFFSET UNITYSDK_OFFSET(0x13D38200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP653_OFFSET UNITYSDK_OFFSET(0x13D38430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP654_OFFSET UNITYSDK_OFFSET(0x13D38750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP655_OFFSET UNITYSDK_OFFSET(0x13D38A30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP656_OFFSET UNITYSDK_OFFSET(0x13D38C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP657_OFFSET UNITYSDK_OFFSET(0x13D38F80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP658_OFFSET UNITYSDK_OFFSET(0x13D391B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP659_OFFSET UNITYSDK_OFFSET(0x13D394D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP65_OFFSET UNITYSDK_OFFSET(0x13CD4A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP660_OFFSET UNITYSDK_OFFSET(0x13D397B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP661_OFFSET UNITYSDK_OFFSET(0x13D399E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP662_OFFSET UNITYSDK_OFFSET(0x13D39D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP663_OFFSET UNITYSDK_OFFSET(0x13D39FE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP664_OFFSET UNITYSDK_OFFSET(0x13D3A210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP665_OFFSET UNITYSDK_OFFSET(0x13D3A530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP666_OFFSET UNITYSDK_OFFSET(0x13D3A840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP667_OFFSET UNITYSDK_OFFSET(0x13D3ABE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP668_OFFSET UNITYSDK_OFFSET(0x13D3AEC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP669_OFFSET UNITYSDK_OFFSET(0x13D3B0F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP66_OFFSET UNITYSDK_OFFSET(0x13CD4C80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP670_OFFSET UNITYSDK_OFFSET(0x13D3B410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP671_OFFSET UNITYSDK_OFFSET(0x13D3B760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP672_OFFSET UNITYSDK_OFFSET(0x13D3BA00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP673_OFFSET UNITYSDK_OFFSET(0x13D3BDE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP674_OFFSET UNITYSDK_OFFSET(0x13D3C0C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP675_OFFSET UNITYSDK_OFFSET(0x13D3C2F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP676_OFFSET UNITYSDK_OFFSET(0x13D3C610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP677_OFFSET UNITYSDK_OFFSET(0x13D3C840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP678_OFFSET UNITYSDK_OFFSET(0x13D3CA70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP679_OFFSET UNITYSDK_OFFSET(0x13D3CCA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP67_OFFSET UNITYSDK_OFFSET(0x13CD4F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP680_OFFSET UNITYSDK_OFFSET(0x13D3CED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP681_OFFSET UNITYSDK_OFFSET(0x13D3D1B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP682_OFFSET UNITYSDK_OFFSET(0x13D3D3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP683_OFFSET UNITYSDK_OFFSET(0x13D3D700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP684_OFFSET UNITYSDK_OFFSET(0x13D3DB00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP685_OFFSET UNITYSDK_OFFSET(0x13D3DDE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP686_OFFSET UNITYSDK_OFFSET(0x13D3E010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP687_OFFSET UNITYSDK_OFFSET(0x13D3E330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP688_OFFSET UNITYSDK_OFFSET(0x13D3E610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP689_OFFSET UNITYSDK_OFFSET(0x13D3E840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP68_OFFSET UNITYSDK_OFFSET(0x13CD5200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP690_OFFSET UNITYSDK_OFFSET(0x13D3EB60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP691_OFFSET UNITYSDK_OFFSET(0x13D3EE40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP692_OFFSET UNITYSDK_OFFSET(0x13D3F070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP693_OFFSET UNITYSDK_OFFSET(0x13D3F390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP694_OFFSET UNITYSDK_OFFSET(0x13D3F5C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP695_OFFSET UNITYSDK_OFFSET(0x13D3F8A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP696_OFFSET UNITYSDK_OFFSET(0x13D3FAD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP697_OFFSET UNITYSDK_OFFSET(0x13D3FDF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP698_OFFSET UNITYSDK_OFFSET(0x13D400D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP699_OFFSET UNITYSDK_OFFSET(0x13D40300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP69_OFFSET UNITYSDK_OFFSET(0x13CD5530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP6_OFFSET UNITYSDK_OFFSET(0x13CCA3B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP700_OFFSET UNITYSDK_OFFSET(0x13D40620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP701_OFFSET UNITYSDK_OFFSET(0x13D40900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP702_OFFSET UNITYSDK_OFFSET(0x13D40B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP703_OFFSET UNITYSDK_OFFSET(0x13D40E50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP704_OFFSET UNITYSDK_OFFSET(0x13D41130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP705_OFFSET UNITYSDK_OFFSET(0x13D41360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP706_OFFSET UNITYSDK_OFFSET(0x13D41680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP707_OFFSET UNITYSDK_OFFSET(0x13D41960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP708_OFFSET UNITYSDK_OFFSET(0x13D41B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP709_OFFSET UNITYSDK_OFFSET(0x13D41EB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP70_OFFSET UNITYSDK_OFFSET(0x13CD58A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP710_OFFSET UNITYSDK_OFFSET(0x13D42190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP711_OFFSET UNITYSDK_OFFSET(0x13D423C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP712_OFFSET UNITYSDK_OFFSET(0x13D426E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP713_OFFSET UNITYSDK_OFFSET(0x13D429C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP714_OFFSET UNITYSDK_OFFSET(0x13D42BF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP715_OFFSET UNITYSDK_OFFSET(0x13D42F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP716_OFFSET UNITYSDK_OFFSET(0x13D431F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP717_OFFSET UNITYSDK_OFFSET(0x13D43420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP718_OFFSET UNITYSDK_OFFSET(0x13D43740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP719_OFFSET UNITYSDK_OFFSET(0x13D43990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP71_OFFSET UNITYSDK_OFFSET(0x13CD5B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP720_OFFSET UNITYSDK_OFFSET(0x13D43C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP721_OFFSET UNITYSDK_OFFSET(0x13D43EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP722_OFFSET UNITYSDK_OFFSET(0x13D441C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP723_OFFSET UNITYSDK_OFFSET(0x13D444A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP724_OFFSET UNITYSDK_OFFSET(0x13D446D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP725_OFFSET UNITYSDK_OFFSET(0x13D449F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP726_OFFSET UNITYSDK_OFFSET(0x13D44CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP727_OFFSET UNITYSDK_OFFSET(0x13D44F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP728_OFFSET UNITYSDK_OFFSET(0x13D45220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP729_OFFSET UNITYSDK_OFFSET(0x13D45500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP72_OFFSET UNITYSDK_OFFSET(0x13CD5D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP730_OFFSET UNITYSDK_OFFSET(0x13D45730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP731_OFFSET UNITYSDK_OFFSET(0x13D45A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP732_OFFSET UNITYSDK_OFFSET(0x13D45D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP733_OFFSET UNITYSDK_OFFSET(0x13D45F60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP734_OFFSET UNITYSDK_OFFSET(0x13D46280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP735_OFFSET UNITYSDK_OFFSET(0x13D46560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP736_OFFSET UNITYSDK_OFFSET(0x13D46790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP737_OFFSET UNITYSDK_OFFSET(0x13D46AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP738_OFFSET UNITYSDK_OFFSET(0x13D46D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP739_OFFSET UNITYSDK_OFFSET(0x13D47050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP73_OFFSET UNITYSDK_OFFSET(0x13CD6050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP740_OFFSET UNITYSDK_OFFSET(0x13D47330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP741_OFFSET UNITYSDK_OFFSET(0x13D47560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP742_OFFSET UNITYSDK_OFFSET(0x13D47880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP743_OFFSET UNITYSDK_OFFSET(0x13D47B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP744_OFFSET UNITYSDK_OFFSET(0x13D47D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP745_OFFSET UNITYSDK_OFFSET(0x13D480B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP746_OFFSET UNITYSDK_OFFSET(0x13D48390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP747_OFFSET UNITYSDK_OFFSET(0x13D485C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP748_OFFSET UNITYSDK_OFFSET(0x13D488E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP749_OFFSET UNITYSDK_OFFSET(0x13D48C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP74_OFFSET UNITYSDK_OFFSET(0x13CD62F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP750_OFFSET UNITYSDK_OFFSET(0x13D48EB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP751_OFFSET UNITYSDK_OFFSET(0x13D49260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP752_OFFSET UNITYSDK_OFFSET(0x13D49540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP753_OFFSET UNITYSDK_OFFSET(0x13D49770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP754_OFFSET UNITYSDK_OFFSET(0x13D49A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP755_OFFSET UNITYSDK_OFFSET(0x13D49D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP756_OFFSET UNITYSDK_OFFSET(0x13D49FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP757_OFFSET UNITYSDK_OFFSET(0x13D4A2C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP758_OFFSET UNITYSDK_OFFSET(0x13D4A5A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP759_OFFSET UNITYSDK_OFFSET(0x13D4A7D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP75_OFFSET UNITYSDK_OFFSET(0x13CD6520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP760_OFFSET UNITYSDK_OFFSET(0x13D4AAF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP761_OFFSET UNITYSDK_OFFSET(0x13D4ADD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP762_OFFSET UNITYSDK_OFFSET(0x13D4B000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP763_OFFSET UNITYSDK_OFFSET(0x13D4B320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP764_OFFSET UNITYSDK_OFFSET(0x13D4B600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP765_OFFSET UNITYSDK_OFFSET(0x13D4B830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP766_OFFSET UNITYSDK_OFFSET(0x13D4BB50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP767_OFFSET UNITYSDK_OFFSET(0x13D4BE30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP768_OFFSET UNITYSDK_OFFSET(0x13D4C060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP769_OFFSET UNITYSDK_OFFSET(0x13D4C380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP76_OFFSET UNITYSDK_OFFSET(0x13CD67C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP770_OFFSET UNITYSDK_OFFSET(0x13D4C660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP771_OFFSET UNITYSDK_OFFSET(0x13D4C890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP772_OFFSET UNITYSDK_OFFSET(0x13D4CBB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP773_OFFSET UNITYSDK_OFFSET(0x13D4CE90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP774_OFFSET UNITYSDK_OFFSET(0x13D4D0C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP775_OFFSET UNITYSDK_OFFSET(0x13D4D3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP776_OFFSET UNITYSDK_OFFSET(0x13D4D6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP777_OFFSET UNITYSDK_OFFSET(0x13D4D8F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP778_OFFSET UNITYSDK_OFFSET(0x13D4DC10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP779_OFFSET UNITYSDK_OFFSET(0x13D4DEF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP77_OFFSET UNITYSDK_OFFSET(0x13CD6A60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP780_OFFSET UNITYSDK_OFFSET(0x13D4E120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP781_OFFSET UNITYSDK_OFFSET(0x13D4E440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP782_OFFSET UNITYSDK_OFFSET(0x13D4E730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP783_OFFSET UNITYSDK_OFFSET(0x13D4EA10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP784_OFFSET UNITYSDK_OFFSET(0x13D4EC40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP785_OFFSET UNITYSDK_OFFSET(0x13D4EF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP786_OFFSET UNITYSDK_OFFSET(0x13D4F2A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP787_OFFSET UNITYSDK_OFFSET(0x13D4F530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP788_OFFSET UNITYSDK_OFFSET(0x13D4F8E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP789_OFFSET UNITYSDK_OFFSET(0x13D4FB30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP78_OFFSET UNITYSDK_OFFSET(0x13CD6D60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP790_OFFSET UNITYSDK_OFFSET(0x13D4FD80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP791_OFFSET UNITYSDK_OFFSET(0x13D50060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP792_OFFSET UNITYSDK_OFFSET(0x13D50290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP793_OFFSET UNITYSDK_OFFSET(0x13D505B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP794_OFFSET UNITYSDK_OFFSET(0x13D507E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP795_OFFSET UNITYSDK_OFFSET(0x13D50AC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP796_OFFSET UNITYSDK_OFFSET(0x13D50CF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP797_OFFSET UNITYSDK_OFFSET(0x13D51010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP798_OFFSET UNITYSDK_OFFSET(0x13D51310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP799_OFFSET UNITYSDK_OFFSET(0x13D51560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP79_OFFSET UNITYSDK_OFFSET(0x13CD70E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP7_OFFSET UNITYSDK_OFFSET(0x13CCA620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP800_OFFSET UNITYSDK_OFFSET(0x13D518B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP801_OFFSET UNITYSDK_OFFSET(0x13D51B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP802_OFFSET UNITYSDK_OFFSET(0x13D51DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP803_OFFSET UNITYSDK_OFFSET(0x13D520E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP804_OFFSET UNITYSDK_OFFSET(0x13D52330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP805_OFFSET UNITYSDK_OFFSET(0x13D52610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP806_OFFSET UNITYSDK_OFFSET(0x13D52840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP807_OFFSET UNITYSDK_OFFSET(0x13D52B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP808_OFFSET UNITYSDK_OFFSET(0x13D52D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP809_OFFSET UNITYSDK_OFFSET(0x13D530B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP80_OFFSET UNITYSDK_OFFSET(0x13CD7310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP810_OFFSET UNITYSDK_OFFSET(0x13D533D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP811_OFFSET UNITYSDK_OFFSET(0x13D536B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP812_OFFSET UNITYSDK_OFFSET(0x13D538E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP813_OFFSET UNITYSDK_OFFSET(0x13D53C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP814_OFFSET UNITYSDK_OFFSET(0x13D53EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP815_OFFSET UNITYSDK_OFFSET(0x13D54110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP816_OFFSET UNITYSDK_OFFSET(0x13D54430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP817_OFFSET UNITYSDK_OFFSET(0x13D54710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP818_OFFSET UNITYSDK_OFFSET(0x13D54940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP819_OFFSET UNITYSDK_OFFSET(0x13D54C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP81_OFFSET UNITYSDK_OFFSET(0x13CD7540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP820_OFFSET UNITYSDK_OFFSET(0x13D54F60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP821_OFFSET UNITYSDK_OFFSET(0x13D551B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP822_OFFSET UNITYSDK_OFFSET(0x13D55500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP823_OFFSET UNITYSDK_OFFSET(0x13D557E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP824_OFFSET UNITYSDK_OFFSET(0x13D55A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP825_OFFSET UNITYSDK_OFFSET(0x13D55D60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP826_OFFSET UNITYSDK_OFFSET(0x13D56000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP827_OFFSET UNITYSDK_OFFSET(0x13D56420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP828_OFFSET UNITYSDK_OFFSET(0x13D56700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP829_OFFSET UNITYSDK_OFFSET(0x13D56930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP82_OFFSET UNITYSDK_OFFSET(0x13CD7770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP830_OFFSET UNITYSDK_OFFSET(0x13D56C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP831_OFFSET UNITYSDK_OFFSET(0x13D56F60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP832_OFFSET UNITYSDK_OFFSET(0x13D571C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP833_OFFSET UNITYSDK_OFFSET(0x13D57530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP834_OFFSET UNITYSDK_OFFSET(0x13D57780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP835_OFFSET UNITYSDK_OFFSET(0x13D579B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP836_OFFSET UNITYSDK_OFFSET(0x13D57CB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP837_OFFSET UNITYSDK_OFFSET(0x13D57FE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP838_OFFSET UNITYSDK_OFFSET(0x13D582C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP839_OFFSET UNITYSDK_OFFSET(0x13D58650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP83_OFFSET UNITYSDK_OFFSET(0x13CD7B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP840_OFFSET UNITYSDK_OFFSET(0x13D589E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP841_OFFSET UNITYSDK_OFFSET(0x13D58C10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP842_OFFSET UNITYSDK_OFFSET(0x13D58F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP843_OFFSET UNITYSDK_OFFSET(0x13D59270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP844_OFFSET UNITYSDK_OFFSET(0x13D595A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP845_OFFSET UNITYSDK_OFFSET(0x13D597D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP846_OFFSET UNITYSDK_OFFSET(0x13D59B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP847_OFFSET UNITYSDK_OFFSET(0x13D59E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP848_OFFSET UNITYSDK_OFFSET(0x13D5A160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP849_OFFSET UNITYSDK_OFFSET(0x13D5A390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP84_OFFSET UNITYSDK_OFFSET(0x13CD7EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP850_OFFSET UNITYSDK_OFFSET(0x13D5A6F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP851_OFFSET UNITYSDK_OFFSET(0x13D5AA20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP852_OFFSET UNITYSDK_OFFSET(0x13D5AD50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP853_OFFSET UNITYSDK_OFFSET(0x13D5AFD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP854_OFFSET UNITYSDK_OFFSET(0x13D5B2E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP855_OFFSET UNITYSDK_OFFSET(0x13D5B660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP856_OFFSET UNITYSDK_OFFSET(0x13D5B9E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP857_OFFSET UNITYSDK_OFFSET(0x13D5BC10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP858_OFFSET UNITYSDK_OFFSET(0x13D5BF40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP859_OFFSET UNITYSDK_OFFSET(0x13D5C270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP85_OFFSET UNITYSDK_OFFSET(0x13CD8140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP860_OFFSET UNITYSDK_OFFSET(0x13D5C5A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP861_OFFSET UNITYSDK_OFFSET(0x13D5C8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP862_OFFSET UNITYSDK_OFFSET(0x13D5CC00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP863_OFFSET UNITYSDK_OFFSET(0x13D5CF30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP864_OFFSET UNITYSDK_OFFSET(0x13D5D160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP865_OFFSET UNITYSDK_OFFSET(0x13D5D490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP866_OFFSET UNITYSDK_OFFSET(0x13D5D7C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP867_OFFSET UNITYSDK_OFFSET(0x13D5DAF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP868_OFFSET UNITYSDK_OFFSET(0x13D5DD20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP869_OFFSET UNITYSDK_OFFSET(0x13D5E080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP86_OFFSET UNITYSDK_OFFSET(0x13CD84A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP870_OFFSET UNITYSDK_OFFSET(0x13D5E3B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP871_OFFSET UNITYSDK_OFFSET(0x13D5E6E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP872_OFFSET UNITYSDK_OFFSET(0x13D5E910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP873_OFFSET UNITYSDK_OFFSET(0x13D5EC70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP874_OFFSET UNITYSDK_OFFSET(0x13D5EFA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP875_OFFSET UNITYSDK_OFFSET(0x13D5F2D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP876_OFFSET UNITYSDK_OFFSET(0x13D5F600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP877_OFFSET UNITYSDK_OFFSET(0x13D5F930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP878_OFFSET UNITYSDK_OFFSET(0x13D5FC60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP879_OFFSET UNITYSDK_OFFSET(0x13D5FE90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP87_OFFSET UNITYSDK_OFFSET(0x13CD8860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP880_OFFSET UNITYSDK_OFFSET(0x13D601C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP881_OFFSET UNITYSDK_OFFSET(0x13D604F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP882_OFFSET UNITYSDK_OFFSET(0x13D60820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP883_OFFSET UNITYSDK_OFFSET(0x13D60A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP884_OFFSET UNITYSDK_OFFSET(0x13D60DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP885_OFFSET UNITYSDK_OFFSET(0x13D610E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP886_OFFSET UNITYSDK_OFFSET(0x13D61410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP887_OFFSET UNITYSDK_OFFSET(0x13D61640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP888_OFFSET UNITYSDK_OFFSET(0x13D61970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP889_OFFSET UNITYSDK_OFFSET(0x13D61CA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP88_OFFSET UNITYSDK_OFFSET(0x13CD8B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP890_OFFSET UNITYSDK_OFFSET(0x13D61FD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP891_OFFSET UNITYSDK_OFFSET(0x13D62200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP892_OFFSET UNITYSDK_OFFSET(0x13D62530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP893_OFFSET UNITYSDK_OFFSET(0x13D62860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP894_OFFSET UNITYSDK_OFFSET(0x13D62B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP895_OFFSET UNITYSDK_OFFSET(0x13D62EC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP896_OFFSET UNITYSDK_OFFSET(0x13D631F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP897_OFFSET UNITYSDK_OFFSET(0x13D63520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP898_OFFSET UNITYSDK_OFFSET(0x13D637C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP899_OFFSET UNITYSDK_OFFSET(0x13D63AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP89_OFFSET UNITYSDK_OFFSET(0x13CD8EC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP8_OFFSET UNITYSDK_OFFSET(0x13CCA8A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP900_OFFSET UNITYSDK_OFFSET(0x13D63EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP901_OFFSET UNITYSDK_OFFSET(0x13D64250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP902_OFFSET UNITYSDK_OFFSET(0x13D64480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP903_OFFSET UNITYSDK_OFFSET(0x13D647E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP904_OFFSET UNITYSDK_OFFSET(0x13D64B10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP905_OFFSET UNITYSDK_OFFSET(0x13D64E40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP906_OFFSET UNITYSDK_OFFSET(0x13D650E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP907_OFFSET UNITYSDK_OFFSET(0x13D65410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP908_OFFSET UNITYSDK_OFFSET(0x13D657C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP909_OFFSET UNITYSDK_OFFSET(0x13D65B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP90_OFFSET UNITYSDK_OFFSET(0x13CD9280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP910_OFFSET UNITYSDK_OFFSET(0x13D65DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP911_OFFSET UNITYSDK_OFFSET(0x13D66080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP912_OFFSET UNITYSDK_OFFSET(0x13D662B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP913_OFFSET UNITYSDK_OFFSET(0x13D665D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP914_OFFSET UNITYSDK_OFFSET(0x13D66800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP915_OFFSET UNITYSDK_OFFSET(0x13D66AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP916_OFFSET UNITYSDK_OFFSET(0x13D66D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP917_OFFSET UNITYSDK_OFFSET(0x13D67030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP918_OFFSET UNITYSDK_OFFSET(0x13D67310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP919_OFFSET UNITYSDK_OFFSET(0x13D67540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP91_OFFSET UNITYSDK_OFFSET(0x13CD96B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP920_OFFSET UNITYSDK_OFFSET(0x13D67860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP921_OFFSET UNITYSDK_OFFSET(0x13D67B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP922_OFFSET UNITYSDK_OFFSET(0x13D67D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP923_OFFSET UNITYSDK_OFFSET(0x13D68090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP924_OFFSET UNITYSDK_OFFSET(0x13D682C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP925_OFFSET UNITYSDK_OFFSET(0x13D684F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP926_OFFSET UNITYSDK_OFFSET(0x13D68720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP927_OFFSET UNITYSDK_OFFSET(0x13D68950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP928_OFFSET UNITYSDK_OFFSET(0x13D68B80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP929_OFFSET UNITYSDK_OFFSET(0x13D68E40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP92_OFFSET UNITYSDK_OFFSET(0x13CD98E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP930_OFFSET UNITYSDK_OFFSET(0x13D69090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP931_OFFSET UNITYSDK_OFFSET(0x13D69370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP932_OFFSET UNITYSDK_OFFSET(0x13D695A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP933_OFFSET UNITYSDK_OFFSET(0x13D697D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP934_OFFSET UNITYSDK_OFFSET(0x13D69C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP935_OFFSET UNITYSDK_OFFSET(0x13D69E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP936_OFFSET UNITYSDK_OFFSET(0x13D6A110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP937_OFFSET UNITYSDK_OFFSET(0x13D6A340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP938_OFFSET UNITYSDK_OFFSET(0x13D6A5C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP939_OFFSET UNITYSDK_OFFSET(0x13D6A840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP93_OFFSET UNITYSDK_OFFSET(0x13CD9D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP940_OFFSET UNITYSDK_OFFSET(0x13D6AA70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP941_OFFSET UNITYSDK_OFFSET(0x13D6ACA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP942_OFFSET UNITYSDK_OFFSET(0x13D6AF80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP943_OFFSET UNITYSDK_OFFSET(0x13D6B1B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP944_OFFSET UNITYSDK_OFFSET(0x13D6B490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP945_OFFSET UNITYSDK_OFFSET(0x13D6B6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP946_OFFSET UNITYSDK_OFFSET(0x13D6B9A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP947_OFFSET UNITYSDK_OFFSET(0x13D6BC80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP948_OFFSET UNITYSDK_OFFSET(0x13D6BEB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP949_OFFSET UNITYSDK_OFFSET(0x13D6C170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP94_OFFSET UNITYSDK_OFFSET(0x13CD9F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP950_OFFSET UNITYSDK_OFFSET(0x13D6C3A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP951_OFFSET UNITYSDK_OFFSET(0x13D6C6E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP952_OFFSET UNITYSDK_OFFSET(0x13D6C910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP953_OFFSET UNITYSDK_OFFSET(0x13D6CC40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP954_OFFSET UNITYSDK_OFFSET(0x13D6CE70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP955_OFFSET UNITYSDK_OFFSET(0x13D6D0A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP956_OFFSET UNITYSDK_OFFSET(0x13D6D2D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP957_OFFSET UNITYSDK_OFFSET(0x13D6D500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP958_OFFSET UNITYSDK_OFFSET(0x13D6D730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP959_OFFSET UNITYSDK_OFFSET(0x13D6D960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP95_OFFSET UNITYSDK_OFFSET(0x13CDA300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP960_OFFSET UNITYSDK_OFFSET(0x13D6DB90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP961_OFFSET UNITYSDK_OFFSET(0x13D6DDC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP962_OFFSET UNITYSDK_OFFSET(0x13D6DFF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP963_OFFSET UNITYSDK_OFFSET(0x13D6E220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP964_OFFSET UNITYSDK_OFFSET(0x13D6E450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP965_OFFSET UNITYSDK_OFFSET(0x13D6E680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP966_OFFSET UNITYSDK_OFFSET(0x13D6E8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP967_OFFSET UNITYSDK_OFFSET(0x13D6EB70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP96_OFFSET UNITYSDK_OFFSET(0x13CDA6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP97_OFFSET UNITYSDK_OFFSET(0x13CDA910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP98_OFFSET UNITYSDK_OFFSET(0x13CDAB40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP99_OFFSET UNITYSDK_OFFSET(0x13CDAEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP9_OFFSET UNITYSDK_OFFSET(0x13CCAB20)

namespace XLua
{
	inline static constexpr unsigned int DelegateBridge_TypeDefinitionIndex = 47853;

	class DelegateBridge : public ::XLua::DelegateBridgeBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LuaSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x62D20);
		}
		static ::Il2CppArray<::XLua::DelegateBridge*>** StaticGet_DelegateBridgeList()
		{
			return (::Il2CppArray<::XLua::DelegateBridge*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x62D28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_ValueTuple_bool_Proto_FightGameMode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveGachaPoolConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_CharacterInputData_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwitchHandSaveData_RPG_Client_SwitchHandCustomData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Reflection_MemberFilter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainPartyBuildUtils_PhotoWorldData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameModifier()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_ChapterRecordUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Exception()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_Motions_MonoEffectMotion_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IUpdateSelectedHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BookletLuaPanelParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveDungeonData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_BattleResultState_System_Collections_IEnumerator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarServantSkillExcelTable_IndexKey_RPG_GameCore_AvatarServantSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_CharacterInputData_UnityEngine_Vector3_UnityEngine_Vector3()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopGridView_int_int_int_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_AmphoreusTarotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_InGameTeamSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_ParticleSystem_OnNewParticleEmissionEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_GraphEventDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_AdvertisingIdentifierCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_ICommand()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_AvatarPropertyType_RPG_Client_GridFightRolePropertyConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_UIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveAdvTechTree()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchOutHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_BGMCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardTrackTeamParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_XLua_LuaDLL_lua_CSFunction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_IEnumerable_System_Func_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBriefDisplayData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_uint_RPG_Client_GridFightDivisionLevelConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGameFlow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBoardInfo_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_ParticleSystem_OnParticleEmissionBeginEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_SuperDropDown_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_bool_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_StatusExcelTable_IndexKey_RPG_GameCore_StatusRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11ED0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11ED8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightConsumableItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightGameModifier_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BattleAssetPreload_AssetPreloadGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GameEntity_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_ItemExcelTable_IndexKey_RPG_GameCore_ItemRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameRefHttpRspBody_RPG_Client_GridFightGameRefShareCodeRspBody()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Texture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Texture_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_ChapterRecordUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_AxisEventData_UnityEngine_UI_Selectable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_IComparer_RPG_AvatarSystem_IAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HipplenGameGradeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_ValueTuple_bool_Proto_FightGameMode_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ParseUrlCallBack()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_RPG_Client_ActivityModule_ActivityType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeCatchCatData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ActivityHotData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoEffect()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_EventTriggerListener_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12000);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12008);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12010);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12018);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12020);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_DialogueGroupExcelTable_IndexKey_RPG_GameCore_DialogueGroupRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12028);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12030);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Swipe2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12038);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12040);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchInHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12048);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12050);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12058);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_MissionCondition_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12060);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12068);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12070);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_UIElementTouchUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12078);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12080);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12088);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12090);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_UI_InputField_OnValidateInput()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12098);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PSSessionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Challenge_IChallengeEnvironmentHintViewModel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_AmphoreusTarotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_VoiceConfigExcelTable_IndexKey_RPG_GameCore_VoiceConfigRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_AllChunkDownloadComplete()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12100);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12108);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_SpSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12110);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12118);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_OverUIElementHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12120);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TurnInsertAbilityInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12128);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LightConeRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12130);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RechargeGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12138);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12140);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12148);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12150);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12158);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_SpSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12160);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12168);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12170);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12178);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_ChessRogueBoardCellDataItem_RPG_Client_MonoRogueHexChessBoardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12180);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12188);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_UpdateBonesDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12190);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_SubMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12198);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveGachaPoolConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DoubleTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_Google_Protobuf_ByteString()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournHexData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_XLua_LuaEnv_XLua_LuaBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_FriendRankingInfo_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12200);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_ISkeletonAnimationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12208);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12210);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12218);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12220);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12228);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12230);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12238);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12240);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12248);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12250);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12258);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightNPCConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12260);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MonsterSkillExcelTable_IndexKey_RPG_GameCore_MonsterSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12268);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12270);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_StartParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12278);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction3_string_string_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12280);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_HeadIconDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12288);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12290);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object_RPG_Client_AlleyTransportRouteState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12298);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IEndDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_OnAnimatorDispatchMovementJobFinishDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveAdvTechTree()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_InGameTeamSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseGameFlow_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_ValueTuple_bool_Proto_FightGameMode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_RPG_Client_ActivityModule_ActivityType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12300);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12308);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12310);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_RenderTexture_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12318);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12320);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12328);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PlanetFesToastItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12330);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LoadingManager_WorkDefCounter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12338);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12340);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12348);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12350);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseGameFlow_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12358);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_GameCore_ScreenTransferReason_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12360);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NewsTickerItem_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12368);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12370);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12378);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchUp2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12380);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12388);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveTeamAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12390);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12398);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ClockParkCardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GridFightEquipCategory_RPG_Client_GridFightEquipCategoryInfoConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_MainMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_SpSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_TeamType_RPG_GameCore_TeamType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LuaUIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_EventTriggerListener_VoidBaseEventDataDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TrainPartyBuildUtils_PhotoWorldData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_FriendRankingInfo_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_CustomRP_CaptureSetupCb()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12400);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12408);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_UI_Toggle_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12410);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_EnviromentSystem_EnviromentClip_OnEnvironmentClipLoadDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12418);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12420);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12428);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_PlayerBoardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12430);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12438);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12440);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12448);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LightConeRecommendData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12450);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12458);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12460);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12468);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12470);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TriggerEffectParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12478);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PlanetFesToastItem_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12480);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12488);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListView2_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12490);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string_UnityEngine_Sprite()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12498);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_DiceCombat_DiceCombatForceRefreshEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_string_TMPro_TMP_SpriteAsset()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightGameRefData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LightCone3D_UpdateFunc()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameRefData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12500);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12508);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12510);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PerformanceSkipOverrideExcelTable_IndexKey_RPG_GameCore_PerformanceSkipOverrideRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12518);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12520);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_RPGAnimationEvent_AnimationEventCallBack()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12528);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapProp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12530);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12538);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12540);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12548);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12550);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12558);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12560);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12568);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_SuperDropDown_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12570);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12578);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_RPG_GameCore_GameEntity_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12580);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_BaseGameFlow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12588);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LuaUIController_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12590);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RechargeGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12598);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_UIController_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FiveDimGameTransferScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ScheduleData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapGroupDef()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_LowMemoryCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_object_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ChimeraGameInstance_ActionReplayHook()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12600);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_int_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12608);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_HeadIconDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12610);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_XLua_LuaEnv_CustomLoader()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12618);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12620);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12628);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Collections_Specialized_NotifyCollectionChangedEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12630);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12638);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12640);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12648);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12650);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12658);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12660);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12668);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12670);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12678);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12680);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12688);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12690);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeCatchCatData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12698);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_UIFollow3DTarget()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_UINavigation_UINavigationArea_FirstSelectableDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_AvatarSystem_IAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_InstructionDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RuntimeGroupManager_HoYoGroupUnit_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IBeginDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12700);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveTeamAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12708);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightConsumableItemData_RPG_Client_GridFightConsumableInfo_GridFightConsumableItemUseParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12710);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12718);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12720);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12728);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12730);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12738);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12740);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12748);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_RelicRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12750);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12758);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12760);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12768);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeCatchCatData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12770);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12778);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12780);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12788);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_SuperScrollView_LoopListViewItem2_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12790);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardSetupScaleParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12798);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Reflection_Assembly_string_bool_System_Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IInitializePotentialDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TrainPartyBuildUtils_PhotoRarityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopGridView_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Playables_PlayableDirector()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12800);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12808);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12810);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12818);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12820);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12828);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12830);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SimpleTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12838);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_LeaveFiveDimGameScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12840);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12848);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12850);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12858);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombatDice()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12860);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12868);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveTeamSlotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12870);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12878);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12880);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12888);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_RPG_Client_UILayer()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12890);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_VirtualRankChimeraTeam_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12898);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RelicRecommendData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PenaconyEndmostChronicleEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameFormationEditor_EditEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Drag2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveDungeonData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_MeshAssignmentDelegateMultiple()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12900);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12908);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LightConeRecommendData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12910);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_long()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12918);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_RspHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12920);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarSkillTreeExcelTable_IndexKey_RPG_GameCore_AvatarSkillTreeRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12928);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_Match3_Match3GameState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12930);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12938);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_Dictionary_string_RPG_Client_GridFightGameRefInterectData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12940);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_EventHandler_RPG_Client_Promises_ExceptionEventArgs()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12948);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TeamTowers_TeamTowersPlayerSkillViewModel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12950);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12958);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12960);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12968);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12970);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PerformanceEExcelTable_IndexKey_RPG_GameCore_PerformanceERow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12978);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12980);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityModule_ActivityType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12988);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12990);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12998);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_MeshAssignmentDelegateSingle()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_FriendRankingInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnOnGeneralRspDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TrainPartyBuildUtils_PhotoRarityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveGachaPoolConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainParty_TrainPartyMeetingRankInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_CustomRP_CaptureCb()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_AvatarSystem_IAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction0_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnBackPressedCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopGridView()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_TalkSentenceConfigExcelTable_IndexKey_RPG_GameCore_TalkSentenceConfigRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDropHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12AF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_RewardExcelTable_IndexKey_RPG_GameCore_RewardRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int_int_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_System_Collections_Generic_List_RPG_Client_PopupMenuProxy_Option()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_AliveState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDeselectHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PayProductResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_ComponentModel_PropertyChangedEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_HedgehogTeam_EasyTouch_Gesture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12B98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_EnterFiveDimGameScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_UIBubbleManager_RPG_Client_UIBubbleItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListViewItem2_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_PSPlayGoReceiveParamBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12BF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_MainMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet1_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IMapObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_MissionCondition_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_AsyncOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardMoveToGrailParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12C98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerDownHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightDivisionConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopStaggeredGridView_int_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TrainPartyBuildUtils_PhotoWorldData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12CF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_BindingSourceType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D10);
		}
		static ::System::Boolean* StaticGet_Gen_Flag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_long_long()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_CaptainData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_UIEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_MainMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ISelectHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LuaUIController_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_TextmapExcelTable_IndexKey_RPG_GameCore_TextmapRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_SubMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12D98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightEquipItemData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Canvas_WillRenderCanvases()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_InputDeviceClass()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnServerConnectedDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IRIBuildingRendererList_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoEffect_RPG_Client_TriggerEffectCallbackParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12DF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Mesh_TMPro_TMP_TextInfo_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_UIController_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerExitHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_ValueTuple_bool_Proto_FightGameMode_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnSceneOperationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_UI_Graphic()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_FiveDim_MiniGameEventReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12E98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_int_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_PSPlayGo_EstimatedTimeParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12ED0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12ED8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_string_TMPro_TMP_FontAsset()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LightConeZoom_UpdateFunc()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12EF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_uint_RPG_PoolList_UnityEngine_Vector2Int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_Battle_CardAnimationEventArgs()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightGridData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12F98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardShowTeamParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarSkillExcelTable_IndexKey_RPG_GameCore_AvatarSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_GridItemPool_OnNewPrefabIns()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_HeadIconDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_NewsTickerItem_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListViewItem2_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_FlexibleGridItemPool_OnNewPrefabIns()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_SkeletonRendererDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightEquipItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12FF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13000);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13008);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13010);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13018);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MessageItemExcelTable_IndexKey_RPG_GameCore_MessageItemRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13020);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13028);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13030);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TwistEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13038);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13040);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_StaticListView_int_RPG_Client_StaticListViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13048);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13050);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_SubMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13058);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_ulong_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13060);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13068);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_EventHandler_RPG_Client_ActivityIdleLive_IdleLiveProtocolEventArgs()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13070);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13078);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13080);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13088);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Reflection_TypeFilter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13090);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13098);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListViewItem2_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MonsterExcelTable_IndexKey_RPG_GameCore_MonsterRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightRole_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IdleLiveAvatarPropertyType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_SuperDropDown_UnityEngine_UI_Dropdown_DropdownItem_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x130F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13100);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_UIFollow3DTarget_PostProcessDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13108);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13110);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13118);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13120);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13128);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13130);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseLobby_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13138);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13140);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13148);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_AkCallbackType_AkCallbackInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13150);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Transform_UnityEngine_GameObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13158);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_UI_ILayoutElement_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13160);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_BattleEventExcelTable_IndexKey_RPG_GameCore_BattleEventRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13168);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_BankCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13170);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13178);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_AvatarSystem_IAvatar_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13180);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13188);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_BaseEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13190);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapEntityDef()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13198);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_AnimationState_TrackEntryDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IScrollHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_RPG_GameCore_SubMissionState_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_FriendRankingInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Challenge_Tierce_ChallengeTierceMazeProgressHintViewModel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x131F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13200);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13208);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13210);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13218);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IdleLiveAvatarPropertyType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13220);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13228);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_DiceCombat_DiceCombatPerformanceBattleEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13230);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13238);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_SubMissionExcelTable_IndexKey_RPG_GameCore_SubMissionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13240);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_int_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13248);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13250);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HipplenGameWaitEventTask_HipplenGameEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13258);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_ProgressParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13260);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13268);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LocalizedInputField_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13270);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13278);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13280);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarPromotionExcelTable_IndexKey_RPG_GameCore_AvatarPromotionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13288);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IIgnoreHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13290);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Reflection_AssemblyName_System_Reflection_Assembly()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13298);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventureCharacterController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_NotifyHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PlaneEventExcelTable_IndexKey_RPG_GameCore_PlaneEventRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x132F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_bool_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13300);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseLobby()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13308);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13310);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13318);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_CaptainData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13320);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TriggerEffectParams_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13328);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13330);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13338);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13340);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13348);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveTeamAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13350);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_UnityEngine_Texture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13358);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13360);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13368);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13370);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13378);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13380);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13388);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13390);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_SuperDropDown_UnityEngine_UI_Dropdown_DropdownItem_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13398);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ISubmitHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ICancelHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_CaptainData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardShowGrailParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TextmapDownloadManager_TextmapApplyChangeErrorCode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x133F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightForgeConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13400);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBoardInfo_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13408);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightDivisionStageConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13410);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13418);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainPartyBuildUtils_PhotoRarityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13420);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_InputDevice()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13428);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13430);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13438);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightTutorialStageConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13440);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_UI_Graphic_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13448);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13450);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_GameCore_FixPoint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13458);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_GameEntity_RPG_GameCore_AliveState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13460);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13468);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13470);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13478);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13480);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13488);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13490);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GridFightManager_GridFightCustomValue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13498);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_EventCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveDungeonData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_LogCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_LuaUIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_EasyTouchIsReadyHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_ActivityAlley_AlleyPackComponent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Camera_CameraCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_AvatarSystem_IAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x134F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13500);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13508);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13510);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_UnityEngine_GameObject_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13518);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerClickHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13520);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13528);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TextmapDownloadManager_TextmapSizeErrorCode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13530);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13538);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13540);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TriggerPerformanceEndParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13548);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13550);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MonsterGuideTagConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13558);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_OpenWorld_StreamingBlock()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13560);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13568);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13570);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13578);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13580);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13588);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_BaseLobby()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13590);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13598);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ActivityHotData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveAdvTechTree()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_UIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_UnityEngine_RenderTexture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_OnRecycleChanged()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x135F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchDown2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13600);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13608);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13610);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13618);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MainMissionExcelTable_IndexKey_RPG_GameCore_MainMissionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13620);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_AmphoreusTarotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13628);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13630);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_SubMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13638);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet3_XLua_LuaTable_int_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13640);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13648);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13650);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13658);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13660);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13668);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13670);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RechargeGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13678);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_HandleResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13680);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13688);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13690);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnGeneralNotifyDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13698);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveTeamSlotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_MainMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_TMPro_TMP_TextInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x136F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TwistHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13700);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13708);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13710);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13718);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13720);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13728);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13730);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_IdleLiveAvatarPropertyType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13738);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13740);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13748);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBriefDisplayData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13750);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13758);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_string_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13760);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13768);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13770);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13778);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13780);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_ChapterRecordUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13788);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IMoveHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13790);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13798);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopFlexibleGridView_int_SuperScrollView_LoopFlexibleGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Vector2Int_UnityEngine_Vector2Int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_UnityEngine_SkinnedMeshRenderer_UnityEngine_Mesh()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_System_Collections_Generic_List_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerEnterHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapGroupDef_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_TurnBasedModifierInstance_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RelicRecommendData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x137F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MatchPlayRecord()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13800);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13808);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13810);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13818);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13820);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13828);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13830);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13838);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_StaticListViewItem_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13840);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_AsyncCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13848);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13850);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13858);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13860);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13868);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13870);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardMoveToTeamParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13878);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_AliveState_RPG_GameCore_EntityReviveParamBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13880);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13888);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_RenderTexture_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13890);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnAssetOperationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13898);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DoubleTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_ThreadDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_MonitoringCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchDownHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_uint_RPG_Client_GridFightEnemyDifficultyLvConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ScheduleTask()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_CustomButton_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x138F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13900);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13908);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13910);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13918);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13920);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13928);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13930);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13938);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_SpecialAvatarExcelTable_IndexKey_RPG_GameCore_SpecialAvatarRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13940);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13948);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13950);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13958);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13960);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13968);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13970);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13978);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13980);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13988);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13990);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_System_Collections_Generic_List_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13998);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AnimatorButton()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_StageExcelTable_IndexKey_RPG_GameCore_StageRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardShowLineParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x139F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_LightConeRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_TurnBasedModifierInstance_RPG_GameCore_GameCoreParamData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_MoveDirection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_RectTransform_ReapplyDrivenProperties()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Texture_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GameEntity_RPG_GameCore_FixPoint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_IntPtr()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_int_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13A98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_uint_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Cancel2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlayerBoardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FightGeneralScNotify()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13AF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListView2_int_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_RenderTexture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchCancelHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MazeBuffExcelTable_IndexKey_RPG_GameCore_MazeBuffRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseLobby_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13B98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_MVector3()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PropExcelTable_IndexKey_RPG_GameCore_PropRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardShowRewardParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13BF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_MeshGeneratorDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveTeamSlotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_InGameTeamSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SimpleTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardSimpleTalkParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13C98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Transform_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_AnimationState_TrackEntryEventDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x13CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP0_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp2(::UnityEngine::EventSystems::MoveDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP2_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp3(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP4_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp5(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP5_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp6(::System::Boolean& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP6_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp7(::System::String* a1, ::System::Boolean& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP7_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp8(::System::String* a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP8_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp9(::System::String* a1, ::System::String* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp10(::System::String* a1, ::System::String* a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP10_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp11(::XLua::LuaTable* a1, ::System::Boolean& a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP11_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp12(::XLua::LuaTable* a1, ::RPG::Client::UILayer& a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UILayer&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP12_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp13(::XLua::LuaTable* a1, ::System::String*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP13_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp14(::XLua::LuaTable* a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP14_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp15(::System::String* a1, ::XLua::LuaTable*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP15_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp16(::System::String* a1, ::System::Int32 a2, ::XLua::LuaTable*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP16_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp17(::System::String* a1, ::System::String* a2, ::XLua::LuaTable*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP17_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp18(::System::String* a1, ::System::UInt32 a2, ::XLua::LuaTable*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP18_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp19(::System::String* a1, ::System::Object* a2, ::XLua::LuaTable*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP19_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp20(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::XLua::LuaTable*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP20_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp21(::System::String* a1, ::System::String* a2, ::System::String* a3, ::XLua::LuaTable*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP21_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __Gen_Delegate_Imp22(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP22_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp23(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP23_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp24(::XLua::LuaTable* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP24_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp25(::XLua::LuaTable* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP25_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp26(::XLua::LuaTable* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP26_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp27(::XLua::LuaTable* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP27_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp28(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP28_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp29(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP29_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListViewItem2* __Gen_Delegate_Imp30(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP30_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopGridViewItem* __Gen_Delegate_Imp31(::XLua::LuaTable* a1, ::SuperScrollView::LoopGridView* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP31_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::StaticListViewItem* __Gen_Delegate_Imp32(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP32_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 __Gen_Delegate_Imp33(::XLua::LuaTable* a1, ::RPG::Client::SuperDropDown* a2, ::UnityEngine::UI::Dropdown_DropdownItem* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP33_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* __Gen_Delegate_Imp34(::XLua::LuaTable* a1, ::SuperScrollView::LoopStaggeredGridView* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP34_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp35(::XLua::LuaTable* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP35_OFFSET))(this, a1, a2);
		}

		::System::Int32 __Gen_Delegate_Imp36(::XLua::LuaTable* a1, ::SuperScrollView::LoopListViewItem2* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP36_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp37(::UnityEngine::UI::Toggle* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP37_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp38(::XLua::LuaTable* a1, ::RPG::Client::NewsTickerItem* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::NewsTickerItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP38_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp39(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP39_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp40(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP40_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp41(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP41_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp42(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP42_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp43(::SuperScrollView::LoopGridView* a1, ::SuperScrollView::LoopGridViewItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP43_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp44(::SuperScrollView::LoopGridView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP44_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp45(::System::UInt32 a1, ::RPG::GameCore::SubMissionState a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SubMissionState, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP45_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp46(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP46_OFFSET))(this, a1, a2);
		}

		::System::String* __Gen_Delegate_Imp47()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP47_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp48(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP48_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Sprite* __Gen_Delegate_Imp49(::System::String* a1)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP49_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp50(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP50_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp51(::SuperScrollView::LoopListView2* a1, ::SuperScrollView::LoopListViewItem2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP51_OFFSET))(this, a1, a2);
		}

		::System::Single __Gen_Delegate_Imp52(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Single(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP52_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 __Gen_Delegate_Imp53(::RPG::Client::StaticListViewItem* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::StaticListViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP53_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp54(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP54_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp55(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP55_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp56(::Class_2_0748E0E1B406181B* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0748E0E1B406181B*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP56_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp57(::Class_2_0748E0E1B406181B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0748E0E1B406181B*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP57_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp58(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP58_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp59(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP59_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp60(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::TeamType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP60_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp61(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP61_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp62(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP62_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp63(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP63_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp64(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP64_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp65(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2, ::Class_1_43BD383C98B4C0C5_117* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_117*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP65_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp66(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP66_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp67(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP67_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp68(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP68_OFFSET))(this, a1, a2, a3, a4);
		}

		::AKRESULT __Gen_Delegate_Imp69(::System::Boolean a1, ::System::Object* a2)
		{
			return ((::AKRESULT(*)(::PVOID, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP69_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp70(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP70_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp71(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP71_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp72(::UnityEngine::EventSystems::AxisEventData* a1, ::UnityEngine::UI::Selectable* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP72_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp73()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP73_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp74(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP74_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp75(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP75_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp76(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP76_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp77(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP77_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* __Gen_Delegate_Imp78(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP78_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp79(::Class_1_D17272E82AE804C2_370* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_370*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP79_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp80(::Class_1_D17272E82AE804C2_373* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_373*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP80_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp81(::Class_1_D17272E82AE804C2_371* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_371*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP81_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* __Gen_Delegate_Imp82(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP82_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightItemConfig* __Gen_Delegate_Imp83(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP83_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp84(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP84_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightRolePropertyConfig* __Gen_Delegate_Imp85(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP85_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemConfig* __Gen_Delegate_Imp86(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP86_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp87(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP87_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightDivisionStageConfig* __Gen_Delegate_Imp88(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightDivisionStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP88_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightDivisionConfig* __Gen_Delegate_Imp89(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightDivisionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP89_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEnemyDifficultyLvConfig* __Gen_Delegate_Imp90(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightEnemyDifficultyLvConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP90_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp91(::RPG::GameCore::GridFightManager_GridFightCustomValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager_GridFightCustomValue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP91_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightDivisionLevelConfig* __Gen_Delegate_Imp92(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightDivisionLevelConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP92_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp93(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP93_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTutorialStageConfig* __Gen_Delegate_Imp94(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTutorialStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP94_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPCConfig* __Gen_Delegate_Imp95(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightNPCConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP95_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp96(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP96_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp97(::RPG::Client::ClockParkCardItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP97_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipCategoryInfoConfig* __Gen_Delegate_Imp98(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::RPG::Client::GridFightEquipCategoryInfoConfig*(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP98_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeConfig* __Gen_Delegate_Imp99(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP99_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp100(::RPG::Client::ScheduleTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleTask*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP100_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_378* __Gen_Delegate_Imp101(::System::UInt32 a1)
		{
			return ((::Class_0_16E4307DCC419505_378*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP101_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp102(::RPG::GameCore::HudType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP102_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp103(::RPG::GameCore::HudType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP103_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp104(::RPG::GameCore::HudType a1, ::RPG::GameCore::HudType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::HudType, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP104_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp105(::RPG::Client::MessageItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP105_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp106(::RPG::Client::MessageItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP106_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp107(::RPG::Client::MessageItemData* a1, ::RPG::Client::MessageItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MessageItemData*, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP107_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp108(::RPG::Client::NPCWarningTipConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP108_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp109(::RPG::Client::NPCWarningTipConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP109_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp110(::RPG::Client::NPCWarningTipConfig* a1, ::RPG::Client::NPCWarningTipConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP110_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp111(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP111_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp112(::UnityEngine::EventSystems::EventTrigger_Entry* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP112_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp113(::UnityEngine::EventSystems::EventTrigger_Entry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP113_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp114(::UnityEngine::EventSystems::EventTrigger_Entry* a1, ::UnityEngine::EventSystems::EventTrigger_Entry* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP114_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp115(::RPG::GameCore::GachaType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP115_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp116(::RPG::GameCore::GachaType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP116_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp117(::RPG::GameCore::GachaType a1, ::RPG::GameCore::GachaType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GachaType, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP117_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp118(::Class_1_D0948460F4810867* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D0948460F4810867*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP118_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp119(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP119_OFFSET))(this, a1, a2);
		}

		::System::Reflection::Assembly* __Gen_Delegate_Imp120(::System::Reflection::AssemblyName* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP120_OFFSET))(this, a1);
		}

		::System::Type* __Gen_Delegate_Imp121(::System::Reflection::Assembly* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::Assembly*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP121_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp122(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP122_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp123(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP123_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp124(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP124_OFFSET))(this, a1);
		}

		::System::Char __Gen_Delegate_Imp125(::System::String* a1, ::System::Int32 a2, ::System::Char a3)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP125_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp126(::Class_1_718B8238EA10D3FF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_718B8238EA10D3FF*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP126_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp127(::XLua::LuaTable* a1, ::RPG::GameCore::ScreenTransferReason a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP127_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp128(::RPG::Client::GlobalDispatchData_ServerData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP128_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp129(::RPG::Client::GlobalDispatchData_ServerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP129_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp130(::RPG::Client::GlobalDispatchData_ServerData* a1, ::RPG::Client::GlobalDispatchData_ServerData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP130_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp131(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP131_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp132(::RPG::GameCore::RewardRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP132_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp133(::RPG::GameCore::TextmapRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP133_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp134(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP134_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp135(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP135_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp136(::RPG::GameCore::ItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP136_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp137(::RPG::GameCore::MainMissionRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP137_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* __Gen_Delegate_Imp138(::System::String*& a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP138_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp139(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP139_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __Gen_Delegate_Imp140(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP140_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp141(::RPG::GameCore::AvatarPromotionRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP141_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp142(::RPG::GameCore::StageRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP142_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp143(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP143_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp144(::SuperScrollView::LoopListViewItem2* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP144_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp145(::RPG::GameCore::AvatarSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP145_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp146(::Unity::Collections::NativeArray_1<::System::Byte>& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP146_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp147(::RPG::GameCore::SubMissionRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP147_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp148(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP148_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp149(::Struct_2_CC45B4503679E14E a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP149_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp150(::Proto::ItemCost* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP150_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp151(::Proto::ItemCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP151_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp152(::Proto::ItemCost* a1, ::Proto::ItemCost* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Proto::ItemCost*, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP152_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp153(::RPG::GameCore::AvatarSkillTreeRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP153_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp154(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP154_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp155(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP155_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp156(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP156_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp157(::RPG::GameCore::StatusRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP157_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp158(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP158_OFFSET))(this, a1, a2);
		}

		::System::String* __Gen_Delegate_Imp159(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP159_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint __Gen_Delegate_Imp160(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP160_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp161(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP161_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp162(::RPG::GameCore::MonsterRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP162_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp163(::RPG::GameCore::MonsterSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP163_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp164(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP164_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp165(::System::String* a1, ::UnityEngine::SkinnedMeshRenderer* a2, ::UnityEngine::Mesh* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP165_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp166(::RPG::Client::BookContentData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP166_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp167(::RPG::Client::BookContentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP167_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp168(::RPG::Client::BookContentData* a1, ::RPG::Client::BookContentData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BookContentData*, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP168_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp169(::RPG::GameCore::MazeBuffRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP169_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp170(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP170_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp171(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP171_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp172(::RPG::Client::ChallengeData* a1, ::RPG::Client::ChallengeData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengeData*, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP172_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp173(::RPG::GameCore::PropRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP173_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 __Gen_Delegate_Imp174(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP174_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp175(::RPG::Client::UIFollow3DTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP175_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp176(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP176_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp177(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP177_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp178(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP178_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp179(::RPG::Client::PCResolution* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP179_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp180(::RPG::Client::PCResolution* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP180_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp181(::RPG::Client::PCResolution* a1, ::RPG::Client::PCResolution* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PCResolution*, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP181_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp182(::RPG::GameCore::StageMonsterRewardItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP182_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp183(::RPG::GameCore::StageMonsterRewardItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP183_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp184(::RPG::GameCore::StageMonsterRewardItem* a1, ::RPG::GameCore::StageMonsterRewardItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP184_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp185(::RPG::GameCore::VoiceConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP185_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp186(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP186_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp187(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP187_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp188(::RPG::Client::MainMissionData* a1, ::RPG::Client::MainMissionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MainMissionData*, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP188_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp189(::RPG::GameCore::DialogueGroupRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP189_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp190(::RPG::GameCore::PlaneEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlaneEventRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP190_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp191(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP191_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp192(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP192_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp193(::RPG::Client::PrefHashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP193_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp194(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP194_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp195(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP195_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp196(::RPG::Client::BaseGachaPoolData* a1, ::RPG::Client::BaseGachaPoolData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP196_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp197(::RPG::Client::ItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP197_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp198(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP198_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp199(::RPG::Client::ItemData* a1, ::RPG::Client::ItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemData*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP199_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp200(::RPG::Client::GachaItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP200_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp201(::RPG::Client::GachaItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP201_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp202(::RPG::Client::GachaItemData* a1, ::RPG::Client::GachaItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP202_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp203(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP203_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp204(::XLua::LuaTable* a1, ::SuperScrollView::LoopListViewItem2* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP204_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp205(::RPG::GameCore::AdventurePlayerRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP205_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp206(::RPG::GameCore::AdventurePlayerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP206_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp207(::RPG::GameCore::AdventurePlayerRow* a1, ::RPG::GameCore::AdventurePlayerRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP207_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp208(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP208_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp209(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP209_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp210(::RPG::Client::ChallengeGroupData* a1, ::RPG::Client::ChallengeGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP210_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp211(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP211_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp212(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP212_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp213(::RPG::Client::RogueBuffData* a1, ::RPG::Client::RogueBuffData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueBuffData*, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP213_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp214(::RPG::Client::PrefHashSet_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP214_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp215(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP215_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp216(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP216_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp217(::RPG::Client::PayProductResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PayProductResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP217_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp218(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP218_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp219(::XLua::LuaTable* a1, ::RPG::Client::SuperDropDown* a2, ::UnityEngine::UI::Dropdown_DropdownItem* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP219_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __Gen_Delegate_Imp220(::XLua::LuaTable* a1, ::RPG::Client::SuperDropDown* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP220_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp221(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP221_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp222(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP222_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp223(::RPG::GameCore::TalkSentenceConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP223_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp224(::RPG::GameCore::BattleEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP224_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp225(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP225_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp226(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP226_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp227(::RPG::Client::ItemDisplayData* a1, ::RPG::Client::ItemDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP227_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp228(::AkMonitorErrorCode a1, ::AkMonitorErrorLevel a2, ::System::UInt32 a3, ::System::UInt64 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::AkMonitorErrorCode, ::AkMonitorErrorLevel, ::System::UInt32, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP228_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void __Gen_Delegate_Imp229(::RPG::GameCore::MessageItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP229_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp230(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP230_OFFSET))(this, a1);
		}

		::TMPro::TMP_FontAsset* __Gen_Delegate_Imp231(::System::Int32 a1, ::System::String* a2)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP231_OFFSET))(this, a1, a2);
		}

		::TMPro::TMP_SpriteAsset* __Gen_Delegate_Imp232(::System::Int32 a1, ::System::String* a2)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP232_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp233(::TMPro::TMP_TextInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_TextInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP233_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp234(::UnityEngine::Mesh* a1, ::TMPro::TMP_TextInfo* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::TMPro::TMP_TextInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP234_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp235(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP235_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp236(::RPG::GameCore::TurnBasedModifierInstance* a1, ::Class_1_5469D397DAE62876* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP236_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp237(::RPG::GameCore::PerformanceERow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP237_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp238(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP238_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp239(::RPG::Client::PunkLordData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP239_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp240(::RPG::Client::PunkLordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP240_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp241(::RPG::Client::PunkLordData* a1, ::RPG::Client::PunkLordData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PunkLordData*, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP241_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp242(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP242_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp243(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP243_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp244(::RPG::Client::SubMissionData* a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP244_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp245(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP245_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp246(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP246_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp247(::RPG::GameCore::MapEntryRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP247_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp248(::RPG::GameCore::MapEntryRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP248_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp249(::RPG::GameCore::MapEntryRow* a1, ::RPG::GameCore::MapEntryRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MapEntryRow*, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP249_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp250(::RPG::GameCore::LevelMinimapSection* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP250_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp251(::RPG::GameCore::LevelMinimapSection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP251_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp252(::RPG::GameCore::LevelMinimapSection* a1, ::RPG::GameCore::LevelMinimapSection* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP252_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp253(::RPG::Client::PrefDictionary_2<::System::String*, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP253_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp254(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP254_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp255(::RPG::Client::SettledPunkLordData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP255_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp256(::RPG::Client::SettledPunkLordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP256_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp257(::RPG::Client::SettledPunkLordData* a1, ::RPG::Client::SettledPunkLordData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SettledPunkLordData*, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP257_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp258(::RPG::GameCore::ActivityFightGroupRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP258_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp259(::RPG::GameCore::ActivityFightGroupRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP259_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp260(::RPG::GameCore::ActivityFightGroupRow* a1, ::RPG::GameCore::ActivityFightGroupRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP260_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp261(::RPG::Client::FightActivityGroupInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP261_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp262(::RPG::Client::FightActivityGroupInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP262_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp263(::RPG::Client::FightActivityGroupInfo a1, ::RPG::Client::FightActivityGroupInfo a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP263_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp264(::Class_1_7E9AC8675DA072FB_1* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7E9AC8675DA072FB_1*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP264_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp265(::Class_1_7E9AC8675DA072FB_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7E9AC8675DA072FB_1*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP265_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp266(::Class_1_7E9AC8675DA072FB_1* a1, ::Class_1_7E9AC8675DA072FB_1* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_7E9AC8675DA072FB_1*, ::Class_1_7E9AC8675DA072FB_1*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP266_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp267(::XLua::LuaTable* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP267_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp268(::Class_1_4CEDF380BFE8D93F* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_4CEDF380BFE8D93F*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP268_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp269(::Class_1_4CEDF380BFE8D93F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CEDF380BFE8D93F*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP269_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp270(::Class_1_4CEDF380BFE8D93F* a1, ::Class_1_4CEDF380BFE8D93F* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_4CEDF380BFE8D93F*, ::Class_1_4CEDF380BFE8D93F*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP270_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp271(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP271_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp272(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP272_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp273(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP273_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_9D40F9D90905A4A4*>* __Gen_Delegate_Imp274()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_9D40F9D90905A4A4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP274_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp275(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP275_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp276(::RPG::Client::AetherDivideGymDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP276_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp277(::RPG::Client::AetherDivideGymDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP277_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp278(::RPG::Client::AetherDivideGymDataItem* a1, ::RPG::Client::AetherDivideGymDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP278_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp279(::System::Object* a1, ::RPG::Client::AlleyTransportRouteState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::AlleyTransportRouteState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP279_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp280(::RPG::Client::PrefHashSet_1<::RPG::Client::ActivityModule_ActivityType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::RPG::Client::ActivityModule_ActivityType>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP280_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp281(::XLua::LuaTable* a1, ::RPG::Client::ActivityAlley::AlleyPackComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP281_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp282(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP282_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp283(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP283_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp284(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP284_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp285(::Class_1_43BD383C98B4C0C5_116* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_116*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP285_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp286(::Class_2_E6C0556C909C8254* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E6C0556C909C8254*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP286_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp287(::Class_0_16E4307DCC419505_375* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP287_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp288(::Class_0_16E4307DCC419505_376* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_376*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP288_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp289(::Class_0_16E4307DCC419505_374* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_374*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP289_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp290(::RPG::Client::AlleyEventInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP290_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp291(::RPG::Client::AlleyEventInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP291_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp292(::RPG::Client::AlleyEventInfo a1, ::RPG::Client::AlleyEventInfo a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AlleyEventInfo, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP292_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp293(::RPG::Client::FantasticStoryParagraphData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP293_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp294(::RPG::Client::FantasticStoryParagraphData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP294_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp295(::RPG::Client::FantasticStoryParagraphData* a1, ::RPG::Client::FantasticStoryParagraphData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP295_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp296(::XLua::LuaTable* a1, ::RPG::Client::ChessRogueBoardCellDataItem* a2, ::RPG::Client::MonoRogueHexChessBoardItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::ChessRogueBoardCellDataItem*, ::RPG::Client::MonoRogueHexChessBoardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP296_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp297(::Class_1_2CEBEAE10BD13F6B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CEBEAE10BD13F6B*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP297_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp298(::RPG::Client::FuncEntranceData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP298_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp299(::RPG::Client::FuncEntranceData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP299_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp300(::RPG::Client::FuncEntranceData* a1, ::RPG::Client::FuncEntranceData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FuncEntranceData*, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP300_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp301(::UnityEngine::Mesh* a1, ::UnityEngine::Material* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP301_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp302(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Mesh*>* a2, ::Il2CppArray<::UnityEngine::Material*>* a3, ::Il2CppArray<::UnityEngine::Texture*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP302_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __Gen_Delegate_Imp303(::Spine::Unity::SkeletonGraphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP303_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp304(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP304_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp305(::Spine::Unity::ISkeletonAnimation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP305_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp306(::Spine::Unity::MeshGeneratorBuffers a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorBuffers))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP306_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp307(::RPG::Client::Prop::JigsawItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP307_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp308(::RPG::Client::Prop::JigsawItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP308_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp309(::RPG::Client::Prop::JigsawItemData* a1, ::RPG::Client::Prop::JigsawItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP309_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp310(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP310_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp311(::RPG::Client::FantasticStoryChapterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP311_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp312(::RPG::Client::FantasticStoryChapterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP312_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp313(::RPG::Client::FantasticStoryChapterData* a1, ::RPG::Client::FantasticStoryChapterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP313_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp314(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP314_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp315(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP315_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp316(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP316_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp317(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP317_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp318(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP318_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp319(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP319_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp320(::RPG::GameCore::RogueImageRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP320_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp321(::RPG::GameCore::RogueImageRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP321_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp322(::RPG::GameCore::RogueImageRow* a1, ::RPG::GameCore::RogueImageRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueImageRow*, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP322_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp323(::RPG::GameCore::RogueDLCMainStoryRewardRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP323_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp324(::RPG::GameCore::RogueDLCMainStoryRewardRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP324_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp325(::RPG::GameCore::RogueDLCMainStoryRewardRow* a1, ::RPG::GameCore::RogueDLCMainStoryRewardRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP325_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp326(::RPG::GameCore::CEBattlePresetConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP326_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp327(::RPG::GameCore::CEBattlePresetConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP327_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp328(::RPG::GameCore::CEBattlePresetConfig* a1, ::RPG::GameCore::CEBattlePresetConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP328_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp329(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP329_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp330(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP330_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp331(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP331_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp332(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP332_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp333(::RPG::GameCore::ItemConfig* a1, ::RPG::GameCore::ItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP333_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp334(::RPG::Client::PrefDictionary_2<::RPG::Client::ActivityModule_ActivityType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::RPG::Client::ActivityModule_ActivityType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP334_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp335(::RPG::Client::ActivityModule_ActivityType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule_ActivityType, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP335_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp336(::RPG::GameCore::RogueDLCAeonCrossRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP336_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp337(::RPG::GameCore::RogueDLCAeonCrossRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP337_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp338(::RPG::GameCore::RogueDLCAeonCrossRow* a1, ::RPG::GameCore::RogueDLCAeonCrossRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP338_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp339(::RPG::GameCore::RogueBuffRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP339_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp340(::RPG::GameCore::RogueBuffRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP340_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp341(::RPG::GameCore::RogueBuffRow* a1, ::RPG::GameCore::RogueBuffRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP341_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp342(::RPG::GameCore::RogueNousAeonCrossRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP342_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp343(::RPG::GameCore::RogueNousAeonCrossRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP343_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp344(::RPG::GameCore::RogueNousAeonCrossRow* a1, ::RPG::GameCore::RogueNousAeonCrossRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP344_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp345(::RPG::GameCore::RogueNousAeonRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP345_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp346(::RPG::GameCore::RogueNousAeonRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP346_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp347(::RPG::GameCore::RogueNousAeonRow* a1, ::RPG::GameCore::RogueNousAeonRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP347_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp348(::RPG::Client::RogueNousDiceSlotDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP348_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp349(::RPG::Client::RogueNousDiceSlotDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP349_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp350(::RPG::Client::RogueNousDiceSlotDataItem* a1, ::RPG::Client::RogueNousDiceSlotDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP350_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp351(::Proto::StrongChallengeAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP351_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp352(::Proto::StrongChallengeAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP352_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp353(::Proto::StrongChallengeAvatar* a1, ::Proto::StrongChallengeAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Proto::StrongChallengeAvatar*, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP353_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 __Gen_Delegate_Imp354(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP354_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp355(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP355_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp356(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP356_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp357(::RPG::GameCore::ConditionParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP357_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp358(::RPG::GameCore::ConditionParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP358_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp359(::RPG::GameCore::ConditionParam* a1, ::RPG::GameCore::ConditionParam* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ConditionParam*, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP359_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp360(::RPG::GameCore::ItemComefromRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP360_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp361(::RPG::GameCore::ItemComefromRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP361_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp362(::RPG::GameCore::ItemComefromRow* a1, ::RPG::GameCore::ItemComefromRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP362_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp363(::RPG::Client::MonsterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP363_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp364(::RPG::Client::MonsterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP364_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp365(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP365_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp366(::XLua::LuaTable* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP366_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp367(::XLua::LuaTable* a1, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP367_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp368(::RPG::Client::RogueNousDiceSurfaceDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP368_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp369(::RPG::Client::RogueNousDiceSurfaceDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP369_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp370(::RPG::Client::RogueNousDiceSurfaceDataItem* a1, ::RPG::Client::RogueNousDiceSurfaceDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP370_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp371(::RPG::Client::RogueNousDiceBranchDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP371_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp372(::RPG::Client::RogueNousDiceBranchDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP372_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp373(::RPG::Client::RogueNousDiceBranchDataItem* a1, ::RPG::Client::RogueNousDiceBranchDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP373_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp374(::RPG::Client::MonoSceneObjClickHint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP374_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp375(::RPG::Client::MonoSceneObjClickHint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP375_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp376(::RPG::Client::MonoSceneObjClickHint* a1, ::RPG::Client::MonoSceneObjClickHint* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP376_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp377(::RPG::Client::TextID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP377_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp378(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP378_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp379(::RPG::Client::TextID a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP379_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp380(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP380_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp381(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP381_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp382(::RPG::Client::CompanionMissionActivityBannerData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP382_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp383(::RPG::Client::CompanionMissionActivityBannerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP383_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp384(::RPG::Client::CompanionMissionActivityBannerData* a1, ::RPG::Client::CompanionMissionActivityBannerData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP384_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp385(::RPG::Client::RogueTournAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP385_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp386(::RPG::Client::RogueTournAreaDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP386_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp387(::RPG::Client::RogueTournAreaDataItem* a1, ::RPG::Client::RogueTournAreaDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP387_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp388(::RPG::GameCore::EvolveBuildGearEquipInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP388_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp389(::RPG::GameCore::EvolveBuildGearEquipInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP389_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp390(::RPG::GameCore::EvolveBuildGearEquipInfo* a1, ::RPG::GameCore::EvolveBuildGearEquipInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP390_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp391(::RPG::Client::EvolveBuildMixData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP391_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp392(::RPG::Client::EvolveBuildMixData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP392_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp393(::RPG::Client::EvolveBuildMixData* a1, ::RPG::Client::EvolveBuildMixData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP393_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp394(::RPG::Client::ClockParkAttributeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP394_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp395(::RPG::Client::ClockParkAttributeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP395_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp396(::RPG::Client::ClockParkAttributeType a1, ::RPG::Client::ClockParkAttributeType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP396_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp397(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::PoolList_1<::UnityEngine::Vector2Int>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP397_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp398(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP398_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp399(::RPG::Client::LittleGame::Match3::Match3GameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP399_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp400(::XLua::LuaTable* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP400_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp401(::UnityEngine::Transform* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP401_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp402(::RPG::Client::SwordTrainingSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP402_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp403(::RPG::Client::SwordTrainingSkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP403_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp404(::RPG::Client::SwordTrainingSkillData* a1, ::RPG::Client::SwordTrainingSkillData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP404_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp405(::RPG::GameCore::PerformanceIDPair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP405_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp406(::RPG::GameCore::PerformanceIDPair* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP406_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp407(::RPG::GameCore::PerformanceIDPair* a1, ::RPG::GameCore::PerformanceIDPair* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP407_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp408(::InControl::BindingSourceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSourceType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP408_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp409(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP409_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp410(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP410_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp411(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* a1, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP411_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp412(::RPG::Client::MultipleDropData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP412_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp413(::RPG::Client::MultipleDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP413_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp414(::RPG::Client::MultipleDropData* a1, ::RPG::Client::MultipleDropData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MultipleDropData*, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP414_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp415(::RPG::Client::TrainParty::TrainPartyRecordGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP415_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp416(::RPG::Client::TrainParty::TrainPartyRecordGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP416_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp417(::RPG::Client::TrainParty::TrainPartyRecordGroup* a1, ::RPG::Client::TrainParty::TrainPartyRecordGroup* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP417_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp418(::RPG::Client::ActivitySummonStage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP418_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp419(::RPG::Client::ActivitySummonStage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP419_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp420(::RPG::Client::ActivitySummonStage* a1, ::RPG::Client::ActivitySummonStage* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivitySummonStage*, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP420_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp421(::RPG::Client::PrefHashSet_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP421_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp422(::RPG::Client::SwordTrainingEndingDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP422_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp423(::RPG::Client::SwordTrainingEndingDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP423_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp424(::RPG::Client::SwordTrainingEndingDataItem* a1, ::RPG::Client::SwordTrainingEndingDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP424_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp425(::RPG::Client::RogueMagicAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP425_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp426(::RPG::Client::RogueMagicAreaDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP426_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp427(::RPG::Client::RogueMagicAreaDataItem* a1, ::RPG::Client::RogueMagicAreaDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP427_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp428(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP428_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp429(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP429_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp430(::RPG::Client::RogueMagicUnitDataItem* a1, ::RPG::Client::RogueMagicUnitDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP430_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp431(::RPG::Client::SuitRecommendAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP431_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp432(::RPG::Client::SuitRecommendAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP432_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp433(::RPG::Client::SuitRecommendAvatarData* a1, ::RPG::Client::SuitRecommendAvatarData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP433_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp434(::RPG::Client::PrefDictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP434_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp435(::Class_1_3497D086B05ACE3A* a1, ::Class_1_BEB73AACF0CDA957* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP435_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp436(::RPG::Client::SwitchHandCoinData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP436_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp437(::RPG::Client::SwitchHandCoinData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP437_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp438(::RPG::Client::SwitchHandCoinData* a1, ::RPG::Client::SwitchHandCoinData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP438_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp439(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP439_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp440(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP440_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp441(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP441_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp442(::RPG::Client::RogueMagicScepterDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP442_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp443(::RPG::Client::RogueMagicScepterDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP443_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp444(::RPG::Client::RogueMagicScepterDataItem* a1, ::RPG::Client::RogueMagicScepterDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP444_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp445(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP445_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp446(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP446_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp447(::RPG::Client::ActivityPanelData* a1, ::RPG::Client::ActivityPanelData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityPanelData*, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP447_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp448(::RPG::Client::TarotBookCharacter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP448_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp449(::RPG::Client::TarotBookCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP449_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp450(::RPG::Client::TarotBookCharacter* a1, ::RPG::Client::TarotBookCharacter* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookCharacter*, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP450_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp451(::RPG::Client::TarotBookCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP451_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp452(::RPG::Client::TarotBookCard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP452_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp453(::RPG::Client::TarotBookCard* a1, ::RPG::Client::TarotBookCard* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookCard*, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP453_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp454(::RPG::Client::TarotBookClue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP454_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp455(::RPG::Client::TarotBookClue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP455_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp456(::RPG::Client::TarotBookClue* a1, ::RPG::Client::TarotBookClue* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookClue*, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP456_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp457(::RPG::Client::TarotBookStory* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP457_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp458(::RPG::Client::TarotBookStory* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP458_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp459(::RPG::Client::TarotBookStory* a1, ::RPG::Client::TarotBookStory* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookStory*, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP459_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp460(::RPG::Client::BookletLuaPanelParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletLuaPanelParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP460_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp461(::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP461_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp462(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP462_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp463(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP463_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp464(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1, ::RPG::Client::IRogueTournBuildRefTeamMemberData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP464_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp465(::RPG::Client::NavMap::MappingInfoNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP465_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp466(::RPG::Client::NavMap::MappingInfoNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP466_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp467(::RPG::Client::NavMap::MappingInfoNode* a1, ::RPG::Client::NavMap::MappingInfoNode* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP467_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp468(::RPG::Client::GachaGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP468_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp469(::RPG::Client::GachaGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP469_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp470(::RPG::Client::GachaGroupData* a1, ::RPG::Client::GachaGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaGroupData*, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP470_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp471(::RPG::Client::TarotBookReadReward* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP471_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp472(::RPG::Client::TarotBookReadReward* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP472_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp473(::RPG::Client::TarotBookReadReward* a1, ::RPG::Client::TarotBookReadReward* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookReadReward*, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP473_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp474(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP474_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp475(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP475_OFFSET))(this, a1);
		}

		::XLua::LuaBase* __Gen_Delegate_Imp476(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::XLua::LuaBase*(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP476_OFFSET))(this, a1, a2);
		}

		::System::Int32 __Gen_Delegate_Imp477(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP477_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp478(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP478_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp479(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP479_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp480(::RPG::GameCore::RelicType a1, ::RPG::GameCore::RelicType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP480_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp481(::RPG::Client::TarotBookInteraction* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP481_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp482(::RPG::Client::TarotBookInteraction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP482_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp483(::RPG::Client::TarotBookInteraction* a1, ::RPG::Client::TarotBookInteraction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP483_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp484(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP484_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp485(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP485_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp486(::RPG::Client::ActivityMarble::MarbleSealData* a1, ::RPG::Client::ActivityMarble::MarbleSealData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP486_OFFSET))(this, a1, a2);
		}

		::System::UInt32 __Gen_Delegate_Imp487(::XLua::LuaTable* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP487_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp488(::Class_0_16E4307DCC419505_379* a1, ::Class_0_16E4307DCC419505_379* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_379*, ::Class_0_16E4307DCC419505_379*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP488_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp489(::RPG::GameCore::AvatarServantSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP489_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp490(::XLua::LuaTable* a1, ::RPG::Client::PlanetFesToastItem* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP490_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp491(::XLua::LuaTable* a1, ::RPG::Client::PlanetFesToastItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP491_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp492(::RPG::Client::PlanetFesThemeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP492_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp493(::RPG::Client::PlanetFesThemeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP493_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp494(::RPG::Client::PlanetFesThemeData* a1, ::RPG::Client::PlanetFesThemeData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP494_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp495(::RPG::Client::PlanetFesCardData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP495_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp496(::RPG::Client::PlanetFesCardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP496_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp497(::RPG::Client::PlanetFesCardData* a1, ::RPG::Client::PlanetFesCardData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesCardData*, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP497_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp498(::RPG::Client::VirtualRankChimeraTeam* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualRankChimeraTeam*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP498_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp499(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP499_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp500(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP500_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp501(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP501_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* __Gen_Delegate_Imp502(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP502_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp503(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP503_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp504(::RPG::Client::QuestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP504_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp505(::RPG::Client::QuestData* a1, ::RPG::Client::QuestData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::QuestData*, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP505_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp506(::RPG::Client::FightFestPhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP506_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp507(::RPG::Client::FightFestPhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP507_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp508(::RPG::Client::FightFestPhase* a1, ::RPG::Client::FightFestPhase* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestPhase*, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP508_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp509(::RPG::Client::FightFestCoachSkill* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP509_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp510(::RPG::Client::FightFestCoachSkill* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP510_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp511(::RPG::Client::FightFestCoachSkill* a1, ::RPG::Client::FightFestCoachSkill* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP511_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp512(::RPG::Client::MatchThreeBirdData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP512_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp513(::RPG::Client::MatchThreeBirdData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP513_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp514(::RPG::Client::MatchThreeBirdData* a1, ::RPG::Client::MatchThreeBirdData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP514_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp515(::UnityEngine::EventSystems::IPointerEnterHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerEnterHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP515_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp516(::UnityEngine::EventSystems::IPointerExitHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerExitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP516_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp517(::UnityEngine::EventSystems::IPointerDownHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerDownHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP517_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp518(::UnityEngine::EventSystems::IPointerUpHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerUpHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP518_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp519(::UnityEngine::EventSystems::IPointerClickHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerClickHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP519_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp520(::UnityEngine::EventSystems::IInitializePotentialDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IInitializePotentialDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP520_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp521(::UnityEngine::EventSystems::IBeginDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IBeginDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP521_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp522(::UnityEngine::EventSystems::IDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP522_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp523(::UnityEngine::EventSystems::IEndDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IEndDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP523_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp524(::UnityEngine::EventSystems::IDropHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDropHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP524_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp525(::UnityEngine::EventSystems::IScrollHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IScrollHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP525_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp526(::UnityEngine::EventSystems::IUpdateSelectedHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IUpdateSelectedHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP526_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp527(::UnityEngine::EventSystems::ISelectHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ISelectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP527_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp528(::UnityEngine::EventSystems::IDeselectHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDeselectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP528_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp529(::UnityEngine::EventSystems::IMoveHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP529_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp530(::UnityEngine::EventSystems::ISubmitHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ISubmitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP530_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp531(::UnityEngine::EventSystems::ICancelHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ICancelHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP531_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp532(::UnityEngine::EventSystems::IIgnoreHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IIgnoreHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP532_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp533(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP533_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp534(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP534_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp535(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* a1, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP535_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp536(::RPG::Client::IPlanetFesBuff* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP536_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp537(::RPG::Client::IPlanetFesBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP537_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp538(::RPG::Client::IPlanetFesBuff* a1, ::RPG::Client::IPlanetFesBuff* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP538_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp539(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP539_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp540(::InControl::InputDevice* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP540_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp541(::RPG::Client::WheelItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP541_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp542(::RPG::Client::WheelItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP542_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp543(::RPG::Client::WheelItem* a1, ::RPG::Client::WheelItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::WheelItem*, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP543_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp544(::RPG::Client::EvolveBuildCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP544_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp545(::RPG::Client::EvolveBuildCard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP545_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp546(::RPG::Client::EvolveBuildCard* a1, ::RPG::Client::EvolveBuildCard* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildCard*, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP546_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp547(::RPG::Client::EvolveBuildScMixData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP547_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp548(::RPG::Client::EvolveBuildScMixData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP548_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp549(::RPG::Client::EvolveBuildScMixData* a1, ::RPG::Client::EvolveBuildScMixData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP549_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp550(::XLua::LuaTable* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP550_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp551(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP551_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp552(::RPG::Client::EquipmentItemData* a1, ::RPG::Client::EquipmentItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP552_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp553(::Enum_3_DFCB42601400F441 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP553_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp554(::Enum_3_DFCB42601400F441 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP554_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp555(::Enum_3_DFCB42601400F441 a1, ::Enum_3_DFCB42601400F441 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Enum_3_DFCB42601400F441, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP555_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp556(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP556_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp557(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP557_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp558(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP558_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp559(::RPG::GameCore::MarblePVPRankConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP559_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp560(::RPG::GameCore::MarblePVPRankConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP560_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp561(::RPG::GameCore::MarblePVPRankConfigRow* a1, ::RPG::GameCore::MarblePVPRankConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP561_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp562(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP562_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp563(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP563_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp564(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* a1, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP564_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp565(::RPG::Client::PlanetFesTradingCardOfferItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP565_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp566(::RPG::Client::PlanetFesTradingCardOfferItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP566_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp567(::RPG::Client::PlanetFesTradingCardOfferItem* a1, ::RPG::Client::PlanetFesTradingCardOfferItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP567_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp568(::RPG::Client::ElfRestaurantRecipeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP568_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp569(::RPG::Client::ElfRestaurantRecipeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP569_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp570(::RPG::Client::ElfRestaurantRecipeData* a1, ::RPG::Client::ElfRestaurantRecipeData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP570_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp571(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP571_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp572(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP572_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp573(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP573_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp574(::RPG::Client::ElfShopItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP574_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp575(::RPG::Client::ElfShopItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP575_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp576(::RPG::Client::ElfShopItemData* a1, ::RPG::Client::ElfShopItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfShopItemData*, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP576_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp577(::RPG::GameCore::MazeBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP577_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp578(::RPG::GameCore::MazeBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP578_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp579(::RPG::GameCore::MazeBuffData* a1, ::RPG::GameCore::MazeBuffData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MazeBuffData*, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP579_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp580(::RPG::Client::NewsTickerItem* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NewsTickerItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP580_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp581(::RPG::Client::PlanetFesTradingCardApplyItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP581_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp582(::RPG::Client::PlanetFesTradingCardApplyItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP582_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp583(::RPG::Client::PlanetFesTradingCardApplyItem* a1, ::RPG::Client::PlanetFesTradingCardApplyItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP583_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp584(::RPG::Client::PlanetFesSkillPhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP584_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp585(::RPG::Client::PlanetFesSkillPhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP585_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp586(::RPG::Client::PlanetFesSkillPhase* a1, ::RPG::Client::PlanetFesSkillPhase* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP586_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp587(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP587_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp588(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP588_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp589(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::RPG::Client::IRogueTournBuildRefDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP589_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp590(::RPG::Client::ParkourRank* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP590_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp591(::RPG::Client::ParkourRank* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP591_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp592(::RPG::Client::ParkourRank* a1, ::RPG::Client::ParkourRank* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ParkourRank*, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP592_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp593(::RPG::Client::IFateGameRoundSettleDmgSourceItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP593_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp594(::RPG::Client::IFateGameRoundSettleDmgSourceItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP594_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp595(::RPG::Client::IFateGameRoundSettleDmgSourceItem* a1, ::RPG::Client::IFateGameRoundSettleDmgSourceItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP595_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp596(::RPG::Client::AvatarEnhancedHint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP596_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp597(::RPG::Client::AvatarEnhancedHint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP597_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp598(::RPG::Client::AvatarEnhancedHint* a1, ::RPG::Client::AvatarEnhancedHint* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP598_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp599(::RPG::Client::FateHandbookHouguItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP599_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp600(::RPG::Client::FateHandbookHouguItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP600_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp601(::RPG::Client::FateHandbookHouguItem* a1, ::RPG::Client::FateHandbookHouguItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP601_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp602(::RPG::Client::FateHandbookReijuItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP602_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp603(::RPG::Client::FateHandbookReijuItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP603_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp604(::RPG::Client::FateHandbookReijuItem* a1, ::RPG::Client::FateHandbookReijuItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP604_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp605(::RPG::Client::GridFightOrbData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP605_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp606(::RPG::Client::GridFightOrbData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP606_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp607(::RPG::Client::GridFightOrbData* a1, ::RPG::Client::GridFightOrbData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbData*, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP607_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp608(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP608_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp609(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP609_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp610(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP610_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp611(::RPG::Client::BaseGachaGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP611_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp612(::RPG::Client::BaseGachaGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP612_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp613(::RPG::Client::BaseGachaGroupData* a1, ::RPG::Client::BaseGachaGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP613_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp614(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP614_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp615(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP615_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp616(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* a1, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP616_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp617(::RPG::GameCore::HipplenGameGradeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP617_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp618(::Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP618_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp619(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP619_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp620(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP620_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp621(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP621_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp622(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP622_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp623(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP623_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp624(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP624_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp625(::RPG::Client::GridFightMonsterAffixConfig* a1, ::RPG::Client::GridFightMonsterAffixConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP625_OFFSET))(this, a1, a2);
		}

		::System::Single __Gen_Delegate_Imp626(::UnityEngine::UI::ILayoutElement* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP626_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp627(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP627_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp628(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP628_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp629(::RPG::Client::GridFightTrait* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP629_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp630(::RPG::Client::DrinkMakerCheersGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP630_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp631(::RPG::Client::DrinkMakerCheersGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP631_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp632(::RPG::Client::DrinkMakerCheersGroupData* a1, ::RPG::Client::DrinkMakerCheersGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP632_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp633(::RPG::Client::DrinkMakerCheersGuestCommentData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP633_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp634(::RPG::Client::DrinkMakerCheersGuestCommentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP634_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp635(::RPG::Client::DrinkMakerCheersGuestCommentData* a1, ::RPG::Client::DrinkMakerCheersGuestCommentData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP635_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp636(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP636_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp637(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP637_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp638(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP638_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp639(::RPG::Client::RoleTrialActivityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP639_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp640(::RPG::Client::RoleTrialActivityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP640_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp641(::RPG::Client::RoleTrialActivityData* a1, ::RPG::Client::RoleTrialActivityData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP641_OFFSET))(this, a1, a2);
		}

		::System::Int32 __Gen_Delegate_Imp642(::RPG::Client::HeadIconDisplayData* a1, ::RPG::Client::HeadIconDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HeadIconDisplayData*, ::RPG::Client::HeadIconDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP642_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp643(::RPG::GameCore::MainMissionSortedItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP643_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp644(::RPG::GameCore::MainMissionSortedItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP644_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp645(::RPG::GameCore::MainMissionSortedItem* a1, ::RPG::GameCore::MainMissionSortedItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP645_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp646(::RPG::GameCore::PerformanceSkipOverrideRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP646_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp647(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP647_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp648(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP648_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp649(::RPG::Client::GridFightMonsterCampConfig* a1, ::RPG::Client::GridFightMonsterCampConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP649_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* __Gen_Delegate_Imp650(::XLua::LuaTable* a1, ::SuperScrollView::LoopFlexibleGridView* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP650_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp651(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP651_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp652(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP652_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp653(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP653_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp654(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP654_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp655(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP655_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp656(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP656_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp657(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP657_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp658(::RPG::Client::GridFightRole* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP658_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp659(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP659_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp660(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP660_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp661(::RPG::Client::GridFightAugment* a1, ::RPG::Client::GridFightAugment* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightAugment*, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP661_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp662(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP662_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp663(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP663_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp664(::RPG::Client::GridFightHandBookEquipItemConfig* a1, ::RPG::Client::GridFightHandBookEquipItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP664_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp665(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP665_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp666(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP666_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp667(::RPG::Client::CakeRaceBattleItemDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP667_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp668(::RPG::Client::CakeRaceBattleItemDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP668_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp669(::RPG::Client::CakeRaceBattleItemDataItem* a1, ::RPG::Client::CakeRaceBattleItemDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP669_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp670(::UnityEngine::EventSystems::RaycastResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP670_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp671(::UnityEngine::EventSystems::RaycastResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP671_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp672(::UnityEngine::EventSystems::RaycastResult a1, ::UnityEngine::EventSystems::RaycastResult a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP672_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp673(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP673_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp674(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP674_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp675(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP675_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp676(::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP676_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp677(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP677_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp678(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP678_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp679(::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_32*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_32*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP679_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp680(::RPG::Client::TeamBuild* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP680_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp681(::RPG::Client::TeamBuild* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP681_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp682(::RPG::Client::TeamBuild* a1, ::RPG::Client::TeamBuild* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamBuild*, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP682_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UIBubbleItem* __Gen_Delegate_Imp683(::XLua::LuaTable* a1, ::RPG::Client::UIBubbleManager* a2)
		{
			return ((::RPG::Client::UIBubbleItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UIBubbleManager*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP683_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp684(::RPG::Client::GridFightOrbEntityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP684_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp685(::RPG::Client::GridFightOrbEntityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP685_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp686(::RPG::Client::GridFightOrbEntityData* a1, ::RPG::Client::GridFightOrbEntityData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP686_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp687(::RPG::Client::ActivityHotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP687_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp688(::RPG::Client::ActivityHotData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP688_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp689(::RPG::Client::ActivityHotData* a1, ::RPG::Client::ActivityHotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotData*, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP689_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp690(::RPG::Client::ActivityHotCoreRewardData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP690_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp691(::RPG::Client::ActivityHotCoreRewardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP691_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp692(::RPG::Client::ActivityHotCoreRewardData* a1, ::RPG::Client::ActivityHotCoreRewardData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP692_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp693(::RPG::Client::MatchPlayRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchPlayRecord*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP693_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp694(::RPG::Client::GridFightDivisionLevelReward* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP694_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp695(::RPG::Client::GridFightDivisionLevelReward* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP695_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp696(::RPG::Client::GridFightDivisionLevelReward* a1, ::RPG::Client::GridFightDivisionLevelReward* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP696_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp697(::RPG::Client::IResidentActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP697_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp698(::RPG::Client::IResidentActivityPanelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP698_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp699(::RPG::Client::IResidentActivityPanelData* a1, ::RPG::Client::IResidentActivityPanelData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP699_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp700(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP700_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp701(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP701_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp702(::RPG::Client::GridFightHandbookRole* a1, ::RPG::Client::GridFightHandbookRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP702_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp703(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP703_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp704(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP704_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp705(::RPG::Client::GridFightPortalData* a1, ::RPG::Client::GridFightPortalData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightPortalData*, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP705_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp706(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP706_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp707(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP707_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp708(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP708_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp709(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP709_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp710(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP710_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp711(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP711_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp712(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP712_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp713(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP713_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp714(::RPG::Client::GridFightEquipItemConfig* a1, ::RPG::Client::GridFightEquipItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP714_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp715(::RPG::Client::TarotBookDeleteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP715_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp716(::RPG::Client::TarotBookDeleteData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP716_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp717(::RPG::Client::TarotBookDeleteData* a1, ::RPG::Client::TarotBookDeleteData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP717_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp718(::XLua::LuaTable* a1, ::RPG::Client::PenaconyEndmostChronicleEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PenaconyEndmostChronicleEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP718_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp719(::RPG::Client::DiceCombat::DiceCombatRankLevelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP719_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp720(::RPG::Client::DiceCombat::DiceCombatRankLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP720_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp721(::RPG::Client::DiceCombat::DiceCombatRankLevelData* a1, ::RPG::Client::DiceCombat::DiceCombatRankLevelData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP721_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp722(::RPG::Client::CakeRaceHandbookCatItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP722_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp723(::RPG::Client::CakeRaceHandbookCatItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP723_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp724(::RPG::Client::CakeRaceHandbookCatItem* a1, ::RPG::Client::CakeRaceHandbookCatItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP724_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp725(::RPG::Client::DiceCombat::DiceCombatCommunicateData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP725_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp726(::RPG::Client::DiceCombat::DiceCombatCommunicateData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP726_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp727(::RPG::Client::DiceCombat::DiceCombatCommunicateData* a1, ::RPG::Client::DiceCombat::DiceCombatCommunicateData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP727_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp728(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP728_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp729(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP729_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp730(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* a1, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP730_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp731(::RPG::Client::ChimeraDuelMasterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP731_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp732(::RPG::Client::ChimeraDuelMasterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP732_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp733(::RPG::Client::ChimeraDuelMasterData* a1, ::RPG::Client::ChimeraDuelMasterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP733_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp734(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP734_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp735(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP735_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp736(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a1, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP736_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp737(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP737_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp738()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP738_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp739(::RPG::Client::ChenLingBattleDeckData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP739_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp740(::RPG::Client::ChenLingBattleDeckData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP740_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp741(::RPG::Client::ChenLingBattleDeckData* a1, ::RPG::Client::ChenLingBattleDeckData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP741_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp742(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP742_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp743(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP743_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp744(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP744_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp745(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP745_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp746(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP746_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp747(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP747_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp748(::RPG::Client::ActivityIdleLive::ChapterRecordUiData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP748_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp749(::RPG::Client::ActivityIdleLive::ChapterRecordUiData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP749_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp750(::RPG::Client::ActivityIdleLive::ChapterRecordUiData a1, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP750_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp751(::RPG::Client::ActivityIdleLive::CaptainData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP751_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp752(::RPG::Client::ActivityIdleLive::CaptainData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP752_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp753(::RPG::Client::ActivityIdleLive::CaptainData* a1, ::RPG::Client::ActivityIdleLive::CaptainData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP753_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp754(::RPG::Client::DiceCombatDiceConfigData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP754_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp755(::RPG::Client::DiceCombatDiceConfigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP755_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp756(::RPG::Client::DiceCombatDiceConfigData* a1, ::RPG::Client::DiceCombatDiceConfigData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP756_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp757(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP757_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp758(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP758_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp759(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* a1, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP759_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp760(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP760_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp761(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP761_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp762(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* a1, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP762_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp763(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP763_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp764(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP764_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp765(::RPG::GameCore::IdleLiveAvatarPropertyType a1, ::RPG::GameCore::IdleLiveAvatarPropertyType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP765_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp766(::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP766_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp767(::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP767_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp768(::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* a1, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP768_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp769(::RPG::Client::AssistData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP769_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp770(::RPG::Client::AssistData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP770_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp771(::RPG::Client::AssistData* a1, ::RPG::Client::AssistData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AssistData*, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP771_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp772(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP772_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp773(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP773_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp774(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP774_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp775(::RPG::Client::GridFightPresentEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP775_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp776(::RPG::Client::GridFightPresentEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP776_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp777(::RPG::Client::GridFightPresentEntity* a1, ::RPG::Client::GridFightPresentEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP777_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp778(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP778_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp779(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP779_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp780(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP780_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* __Gen_Delegate_Imp781()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP781_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp782(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP782_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp783(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP783_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp784(::RPG::Client::AvatarOutfitUnit* a1, ::RPG::Client::AvatarOutfitUnit* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP784_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp785(::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP785_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp786(::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP786_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp787(::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData a1, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP787_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp788(::XLua::LuaTable* a1, ::RPG::Client::DiceCombat::DiceCombatPerformanceBattleEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::DiceCombat::DiceCombatPerformanceBattleEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP788_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp789(::XLua::LuaTable* a1, ::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP789_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp790(::RPG::Client::RogueTournArchiveData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP790_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp791(::RPG::Client::RogueTournArchiveData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP791_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp792(::RPG::Client::RogueTournArchiveData* a1, ::RPG::Client::RogueTournArchiveData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP792_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp793(::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP793_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp794(::RPG::Client::ActivityIdleLive::SpSlotUiData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpSlotUiData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP794_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp795(::RPG::Client::ActivityIdleLive::SpSlotUiData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpSlotUiData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP795_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp796(::RPG::Client::ActivityIdleLive::SpSlotUiData* a1, ::RPG::Client::ActivityIdleLive::SpSlotUiData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpSlotUiData*, ::RPG::Client::ActivityIdleLive::SpSlotUiData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP796_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp797(::RPG::Client::TrainPartyBuildUtils_PhotoWorldData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP797_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp798(::RPG::Client::TrainPartyBuildUtils_PhotoWorldData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP798_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp799(::RPG::Client::TrainPartyBuildUtils_PhotoWorldData a1, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP799_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp800(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP800_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp801(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP801_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp802(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* a1, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP802_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp803(::System::Object* a1, ::Class_3_1C169A0F2ACF26E7* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP803_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp804(::RPG::Client::ChatReportReason* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP804_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp805(::RPG::Client::ChatReportReason* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP805_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp806(::RPG::Client::ChatReportReason* a1, ::RPG::Client::ChatReportReason* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChatReportReason*, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP806_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp807(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP807_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp808(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP808_OFFSET))(this, a1, a2);
		}

		::System::Int32 __Gen_Delegate_Imp809(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP809_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp810(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP810_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp811(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP811_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp812(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP812_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp813(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP813_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp814(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP814_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp815(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1, ::RPG::Client::IRogueTournPersonaRoomCardInGame* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP815_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp816(::RPG::Client::CakeCatchCatData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP816_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp817(::RPG::Client::CakeCatchCatData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP817_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp818(::RPG::Client::CakeCatchCatData* a1, ::RPG::Client::CakeCatchCatData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeCatchCatData*, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP818_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp819(::RPG::Client::TrainPartyBuildUtils_PhotoRarityData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP819_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp820(::RPG::Client::TrainPartyBuildUtils_PhotoRarityData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP820_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp821(::RPG::Client::TrainPartyBuildUtils_PhotoRarityData a1, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP821_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp822(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP822_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp823(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP823_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp824(::UnityEngine::Animator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP824_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp825(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP825_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp826(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP826_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp827(::RPG::Client::IRogueTournPersonaRoomCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP827_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp828(::RPG::Client::IRogueTournPersonaRoomCard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP828_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp829(::RPG::Client::IRogueTournPersonaRoomCard* a1, ::RPG::Client::IRogueTournPersonaRoomCard* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP829_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp830(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP830_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp831(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP831_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp832(::RPG::Client::MongoObjectId a1, ::RPG::Client::MongoObjectId a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP832_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp833(::System::Object* a1, ::RPG::Client::Promises::ExceptionEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::Promises::ExceptionEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP833_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp834(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP834_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp835()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP835_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>* __Gen_Delegate_Imp836()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP836_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp837(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP837_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp838(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP838_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp839(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP839_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp840(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP840_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* __Gen_Delegate_Imp841(::System::Exception* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP841_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp842(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP842_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp843(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP843_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp844(::RPG::GameCore::MissionCondition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP844_OFFSET))(this, a1);
		}

		::RPG::GameCore::MissionCondition* __Gen_Delegate_Imp845(::System::Exception* a1)
		{
			return ((::RPG::GameCore::MissionCondition*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP845_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp846(::RPG::GameCore::MissionCondition* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP846_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp847(::RPG::GameCore::MissionCondition* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP847_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp848(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP848_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerBriefDisplayData* __Gen_Delegate_Imp849(::System::Exception* a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP849_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp850(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP850_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp851(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP851_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp852(::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP852_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> __Gen_Delegate_Imp853(::System::Exception* a1)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP853_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp854(::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP854_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp855(::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP855_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp856(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP856_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* __Gen_Delegate_Imp857(::System::Exception* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP857_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp858(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP858_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp859(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP859_OFFSET))(this, a1);
		}

		::RPG::Client::SubMissionData* __Gen_Delegate_Imp860(::System::Exception* a1)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP860_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp861(::RPG::Client::SubMissionData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP861_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp862(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP862_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp863(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP863_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* __Gen_Delegate_Imp864(::System::Exception* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP864_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp865(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP865_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp866(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP866_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp867(::RPG::Client::LightConeRecommendData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP867_OFFSET))(this, a1);
		}

		::RPG::Client::LightConeRecommendData* __Gen_Delegate_Imp868(::System::Exception* a1)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP868_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp869(::RPG::Client::LightConeRecommendData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP869_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp870(::RPG::Client::LightConeRecommendData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP870_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp871(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP871_OFFSET))(this, a1);
		}

		::RPG::Client::BaseGameFlow* __Gen_Delegate_Imp872(::System::Exception* a1)
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP872_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp873(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP873_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp874(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP874_OFFSET))(this, a1);
		}

		::RPG::Client::MainMissionData* __Gen_Delegate_Imp875(::System::Exception* a1)
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP875_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp876(::RPG::Client::MainMissionData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP876_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp877(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP877_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp878(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP878_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* __Gen_Delegate_Imp879(::System::Exception* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP879_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp880(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP880_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp881(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP881_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp882(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP882_OFFSET))(this, a1);
		}

		::RPG::Client::BaseLobby* __Gen_Delegate_Imp883(::System::Exception* a1)
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP883_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp884(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP884_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp885(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP885_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp886(::RPG::Client::RelicRecommendData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP886_OFFSET))(this, a1);
		}

		::RPG::Client::RelicRecommendData* __Gen_Delegate_Imp887(::System::Exception* a1)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP887_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp888(::RPG::Client::RelicRecommendData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP888_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp889(::RPG::Client::RelicRecommendData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP889_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp890(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP890_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* __Gen_Delegate_Imp891(::System::Exception* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP891_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp892(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP892_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp893(::RPG::Client::UIController* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP893_OFFSET))(this, a1);
		}

		::RPG::Client::LuaUIController* __Gen_Delegate_Imp894(::System::Exception* a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP894_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp895(::RPG::Client::LuaUIController* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP895_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp896(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP896_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp897(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP897_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* __Gen_Delegate_Imp898(::System::Exception* a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP898_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp899(::UnityEngine::Texture* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP899_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp900(::UnityEngine::Texture* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP900_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp901(::RPG::Client::PlayerBoardInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP901_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerBoardInfo* __Gen_Delegate_Imp902(::System::Exception* a1)
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP902_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp903(::RPG::Client::PlayerBoardInfo* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP903_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp904(::RPG::Client::PlayerBoardInfo* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP904_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp905(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP905_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTexture* __Gen_Delegate_Imp906(::System::Exception* a1)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP906_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp907(::UnityEngine::RenderTexture* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP907_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp908(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP908_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp909(::Class_1_2375E47039821420* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2375E47039821420*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP909_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp910(::RPG::Client::ActivityIdleLive::AmphoreusTarotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP910_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp911(::RPG::Client::ActivityIdleLive::AmphoreusTarotData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP911_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp912(::RPG::Client::ActivityIdleLive::AmphoreusTarotData* a1, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP912_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp913(::RPG::Client::GridFightGameFormationEditor_EditEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_EditEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP913_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp914(::RPG::Client::RechargeGiftData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP914_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp915(::RPG::Client::RechargeGiftData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP915_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp916(::RPG::Client::RechargeGiftData* a1, ::RPG::Client::RechargeGiftData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP916_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp917(::RPG::GameCore::IAdventurePlayerCommonRowWrap* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP917_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp918(::RPG::GameCore::IAdventurePlayerCommonRowWrap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP918_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp919(::RPG::GameCore::IAdventurePlayerCommonRowWrap* a1, ::RPG::GameCore::IAdventurePlayerCommonRowWrap* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP919_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp920(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP920_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp921(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP921_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp922(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* a1, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP922_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp923(::RPG::GameCore::MonsterGuideTagConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterGuideTagConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP923_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp924(::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP924_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp925(::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP925_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp926(::RPG::Client::TextmapDownloadManager_TextmapSizeErrorCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextmapDownloadManager_TextmapSizeErrorCode))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP926_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp927(::RPG::Client::TextmapDownloadManager_TextmapApplyChangeErrorCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextmapDownloadManager_TextmapApplyChangeErrorCode))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP927_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp928(::XLua::LuaTable* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP928_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp929(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP929_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp930(::RPG::Client::HeadIconDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::HeadIconDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP930_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp931(::RPG::Client::HeadIconDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeadIconDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP931_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp932(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP932_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* __Gen_Delegate_Imp933(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP933_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp934(::Class_1_1CB8CBC69B962B41* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CB8CBC69B962B41*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP934_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp935(::Class_0_16E4307DCC419505_380* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_380*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP935_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp936(::Class_0_16E4307DCC419505_380* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_380*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP936_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp937(::RPG::Client::LittleGame::FiveDim::MiniGameEventReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameEventReason))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP937_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp938(::Struct_2_FEFADCB82FEB841E_3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FEFADCB82FEB841E_3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP938_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp939(::Class_0_16E4307DCC419505_381* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP939_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp940(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP940_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp941(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP941_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp942(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP942_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp943(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP943_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp944(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP944_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp945(::XLua::LuaTable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP945_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp946(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP946_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp947(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP947_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp948(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP948_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp949(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP949_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp950(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP950_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp951(::Class_1_9C8BB23B0435A836* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP951_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp952(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP952_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp953(::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP953_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp954(::RPG::Client::FateRin::CaseBoard::CaseBoardSetupScaleParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardSetupScaleParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP954_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp955(::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToTeamParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToTeamParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP955_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp956(::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToGrailParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToGrailParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP956_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp957(::RPG::Client::FateRin::CaseBoard::CaseBoardShowTeamParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardShowTeamParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP957_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp958(::RPG::Client::FateRin::CaseBoard::CaseBoardTrackTeamParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardTrackTeamParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP958_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp959(::RPG::Client::FateRin::CaseBoard::CaseBoardShowGrailParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardShowGrailParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP959_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp960(::RPG::Client::FateRin::CaseBoard::CaseBoardShowLineParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardShowLineParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP960_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp961(::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP961_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp962(::RPG::Client::FateRin::CaseBoard::CaseBoardSimpleTalkParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardSimpleTalkParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP962_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp963(::RPG::Client::FateRin::Battle::CardAnimationEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::CardAnimationEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP963_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp964(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP964_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp965(::Spine::TrackEntry* a1, ::Spine::Event* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP965_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp966(::UnityEngine::UI::Graphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP966_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp967(::UnityEngine::UI::Graphic* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP967_OFFSET))(this, a1, a2);
		}

		::System::Delegate* GetDelegateByType(::System::Type* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_GETDELEGATEBYTYPE_OFFSET))(this, a1);
		}

		::System::Void PCall(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_PCALL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Action()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_ACTION_OFFSET))(this);
		}
	};
}
