#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MuseumTalkTriggerType.h"
#include "unitysdk/RPG/GameCore/MuseumTalkType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_43B0AF86156D9901;
class Class_1_4E3248E9DB772341;
class Class_1_4E3248E9DB772341_1;
class Class_1_D17272E82AE804C2_749;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumAvatarItemData; }
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumExhibitItemData; }
namespace RPG::Client { class MuseumGetItemNotifyParam; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::Client { class MuseumTurnResult; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class MuseumActivityQuestConfigRow; }
namespace RPG::GameCore { class MuseumCommentsRow; }
namespace RPG::GameCore { class MuseumDeskTalkConfigRow; }
namespace RPG::GameCore { class MuseumTutorialTalkRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMMODULE_GETALLEXHIBITITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xCE01D10)
#define RPG_CLIENT_MUSEUMMODULE_GETALLMUSEUMAVATARITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xCE01B90)
#define RPG_CLIENT_MUSEUMMODULE_GETDISPLAYNPCSTAFFDATAS_OFFSET UNITYSDK_OFFSET(0xCDFA390)
#define RPG_CLIENT_MUSEUMMODULE_GETMUSEUMINFO_OFFSET UNITYSDK_OFFSET(0xCDF9B90)
#define RPG_CLIENT_MUSEUMMODULE_GETMUSTTRIGGERTALKID_OFFSET UNITYSDK_OFFSET(0xCDF8A20)
#define RPG_CLIENT_MUSEUMMODULE_GETRANDOMCOMMENTS_OFFSET UNITYSDK_OFFSET(0xCDF3AD0)
#define RPG_CLIENT_MUSEUMMODULE_GETSTAFFDATA_OFFSET UNITYSDK_OFFSET(0xCDF07C0)
#define RPG_CLIENT_MUSEUMMODULE_GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xCDF6840)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLEXHIBITITEMDATA_OFFSET UNITYSDK_OFFSET(0xCDF31F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLITEMMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF7770)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF7720)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLMUSEUMAVATARITEMDATA_OFFSET UNITYSDK_OFFSET(0xCDF30B0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF77B0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFS_OFFSET UNITYSDK_OFFSET(0xCDF9AE0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ATLASUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF7880)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURCONFIGLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF7FC0)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURFORCEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF7CC0)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURPHASEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF7D10)
#define RPG_CLIENT_MUSEUMMODULE_GET_EXHIBITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xCE02060)
#define RPG_CLIENT_MUSEUMMODULE_GET_FINISHEDQUESTLIST_OFFSET UNITYSDK_OFFSET(0xCE01F50)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALLAREAGOTFULLRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xCE01FD0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALLFINISH_OFFSET UNITYSDK_OFFSET(0xCDFAA50)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALREADYFINISH_OFFSET UNITYSDK_OFFSET(0xCE02040)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISATLASUNLOCK_OFFSET UNITYSDK_OFFSET(0xCDF79A0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISCONFIGLOCKED_OFFSET UNITYSDK_OFFSET(0xCDF82E0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISFORCEMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xCDF80F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCE01FF0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISMARKETUNLOCK_OFFSET UNITYSDK_OFFSET(0xCDF7A60)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISPHASEUNLOCKMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xCDF8170)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISTARGETUNLOCK_OFFSET UNITYSDK_OFFSET(0xCDF7BF0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISUPGRADEUNLOCK_OFFSET UNITYSDK_OFFSET(0xCDF7B20)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISWAITFINISHTURNRSP_OFFSET UNITYSDK_OFFSET(0xCE01EF0)
#define RPG_CLIENT_MUSEUMMODULE_GET_LOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xCE01F30)
#define RPG_CLIENT_MUSEUMMODULE_GET_MARKETUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF78C0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MAXSTAFFSTATS_OFFSET UNITYSDK_OFFSET(0xCE01F10)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xCE02180)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMCURRENCYCONFIGID_OFFSET UNITYSDK_OFFSET(0xCE01EB0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMDATA_OFFSET UNITYSDK_OFFSET(0xCDF6790)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONCHAPTERID_OFFSET UNITYSDK_OFFSET(0xCDF81C0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONLIMIT_OFFSET UNITYSDK_OFFSET(0xCDF69A0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMTURNRESULTCACHE_OFFSET UNITYSDK_OFFSET(0xCE01ED0)
#define RPG_CLIENT_MUSEUMMODULE_GET_PHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xCE01FB0)
#define RPG_CLIENT_MUSEUMMODULE_GET_REDDOTPHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xCE01F90)
#define RPG_CLIENT_MUSEUMMODULE_GET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0xCE01F70)
#define RPG_CLIENT_MUSEUMMODULE_GET_REWARDQUESTSERIESLIST_OFFSET UNITYSDK_OFFSET(0xCE01E90)
#define RPG_CLIENT_MUSEUMMODULE_GET_STAFFCOUNT_OFFSET UNITYSDK_OFFSET(0xCE020F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENITEMMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xCDF77F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xCDF7830)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENSTAFFMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xCDF7810)
#define RPG_CLIENT_MUSEUMMODULE_GET_TARGETUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF7950)
#define RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xCE02350)
#define RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKEXHIBITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xCE02520)
#define RPG_CLIENT_MUSEUMMODULE_GET_UPGRADEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF7900)
#define RPG_CLIENT_MUSEUMMODULE_HAVEHIDEPHASEMISSION_OFFSET UNITYSDK_OFFSET(0xCDF6110)
#define RPG_CLIENT_MUSEUMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCDFB8C0)
#define RPG_CLIENT_MUSEUMMODULE_ISCHAPTERMISSIONREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xCDF67E0)
#define RPG_CLIENT_MUSEUMMODULE_ISPHASEMISSIONSTART_OFFSET UNITYSDK_OFFSET(0xCDF6380)
#define RPG_CLIENT_MUSEUMMODULE_RANDOMGETTALKID_OFFSET UNITYSDK_OFFSET(0xCDF83C0)
#define RPG_CLIENT_MUSEUMMODULE_RANDOMGETTEXTIDBYTALKID_OFFSET UNITYSDK_OFFSET(0xCDF8BA0)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF4BE0)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF5240)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHCONFIGLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF5790)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xCDF9DA0)
#define RPG_CLIENT_MUSEUMMODULE_REMOVESTAFF_OFFSET UNITYSDK_OFFSET(0xCDF9CC0)
#define RPG_CLIENT_MUSEUMMODULE_SET_FINISHEDQUESTLIST_OFFSET UNITYSDK_OFFSET(0xCE01F60)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISALLAREAGOTFULLRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xCE01FE0)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISALREADYFINISH_OFFSET UNITYSDK_OFFSET(0xCE02050)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISWAITFINISHTURNRSP_OFFSET UNITYSDK_OFFSET(0xCE01F00)
#define RPG_CLIENT_MUSEUMMODULE_SET_LOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xCE01F40)
#define RPG_CLIENT_MUSEUMMODULE_SET_MAXSTAFFSTATS_OFFSET UNITYSDK_OFFSET(0xCE01F20)
#define RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMCURRENCYCONFIGID_OFFSET UNITYSDK_OFFSET(0xCE01EC0)
#define RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMTURNRESULTCACHE_OFFSET UNITYSDK_OFFSET(0xCE01EE0)
#define RPG_CLIENT_MUSEUMMODULE_SET_PHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xCE01FC0)
#define RPG_CLIENT_MUSEUMMODULE_SET_REDDOTPHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xCE01FA0)
#define RPG_CLIENT_MUSEUMMODULE_SET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0xCE01F80)
#define RPG_CLIENT_MUSEUMMODULE_SET_REWARDQUESTSERIESLIST_OFFSET UNITYSDK_OFFSET(0xCE01EA0)
#define RPG_CLIENT_MUSEUMMODULE_SET_TAKENITEMMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xCDF7800)
#define RPG_CLIENT_MUSEUMMODULE_SET_TAKENSTAFFMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xCDF7820)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYNEWTURN_OFFSET UNITYSDK_OFFSET(0xCDFA8D0)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYRANDOMEVENT_OFFSET UNITYSDK_OFFSET(0xCDFA5D0)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYTARGETREWARD_OFFSET UNITYSDK_OFFSET(0xCDFABE0)
#define RPG_CLIENT_MUSEUMMODULE_TRYTRIGGERTUTORIALMISSIONPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCDFB230)
#define RPG_CLIENT_MUSEUMMODULE_UPDATEUNSEENTALKMISSION_OFFSET UNITYSDK_OFFSET(0xCDF8D80)
#define RPG_CLIENT_MUSEUMMODULE__ADDMUSTTRIGGERTALKID_OFFSET UNITYSDK_OFFSET(0xCDF9380)
#define RPG_CLIENT_MUSEUMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCDFBF30)
#define RPG_CLIENT_MUSEUMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCDFC210)
#define RPG_CLIENT_MUSEUMMODULE__ADDTALKID_OFFSET UNITYSDK_OFFSET(0xCDF95B0)
#define RPG_CLIENT_MUSEUMMODULE__BEGINMUSEUMPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCDFDFC0)
#define RPG_CLIENT_MUSEUMMODULE__CACHETARGETREWARD_OFFSET UNITYSDK_OFFSET(0xCDFFCD0)
#define RPG_CLIENT_MUSEUMMODULE__CANTAKEITEMMISSION_OFFSET UNITYSDK_OFFSET(0xCDF75F0)
#define RPG_CLIENT_MUSEUMMODULE__CLEARTARGETREWARDCACHE_OFFSET UNITYSDK_OFFSET(0xCDFB070)
#define RPG_CLIENT_MUSEUMMODULE__CMDBUYNPCSTUFFSCRSP_OFFSET UNITYSDK_OFFSET(0xCDFDB50)
#define RPG_CLIENT_MUSEUMMODULE__CMDFINISHCURTURNSCRSP_OFFSET UNITYSDK_OFFSET(0xCDFDCF0)
#define RPG_CLIENT_MUSEUMMODULE__CMDGETMUSEUMINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xCDFCCE0)
#define RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0xCDFE4A0)
#define RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTSELECTSCRSP_OFFSET UNITYSDK_OFFSET(0xCDFE570)
#define RPG_CLIENT_MUSEUMMODULE__CMDREMOVESTUFFFROMAREASCRSP_OFFSET UNITYSDK_OFFSET(0xCDFDC50)
#define RPG_CLIENT_MUSEUMMODULE__CMDSETSTUFFTOAREASCRSP_OFFSET UNITYSDK_OFFSET(0xCDFDBD0)
#define RPG_CLIENT_MUSEUMMODULE__CMDTAKECOLLECTREWARDRSP_OFFSET UNITYSDK_OFFSET(0xCDFE6F0)
#define RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASCRSP_OFFSET UNITYSDK_OFFSET(0xCDFE1F0)
#define RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASTATSCRSP_OFFSET UNITYSDK_OFFSET(0xCDFE2D0)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLEXHIBITCOLLECTIONITEMDATA_OFFSET UNITYSDK_OFFSET(0xCE012C0)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLFORCEMISSIONID_OFFSET UNITYSDK_OFFSET(0xCDF5A20)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLMISSIONID_OFFSET UNITYSDK_OFFSET(0xCDF4D80)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLPHASEUNLOCKMISSIONID_OFFSET UNITYSDK_OFFSET(0xCDF7260)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFCOLLECTIONITEMDATA_OFFSET UNITYSDK_OFFSET(0xCE00E80)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFSDATA_OFFSET UNITYSDK_OFFSET(0xCDF9E10)
#define RPG_CLIENT_MUSEUMMODULE__CREATETALKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF9190)
#define RPG_CLIENT_MUSEUMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCDF9940)
#define RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOLINDEX_OFFSET UNITYSDK_OFFSET(0xCDF4AE0)
#define RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOL_OFFSET UNITYSDK_OFFSET(0xCDF4950)
#define RPG_CLIENT_MUSEUMMODULE__GETHIGHESTPRIORITY_OFFSET UNITYSDK_OFFSET(0xCDF9860)
#define RPG_CLIENT_MUSEUMMODULE__GETPOSITIVECOMMENTPROB_OFFSET UNITYSDK_OFFSET(0xCDF4A00)
#define RPG_CLIENT_MUSEUMMODULE__GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_B__28_0_OFFSET UNITYSDK_OFFSET(0xCE02700)
#define RPG_CLIENT_MUSEUMMODULE__GETTUTORIALMISSIONPERFORMANCEROW_OFFSET UNITYSDK_OFFSET(0xCDFB600)
#define RPG_CLIENT_MUSEUMMODULE__HASTARGETREWARDCACHE_OFFSET UNITYSDK_OFFSET(0xCDFAFD0)
#define RPG_CLIENT_MUSEUMMODULE__INITREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xCDFBBC0)
#define RPG_CLIENT_MUSEUMMODULE__INITTALKDATA_OFFSET UNITYSDK_OFFSET(0xCDF9000)
#define RPG_CLIENT_MUSEUMMODULE__ISHAVEMISSIONEVENT_OFFSET UNITYSDK_OFFSET(0xCE00560)
#define RPG_CLIENT_MUSEUMMODULE__LOADTALKDATA_OFFSET UNITYSDK_OFFSET(0xCDF8560)
#define RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_1_OFFSET UNITYSDK_OFFSET(0xCDFCF20)
#define RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_OFFSET UNITYSDK_OFFSET(0xCDFEC80)
#define RPG_CLIENT_MUSEUMMODULE__ONFORCEMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xCDF74A0)
#define RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xCDFFF80)
#define RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xCDFFEC0)
#define RPG_CLIENT_MUSEUMMODULE__ONMUSEUMPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0xCE00390)
#define RPG_CLIENT_MUSEUMMODULE__ONREFRESHEVENTSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xCE00750)
#define RPG_CLIENT_MUSEUMMODULE__ONSHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xCE006E0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCGETEXHIBITSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCDFF2D0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCGETSTUFFSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCDFF040)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMFUNDSCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCDFEF70)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMINFOCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCDFEA40)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMRANDOMEVENTSTARTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCDFF4E0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETMISSIONFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0xCDFFAC0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETREWARDNOTIFY_OFFSET UNITYSDK_OFFSET(0xCDFFC60)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETSTARTNOTIFY_OFFSET UNITYSDK_OFFSET(0xCDFF8D0)
#define RPG_CLIENT_MUSEUMMODULE__PREPARECOMMENTS_OFFSET UNITYSDK_OFFSET(0xCDF4290)
#define RPG_CLIENT_MUSEUMMODULE__READCOMMENTCONST_OFFSET UNITYSDK_OFFSET(0xCDF4000)
#define RPG_CLIENT_MUSEUMMODULE__READUNLOCKMISSIONID_OFFSET UNITYSDK_OFFSET(0xCDF53E0)
#define RPG_CLIENT_MUSEUMMODULE__RECEIVEALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF6B90)
#define RPG_CLIENT_MUSEUMMODULE__RECEIVEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF7110)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHCONFIGLOCKMISSIONDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0xCE026E0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_1_OFFSET UNITYSDK_OFFSET(0xCDFEF00)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xCDFD540)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0xCE009B0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0xCDFDAF0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFORCEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF5F60)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHPHASEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF5DA0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHSINGLESTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xCE00940)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xCDF9F50)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHTAKENREWARDMUSEUMDATA_OFFSET UNITYSDK_OFFSET(0xCDFD5B0)
#define RPG_CLIENT_MUSEUMMODULE__RESETSTATUS_OFFSET UNITYSDK_OFFSET(0xCDFD1A0)
#define RPG_CLIENT_MUSEUMMODULE__SETVALIDTALKIDSCACHE_OFFSET UNITYSDK_OFFSET(0xCDF86E0)
#define RPG_CLIENT_MUSEUMMODULE__TRIGGERPERFORMANCEANDEXITMUSEUM_OFFSET UNITYSDK_OFFSET(0xCDFB2F0)
#define RPG_CLIENT_MUSEUMMODULE__TRYADDTALKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xCDF97B0)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHEPHASEUPGRADE_OFFSET UNITYSDK_OFFSET(0xCE016F0)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNCHANGE_OFFSET UNITYSDK_OFFSET(0xCE01B30)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNRESULT_OFFSET UNITYSDK_OFFSET(0xCE01A70)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYMUSEUMEXHIBITGET_OFFSET UNITYSDK_OFFSET(0xCE01690)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYNEWPHASEBEGIN_OFFSET UNITYSDK_OFFSET(0xCE00060)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYPHASEUPGRADE_OFFSET UNITYSDK_OFFSET(0xCE004D0)
#define RPG_CLIENT_MUSEUMMODULE__TRYUPDATEUNSEENMISSIONBYTALKID_OFFSET UNITYSDK_OFFSET(0xCDF8970)
#define RPG_CLIENT_MUSEUMMODULE__UNINITCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0xCDF4A80)
#define RPG_CLIENT_MUSEUMMODULE__UNINITMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCDF6AC0)
#define RPG_CLIENT_MUSEUMMODULE__UNINITTALKDATA_OFFSET UNITYSDK_OFFSET(0xCDF9320)
#define RPG_CLIENT_MUSEUMMODULE__UPDATEUNSEENTUTORIALMISSION_OFFSET UNITYSDK_OFFSET(0xCDFB6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumModule_TypeDefinitionIndex = 63388;

	class MuseumModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _PositiveCommentProbKey; // 0x0
		// static const ::System::String* _CommentNumPerAreaKey; // 0x0
		// static const ::System::String* _MuseumMissionLimitIDKey; // 0x0
		// static const ::System::String* _MuseumMissionChapterIDKey; // 0x0
		// static const ::System::String* _AtlasUnlockMissionIDKey; // 0x0
		// static const ::System::String* _MarketUnlockMissionIDKey; // 0x0
		// static const ::System::String* _UpgradeUnlockMissionIDKey; // 0x0
		// static const ::System::String* _TargetUnlockMissionIDKey; // 0x0
		// static const ::System::UInt32 _MuseumMaxPhaseLevel = 0x5; // 0x0
		// static const ::System::String* _MUSEUM_PERFORMANCE_EVENT_PREFIX; // 0x0
		// static const ::System::String* _MUSEUM_HIDE_MISSION_PERFORMANCE_EVENT; // 0x0
		// static const ::System::String* _MuseumCurrencyItemIDKey; // 0x0
		// static const ::System::String* _MUSEUM_END_PERFORMANCE_EVENT; // 0x0
		::RPG::Client::MainMissionData* _MarketUnlockMissionData; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* _AllExhibitItemData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllItemMissionData; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AllItemMissionID; // 0x28
		::RPG::Client::MainMissionData* _AtlasUnlockMissionData; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _PhaseQuestList_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllStaffMissionData; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _AllMissionID; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotQuestSeries_k__BackingField; // 0x50
		::RPG::Client::Promises::Promise* _RefreshMissionDataPromise; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllPhaseUnlockMissionData; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _TalkMissionList; // 0x68
		::RPG::Client::Promises::Promise* _RemoveStaffPromise; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _AllPhaseUnlockMissionID; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllMissionData; // 0x80
		::Il2CppArray<::System::Single>* _PositiveCommentProb; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>* _AllMuseumAvatarItemData; // 0x90
		::System::Collections::Generic::List_1<::System::UInt32>* _AllUnlockMissionID; // 0x98
		::RPG::Client::MuseumTurnResult* _MuseumTurnResultCache_k__BackingField; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _AllForceMissionID; // 0xA8
		::RPG::Client::MainMissionData* _CurForceMissionData; // 0xB0
		::RPG::Client::Promises::Promise* _GetMuseumInfoPromise; // 0xB8
		::Class_1_43B0AF86156D9901* _LogicRandom_k__BackingField; // 0xC0
		::RPG::Client::MuseumData* _MuseumData; // 0xC8
		::RPG::Client::Promises::Promise* _RefreshConfigLockMissionDataPromise; // 0xD0
		::RPG::Client::MainMissionData* _UpgradeUnlockMissionData; // 0xD8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkTriggerType, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkType, ::System::UInt32>*>* _TriggerTypeToMustTriggerTalkDict; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* _AllStaffs; // 0xE8
		::RPG::Client::MainMissionData* _TargetUnlockMissionData; // 0xF0
		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>* _RewardQuestSeriesList_k__BackingField; // 0xF8
		::Il2CppArray<::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*>* _Comments; // 0x100
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestList_k__BackingField; // 0x108
		::RPG::Client::MuseumGetItemNotifyParam* _MuseumGetItemNotifyCache; // 0x110
		::RPG::Client::Promises::Promise* _RefreshUnlockMissionDataPromise; // 0x118
		::System::Collections::Generic::List_1<::System::UInt32>* _ValidTalkIDsCache; // 0x120
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkTriggerType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _TriggerTypeToTalkIDs; // 0x128
		::System::Collections::Generic::List_1<::System::UInt32>* _AllStaffMissionID; // 0x130
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotPhaseQuestList_k__BackingField; // 0x138
		::System::UInt32 _CommentNumPerArea; // 0x140
		::System::Nullable_1<::System::UInt32> _PhaseUpgradeNotify; // 0x144
		::System::UInt32 _ListeningMainMissionID; // 0x14C
		::System::UInt32 _UpgradeUnlockMissionID; // 0x150
		::System::Boolean _IsAllAreaGotFullRenewPoint_k__BackingField; // 0x154
		::System::Boolean _IsWaitFinishTurnRsp_k__BackingField; // 0x155
		::System::UInt32 _TakenItemMissionCount_k__BackingField; // 0x158
		::System::UInt32 _MuseumMissionLimit; // 0x15C
		::System::UInt32 _MuseumMissionChapterID; // 0x160
		::System::Boolean _IsAlreadyFinish_k__BackingField; // 0x164
		::System::Boolean _IsDataLoaded; // 0x165
		::System::Boolean _IsAlreadyFinish; // 0x166
		::System::UInt32 _TargetUnlockMissionID; // 0x168
		::System::UInt32 _TakenStaffMissionCount_k__BackingField; // 0x16C
		::System::UInt32 _MarketUnlockMissionID; // 0x170
		::System::UInt32 _MuseumCurrencyConfigID_k__BackingField; // 0x174
		::System::Int32 _MaxStaffStats_k__BackingField; // 0x178
		::System::Boolean _IsInPerfomance; // 0x17C
		::System::Boolean _IsTakenItemMission; // 0x17D
		::System::Boolean _IsTurnResultNeedNotify; // 0x17E
		::System::Boolean _MuseumShowNewTurnHint; // 0x17F
		::System::UInt32 _AtlasUnlockMissionID; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>* GetRandomComments(::RPG::Client::MuseumAreaData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*(*)(::PVOID, ::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETRANDOMCOMMENTS_OFFSET))(this, a1);
		}

		::System::Void _UnInitCommentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UNINITCOMMENTDATA_OFFSET))(this);
		}

		::System::Void _ReadCommentConst()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__READCOMMENTCONST_OFFSET))(this);
		}

		::System::Void _PrepareComments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__PREPARECOMMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>* _GetCommentPool(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOL_OFFSET))(this, a1, a2);
		}

		::System::Single _GetPositiveCommentProb(::RPG::Client::MuseumAreaData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETPOSITIVECOMMENTPROB_OFFSET))(this, a1);
		}

		static ::System::Int32 _GetCommentPoolIndex(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOLINDEX_OFFSET))(a1, a2);
		}

		::RPG::Client::Promises::Promise* RefreshAllMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHALLMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshAllUnlockMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshConfigLockMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHCONFIGLOCKMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean HaveHidePhaseMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_HAVEHIDEPHASEMISSION_OFFSET))(this);
		}

		::System::Boolean IsChapterMissionReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_ISCHAPTERMISSIONREACHLIMIT_OFFSET))(this);
		}

		::System::Void _UnInitMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UNINITMISSIONDATA_OFFSET))(this);
		}

		::System::Void _CreateAllMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLMISSIONID_OFFSET))(this);
		}

		::System::Void _ReceiveAllMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__RECEIVEALLMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _ReadUnlockMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__READUNLOCKMISSIONID_OFFSET))(this);
		}

		::System::Void _ReceiveUnlockMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__RECEIVEUNLOCKMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _CreateAllForceMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLFORCEMISSIONID_OFFSET))(this);
		}

		::System::Void _CreateAllPhaseUnlockMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLPHASEUNLOCKMISSIONID_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _RefreshPhaseUnlockMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHPHASEUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _RefreshForceMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHFORCEMISSIONDATA_OFFSET))(this);
		}

		::System::Void _OnForceMissionTaken(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONFORCEMISSIONTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean _CanTakeItemMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CANTAKEITEMMISSION_OFFSET))(this, a1);
		}

		::System::Int32 GetStartRelatedMissionCountByChapterID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_OFFSET))(this);
		}

		::System::Boolean IsPhaseMissionStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_ISPHASEMISSIONSTART_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* get_AllMissionData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* get_AllItemMissionData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLITEMMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* get_AllStaffMissionData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_TakenItemMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TAKENITEMMISSIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TakenItemMissionCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_TAKENITEMMISSIONCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TakenStaffMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TAKENSTAFFMISSIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TakenStaffMissionCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_TAKENSTAFFMISSIONCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TakenMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TAKENMISSIONCOUNT_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_AtlasUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ATLASUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_MarketUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MARKETUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_UpgradeUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_UPGRADEUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_TargetUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TARGETUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsAtlasUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISATLASUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsMarketUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISMARKETUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISUPGRADEUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsTargetUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISTARGETUNLOCK_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_CurForceMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_CURFORCEMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_CurPhaseUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_CURPHASEUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_CurConfigLockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_CURCONFIGLOCKMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_MuseumMissionLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_MuseumMissionChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONCHAPTERID_OFFSET))(this);
		}

		::System::Boolean get_IsForceMissionTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISFORCEMISSIONTAKEN_OFFSET))(this);
		}

		::System::Boolean get_IsPhaseUnlockMissionTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISPHASEUNLOCKMISSIONTAKEN_OFFSET))(this);
		}

		::System::Boolean get_IsConfigLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISCONFIGLOCKED_OFFSET))(this);
		}

		::System::UInt32 RandomGetTalkID(::RPG::GameCore::MuseumTalkTriggerType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MuseumTalkTriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_RANDOMGETTALKID_OFFSET))(this, a1);
		}

		::System::UInt32 GetMustTriggerTalkID(::RPG::GameCore::MuseumTalkTriggerType a1, ::RPG::GameCore::MuseumTalkType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MuseumTalkTriggerType, ::RPG::GameCore::MuseumTalkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETMUSTTRIGGERTALKID_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID RandomGetTextIDByTalkID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_RANDOMGETTEXTIDBYTALKID_OFFSET))(this, a1);
		}

		::System::Void UpdateUnseenTalkMission(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_UPDATEUNSEENTALKMISSION_OFFSET))(this, a1, a2);
		}

		::System::Void _InitTalkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__INITTALKDATA_OFFSET))(this);
		}

		::System::Void _UnInitTalkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UNINITTALKDATA_OFFSET))(this);
		}

		::System::Void _LoadTalkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__LOADTALKDATA_OFFSET))(this);
		}

		::System::Void _CreateTalkMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATETALKMISSIONDATA_OFFSET))(this);
		}

		::System::Void _AddTalkID(::RPG::GameCore::MuseumDeskTalkConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDTALKID_OFFSET))(this, a1);
		}

		::System::Void _AddMustTriggerTalkID(::RPG::GameCore::MuseumDeskTalkConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDMUSTTRIGGERTALKID_OFFSET))(this, a1);
		}

		::System::Void _TryAddTalkMissionList(::RPG::GameCore::MuseumDeskTalkConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYADDTALKMISSIONLIST_OFFSET))(this, a1);
		}

		::System::Void _TryUpdateUnseenMissionByTalkID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYUPDATEUNSEENMISSIONBYTALKID_OFFSET))(this, a1);
		}

		::System::Void _SetValidTalkIDsCache(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__SETVALIDTALKIDSCACHE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHighestPriority(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETHIGHESTPRIORITY_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumStaffData* GetStaffData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MuseumStaffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETSTAFFDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GetMuseumInfo()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETMUSEUMINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RemoveStaff(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REMOVESTAFF_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RefreshStaffAvailable()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHSTAFFAVAILABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumStaffData*>* GetDisplayNpcStaffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumStaffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETDISPLAYNPCSTAFFDATAS_OFFSET))(this);
		}

		::System::Void TryNotifyRandomEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYRANDOMEVENT_OFFSET))(this);
		}

		::System::Boolean TryNotifyNewTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYNEWTURN_OFFSET))(this);
		}

		::System::Void TryNotifyTargetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYTARGETREWARD_OFFSET))(this);
		}

		::System::Boolean TryTriggerTutorialMissionPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYTRIGGERTUTORIALMISSIONPERFORMANCE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdGetMuseumInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDGETMUSEUMINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdBuyNpcStuffScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDBUYNPCSTUFFSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdSetStuffToAreaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDSETSTUFFTOAREASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdRemoveStuffFromAreaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDREMOVESTUFFFROMAREASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdFinishCurTurnScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDFINISHCURTURNSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdUpgradeAreaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdUpgradeAreaStatScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASTATSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdMuseumRandomEventQueryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTQUERYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdMuseumRandomEventSelectScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTSELECTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdTakeCollectRewardRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDTAKECOLLECTREWARDRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumInfoChangedScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMINFOCHANGEDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumFundsChangedScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMFUNDSCHANGEDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncGetStuffScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCGETSTUFFSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncGetExhibitScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCGETEXHIBITSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumRandomEventStartScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMRANDOMEVENTSTARTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumTargetStartNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETSTARTNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumTargetMissionFinishNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETMISSIONFINISHNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumTargetRewardNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETREWARDNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasTargetRewardCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__HASTARGETREWARDCACHE_OFFSET))(this);
		}

		::System::Void _CacheTargetReward(::Class_1_D17272E82AE804C2_749* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_749*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CACHETARGETREWARD_OFFSET))(this, a1);
		}

		::System::Void _ClearTargetRewardCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CLEARTARGETREWARDCACHE_OFFSET))(this);
		}

		::System::Void _OnMainMissionTaken(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONTAKEN_OFFSET))(this, a1);
		}

		::System::Void _OnMainMissionFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnMuseumPerformanceEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMUSEUMPERFORMANCEEND_OFFSET))(this, a1);
		}

		::System::Void _OnShowLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSHOWLOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _BeginMuseumPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__BEGINMUSEUMPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _TryNotifyPhaseUpgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYPHASEUPGRADE_OFFSET))(this);
		}

		::System::Void _ResetStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__RESETSTATUS_OFFSET))(this);
		}

		::System::Void _RefreshTakenRewardMuseumData(::Class_1_4E3248E9DB772341* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4E3248E9DB772341*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHTAKENREWARDMUSEUMDATA_OFFSET))(this, a1);
		}

		::System::Void _RefreshStaffAvailable(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHSTAFFAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _RefreshEventStaffAvailable(::Class_1_4E3248E9DB772341* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4E3248E9DB772341*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _RefreshEventStaffAvailable_1(::Class_1_4E3248E9DB772341_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4E3248E9DB772341_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_1_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshEventStaffAvailable(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONREFRESHEVENTSTAFFAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _RefreshSingleStaffAvailable(::RPG::Client::MuseumStaffData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHSINGLESTAFFAVAILABLE_OFFSET))(this, a1, a2);
		}

		::System::Void _InitRewardQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__INITREWARDQUEST_OFFSET))(this);
		}

		::System::Void _RefreshFinishedQuest(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, a1);
		}

		::System::Void _CreateAllStaffsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFSDATA_OFFSET))(this);
		}

		::System::Void _CreateAllStaffCollectionItemData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFCOLLECTIONITEMDATA_OFFSET))(this);
		}

		::System::Void _CreateAllExhibitCollectionItemData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLEXHIBITCOLLECTIONITEMDATA_OFFSET))(this);
		}

		::System::Void _OnBeforeMuseumDataChange(::Class_1_4E3248E9DB772341_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4E3248E9DB772341_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnBeforeMuseumDataChange_1(::Class_1_4E3248E9DB772341* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4E3248E9DB772341*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_1_OFFSET))(this, a1);
		}

		::System::Void _TryNotifyMuseumExhibitGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYMUSEUMEXHIBITGET_OFFSET))(this);
		}

		::System::Void _TryCachePhaseUpgrade(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHEPHASEUPGRADE_OFFSET))(this, a1);
		}

		::System::Void _TryCacheTurnChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNCHANGE_OFFSET))(this);
		}

		::System::Void _TryCacheTurnResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNRESULT_OFFSET))(this);
		}

		::System::Void _UpdateUnseenTutorialMission(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UPDATEUNSEENTUTORIALMISSION_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MuseumTutorialTalkRow* _GetTutorialMissionPerformanceRow()
		{
			return ((::RPG::GameCore::MuseumTutorialTalkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETTUTORIALMISSIONPERFORMANCEROW_OFFSET))(this);
		}

		::System::Boolean _IsHaveMissionEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ISHAVEMISSIONEVENT_OFFSET))(this);
		}

		::System::Void _TryNotifyNewPhaseBegin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYNEWPHASEBEGIN_OFFSET))(this, a1);
		}

		::System::Void _TriggerPerformanceAndExitMuseum(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRIGGERPERFORMANCEANDEXITMUSEUM_OFFSET))(this, a1);
		}

		::System::Void _RefreshFinishStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHSTATUS_OFFSET))(this);
		}

		::RPG::Client::MuseumData* get_MuseumData()
		{
			return ((::RPG::Client::MuseumData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* get_AllStaffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumAvatarItemData*>* GetAllMuseumAvatarItemDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumAvatarItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETALLMUSEUMAVATARITEMDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>* GetAllExhibitItemDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETALLEXHIBITITEMDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>* get_AllMuseumAvatarItemData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLMUSEUMAVATARITEMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* get_AllExhibitItemData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLEXHIBITITEMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>* get_RewardQuestSeriesList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_REWARDQUESTSERIESLIST_OFFSET))(this);
		}

		::System::Void set_RewardQuestSeriesList(::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REWARDQUESTSERIESLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MuseumCurrencyConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMCURRENCYCONFIGID_OFFSET))(this);
		}

		::System::Void set_MuseumCurrencyConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMCURRENCYCONFIGID_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumTurnResult* get_MuseumTurnResultCache()
		{
			return ((::RPG::Client::MuseumTurnResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMTURNRESULTCACHE_OFFSET))(this);
		}

		::System::Void set_MuseumTurnResultCache(::RPG::Client::MuseumTurnResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumTurnResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMTURNRESULTCACHE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitFinishTurnRsp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISWAITFINISHTURNRSP_OFFSET))(this);
		}

		::System::Void set_IsWaitFinishTurnRsp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISWAITFINISHTURNRSP_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxStaffStats()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MAXSTAFFSTATS_OFFSET))(this);
		}

		::System::Void set_MaxStaffStats(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MAXSTAFFSTATS_OFFSET))(this, a1);
		}

		::Class_1_43B0AF86156D9901* get_LogicRandom()
		{
			return ((::Class_1_43B0AF86156D9901*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_LOGICRANDOM_OFFSET))(this);
		}

		::System::Void set_LogicRandom(::Class_1_43B0AF86156D9901* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43B0AF86156D9901*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_LOGICRANDOM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_FINISHEDQUESTLIST_OFFSET))(this);
		}

		::System::Void set_FinishedQuestList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_FINISHEDQUESTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotQuestSeries()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_REDDOTQUESTSERIES_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeries(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REDDOTQUESTSERIES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotPhaseQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_REDDOTPHASEQUESTLIST_OFFSET))(this);
		}

		::System::Void set_RedDotPhaseQuestList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REDDOTPHASEQUESTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PhaseQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_PHASEQUESTLIST_OFFSET))(this);
		}

		::System::Void set_PhaseQuestList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_PHASEQUESTLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllAreaGotFullRenewPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISALLAREAGOTFULLRENEWPOINT_OFFSET))(this);
		}

		::System::Void set_IsAllAreaGotFullRenewPoint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISALLAREAGOTFULLRENEWPOINT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISINPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean get_IsAllFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISALLFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsAlreadyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISALREADYFINISH_OFFSET))(this);
		}

		::System::Void set_IsAlreadyFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISALREADYFINISH_OFFSET))(this, a1);
		}

		::System::Int32 get_ExhibitItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_EXHIBITITEMCOUNT_OFFSET))(this);
		}

		::System::Int32 get_StaffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_STAFFCOUNT_OFFSET))(this);
		}

		::System::Int32 get_MuseumAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMAVATARCOUNT_OFFSET))(this);
		}

		::System::Int32 get_UnlockAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKAVATARCOUNT_OFFSET))(this);
		}

		::System::Int32 get_UnlockExhibitItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKEXHIBITITEMCOUNT_OFFSET))(this);
		}

		::System::Void _RefreshConfigLockMissionData_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHCONFIGLOCKMISSIONDATA_B__14_0_OFFSET))(this);
		}

		::System::Boolean _GetStartRelatedMissionCountByChapterID_b__28_0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_B__28_0_OFFSET))(this, a1);
		}
	};
}
