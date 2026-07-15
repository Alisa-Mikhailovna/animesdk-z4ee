#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_63C076C405BE0674_2.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_12.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TeamModule_IndexKey.h"
#include "unitysdk/RPG/Client/TeamModule_TeleportState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_21DCD4640D389503_16;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AssistData; }
namespace RPG::Client { class ITeamBuildCalculator; }
namespace RPG::Client { class TeamData; }
namespace RPG::Client { class TeamDataRefreshParam; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMMODULE_ADDEXTRASKILLMPCOST_OFFSET UNITYSDK_OFFSET(0xD64C610)
#define RPG_CLIENT_TEAMMODULE_CHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0xD645700)
#define RPG_CLIENT_TEAMMODULE_CHECKTEAMASSOCIATIONUNLOCK_OFFSET UNITYSDK_OFFSET(0xD652ED0)
#define RPG_CLIENT_TEAMMODULE_CHECKTEAMLIMITCONDITIONBYAVATARLIST_OFFSET UNITYSDK_OFFSET(0xD650E40)
#define RPG_CLIENT_TEAMMODULE_CHECKTEAMLIMITCONDITION_OFFSET UNITYSDK_OFFSET(0xD6518A0)
#define RPG_CLIENT_TEAMMODULE_CLEARALLPRECOSTMP_OFFSET UNITYSDK_OFFSET(0xD64B960)
#define RPG_CLIENT_TEAMMODULE_CLEARLINEUPAVATARDATASNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD64DF20)
#define RPG_CLIENT_TEAMMODULE_CLONETEAMDATAFROMEXTRALINEUP_OFFSET UNITYSDK_OFFSET(0xD652750)
#define RPG_CLIENT_TEAMMODULE_CREATELOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0xD64E260)
#define RPG_CLIENT_TEAMMODULE_DESTROYLOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0xD64E460)
#define RPG_CLIENT_TEAMMODULE_GETALLTRAILAVATARS_OFFSET UNITYSDK_OFFSET(0xD6508E0)
#define RPG_CLIENT_TEAMMODULE_GETAVATARHPPERCENT_1_OFFSET UNITYSDK_OFFSET(0xD650700)
#define RPG_CLIENT_TEAMMODULE_GETAVATARHPPERCENT_OFFSET UNITYSDK_OFFSET(0xD650600)
#define RPG_CLIENT_TEAMMODULE_GETCLIENTONLYTEAM_OFFSET UNITYSDK_OFFSET(0xD64BB80)
#define RPG_CLIENT_TEAMMODULE_GETCURRENTEDITTEAM_OFFSET UNITYSDK_OFFSET(0xD64E0C0)
#define RPG_CLIENT_TEAMMODULE_GETCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xD64E200)
#define RPG_CLIENT_TEAMMODULE_GETEXTRASKILLMPCOST_OFFSET UNITYSDK_OFFSET(0xD64C870)
#define RPG_CLIENT_TEAMMODULE_GETEXTRATEAM_OFFSET UNITYSDK_OFFSET(0xD64CF60)
#define RPG_CLIENT_TEAMMODULE_GETLINEUPAVATARSNAPSHOTHPPERCENT_OFFSET UNITYSDK_OFFSET(0xD64DFB0)
#define RPG_CLIENT_TEAMMODULE_GETMAINLINETEAM_OFFSET UNITYSDK_OFFSET(0xD64BD90)
#define RPG_CLIENT_TEAMMODULE_GETPRECOSTMP_OFFSET UNITYSDK_OFFSET(0xD64C560)
#define RPG_CLIENT_TEAMMODULE_GETREGULARTEAMLIST_OFFSET UNITYSDK_OFFSET(0xD64BF70)
#define RPG_CLIENT_TEAMMODULE_GETREGULARTEAM_OFFSET UNITYSDK_OFFSET(0xD64BC50)
#define RPG_CLIENT_TEAMMODULE_GETRETURNTRIALAVATARTEAM_OFFSET UNITYSDK_OFFSET(0xD64BD10)
#define RPG_CLIENT_TEAMMODULE_GETSTORYLINETEAM_OFFSET UNITYSDK_OFFSET(0xD64C290)
#define RPG_CLIENT_TEAMMODULE_GETTEAMLIMITDESC_OFFSET UNITYSDK_OFFSET(0xD6521A0)
#define RPG_CLIENT_TEAMMODULE_GETTEAMLIMITHINTPARAM_OFFSET UNITYSDK_OFFSET(0xD651B60)
#define RPG_CLIENT_TEAMMODULE_GETTEAMLIMITTOAST_OFFSET UNITYSDK_OFFSET(0xD6524B0)
#define RPG_CLIENT_TEAMMODULE_GETVIRTUALTEAM_OFFSET UNITYSDK_OFFSET(0xD64BA70)
#define RPG_CLIENT_TEAMMODULE_GET_CURRENTREGULARTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xD656110)
#define RPG_CLIENT_TEAMMODULE_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0xD658E10)
#define RPG_CLIENT_TEAMMODULE_GET_ISCUREDITLOCALTEAM_OFFSET UNITYSDK_OFFSET(0xD64E150)
#define RPG_CLIENT_TEAMMODULE_GET_ISCURSHOWLOCALTEAM_OFFSET UNITYSDK_OFFSET(0xD658D30)
#define RPG_CLIENT_TEAMMODULE_GET_ISEXISTLOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0xD658CE0)
#define RPG_CLIENT_TEAMMODULE_GET_MAINLINETEAMCOUNT_OFFSET UNITYSDK_OFFSET(0xD64C230)
#define RPG_CLIENT_TEAMMODULE_GET_REGULARTEAMCOUNT_OFFSET UNITYSDK_OFFSET(0xD656160)
#define RPG_CLIENT_TEAMMODULE_GET_TEAMASSOCIATIONUNLOCKID_OFFSET UNITYSDK_OFFSET(0xD652F20)
#define RPG_CLIENT_TEAMMODULE_GET_TEAMBUILDCALCULATOR_OFFSET UNITYSDK_OFFSET(0xD6590B0)
#define RPG_CLIENT_TEAMMODULE_ISAVATARALIVE_OFFSET UNITYSDK_OFFSET(0xD650880)
#define RPG_CLIENT_TEAMMODULE_ISCANCHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0xD652BB0)
#define RPG_CLIENT_TEAMMODULE_ISCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xD656370)
#define RPG_CLIENT_TEAMMODULE_JOINMEMBERTOTEAMBYAVATAR_OFFSET UNITYSDK_OFFSET(0xD64EF20)
#define RPG_CLIENT_TEAMMODULE_JOINMEMBERTOTEAM_OFFSET UNITYSDK_OFFSET(0xD64E4D0)
#define RPG_CLIENT_TEAMMODULE_ONPROJECTILEDISPOSEWITHOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0xD64CF10)
#define RPG_CLIENT_TEAMMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD64B8F0)
#define RPG_CLIENT_TEAMMODULE_ONSKILLCASTRESULTSERVERRESPOND_OFFSET UNITYSDK_OFFSET(0xD64C9C0)
#define RPG_CLIENT_TEAMMODULE_ONSKILLSYNCTOSERVER_OFFSET UNITYSDK_OFFSET(0xD64C5B0)
#define RPG_CLIENT_TEAMMODULE_PAUSETEAMDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xD655F50)
#define RPG_CLIENT_TEAMMODULE_PRECOSTMPINCLIENT_OFFSET UNITYSDK_OFFSET(0xD64CC80)
#define RPG_CLIENT_TEAMMODULE_QUITMEMBERFROMTEAM_OFFSET UNITYSDK_OFFSET(0xD64F0D0)
#define RPG_CLIENT_TEAMMODULE_REFRESHCURLINEUPDATA_OFFSET UNITYSDK_OFFSET(0xD64C470)
#define RPG_CLIENT_TEAMMODULE_REFRESHLINEUP_OFFSET UNITYSDK_OFFSET(0xD6540F0)
#define RPG_CLIENT_TEAMMODULE_REMOVEEXTRASKILLMPCOST_OFFSET UNITYSDK_OFFSET(0xD64C750)
#define RPG_CLIENT_TEAMMODULE_RESUMETEAMDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xD657830)
#define RPG_CLIENT_TEAMMODULE_SAVELINEUPAVATARDATASNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD64DD60)
#define RPG_CLIENT_TEAMMODULE_SETTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xD650430)
#define RPG_CLIENT_TEAMMODULE_SETTEAMMEMBER_OFFSET UNITYSDK_OFFSET(0xD64F780)
#define RPG_CLIENT_TEAMMODULE_SETTEAMNAME_OFFSET UNITYSDK_OFFSET(0xD650540)
#define RPG_CLIENT_TEAMMODULE_SET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0xD658E60)
#define RPG_CLIENT_TEAMMODULE_SET_ISCURSHOWLOCALTEAM_OFFSET UNITYSDK_OFFSET(0xD658D80)
#define RPG_CLIENT_TEAMMODULE_SKILLFINISHTRYREVERTPRECOSTMP_OFFSET UNITYSDK_OFFSET(0xD64CEB0)
#define RPG_CLIENT_TEAMMODULE_SWAPMEMBERSLOTINTEAM_OFFSET UNITYSDK_OFFSET(0xD64FB80)
#define RPG_CLIENT_TEAMMODULE_SWITCHCURRENTEDITTEAM_OFFSET UNITYSDK_OFFSET(0xD64D960)
#define RPG_CLIENT_TEAMMODULE_SWITCHCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xD64D9E0)
#define RPG_CLIENT_TEAMMODULE_TRYCONSUMEMAPTELEPORT_OFFSET UNITYSDK_OFFSET(0xD63E560)
#define RPG_CLIENT_TEAMMODULE_USEMAINCHARACTERONLYTEAM_OFFSET UNITYSDK_OFFSET(0xD64D160)
#define RPG_CLIENT_TEAMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD6539E0)
#define RPG_CLIENT_TEAMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD653040)
#define RPG_CLIENT_TEAMMODULE__ADDSKILLPRECOSTVALUE_OFFSET UNITYSDK_OFFSET(0xD64CE30)
#define RPG_CLIENT_TEAMMODULE__CHECKCONTAINANYHEROAVATAR_OFFSET UNITYSDK_OFFSET(0xD6515A0)
#define RPG_CLIENT_TEAMMODULE__CHECKCONTAINMULTIPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xD651720)
#define RPG_CLIENT_TEAMMODULE__CHECKTEAMAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xD6514F0)
#define RPG_CLIENT_TEAMMODULE__CHECKTEAMLEVEL_OFFSET UNITYSDK_OFFSET(0xD651220)
#define RPG_CLIENT_TEAMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD64B5E0)
#define RPG_CLIENT_TEAMMODULE__DETECTCHARACTERHPREFRESH_OFFSET UNITYSDK_OFFSET(0xD657F50)
#define RPG_CLIENT_TEAMMODULE__DETECTMAZESKILLMPREFRESH_OFFSET UNITYSDK_OFFSET(0xD657C50)
#define RPG_CLIENT_TEAMMODULE__DIFFTEAMDATAANDNOTIFY_OFFSET UNITYSDK_OFFSET(0xD64D3F0)
#define RPG_CLIENT_TEAMMODULE__DODESTORYVIRTUALLINEUP_OFFSET UNITYSDK_OFFSET(0xD6554D0)
#define RPG_CLIENT_TEAMMODULE__GETLEADERSLOTAFTERREPLACE_OFFSET UNITYSDK_OFFSET(0xD6501E0)
#define RPG_CLIENT_TEAMMODULE__GETTEAMDATA_OFFSET UNITYSDK_OFFSET(0xD64DCA0)
#define RPG_CLIENT_TEAMMODULE__ISCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xD654010)
#define RPG_CLIENT_TEAMMODULE__ISTEAMCONTAINAVATAR_OFFSET UNITYSDK_OFFSET(0xD6510A0)
#define RPG_CLIENT_TEAMMODULE__JOINMEMBERTOLOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0xD64E620)
#define RPG_CLIENT_TEAMMODULE__JOINMEMBERTOPRESETTEAM_OFFSET UNITYSDK_OFFSET(0xD64E990)
#define RPG_CLIENT_TEAMMODULE__JOINMEMBERTOTEAMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD64EC50)
#define RPG_CLIENT_TEAMMODULE__JOINVACANTSLOTWITHEXTRAAVATARS_OFFSET UNITYSDK_OFFSET(0xD6561C0)
#define RPG_CLIENT_TEAMMODULE__ONADVENTUREPHASEPOPUPFINISH_OFFSET UNITYSDK_OFFSET(0xD658C90)
#define RPG_CLIENT_TEAMMODULE__ONCMDCHANGELINEUPLEADERSCRSP_OFFSET UNITYSDK_OFFSET(0xD655160)
#define RPG_CLIENT_TEAMMODULE__ONCMDEXTRALINEUPDESTROYNOTIFY_OFFSET UNITYSDK_OFFSET(0xD655A80)
#define RPG_CLIENT_TEAMMODULE__ONCMDGETALLLINEUPDATASCRSP_OFFSET UNITYSDK_OFFSET(0xD653E40)
#define RPG_CLIENT_TEAMMODULE__ONCMDGETCURLINEUPDATASCRSP_OFFSET UNITYSDK_OFFSET(0xD654A50)
#define RPG_CLIENT_TEAMMODULE__ONCMDGETLINEUPAVATARDATASCRSP_OFFSET UNITYSDK_OFFSET(0xD654FE0)
#define RPG_CLIENT_TEAMMODULE__ONCMDJOINLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xD654D80)
#define RPG_CLIENT_TEAMMODULE__ONCMDQUITLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xD654E00)
#define RPG_CLIENT_TEAMMODULE__ONCMDREPLACELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xD654F00)
#define RPG_CLIENT_TEAMMODULE__ONCMDSETLINEUPNAMESCRSP_OFFSET UNITYSDK_OFFSET(0xD655C80)
#define RPG_CLIENT_TEAMMODULE__ONCMDSWAPLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xD654E80)
#define RPG_CLIENT_TEAMMODULE__ONCMDSWITCHLINEUPINDEXSCRSP_OFFSET UNITYSDK_OFFSET(0xD655BF0)
#define RPG_CLIENT_TEAMMODULE__ONCMDSYNCALLPRESETLINEUPNOTIFY_OFFSET UNITYSDK_OFFSET(0xD654BB0)
#define RPG_CLIENT_TEAMMODULE__ONCMDSYNCLINEUPNOTIFY_OFFSET UNITYSDK_OFFSET(0xD654AF0)
#define RPG_CLIENT_TEAMMODULE__ONCMDSYNCSERVERSCENECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xD656F70)
#define RPG_CLIENT_TEAMMODULE__ONCMDVIRTUALLINEUPDESTROYNOTIFY_OFFSET UNITYSDK_OFFSET(0xD655430)
#define RPG_CLIENT_TEAMMODULE__ONCMDVIRTUALLINEUPTRIALAVATARCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD656FD0)
#define RPG_CLIENT_TEAMMODULE__ONMAPCREATED_OFFSET UNITYSDK_OFFSET(0xD658960)
#define RPG_CLIENT_TEAMMODULE__ONMAPREFRESHAFTERRELOGIN_OFFSET UNITYSDK_OFFSET(0xD6560C0)
#define RPG_CLIENT_TEAMMODULE__ONMAZETOBATTLETRANSITION_OFFSET UNITYSDK_OFFSET(0xD658B40)
#define RPG_CLIENT_TEAMMODULE__ONPLAYERMAPTELEPORT_OFFSET UNITYSDK_OFFSET(0xD655ED0)
#define RPG_CLIENT_TEAMMODULE__ONPLAYERMPTELEPORTNOSWITCHINWHITE_OFFSET UNITYSDK_OFFSET(0xD656070)
#define RPG_CLIENT_TEAMMODULE__ONPLAYERMPTELEPORTNOSWITCHIN_OFFSET UNITYSDK_OFFSET(0xD656020)
#define RPG_CLIENT_TEAMMODULE__ONSTORYMODECHANGE_OFFSET UNITYSDK_OFFSET(0xD658AC0)
#define RPG_CLIENT_TEAMMODULE__PROCESSTEAMSNAPSHOTDATACHANGE_OFFSET UNITYSDK_OFFSET(0xD657A60)
#define RPG_CLIENT_TEAMMODULE__REMOVESKILLPRECOSTVALUE_OFFSET UNITYSDK_OFFSET(0xD64CA90)
#define RPG_CLIENT_TEAMMODULE__REPORTCURRENTMPMAXCHANGE_OFFSET UNITYSDK_OFFSET(0xD6563C0)
#define RPG_CLIENT_TEAMMODULE__RESUMETEAMDATAREFRESH_B__96_0_OFFSET UNITYSDK_OFFSET(0xD659140)
#define RPG_CLIENT_TEAMMODULE__REVERTPRECOSTMP_OFFSET UNITYSDK_OFFSET(0xD64CB70)
#define RPG_CLIENT_TEAMMODULE__SHOULDMERGEDESTROYINGTEAM_OFFSET UNITYSDK_OFFSET(0xD655820)
#define RPG_CLIENT_TEAMMODULE__SWITCHCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xD655940)
#define RPG_CLIENT_TEAMMODULE__UPDATETEAMDATA_OFFSET UNITYSDK_OFFSET(0xD656730)
#define RPG_CLIENT_TEAMMODULE__WILLBEEMPTYAFTERQUIT_OFFSET UNITYSDK_OFFSET(0xD64F5D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamModule_TypeDefinitionIndex = 65114;

	class TeamModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Int32 _MAX_TEAM_MEMBER = 0x4; // 0x0
		::RPG::Client::TeamData* _CurrentTeam; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_63C076C405BE0674_2, ::RPG::Client::TeamData*>* _ExtraTeams; // 0x18
		::RPG::Client::TeamData* _ClientOnlyTeamData; // 0x20
		::System::Collections::Generic::List_1<::Enum_3_71AA90D596A09AC8_12>* _RecentLineupReasons; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TeamModule_IndexKey, ::System::UInt32>* _LineupAvatarDatasSnapShot; // 0x30
		::RPG::Client::Promises::Promise* _GetCurLineupDataPromise; // 0x38
		::RPG::Client::TeamData* _VirtualTeamData; // 0x40
		::RPG::Client::ITeamBuildCalculator* _TeamBuildCalculator; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _LocalTeamTrialAvatarIDs; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* _MainlineTeams; // 0x58
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::UInt32>* _SkillExtraCostMpValueDict; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _SkillPreCostMpValue; // 0x68
		::RPG::Client::TeamData* _CurrentEditTeam; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* _StoryLineTeams; // 0x78
		::RPG::Client::TeamData* _ReturnTrialAvatarTeam; // 0x80
		::RPG::Client::TeamData* _LocalEditTeam; // 0x88
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TeamModule_IndexKey, ::System::UInt32>* _LineupAvatarHPs; // 0x90
		::System::UInt32 _CurrentRegularTeamIndex; // 0x98
		::System::Nullable_1<::System::UInt32> _TeamAssociationUnlockID; // 0x9C
		::RPG::GameCore::FixPoint _PreCostMpTotal; // 0xA8
		::System::Boolean _IsPauseTeamDataRefresh; // 0xB0
		::System::Boolean _IsClientOnly; // 0xB1
		::System::Boolean _IsCurShowLocalTeam; // 0xB2
		::System::Boolean _TeamDataRefreshAfterLoading; // 0xB3
		::RPG::GameCore::FixPoint _LastNotifyMaxMPUpdate; // 0xB8
		::RPG::Client::TeamModule_TeleportState _TeleportState; // 0xC0
		::System::UInt32 _CurMpCostSkillUseID; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__CTOR_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetVirtualTeam()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETVIRTUALTEAM_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetClientOnlyTeam()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETCLIENTONLYTEAM_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetRegularTeam(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETREGULARTEAM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* GetRegularTeamList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETREGULARTEAMLIST_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetMainlineTeam(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETMAINLINETEAM_OFFSET))(this, a1);
		}

		::RPG::Client::TeamData* GetReturnTrialAvatarTeam()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETRETURNTRIALAVATARTEAM_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetStoryLineTeam(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETSTORYLINETEAM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* RefreshCurLineUpData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_REFRESHCURLINEUPDATA_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetPreCostMp()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETPRECOSTMP_OFFSET))(this);
		}

		::System::Void OnSkillSyncToServer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ONSKILLSYNCTOSERVER_OFFSET))(this, a1);
		}

		::System::Void ClearAllPreCostMp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CLEARALLPRECOSTMP_OFFSET))(this);
		}

		::System::Void AddExtraSkillMpCost(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ADDEXTRASKILLMPCOST_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveExtraSkillMpCost(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_REMOVEEXTRASKILLMPCOST_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetExtraSkillMpCost(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETEXTRASKILLMPCOST_OFFSET))(this, a1);
		}

		::System::Void OnSkillCastResultServerRespond(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ONSKILLCASTRESULTSERVERRESPOND_OFFSET))(this, a1, a2);
		}

		::System::Void PreCostMpInClient(::RPG::GameCore::FixPoint a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_PRECOSTMPINCLIENT_OFFSET))(this, a1, a2);
		}

		::System::Void SkillFinishTryRevertPreCostMp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SKILLFINISHTRYREVERTPRECOSTMP_OFFSET))(this, a1);
		}

		::System::Void OnProjectileDisposeWithOutCallback(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ONPROJECTILEDISPOSEWITHOUTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _RevertPreCostMp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__REVERTPRECOSTMP_OFFSET))(this, a1);
		}

		::System::Void _AddSkillPreCostValue(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ADDSKILLPRECOSTVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveSkillPreCostValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__REMOVESKILLPRECOSTVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::TeamData* GetExtraTeam(::Enum_3_63C076C405BE0674_2 a1)
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID, ::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETEXTRATEAM_OFFSET))(this, a1);
		}

		::System::Void UseMainCharacterOnlyTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_USEMAINCHARACTERONLYTEAM_OFFSET))(this);
		}

		::System::Void SwitchCurrentEditTeam(::Enum_3_63C076C405BE0674_2 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_2, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SWITCHCURRENTEDITTEAM_OFFSET))(this, a1, a2);
		}

		::System::Void SwitchCurrentTeam(::Enum_3_63C076C405BE0674_2 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_2, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SWITCHCURRENTTEAM_OFFSET))(this, a1, a2);
		}

		::System::Void SaveLineupAvatarDataSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SAVELINEUPAVATARDATASNAPSHOT_OFFSET))(this);
		}

		::System::Void ClearLineupAvatarDataSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CLEARLINEUPAVATARDATASNAPSHOT_OFFSET))(this);
		}

		::System::Single GetLineupAvatarSnapShotHpPercent(::Enum_3_01618AD0437C8486 a1, ::System::UInt32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_01618AD0437C8486, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETLINEUPAVATARSNAPSHOTHPPERCENT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TeamData* GetCurrentEditTeam()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETCURRENTEDITTEAM_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetCurrentTeam()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETCURRENTTEAM_OFFSET))(this);
		}

		::System::Void CreateLocalEditTeam(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2, ::Enum_3_63C076C405BE0674_2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CREATELOCALEDITTEAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DestroyLocalEditTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_DESTROYLOCALEDITTEAM_OFFSET))(this);
		}

		::System::Void JoinMemberToTeam(::RPG::Client::TeamData* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::AssistData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32, ::System::UInt32, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_JOINMEMBERTOTEAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JoinMemberToTeamByAvatar(::RPG::Client::TeamData* a1, ::RPG::AvatarSystem::IAvatar* a2, ::System::UInt32 a3, ::RPG::Client::AssistData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_JOINMEMBERTOTEAMBYAVATAR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void QuitMemberFromTeam(::RPG::Client::TeamData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_QUITMEMBERFROMTEAM_OFFSET))(this, a1, a2);
		}

		::System::Void SwapMemberSlotInTeam(::RPG::Client::TeamData* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SWAPMEMBERSLOTINTEAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTeamMember(::RPG::Client::TeamData* a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2, ::RPG::Client::AssistData* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::RPG::Client::AssistData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SETTEAMMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ChangeLineupLeader(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CHANGELINEUPLEADER_OFFSET))(this, a1);
		}

		::System::Void SetTeamIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SETTEAMINDEX_OFFSET))(this, a1);
		}

		::System::Void SetTeamName(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SETTEAMNAME_OFFSET))(this, a1, a2);
		}

		::System::Single GetAvatarHpPercent(::Enum_3_01618AD0437C8486 a1, ::System::UInt32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_01618AD0437C8486, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETAVATARHPPERCENT_OFFSET))(this, a1, a2);
		}

		::System::Single GetAvatarHpPercent_1(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETAVATARHPPERCENT_1_OFFSET))(this, a1);
		}

		::System::Boolean IsAvatarAlive(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ISAVATARALIVE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllTrailAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETALLTRAILAVATARS_OFFSET))(this);
		}

		::System::Boolean TryConsumeMapTeleport(::System::Boolean a1, ::RPG::Client::TeamModule_TeleportState& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::RPG::Client::TeamModule_TeleportState&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_TRYCONSUMEMAPTELEPORT_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckTeamLimitConditionByAvatarList(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CHECKTEAMLIMITCONDITIONBYAVATARLIST_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckTeamLimitCondition(::RPG::Client::TeamData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CHECKTEAMLIMITCONDITION_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetTeamLimitHintParam(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETTEAMLIMITHINTPARAM_OFFSET))(this, a1);
		}

		::System::String* GetTeamLimitDesc(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETTEAMLIMITDESC_OFFSET))(this, a1);
		}

		::System::String* GetTeamLimitToast(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETTEAMLIMITTOAST_OFFSET))(this, a1);
		}

		::RPG::Client::TeamData* CloneTeamDataFromExtraLineup(::Enum_3_63C076C405BE0674_2 a1)
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID, ::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CLONETEAMDATAFROMEXTRALINEUP_OFFSET))(this, a1);
		}

		::System::Boolean IsCanChangeLineupLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ISCANCHANGELINEUPLEADER_OFFSET))(this);
		}

		::System::Boolean CheckTeamAssociationUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CHECKTEAMASSOCIATIONUNLOCK_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetAllLineupDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDGETALLLINEUPDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetCurLineupDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDGETCURLINEUPDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncLineupNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDSYNCLINEUPNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncAllPresetLineupNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDSYNCALLPRESETLINEUPNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdJoinLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDJOINLINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdQuitLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDQUITLINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSwapLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDSWAPLINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdReplaceLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDREPLACELINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetLineupAvatarDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDGETLINEUPAVATARDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChangeLineupLeaderScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDCHANGELINEUPLEADERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdVirtualLineupDestroyNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDVIRTUALLINEUPDESTROYNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _DoDestoryVirtualLineup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__DODESTORYVIRTUALLINEUP_OFFSET))(this);
		}

		::System::Boolean _ShouldMergeDestroyingTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__SHOULDMERGEDESTROYINGTEAM_OFFSET))(this);
		}

		::System::Void _OnCmdExtraLineupDestroyNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDEXTRALINEUPDESTROYNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSwitchLineupIndexScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDSWITCHLINEUPINDEXSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSetLineupNameScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDSETLINEUPNAMESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerMapTeleport(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONPLAYERMAPTELEPORT_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerMpTeleportNoSwitchIn(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONPLAYERMPTELEPORTNOSWITCHIN_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerMpTeleportNoSwitchInWhite(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONPLAYERMPTELEPORTNOSWITCHINWHITE_OFFSET))(this, a1);
		}

		::System::Void _OnMapRefreshAfterRelogin(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONMAPREFRESHAFTERRELOGIN_OFFSET))(this, a1);
		}

		::System::Int32 get_MainlineTeamCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_MAINLINETEAMCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_CurrentRegularTeamIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_CURRENTREGULARTEAMINDEX_OFFSET))(this);
		}

		::System::UInt32 get_RegularTeamCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_REGULARTEAMCOUNT_OFFSET))(this);
		}

		::System::Void _JoinMemberToLocalEditTeam(::RPG::Client::TeamData* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__JOINMEMBERTOLOCALEDITTEAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _JoinMemberToPreSetTeam(::RPG::Client::TeamData* a1, ::RPG::AvatarSystem::IAvatar* a2, ::System::UInt32 a3, ::RPG::Client::AssistData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__JOINMEMBERTOPRESETTEAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _JoinMemberToTeamDefault(::RPG::Client::TeamData* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__JOINMEMBERTOTEAMDEFAULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 _GetLeaderSlotAfterReplace(::RPG::Client::TeamData* a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamData*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__GETLEADERSLOTAFTERREPLACE_OFFSET))(this, a1, a2);
		}

		::System::Int32 _JoinVacantSlotWithExtraAvatars(::RPG::Client::TeamData* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamData*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__JOINVACANTSLOTWITHEXTRAAVATARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SwitchCurrentTeam(::Enum_3_63C076C405BE0674_2 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_2, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__SWITCHCURRENTTEAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsCurrentTeam(::Class_1_21DCD4640D389503_16* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ISCURRENTTEAM_OFFSET))(this, a1);
		}

		::System::Boolean IsCurrentTeam(::Class_1_21DCD4640D389503_16* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ISCURRENTTEAM_OFFSET))(this, a1);
		}

		::System::Void RefreshLineup(::Class_1_21DCD4640D389503_16* a1, ::System::Boolean a2, ::System::Collections::Generic::IList_1<::Enum_3_71AA90D596A09AC8_12>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_16*, ::System::Boolean, ::System::Collections::Generic::IList_1<::Enum_3_71AA90D596A09AC8_12>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_REFRESHLINEUP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnCmdSyncServerSceneChangeNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDSYNCSERVERSCENECHANGENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdVirtualLineupTrialAvatarChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDVIRTUALLINEUPTRIALAVATARCHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void PauseTeamDataRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_PAUSETEAMDATAREFRESH_OFFSET))(this);
		}

		::System::Void ResumeTeamDataRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_RESUMETEAMDATAREFRESH_OFFSET))(this);
		}

		::System::Void _DiffTeamDataAndNotify(::RPG::Client::TeamData* a1, ::RPG::Client::TeamData* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::TeamData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__DIFFTEAMDATAANDNOTIFY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DetectMazeSkillMPRefresh(::RPG::Client::TeamData* a1, ::RPG::Client::TeamData* a2, ::RPG::Client::TeamDataRefreshParam*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::TeamData*, ::RPG::Client::TeamDataRefreshParam*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__DETECTMAZESKILLMPREFRESH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DetectCharacterHPRefresh(::RPG::Client::TeamData* a1, ::RPG::Client::TeamData* a2, ::RPG::Client::TeamDataRefreshParam*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::TeamData*, ::RPG::Client::TeamDataRefreshParam*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__DETECTCHARACTERHPREFRESH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UpdateTeamData(::RPG::Client::TeamData* a1, ::Class_1_21DCD4640D389503_16* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__UPDATETEAMDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TeamData* _GetTeamData(::System::Boolean a1, ::Enum_3_63C076C405BE0674_2 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID, ::System::Boolean, ::Enum_3_63C076C405BE0674_2, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__GETTEAMDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _IsTeamContainAvatar(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ISTEAMCONTAINAVATAR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckTeamLevel(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__CHECKTEAMLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckTeamAvatarCount(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__CHECKTEAMAVATARCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckContainAnyHeroAvatar(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__CHECKCONTAINANYHEROAVATAR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckContainMultiPathAvatar(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__CHECKCONTAINMULTIPATHAVATAR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMapCreated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONMAPCREATED_OFFSET))(this, a1);
		}

		::System::Void _OnStoryModeChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONSTORYMODECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnMazeToBattleTransition(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONMAZETOBATTLETRANSITION_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhasePopupFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONADVENTUREPHASEPOPUPFINISH_OFFSET))(this, a1);
		}

		::System::Void _ProcessTeamSnapshotDataChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__PROCESSTEAMSNAPSHOTDATACHANGE_OFFSET))(this);
		}

		::System::Void _ReportCurrentMpMaxChange(::RPG::Client::TeamData* a1, ::Class_1_21DCD4640D389503_16* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::Class_1_21DCD4640D389503_16*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__REPORTCURRENTMPMAXCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _WillBeEmptyAfterQuit(::RPG::Client::TeamData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__WILLBEEMPTYAFTERQUIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsExistLocalEditTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_ISEXISTLOCALEDITTEAM_OFFSET))(this);
		}

		::System::Boolean get_IsCurEditLocalTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_ISCUREDITLOCALTEAM_OFFSET))(this);
		}

		::System::Boolean get_IsCurShowLocalTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_ISCURSHOWLOCALTEAM_OFFSET))(this);
		}

		::System::Void set_IsCurShowLocalTeam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SET_ISCURSHOWLOCALTEAM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_ISCLIENTONLY_OFFSET))(this);
		}

		::System::Void set_IsClientOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SET_ISCLIENTONLY_OFFSET))(this, a1);
		}

		::RPG::Client::ITeamBuildCalculator* get_TeamBuildCalculator()
		{
			return ((::RPG::Client::ITeamBuildCalculator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_TEAMBUILDCALCULATOR_OFFSET))(this);
		}

		::System::UInt32 get_TeamAssociationUnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_TEAMASSOCIATIONUNLOCKID_OFFSET))(this);
		}

		::System::Void _ResumeTeamDataRefresh_b__96_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__RESUMETEAMDATAREFRESH_B__96_0_OFFSET))(this);
		}
	};
}
