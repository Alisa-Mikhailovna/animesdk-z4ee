#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_BB4B99DE4C2501EC_6;
class Class_1_CCBBABD99E8F254F;
class Class_1_E4B65F41E2EB14EE;
namespace Proto { class SceneEntityInfo; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class TrainVisitorInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class TrainVisitorConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_1_OFFSET UNITYSDK_OFFSET(0xD6EAE60)
#define RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_OFFSET UNITYSDK_OFFSET(0xD6EADF0)
#define RPG_CLIENT_TRAINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD6ECFA0)
#define RPG_CLIENT_TRAINMODULE_FINDTRAINPASSENGER_OFFSET UNITYSDK_OFFSET(0xD6E83D0)
#define RPG_CLIENT_TRAINMODULE_FINDTRAINVISITORBYGROUP_OFFSET UNITYSDK_OFFSET(0xD6EA750)
#define RPG_CLIENT_TRAINMODULE_FINDTRAINVISITOR_OFFSET UNITYSDK_OFFSET(0xD6EA8E0)
#define RPG_CLIENT_TRAINMODULE_GETALLTRAINVISITORINFOS_OFFSET UNITYSDK_OFFSET(0xD6EB3A0)
#define RPG_CLIENT_TRAINMODULE_GETMISSIONUNLOCKEDVISITORAVATARIDS_OFFSET UNITYSDK_OFFSET(0xD6EAFA0)
#define RPG_CLIENT_TRAINMODULE_GETTRAINVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xD6EB240)
#define RPG_CLIENT_TRAINMODULE_GETTRAINVISITORINFO_OFFSET UNITYSDK_OFFSET(0xD6EB1B0)
#define RPG_CLIENT_TRAINMODULE_GETUNSEENVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xD6EBF90)
#define RPG_CLIENT_TRAINMODULE_GET_NEWREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xD6ECEE0)
#define RPG_CLIENT_TRAINMODULE_GET_NEWVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xD6ECEA0)
#define RPG_CLIENT_TRAINMODULE_GET_REWARDREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xD6ECF00)
#define RPG_CLIENT_TRAINMODULE_GET_TRAINVISITORINFODICT_OFFSET UNITYSDK_OFFSET(0xD6ECE80)
#define RPG_CLIENT_TRAINMODULE_GET_VISITORBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0xD6ECEC0)
#define RPG_CLIENT_TRAINMODULE_GET__RANDOMSEED_OFFSET UNITYSDK_OFFSET(0xD6ED1D0)
#define RPG_CLIENT_TRAINMODULE_HASUNCLAIMEDCOMPENSATIONREWARD_OFFSET UNITYSDK_OFFSET(0xD6EB770)
#define RPG_CLIENT_TRAINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD6ECF20)
#define RPG_CLIENT_TRAINMODULE_ISVISITORONTRAIN_OFFSET UNITYSDK_OFFSET(0xD6EAAC0)
#define RPG_CLIENT_TRAINMODULE_ISVISITORSEENINREGISTER_OFFSET UNITYSDK_OFFSET(0xD6EB7D0)
#define RPG_CLIENT_TRAINMODULE_RECORDVISITORINREGISTERSEEN_OFFSET UNITYSDK_OFFSET(0xD6EB8A0)
#define RPG_CLIENT_TRAINMODULE_REFRESHNEWVISITORREDDOT_OFFSET UNITYSDK_OFFSET(0xD6EB990)
#define RPG_CLIENT_TRAINMODULE_REFRESHREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xD6EC230)
#define RPG_CLIENT_TRAINMODULE_SENDGETTRAINVISITORREGISTERCSREQ_OFFSET UNITYSDK_OFFSET(0xD6EB4D0)
#define RPG_CLIENT_TRAINMODULE_SENDNEWSUPPLEMENTVISITORCSREQ_OFFSET UNITYSDK_OFFSET(0xD6EB5F0)
#define RPG_CLIENT_TRAINMODULE_SET_NEWREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xD6ECEF0)
#define RPG_CLIENT_TRAINMODULE_SET_NEWVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xD6ECEB0)
#define RPG_CLIENT_TRAINMODULE_SET_REWARDREDDOTVISITORIDLIST_OFFSET UNITYSDK_OFFSET(0xD6ECF10)
#define RPG_CLIENT_TRAINMODULE_SET_TRAINVISITORINFODICT_OFFSET UNITYSDK_OFFSET(0xD6ECE90)
#define RPG_CLIENT_TRAINMODULE_SET_VISITORBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0xD6ECED0)
#define RPG_CLIENT_TRAINMODULE_TAKETRAINVISITORREWARD_OFFSET UNITYSDK_OFFSET(0xD6EB6C0)
#define RPG_CLIENT_TRAINMODULE_VISITORCONDITIONPREPARED_OFFSET UNITYSDK_OFFSET(0xD6EAD10)
#define RPG_CLIENT_TRAINMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD6ED000)
#define RPG_CLIENT_TRAINMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD6ED050)
#define RPG_CLIENT_TRAINMODULE__ADDTRAINVISITOR_OFFSET UNITYSDK_OFFSET(0xD6EC8E0)
#define RPG_CLIENT_TRAINMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6ED4E0)
#define RPG_CLIENT_TRAINMODULE__CHECKPASSENGER_OFFSET UNITYSDK_OFFSET(0xD6E85C0)
#define RPG_CLIENT_TRAINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD6ED280)
#define RPG_CLIENT_TRAINMODULE__GETUNSEENVISITORIDLIST_B__37_0_OFFSET UNITYSDK_OFFSET(0xD6ED6F0)
#define RPG_CLIENT_TRAINMODULE__INITVISITORBEHAVIORCOUNT_OFFSET UNITYSDK_OFFSET(0xD6ECC50)
#define RPG_CLIENT_TRAINMODULE__ONCMDENTERSCENEBYSERVERSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD6E98F0)
#define RPG_CLIENT_TRAINMODULE__ONCMDGETCURSCENEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xD6E90A0)
#define RPG_CLIENT_TRAINMODULE__ONCMDSCENEINFO_OFFSET UNITYSDK_OFFSET(0xD6E9120)
#define RPG_CLIENT_TRAINMODULE__ONCMDTRAINREFRESHTIMENOTIFY_OFFSET UNITYSDK_OFFSET(0xD6ED140)
#define RPG_CLIENT_TRAINMODULE__ONCMDTRAINVISITORBEHAVIORFINISHSCRSP_OFFSET UNITYSDK_OFFSET(0xD6E9970)
#define RPG_CLIENT_TRAINMODULE__ONGETTRAINVISITORREGISTERSCRSP_OFFSET UNITYSDK_OFFSET(0xD6E9B20)
#define RPG_CLIENT_TRAINMODULE__ONNOTIFYFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xD6EA5F0)
#define RPG_CLIENT_TRAINMODULE__ONTAKETRAINVISITORBEHAVIORREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xD6EA520)
#define RPG_CLIENT_TRAINMODULE__ONTRAINVISITORREWARDSENDNOTIFY_OFFSET UNITYSDK_OFFSET(0xD6E9A10)
#define RPG_CLIENT_TRAINMODULE__PASSENGERDISPOSE_OFFSET UNITYSDK_OFFSET(0xD6E8330)
#define RPG_CLIENT_TRAINMODULE__PASSENGERINIT_OFFSET UNITYSDK_OFFSET(0xD6E8060)
#define RPG_CLIENT_TRAINMODULE__PASSENGERREFRESH_OFFSET UNITYSDK_OFFSET(0xD6E8860)
#define RPG_CLIENT_TRAINMODULE__PASSENGERUNINIT_OFFSET UNITYSDK_OFFSET(0xD6E8290)
#define RPG_CLIENT_TRAINMODULE__REFRESHNEWVISITORREDDOT_B__38_0_OFFSET UNITYSDK_OFFSET(0xD6ED710)
#define RPG_CLIENT_TRAINMODULE__VISITORADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD6E8FD0)
#define RPG_CLIENT_TRAINMODULE__VISITORADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD6E8BF0)
#define RPG_CLIENT_TRAINMODULE__VISITORDISPOSE_OFFSET UNITYSDK_OFFSET(0xD6E8B50)
#define RPG_CLIENT_TRAINMODULE__VISITORINIT_OFFSET UNITYSDK_OFFSET(0xD6E8960)
#define RPG_CLIENT_TRAINMODULE__VISITORUNINIT_OFFSET UNITYSDK_OFFSET(0xD6E89B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainModule_TypeDefinitionIndex = 65137;

	class TrainModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_VISITOR_BUBBLE_TALKSENTENCE_ID_DS_KEY()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(TrainModule_TypeDefinitionIndex)->GetStaticField(0xB480);
		}
		static ::RPG::GameCore::StringHash* StaticGet_VISITOR_BUBBLE_SEQ_ID_DS_KEY()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(TrainModule_TypeDefinitionIndex)->GetStaticField(0xB484);
		}
		static ::RPG::GameCore::StringHash* StaticGet_VISITOR_PERFORMANCE_ID_DS_KEY()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(TrainModule_TypeDefinitionIndex)->GetStaticField(0xB488);
		}
		// static const ::System::Int32 PASSENGER_RANDOMSEED_ADD = 0x1; // 0x0
		// static const ::System::UInt32 TRAIN_PLANE_ID = 0x2710; // 0x0
		::System::Collections::Generic::List_1<::Class_1_CCBBABD99E8F254F*>* _TrainPassengers; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _NewRedDotVisitorIDList_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _VisitorBehaviorCount_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _NewVisitorIDList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _RewardRedDotVisitorIDList_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>* _TrainVisitorInfoDict_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::Class_1_E4B65F41E2EB14EE*>* _TrainVisitors; // 0x40
		::System::UInt64 _TrainRefreshTime; // 0x48
		::System::Int32 _TimeStampRawSeed; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__CCTOR_OFFSET))();
		}

		::System::Void _PassengerInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERINIT_OFFSET))(this);
		}

		::System::Void _PassengerUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERUNINIT_OFFSET))(this);
		}

		::System::Void _PassengerDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERDISPOSE_OFFSET))(this);
		}

		::Class_1_CCBBABD99E8F254F* FindTrainPassenger(::RPG::Client::MapNpcDef* a1)
		{
			return ((::Class_1_CCBBABD99E8F254F*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_FINDTRAINPASSENGER_OFFSET))(this, a1);
		}

		::System::Void _PassengerRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__PASSENGERREFRESH_OFFSET))(this);
		}

		::System::Boolean _CheckPassenger(::Class_1_CCBBABD99E8F254F* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_CCBBABD99E8F254F*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__CHECKPASSENGER_OFFSET))(this, a1, a2);
		}

		::System::Void _VisitorInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORINIT_OFFSET))(this);
		}

		::System::Void _VisitorUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORUNINIT_OFFSET))(this);
		}

		::System::Void _VisitorDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORDISPOSE_OFFSET))(this);
		}

		::System::Void _VisitorAddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _VisitorAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__VISITORADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetCurSceneInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDGETCURSCENEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnterSceneByServerScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDENTERSCENEBYSERVERSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTrainVisitorBehaviorFinishScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDTRAINVISITORBEHAVIORFINISHSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSceneInfo(::Class_1_BB4B99DE4C2501EC_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDSCENEINFO_OFFSET))(this, a1);
		}

		::System::Void _OnTrainVisitorRewardSendNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONTRAINVISITORREWARDSENDNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetTrainVisitorRegisterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONGETTRAINVISITORREGISTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeTrainVisitorBehaviorRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONTAKETRAINVISITORBEHAVIORREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnNotifyFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONNOTIFYFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::Class_1_E4B65F41E2EB14EE* FindTrainVisitorByGroup(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_E4B65F41E2EB14EE*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_FINDTRAINVISITORBYGROUP_OFFSET))(this, a1, a2);
		}

		::Class_1_E4B65F41E2EB14EE* FindTrainVisitor(::RPG::Client::MapNpcDef* a1)
		{
			return ((::Class_1_E4B65F41E2EB14EE*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_FINDTRAINVISITOR_OFFSET))(this, a1);
		}

		::System::Boolean IsVisitorOnTrain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_ISVISITORONTRAIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* VisitorConditionPrepared()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_VISITORCONDITIONPREPARED_OFFSET))(this);
		}

		::System::Boolean CanVisitorOnTrain(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_OFFSET))(this, a1);
		}

		::System::Boolean CanVisitorOnTrain_1(::RPG::GameCore::TrainVisitorConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainVisitorConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_CANVISITORONTRAIN_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMissionUnlockedVisitorAvatarIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETMISSIONUNLOCKEDVISITORAVATARIDS_OFFSET))(this, a1);
		}

		::RPG::Client::TrainVisitorInfo* GetTrainVisitorInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainVisitorInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETTRAINVISITORINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTrainVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETTRAINVISITORIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainVisitorInfo*>* GetAllTrainVisitorInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainVisitorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETALLTRAINVISITORINFOS_OFFSET))(this);
		}

		::System::Void SendGetTrainVisitorRegisterCsReq(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SENDGETTRAINVISITORREGISTERCSREQ_OFFSET))(this, a1);
		}

		::System::Void SendNewSupplementVisitorCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SENDNEWSUPPLEMENTVISITORCSREQ_OFFSET))(this);
		}

		::System::Void TakeTrainVisitorReward(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_TAKETRAINVISITORREWARD_OFFSET))(this, a1);
		}

		::System::Boolean HasUnclaimedCompensationReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_HASUNCLAIMEDCOMPENSATIONREWARD_OFFSET))(this);
		}

		::System::Boolean IsVisitorSeenInRegister(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_ISVISITORSEENINREGISTER_OFFSET))(this, a1);
		}

		::System::Void RecordVisitorInRegisterSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_RECORDVISITORINREGISTERSEEN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnseenVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GETUNSEENVISITORIDLIST_OFFSET))(this);
		}

		::System::Void RefreshNewVisitorRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_REFRESHNEWVISITORREDDOT_OFFSET))(this);
		}

		::System::Void RefreshRewardRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_REFRESHREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _AddTrainVisitor(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ADDTRAINVISITOR_OFFSET))(this, a1);
		}

		::System::Void _InitVisitorBehaviorCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__INITVISITORBEHAVIORCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>* get_TrainVisitorInfoDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_TRAINVISITORINFODICT_OFFSET))(this);
		}

		::System::Void set_TrainVisitorInfoDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainVisitorInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_TRAINVISITORINFODICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_NEWVISITORIDLIST_OFFSET))(this);
		}

		::System::Void set_NewVisitorIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_NEWVISITORIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_VisitorBehaviorCount()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_VISITORBEHAVIORCOUNT_OFFSET))(this);
		}

		::System::Void set_VisitorBehaviorCount(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_VISITORBEHAVIORCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewRedDotVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_NEWREDDOTVISITORIDLIST_OFFSET))(this);
		}

		::System::Void set_NewRedDotVisitorIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_NEWREDDOTVISITORIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RewardRedDotVisitorIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET_REWARDREDDOTVISITORIDLIST_OFFSET))(this);
		}

		::System::Void set_RewardRedDotVisitorIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_SET_REWARDREDDOTVISITORIDLIST_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdTrainRefreshTimeNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__ONCMDTRAINREFRESHTIMENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Int32 get__RandomSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE_GET__RANDOMSEED_OFFSET))(this);
		}

		::System::Boolean _GetUnseenVisitorIDList_b__37_0(::RPG::Client::TrainVisitorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__GETUNSEENVISITORIDLIST_B__37_0_OFFSET))(this, a1);
		}

		::System::Boolean _RefreshNewVisitorRedDot_b__38_0(::RPG::Client::TrainVisitorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINMODULE__REFRESHNEWVISITORREDDOT_B__38_0_OFFSET))(this, a1);
		}
	};
}
