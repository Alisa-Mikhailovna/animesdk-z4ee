#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DCE8592E6AAF77DA_Enum_3_37EB127CD200B7DD_7.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TalkModule_DialogueEventKey.h"
#include "unitysdk/RPG/Client/TalkModule_OptionType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/MVector3.h"

class Class_0_16E4307DCC419505_944;
class Class_0_16E4307DCC419505_945;
class Class_0_16E4307DCC419505_946;
class Class_1_07A210D994F284D8_8;
class Class_1_419A79D235B9417C_11;
class Class_1_6CB2450063991035_18;
class Class_1_8428FFDC1DFCE162;
class Class_1_916129A564506E36_3;
class Class_1_EA5A5E4D07C4CF2B_12;
class Class_3_FFD6FEDD2A6D8D46;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemList; }
namespace RPG::Client { class FullScreenOptionTalkUIData; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class RogueTalkOptionDataExt; }
namespace RPG::Client { class TalkHistoryData; }
namespace RPG::Client { class TalkModule_MissionTalkCache; }
namespace RPG::Client { class TalkOptionData; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayMissionTalk; }
namespace RPG::GameCore { class PlayMultiVoiceTalk; }
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class RogueOptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TALKMODULE_ADDMISSIONTALKUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xD60C7B0)
#define RPG_CLIENT_TALKMODULE_ADVPLAYMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xD60C650)
#define RPG_CLIENT_TALKMODULE_BEGINRECORD_OFFSET UNITYSDK_OFFSET(0xD60A160)
#define RPG_CLIENT_TALKMODULE_CACHEMISSIONTALKISPLAYED_OFFSET UNITYSDK_OFFSET(0xD60C8D0)
#define RPG_CLIENT_TALKMODULE_CACHEMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xD60B6B0)
#define RPG_CLIENT_TALKMODULE_ENDRECORD_OFFSET UNITYSDK_OFFSET(0xD60A1D0)
#define RPG_CLIENT_TALKMODULE_FINISHTALK_OFFSET UNITYSDK_OFFSET(0xD611F80)
#define RPG_CLIENT_TALKMODULE_GETAEONTALK_OFFSET UNITYSDK_OFFSET(0xD610070)
#define RPG_CLIENT_TALKMODULE_GETCHESSROGUESTORYAEONTALKINFO_OFFSET UNITYSDK_OFFSET(0xD60FDA0)
#define RPG_CLIENT_TALKMODULE_GETCURRENTOPTIONDATALIST_OFFSET UNITYSDK_OFFSET(0xD612BF0)
#define RPG_CLIENT_TALKMODULE_GETCURRENTSKIPDEFAULTOPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xD612C60)
#define RPG_CLIENT_TALKMODULE_GETMISSIONTALKSTARTINDEXANDCLEARCACHE_OFFSET UNITYSDK_OFFSET(0xD60BBD0)
#define RPG_CLIENT_TALKMODULE_GETNPCTALKCOUNTPROMISE_OFFSET UNITYSDK_OFFSET(0xD611CF0)
#define RPG_CLIENT_TALKMODULE_GETROGUECOMMONDIALOGUEINFOLISTBYOWNERTYPE_OFFSET UNITYSDK_OFFSET(0xD60C9C0)
#define RPG_CLIENT_TALKMODULE_GET_HISTORYDATAS_OFFSET UNITYSDK_OFFSET(0xD60B570)
#define RPG_CLIENT_TALKMODULE_GET_ISWAITINGCHOICE_OFFSET UNITYSDK_OFFSET(0xD6166E0)
#define RPG_CLIENT_TALKMODULE_GET_LASTHISTORYDATA_OFFSET UNITYSDK_OFFSET(0xD60AF10)
#define RPG_CLIENT_TALKMODULE_GET_LASTSELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0xD616730)
#define RPG_CLIENT_TALKMODULE_GET__ISWAITINGTALKEVENT_OFFSET UNITYSDK_OFFSET(0xD613070)
#define RPG_CLIENT_TALKMODULE_HASSHARDDIALOGUEEVENTBEENTRIGGERED_OFFSET UNITYSDK_OFFSET(0xD60FC50)
#define RPG_CLIENT_TALKMODULE_IFSERIESTRIGGERED_OFFSET UNITYSDK_OFFSET(0xD611B60)
#define RPG_CLIENT_TALKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD610750)
#define RPG_CLIENT_TALKMODULE_ISHISTORYITEMCONTINUING_OFFSET UNITYSDK_OFFSET(0xD60A250)
#define RPG_CLIENT_TALKMODULE_ISHISTORYITEMICONSPECIAL_OFFSET UNITYSDK_OFFSET(0xD60A320)
#define RPG_CLIENT_TALKMODULE_ISHISTORYITEMLATEST_OFFSET UNITYSDK_OFFSET(0xD60A400)
#define RPG_CLIENT_TALKMODULE_ISTOPUICONTROLLERHASMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xD60C6B0)
#define RPG_CLIENT_TALKMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD610C60)
#define RPG_CLIENT_TALKMODULE_PLAYFULLSCREENOPTIONTALK_OFFSET UNITYSDK_OFFSET(0xD611890)
#define RPG_CLIENT_TALKMODULE_PLAYMULTIVOICETALK_OFFSET UNITYSDK_OFFSET(0xD6111F0)
#define RPG_CLIENT_TALKMODULE_PLAYOPTIONTALK_OFFSET UNITYSDK_OFFSET(0xD6113F0)
#define RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_1_OFFSET UNITYSDK_OFFSET(0xD60A710)
#define RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_OFFSET UNITYSDK_OFFSET(0xD60A470)
#define RPG_CLIENT_TALKMODULE_RECORDREADHISTORY_OFFSET UNITYSDK_OFFSET(0xD60A770)
#define RPG_CLIENT_TALKMODULE_REFRESHCURMAPSERIESID_OFFSET UNITYSDK_OFFSET(0xD612400)
#define RPG_CLIENT_TALKMODULE_REMOVEMISSIONTALKUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xD60C850)
#define RPG_CLIENT_TALKMODULE_REMOVETALKICONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xD611100)
#define RPG_CLIENT_TALKMODULE_REMOVETALKOPTIONFILTERSTRATEGY_OFFSET UNITYSDK_OFFSET(0xD6111A0)
#define RPG_CLIENT_TALKMODULE_REMOVETALKTRIGGEREDSTRATEGY_OFFSET UNITYSDK_OFFSET(0xD611060)
#define RPG_CLIENT_TALKMODULE_REPORTFULLSCREENOPTIONCHOSEN_OFFSET UNITYSDK_OFFSET(0xD612EF0)
#define RPG_CLIENT_TALKMODULE_SETAEONTALK_OFFSET UNITYSDK_OFFSET(0xD60FE90)
#define RPG_CLIENT_TALKMODULE_SETCURAEONTALKROGUENPCID_OFFSET UNITYSDK_OFFSET(0xD60FE40)
#define RPG_CLIENT_TALKMODULE_SETTALKICONSTRATEGY_OFFSET UNITYSDK_OFFSET(0xD6110B0)
#define RPG_CLIENT_TALKMODULE_SETTALKOPTIONFILTERSTRATEGY_OFFSET UNITYSDK_OFFSET(0xD611150)
#define RPG_CLIENT_TALKMODULE_SETTALKTRIGGEREDSTRATEGY_OFFSET UNITYSDK_OFFSET(0xD611010)
#define RPG_CLIENT_TALKMODULE_SETTALKTRIGGERED_OFFSET UNITYSDK_OFFSET(0xD610CD0)
#define RPG_CLIENT_TALKMODULE_SET_HISTORYDATAS_OFFSET UNITYSDK_OFFSET(0xD60B580)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEENTITY_OFFSET UNITYSDK_OFFSET(0xD60FA30)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEMODE_OFFSET UNITYSDK_OFFSET(0xD60F970)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMLEGACY_OFFSET UNITYSDK_OFFSET(0xD60FAF0)
#define RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAM_OFFSET UNITYSDK_OFFSET(0xD60F820)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEINFO_OFFSET UNITYSDK_OFFSET(0xD60C930)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEENTITY_OFFSET UNITYSDK_OFFSET(0xD60D210)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEMODE_OFFSET UNITYSDK_OFFSET(0xD60D120)
#define RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTION_OFFSET UNITYSDK_OFFSET(0xD60CC70)
#define RPG_CLIENT_TALKMODULE_TRYRECORDASIDEHISTORY_OFFSET UNITYSDK_OFFSET(0xD60A7E0)
#define RPG_CLIENT_TALKMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0xD6107A0)
#define RPG_CLIENT_TALKMODULE_VALIDATEDIALOGGROUPINDEFAULTDIALOGUEMODE_OFFSET UNITYSDK_OFFSET(0xD6120F0)
#define RPG_CLIENT_TALKMODULE__ADDHISTORYDATA_OFFSET UNITYSDK_OFFSET(0xD60A540)
#define RPG_CLIENT_TALKMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD615BB0)
#define RPG_CLIENT_TALKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD614B30)
#define RPG_CLIENT_TALKMODULE__BUILDFULLSCREENDISPLAYLIST_OFFSET UNITYSDK_OFFSET(0xD6143B0)
#define RPG_CLIENT_TALKMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD617020)
#define RPG_CLIENT_TALKMODULE__CHECKISSAMEFLOOR_OFFSET UNITYSDK_OFFSET(0xD60C1F0)
#define RPG_CLIENT_TALKMODULE__CHECKSAMEWITHCACHE_OFFSET UNITYSDK_OFFSET(0xD60BCE0)
#define RPG_CLIENT_TALKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD616780)
#define RPG_CLIENT_TALKMODULE__DOSHOWTALKOPTION_OFFSET UNITYSDK_OFFSET(0xD6130D0)
#define RPG_CLIENT_TALKMODULE__GENERATEOPTIONDATA_OFFSET UNITYSDK_OFFSET(0xD613D80)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDATAEXT_OFFSET UNITYSDK_OFFSET(0xD60ECE0)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0xD60EDC0)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xD60F310)
#define RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTNOUSVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xD60F7B0)
#define RPG_CLIENT_TALKMODULE__GETOPTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xD60AC60)
#define RPG_CLIENT_TALKMODULE__GETROGUEUNIQUEDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xD60D270)
#define RPG_CLIENT_TALKMODULE__HISTORYADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD60AF90)
#define RPG_CLIENT_TALKMODULE__HISTORYUNINIT_OFFSET UNITYSDK_OFFSET(0xD60A090)
#define RPG_CLIENT_TALKMODULE__ISITEMSSATISFIED_OFFSET UNITYSDK_OFFSET(0xD614940)
#define RPG_CLIENT_TALKMODULE__ISMISSIONMUTEXENABLED_OFFSET UNITYSDK_OFFSET(0xD6136A0)
#define RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYPREDICATE_OFFSET UNITYSDK_OFFSET(0xD613BC0)
#define RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYROGUEEVENT_OFFSET UNITYSDK_OFFSET(0xD613AC0)
#define RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0xD6138E0)
#define RPG_CLIENT_TALKMODULE__MISSIONTALKADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD60C320)
#define RPG_CLIENT_TALKMODULE__MISSIONTALKUNINIT_OFFSET UNITYSDK_OFFSET(0xD60B590)
#define RPG_CLIENT_TALKMODULE__MISSIONTALK_ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xD60C480)
#define RPG_CLIENT_TALKMODULE__MISSIONTALK_ONMAINPAGESHOW_OFFSET UNITYSDK_OFFSET(0xD60C5A0)
#define RPG_CLIENT_TALKMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xD616690)
#define RPG_CLIENT_TALKMODULE__ONCHOOSETALKOPTION_OFFSET UNITYSDK_OFFSET(0xD615DD0)
#define RPG_CLIENT_TALKMODULE__ONCMDFINISHFIRSTTALKNPCSCRSP_OFFSET UNITYSDK_OFFSET(0xD615A70)
#define RPG_CLIENT_TALKMODULE__ONCMDGETFIRSTTALKNPCSCRSP_OFFSET UNITYSDK_OFFSET(0xD615460)
#define RPG_CLIENT_TALKMODULE__ONCMDGETNPCTAKENREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xD6151F0)
#define RPG_CLIENT_TALKMODULE__ONCMDTAKETALKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xD6153B0)
#define RPG_CLIENT_TALKMODULE__ONENTERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD60AA00)
#define RPG_CLIENT_TALKMODULE__ONEXITPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD60AA70)
#define RPG_CLIENT_TALKMODULE__ONGETCHESSROGUESTORYAEONTALKINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xD6102C0)
#define RPG_CLIENT_TALKMODULE__ONGETROGUECOMMONDIALOGUEDATASCRSP_OFFSET UNITYSDK_OFFSET(0xD60D340)
#define RPG_CLIENT_TALKMODULE__ONPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xD60B410)
#define RPG_CLIENT_TALKMODULE__ONSELECTCHESSROGUESUBSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0xD610240)
#define RPG_CLIENT_TALKMODULE__ONSELECTINCLINATIONTEXTSCRSP_OFFSET UNITYSDK_OFFSET(0xD615B60)
#define RPG_CLIENT_TALKMODULE__ONSELECTITEMCONFIRM_OFFSET UNITYSDK_OFFSET(0xD60B4A0)
#define RPG_CLIENT_TALKMODULE__ONSELECTROGUECOMMONDIALOGUEOPTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xD60DCB0)
#define RPG_CLIENT_TALKMODULE__ONSIMPLETALKSHOWN_OFFSET UNITYSDK_OFFSET(0xD60B380)
#define RPG_CLIENT_TALKMODULE__ONSTORYMODECHANGE_OFFSET UNITYSDK_OFFSET(0xD60B1F0)
#define RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD60D800)
#define RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEOPTIONFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD60E620)
#define RPG_CLIENT_TALKMODULE__OPTIONMISSIONSPREPARED_OFFSET UNITYSDK_OFFSET(0xD611610)
#define RPG_CLIENT_TALKMODULE__PLAYFULLSCREENOPTIONTALK_B__102_0_OFFSET UNITYSDK_OFFSET(0xD617050)
#define RPG_CLIENT_TALKMODULE__PLAYOPTIONTALK_B__101_0_OFFSET UNITYSDK_OFFSET(0xD617040)
#define RPG_CLIENT_TALKMODULE__PREPARETALKEVENTS_OFFSET UNITYSDK_OFFSET(0xD610D80)
#define RPG_CLIENT_TALKMODULE__PROCESSOPTIONAVAILABLE_OFFSET UNITYSDK_OFFSET(0xD613F60)
#define RPG_CLIENT_TALKMODULE__PROCESSROGUEDIALOGUEEVENT_OFFSET UNITYSDK_OFFSET(0xD616240)
#define RPG_CLIENT_TALKMODULE__RECORDASIDEHISTORY_OFFSET UNITYSDK_OFFSET(0xD60A890)
#define RPG_CLIENT_TALKMODULE__RECORDOPTIONHISTORY_OFFSET UNITYSDK_OFFSET(0xD60ABD0)
#define RPG_CLIENT_TALKMODULE__RECORDSIMPLEHISTORY_OFFSET UNITYSDK_OFFSET(0xD60AAF0)
#define RPG_CLIENT_TALKMODULE__RECORDTRIGGEREDOPTION_OFFSET UNITYSDK_OFFSET(0xD6161E0)
#define RPG_CLIENT_TALKMODULE__REFRESHTOPUICONTROLLERHASMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xD60C720)
#define RPG_CLIENT_TALKMODULE__SETICONBYSTRATEGY_OFFSET UNITYSDK_OFFSET(0xD6147D0)
#define RPG_CLIENT_TALKMODULE__SETTRIGGEREDBYSTRATEGY_OFFSET UNITYSDK_OFFSET(0xD6146F0)
#define RPG_CLIENT_TALKMODULE__TRYRESUMCACHEMISSIONTALK_OFFSET UNITYSDK_OFFSET(0xD60BE20)
#define RPG_CLIENT_TALKMODULE__TRYSENDINCLINATION_OFFSET UNITYSDK_OFFSET(0xD616590)
#define RPG_CLIENT_TALKMODULE__TRYSHOWDIALOGUEEVENTREWARD_OFFSET UNITYSDK_OFFSET(0xD614AB0)
#define RPG_CLIENT_TALKMODULE__TRYSHOWTALKOPTION_OFFSET UNITYSDK_OFFSET(0xD612FC0)
#define RPG_CLIENT_TALKMODULE__UPDATEASIDECACHE_OFFSET UNITYSDK_OFFSET(0xD60AD30)
#define RPG_CLIENT_TALKMODULE___ADDNOTIFYHANDLERS_B__133_0_OFFSET UNITYSDK_OFFSET(0xD617080)
#define RPG_CLIENT_TALKMODULE___BUILDFULLSCREENDISPLAYLIST_B__115_0_OFFSET UNITYSDK_OFFSET(0xD617060)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkModule_TypeDefinitionIndex = 65020;

	class TalkModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Boolean* StaticGet_AutoResumCacheMissionTalk()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TalkModule_TypeDefinitionIndex)->GetStaticField(0x4DE0);
		}
		static ::System::UInt32* StaticGet__MAX_HISTORY_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TalkModule_TypeDefinitionIndex)->GetStaticField(0x4DE4);
		}
		// static const ::System::Int32 MAX_OPTION_NUM = 0x5; // 0x0
		// static const ::System::Int32 MAX_FULLSCREEN_OPTION_NUM = 0x10; // 0x0
		// static const ::System::Int32 FULLSCREEN_DISPLAY_NUM = 0x8; // 0x0
		// static const ::System::String* WAIT_DIALOGUE_EVENT; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueEventsBeenTriggered; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_8428FFDC1DFCE162*>*>* _DialogueEventParamsLegacy; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_8428FFDC1DFCE162*>*>* _DialogueEventParams1D3Legacy; // 0x20
		::System::Action* _WaitAeonTalkScRspCallback; // 0x28
		::RPG::Client::FullScreenOptionTalkUIData* _FullScreenOptionTalkUIData; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TalkModule_DialogueEventKey, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueStoryEventsBeenTriggered1D3; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* _CurDisplayList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueEventsBeenTriggered1D3Legacy; // 0x48
		::RPG::GameCore::TaskContext* _OptionContext; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SeriesTalkCount; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>* _HistoryDatas_k__BackingField; // 0x60
		::System::Collections::Generic::HashSet_1<::RPG::Client::UIController*>* _MissionTalkUIControllers; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6CB2450063991035_18*>* _RogueDialogueInfo; // 0x70
		::Class_1_07A210D994F284D8_8* DialogueEventInfo; // 0x78
		::Class_0_16E4307DCC419505_945* _SetOptionTalkTriggeredStrategy; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_8428FFDC1DFCE162*>*>* _DialogueEventParams; // 0x88
		::System::Collections::Generic::List_1<::System::UInt32>* _SeriesIDClientTriggered; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*>* _AeonTalkInfos; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* TalkProgress; // 0xA0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ReceivedTalkEventIDs; // 0xA8
		::Class_0_16E4307DCC419505_944* _SetIconStrategy; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _DialogueEventsBeenTriggeredLegacy; // 0xB8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _WaitingNPCIDs; // 0xC0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PreparedNPCIDs; // 0xC8
		::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* _CurOptionInfos; // 0xD0
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* _OptionInfos; // 0xD8
		::System::Collections::Generic::List_1<::System::UInt32>* _NPCListWhenEnterAdventurePhase; // 0xE0
		::Class_0_16E4307DCC419505_946* _CustomOptionFilter; // 0xE8
		::RPG::Client::TalkModule_MissionTalkCache* _MissionTalkCache; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::System::UInt32>*>* _SeriesTalkCountPromises; // 0xF8
		::RPG::Client::UIController* _TopUIControllerHasMissionTalk; // 0x100
		::System::UInt32 _CurAeonTalkRogueNPCID; // 0x108
		::RPG::Client::TalkModule_OptionType _CachedOptionType; // 0x10C
		::RPG::MVector3 _TriggeredPosition; // 0x110
		::System::Boolean _MarkTriggeredOption; // 0x11C
		::System::Boolean _IsRecording; // 0x11D
		::System::Boolean _IsWaitingMissionData; // 0x11E
		::System::Int32 _LastSelectedIndex; // 0x120
		::RPG::Client::TextID _CachedAsideID; // 0x128
		::System::Int32 _LastSelectedDisplaySlot; // 0x138
		::System::Boolean WaitAeonTalkScRsp; // 0x13C
		::System::Boolean _IsWaitingChoice; // 0x13D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__CCTOR_OFFSET))();
		}

		::System::Void _HistoryUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__HISTORYUNINIT_OFFSET))(this);
		}

		::System::Void BeginRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_BEGINRECORD_OFFSET))(this);
		}

		::System::Void EndRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ENDRECORD_OFFSET))(this);
		}

		::System::Boolean IsHistoryItemContinuing(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISHISTORYITEMCONTINUING_OFFSET))(this, a1);
		}

		::System::Boolean IsHistoryItemIconSpecial(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISHISTORYITEMICONSPECIAL_OFFSET))(this, a1);
		}

		::System::Boolean IsHistoryItemLatest(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISHISTORYITEMLATEST_OFFSET))(this, a1);
		}

		::System::Void RecordItemHistory(::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MissionItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_OFFSET))(this, a1);
		}

		::System::Void RecordItemHistory_1(::RPG::GameCore::MissionItemConfigList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_RECORDITEMHISTORY_1_OFFSET))(this, a1);
		}

		::System::Void RecordReadHistory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_RECORDREADHISTORY_OFFSET))(this, a1);
		}

		::System::Void TryRecordAsideHistory(::RPG::GameCore::PlayScreenTransfer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYRECORDASIDEHISTORY_OFFSET))(this, a1);
		}

		::System::Void _OnEnterPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONENTERPERFORMANCE_OFFSET))(this);
		}

		::System::Void _OnExitPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONEXITPERFORMANCE_OFFSET))(this);
		}

		::System::Void _RecordSimpleHistory(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDSIMPLEHISTORY_OFFSET))(this, a1, a2);
		}

		::System::Void _RecordOptionHistory(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDOPTIONHISTORY_OFFSET))(this, a1);
		}

		::System::Void _RecordAsideHistory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDASIDEHISTORY_OFFSET))(this, a1);
		}

		::System::Void _AddHistoryData(::RPG::Client::TalkHistoryData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkHistoryData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ADDHISTORYDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateAsideCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__UPDATEASIDECACHE_OFFSET))(this);
		}

		::System::Void _HistoryAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__HISTORYADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnStoryModeChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSTORYMODECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnSimpleTalkShown(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSIMPLETALKSHOWN_OFFSET))(this, a1);
		}

		::System::Void _OnPlayScreenTransfer(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONPLAYSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void _OnSelectItemConfirm(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTITEMCONFIRM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>* get_HistoryDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GET_HISTORYDATAS_OFFSET))(this);
		}

		::System::Void set_HistoryDatas(::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TalkHistoryData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SET_HISTORYDATAS_OFFSET))(this, a1);
		}

		::RPG::Client::TalkHistoryData* get_LastHistoryData()
		{
			return ((::RPG::Client::TalkHistoryData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GET_LASTHISTORYDATA_OFFSET))(this);
		}

		::System::Void _MissionTalkUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALKUNINIT_OFFSET))(this);
		}

		::System::Void CacheMissionTalk(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_CACHEMISSIONTALK_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetMissionTalkStartIndexAndClearCache(::RPG::GameCore::PlayMissionTalk* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETMISSIONTALKSTARTINDEXANDCLEARCACHE_OFFSET))(this, a1);
		}

		::System::Void _TryResumCacheMissionTalk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYRESUMCACHEMISSIONTALK_OFFSET))(this);
		}

		::System::Boolean _CheckIsSameFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__CHECKISSAMEFLOOR_OFFSET))(this);
		}

		::System::Boolean _CheckSameWithCache(::RPG::GameCore::PlayMissionTalk* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__CHECKSAMEWITHCACHE_OFFSET))(this, a1);
		}

		::System::Void _MissionTalkAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALKADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _MissionTalk_OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALK_ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _MissionTalk_OnMainPageShow(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__MISSIONTALK_ONMAINPAGESHOW_OFFSET))(this, a1);
		}

		::System::Void AdvPlayMissionTalk(::RPG::GameCore::PlayMissionTalk* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ADVPLAYMISSIONTALK_OFFSET))(this, a1);
		}

		::System::Boolean IsTopUIControllerHasMissionTalk(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ISTOPUICONTROLLERHASMISSIONTALK_OFFSET))(this, a1);
		}

		::System::Void AddMissionTalkUIController(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ADDMISSIONTALKUICONTROLLER_OFFSET))(this, a1);
		}

		::System::Void RemoveMissionTalkUIController(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVEMISSIONTALKUICONTROLLER_OFFSET))(this, a1);
		}

		::System::Void _RefreshTopUIControllerHasMissionTalk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__REFRESHTOPUICONTROLLERHASMISSIONTALK_OFFSET))(this);
		}

		::System::Void CacheMissionTalkIsPlayed(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_CACHEMISSIONTALKISPLAYED_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_6CB2450063991035_18* TryGetRogueCommonDialogueInfo(::System::UInt32 a1)
		{
			return ((::Class_1_6CB2450063991035_18*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_6CB2450063991035_18*>* GetRogueCommonDialogueInfoListByOwnerType(::Class_1_DCE8592E6AAF77DA_Enum_3_37EB127CD200B7DD_7 a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_6CB2450063991035_18*>*(*)(::PVOID, ::Class_1_DCE8592E6AAF77DA_Enum_3_37EB127CD200B7DD_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETROGUECOMMONDIALOGUEINFOLISTBYOWNERTYPE_OFFSET))(this, a1);
		}

		::Class_1_419A79D235B9417C_11* TryGetRogueCommonDialogueOption(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_419A79D235B9417C_11*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTION_OFFSET))(this, a1, a2);
		}

		::Class_1_419A79D235B9417C_11* TryGetRogueCommonDialogueOptionByDialogueMode(::System::UInt32 a1)
		{
			return ((::Class_1_419A79D235B9417C_11*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEMODE_OFFSET))(this, a1);
		}

		::Class_1_419A79D235B9417C_11* TryGetRogueCommonDialogueOptionByDialogueEntity(::System::UInt32 a1)
		{
			return ((::Class_1_419A79D235B9417C_11*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETROGUECOMMONDIALOGUEOPTIONBYDIALOGUEENTITY_OFFSET))(this, a1);
		}

		::System::Void _OnGetRogueCommonDialogueDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONGETROGUECOMMONDIALOGUEDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncRogueCommonDialogueDataScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEDATASCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSelectRogueCommonDialogueOptionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTROGUECOMMONDIALOGUEOPTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncRogueCommonDialogueOptionFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSYNCROGUECOMMONDIALOGUEOPTIONFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetRogueUniqueDialogueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GETROGUEUNIQUEDIALOGUEID_OFFSET))(this);
		}

		::RPG::Client::RogueTalkOptionDataExt* _GenerateRogueOptionDataExt(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::RPG::Client::RogueTalkOptionDataExt*(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDATAEXT_OFFSET))(this, a1);
		}

		::System::Void _GenerateRogueOptionDisplayInfo(::RPG::GameCore::RogueOptionTalkInfo* a1, ::RPG::Client::RogueTalkOptionDataExt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueOptionTalkInfo*, ::RPG::Client::RogueTalkOptionDataExt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONDISPLAYINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _GenerateRogueOptionEffectInfo(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_916129A564506E36_3*>* a1, ::RPG::Client::RogueTalkOptionDataExt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_916129A564506E36_3*>*, ::RPG::Client::RogueTalkOptionDataExt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _GenerateRogueOptionEffectNousValueChange(::Class_1_EA5A5E4D07C4CF2B_12* a1, ::RPG::Client::RogueTalkOptionDataExt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_12*, ::RPG::Client::RogueTalkOptionDataExt*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEROGUEOPTIONEFFECTNOUSVALUECHANGE_OFFSET))(this, a1, a2);
		}

		::Class_1_8428FFDC1DFCE162* TryGetDialogueEventParam(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_8428FFDC1DFCE162*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAM_OFFSET))(this, a1, a2);
		}

		::Class_1_8428FFDC1DFCE162* TryGetDialogueEventParamByDialogueMode(::System::UInt32 a1)
		{
			return ((::Class_1_8428FFDC1DFCE162*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEMODE_OFFSET))(this, a1);
		}

		::Class_1_8428FFDC1DFCE162* TryGetDialogueEventParamByDialogueEntity(::System::UInt32 a1)
		{
			return ((::Class_1_8428FFDC1DFCE162*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMBYDIALOGUEENTITY_OFFSET))(this, a1);
		}

		::System::Boolean HasShardDialogueEventBeenTriggered(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_HASSHARDDIALOGUEEVENTBEENTRIGGERED_OFFSET))(this, a1, a2);
		}

		::Class_1_8428FFDC1DFCE162* TryGetDialogueEventParamLegacy(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_8428FFDC1DFCE162*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_TRYGETDIALOGUEEVENTPARAMLEGACY_OFFSET))(this, a1, a2);
		}

		::System::Void GetChessRogueStoryAeonTalkInfo(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETCHESSROGUESTORYAEONTALKINFO_OFFSET))(this, a1, a2);
		}

		::System::Void SetCurAeonTalkRogueNPCID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETCURAEONTALKROGUENPCID_OFFSET))(this, a1);
		}

		::System::Void SetAeonTalk(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETAEONTALK_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetAeonTalk(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETAEONTALK_OFFSET))(this, a1);
		}

		::System::Void _OnSelectChessRogueSubStoryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTCHESSROGUESUBSTORYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetChessRogueStoryAeonTalkInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONGETCHESSROGUESTORYAEONTALKINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_UNINIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void SetTalkTriggered(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void SetTalkTriggeredStrategy(::Class_0_16E4307DCC419505_945* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_945*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKTRIGGEREDSTRATEGY_OFFSET))(this, a1);
		}

		::System::Void RemoveTalkTriggeredStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVETALKTRIGGEREDSTRATEGY_OFFSET))(this);
		}

		::System::Void SetTalkIconStrategy(::Class_0_16E4307DCC419505_944* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_944*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKICONSTRATEGY_OFFSET))(this, a1);
		}

		::System::Void RemoveTalkIconStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVETALKICONSTRATEGY_OFFSET))(this);
		}

		::System::Void SetTalkOptionFilterStrategy(::Class_0_16E4307DCC419505_946* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_946*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_SETTALKOPTIONFILTERSTRATEGY_OFFSET))(this, a1);
		}

		::System::Void RemoveTalkOptionFilterStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REMOVETALKOPTIONFILTERSTRATEGY_OFFSET))(this);
		}

		::System::Boolean PlayMultiVoiceTalk(::RPG::GameCore::PlayMultiVoiceTalk* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PlayMultiVoiceTalk*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_PLAYMULTIVOICETALK_OFFSET))(this, a1);
		}

		::System::Void PlayOptionTalk(::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::RPG::Client::TalkModule_OptionType a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::Client::TalkModule_OptionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_PLAYOPTIONTALK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayFullScreenOptionTalk(::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* a1, ::RPG::GameCore::GameEntity* a2, ::Class_3_FFD6FEDD2A6D8D46* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*, ::RPG::GameCore::GameEntity*, ::Class_3_FFD6FEDD2A6D8D46*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_PLAYFULLSCREENOPTIONTALK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IfSeriesTriggered(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_IFSERIESTRIGGERED_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* GetNPCTalkCountPromise(::RPG::Client::MapNpcDef* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETNPCTALKCOUNTPROMISE_OFFSET))(this, a1);
		}

		::System::Void FinishTalk(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_FINISHTALK_OFFSET))(this, a1);
		}

		::System::Void ValidateDialogGroupInDefaultDialogueMode(::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_VALIDATEDIALOGGROUPINDEFAULTDIALOGUEMODE_OFFSET))(this, a1);
		}

		::System::Void RefreshCurMapSeriesID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REFRESHCURMAPSERIESID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* GetCurrentOptionDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETCURRENTOPTIONDATALIST_OFFSET))(this);
		}

		::System::Int32 GetCurrentSkipDefaultOptionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GETCURRENTSKIPDEFAULTOPTIONINDEX_OFFSET))(this);
		}

		::System::Void ReportFullScreenOptionChosen(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_REPORTFULLSCREENOPTIONCHOSEN_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OptionMissionsPrepared(::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__OPTIONMISSIONSPREPARED_OFFSET))(this, a1);
		}

		::System::Void _PrepareTalkEvents(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PREPARETALKEVENTS_OFFSET))(this, a1);
		}

		::System::Void _TryShowTalkOption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYSHOWTALKOPTION_OFFSET))(this);
		}

		::System::Void _DoShowTalkOption(::RPG::Client::TalkModule_OptionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkModule_OptionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__DOSHOWTALKOPTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* _BuildFullScreenDisplayList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__BUILDFULLSCREENDISPLAYLIST_OFFSET))(this);
		}

		::System::Void _ProcessOptionAvailable(::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PROCESSOPTIONAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _SetTriggeredByStrategy(::RPG::GameCore::OptionTalkInfo* a1, ::RPG::Client::TalkOptionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__SETTRIGGEREDBYSTRATEGY_OFFSET))(this, a1, a2);
		}

		::System::Void _SetIconByStrategy(::RPG::GameCore::OptionTalkInfo* a1, ::RPG::Client::TalkOptionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__SETICONBYSTRATEGY_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsMissionMutexEnabled(::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISMISSIONMUTEXENABLED_OFFSET))(this, a1);
		}

		::System::Boolean _IsOptionVisible(::RPG::GameCore::OptionTalkInfo* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsOptionVisibleByPredicate(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYPREDICATE_OFFSET))(this, a1);
		}

		::System::Boolean _IsOptionVisibleByRogueEvent(::RPG::GameCore::RogueOptionTalkInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISOPTIONVISIBLEBYROGUEEVENT_OFFSET))(this, a1);
		}

		::RPG::Client::TalkOptionData* _GenerateOptionData(::RPG::GameCore::OptionTalkInfo* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::TalkOptionData*(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GENERATEOPTIONDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID _GetOptionContent(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__GETOPTIONCONTENT_OFFSET))(this, a1);
		}

		::System::Boolean _IsItemsSatisfied(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ISITEMSSATISFIED_OFFSET))(this, a1);
		}

		::System::Void _TryShowDialogueEventReward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYSHOWDIALOGUEEVENTREWARD_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetNpcTakenRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDGETNPCTAKENREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeTalkRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDTAKETALKREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetFirstTalkNpcScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDGETFIRSTTALKNPCSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdFinishFirstTalkNpcScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCMDFINISHFIRSTTALKNPCSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSelectInclinationTextScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONSELECTINCLINATIONTEXTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnChooseTalkOption(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONCHOOSETALKOPTION_OFFSET))(this, a1);
		}

		::System::Void _ProcessRogueDialogueEvent(::RPG::GameCore::RogueOptionTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueOptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PROCESSROGUEDIALOGUEEVENT_OFFSET))(this, a1);
		}

		::System::Void _RecordTriggeredOption(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__RECORDTRIGGEREDOPTION_OFFSET))(this, a1);
		}

		::System::Void _TrySendInclination(::RPG::GameCore::OptionTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__TRYSENDINCLINATION_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitingChoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GET_ISWAITINGCHOICE_OFFSET))(this);
		}

		::System::Int32 get_LastSelectedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GET_LASTSELECTEDINDEX_OFFSET))(this);
		}

		::System::Boolean get__IsWaitingTalkEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE_GET__ISWAITINGTALKEVENT_OFFSET))(this);
		}

		::System::Void _PlayOptionTalk_b__101_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PLAYOPTIONTALK_B__101_0_OFFSET))(this);
		}

		::System::Void _PlayFullScreenOptionTalk_b__102_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE__PLAYFULLSCREENOPTIONTALK_B__102_0_OFFSET))(this);
		}

		::System::Boolean __BuildFullScreenDisplayList_b__115_0(::RPG::Client::TalkOptionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___BUILDFULLSCREENDISPLAYLIST_B__115_0_OFFSET))(this, a1);
		}

		::System::Void __AddNotifyHandlers_b__133_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___ADDNOTIFYHANDLERS_B__133_0_OFFSET))(this, a1);
		}
	};
}
