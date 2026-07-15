#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/StoryLineSwitchReason.h"

class Class_1_3F8940FD3C5B12AD;
class Class_1_66C20D6C355B068E_6;
namespace RPG::Client { class StoryLineData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STORYLINEMODULE_CANSWITCHTOOTHERLINE_OFFSET UNITYSDK_OFFSET(0xD5723C0)
#define RPG_CLIENT_STORYLINEMODULE_CLEARTEAMHINTEFFECTFLAG_OFFSET UNITYSDK_OFFSET(0xD571EF0)
#define RPG_CLIENT_STORYLINEMODULE_CURRENTPLANECANSWITCHLINE_OFFSET UNITYSDK_OFFSET(0xD5724A0)
#define RPG_CLIENT_STORYLINEMODULE_GETSTORYLINE_OFFSET UNITYSDK_OFFSET(0xD5719E0)
#define RPG_CLIENT_STORYLINEMODULE_GETSWITCHABLELINES_OFFSET UNITYSDK_OFFSET(0xD571FB0)
#define RPG_CLIENT_STORYLINEMODULE_GET_CURRENTLINE_OFFSET UNITYSDK_OFFSET(0xD571590)
#define RPG_CLIENT_STORYLINEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD571510)
#define RPG_CLIENT_STORYLINEMODULE_GET_MAINLINE_OFFSET UNITYSDK_OFFSET(0xD5715D0)
#define RPG_CLIENT_STORYLINEMODULE_INITSTORYLINEBYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD572720)
#define RPG_CLIENT_STORYLINEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD572820)
#define RPG_CLIENT_STORYLINEMODULE_ISMAINLINE_OFFSET UNITYSDK_OFFSET(0xD571900)
#define RPG_CLIENT_STORYLINEMODULE_ISSTORYLINE_OFFSET UNITYSDK_OFFSET(0xD571950)
#define RPG_CLIENT_STORYLINEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD572B40)
#define RPG_CLIENT_STORYLINEMODULE_SENDSTORYLINEDATA_OFFSET UNITYSDK_OFFSET(0xD571750)
#define RPG_CLIENT_STORYLINEMODULE_SETAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xD572670)
#define RPG_CLIENT_STORYLINEMODULE_SETREPORTDATA_OFFSET UNITYSDK_OFFSET(0xD571F30)
#define RPG_CLIENT_STORYLINEMODULE_SHOULDSHOWTEAMHINTEFFECT_OFFSET UNITYSDK_OFFSET(0xD571EB0)
#define RPG_CLIENT_STORYLINEMODULE_SWITCHLINE_1_OFFSET UNITYSDK_OFFSET(0xD571AA0)
#define RPG_CLIENT_STORYLINEMODULE_SWITCHLINE_OFFSET UNITYSDK_OFFSET(0xD571A30)
#define RPG_CLIENT_STORYLINEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xD5726C0)
#define RPG_CLIENT_STORYLINEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD572F40)
#define RPG_CLIENT_STORYLINEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD572C80)
#define RPG_CLIENT_STORYLINEMODULE__BEFORESWTICHLINE_OFFSET UNITYSDK_OFFSET(0xD5743A0)
#define RPG_CLIENT_STORYLINEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD5716E0)
#define RPG_CLIENT_STORYLINEMODULE__GETLINE_OFFSET UNITYSDK_OFFSET(0xD571620)
#define RPG_CLIENT_STORYLINEMODULE__GETPREVIOUSSTORYLINE_OFFSET UNITYSDK_OFFSET(0xD572360)
#define RPG_CLIENT_STORYLINEMODULE__INITSTORYLINES_OFFSET UNITYSDK_OFFSET(0xD572870)
#define RPG_CLIENT_STORYLINEMODULE__ONCHANGESTORYLINEFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD573420)
#define RPG_CLIENT_STORYLINEMODULE__ONCMDGETBASICINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xD573620)
#define RPG_CLIENT_STORYLINEMODULE__ONCMDSTORYLINETRIALAVATARCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD573780)
#define RPG_CLIENT_STORYLINEMODULE__ONCONDITIONCHECKED_OFFSET UNITYSDK_OFFSET(0xD574220)
#define RPG_CLIENT_STORYLINEMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xD573FE0)
#define RPG_CLIENT_STORYLINEMODULE__ONMAINMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xD5740A0)
#define RPG_CLIENT_STORYLINEMODULE__ONSTORYLINEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD573120)
#define RPG_CLIENT_STORYLINEMODULE__ONSTORYLINEUPDATE_OFFSET UNITYSDK_OFFSET(0xD5727A0)
#define RPG_CLIENT_STORYLINEMODULE__ONSUBMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xD574100)
#define RPG_CLIENT_STORYLINEMODULE__ONSWITCHLINE_OFFSET UNITYSDK_OFFSET(0xD574470)
#define RPG_CLIENT_STORYLINEMODULE__REFRESHSTORYLINESTATUS_OFFSET UNITYSDK_OFFSET(0xD5731B0)
#define RPG_CLIENT_STORYLINEMODULE__SETUPSTORYLINELOADING_OFFSET UNITYSDK_OFFSET(0xD5745A0)
#define RPG_CLIENT_STORYLINEMODULE__SETUPTOAST_OFFSET UNITYSDK_OFFSET(0xD574680)
#define RPG_CLIENT_STORYLINEMODULE__SHOULDHIDESWITCHLINETOAST_OFFSET UNITYSDK_OFFSET(0xD5734B0)
#define RPG_CLIENT_STORYLINEMODULE__SWITCHLINETO_OFFSET UNITYSDK_OFFSET(0xD574160)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineModule_TypeDefinitionIndex = 64980;

	class StoryLineModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_3F8940FD3C5B12AD* _ReportData; // 0x10
		::System::Action* _SwitchLineCallback; // 0x18
		::System::Action* _AutoShowAction; // 0x20
		::RPG::Client::StoryLineData* _StoryLine; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::StoryLineData*>* _StoryLines; // 0x30
		::System::Boolean _UseStoryLineLoading; // 0x38
		::System::Boolean _ShouldShowTeamHintEffect; // 0x39
		::System::Boolean _ShouldShowSwitchToast; // 0x3A
		::System::UInt32 _PreviousStoryLineID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::StoryLineModule* get_Instance()
		{
			return ((::RPG::Client::StoryLineModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_GET_INSTANCE_OFFSET))();
		}

		::RPG::Client::StoryLineData* get_CurrentLine()
		{
			return ((::RPG::Client::StoryLineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_GET_CURRENTLINE_OFFSET))(this);
		}

		::RPG::Client::StoryLineData* get_MainLine()
		{
			return ((::RPG::Client::StoryLineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_GET_MAINLINE_OFFSET))(this);
		}

		::System::Void SendStoryLineData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SENDSTORYLINEDATA_OFFSET))(this);
		}

		::System::Boolean IsMainLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_ISMAINLINE_OFFSET))(this);
		}

		::System::Boolean IsStoryLine(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_ISSTORYLINE_OFFSET))(this, a1);
		}

		::RPG::Client::StoryLineData* GetStoryLine(::System::UInt32 a1)
		{
			return ((::RPG::Client::StoryLineData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_GETSTORYLINE_OFFSET))(this, a1);
		}

		::System::Void SwitchLine(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SWITCHLINE_OFFSET))(this, a1, a2);
		}

		::System::Void SwitchLine_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Action* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SWITCHLINE_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean ShouldShowTeamHintEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SHOULDSHOWTEAMHINTEFFECT_OFFSET))(this);
		}

		::System::Void ClearTeamHintEffectFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_CLEARTEAMHINTEFFECTFLAG_OFFSET))(this);
		}

		::System::Void SetReportData(::RPG::Client::StoryLineSwitchReason a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryLineSwitchReason, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SETREPORTDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::StoryLineData*>* GetSwitchableLines()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::StoryLineData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_GETSWITCHABLELINES_OFFSET))(this);
		}

		::System::Boolean CanSwitchToOtherLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_CANSWITCHTOOTHERLINE_OFFSET))(this);
		}

		::System::Boolean CurrentPlaneCanSwitchLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_CURRENTPLANECANSWITCHLINE_OFFSET))(this);
		}

		::System::Void SetAutoShow(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_SETAUTOSHOW_OFFSET))(this, a1);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void InitStoryLineBySnapshot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_INITSTORYLINEBYSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnStoryLineInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONSTORYLINEINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChangeStoryLineFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONCHANGESTORYLINEFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetBasicInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONCMDGETBASICINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdStoryLineTrialAvatarChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONCMDSTORYLINETRIALAVATARCHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnMainMissionFinished(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONMAINMISSIONFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnSubMissionFinished(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONSUBMISSIONFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnStoryLineUpdate(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONSTORYLINEUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshStoryLineStatus(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__REFRESHSTORYLINESTATUS_OFFSET))(this, a1);
		}

		::System::Void _OnConditionChecked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONCONDITIONCHECKED_OFFSET))(this);
		}

		::System::Void _InitStoryLines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__INITSTORYLINES_OFFSET))(this);
		}

		::RPG::Client::StoryLineData* _GetLine(::System::UInt32 a1)
		{
			return ((::RPG::Client::StoryLineData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__GETLINE_OFFSET))(this, a1);
		}

		::RPG::Client::StoryLineData* _GetPreviousStoryLine()
		{
			return ((::RPG::Client::StoryLineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__GETPREVIOUSSTORYLINE_OFFSET))(this);
		}

		::System::Void _SwitchLineTo(::RPG::Client::StoryLineData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryLineData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__SWITCHLINETO_OFFSET))(this, a1);
		}

		::System::Void _SetupStoryLineLoading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__SETUPSTORYLINELOADING_OFFSET))(this, a1);
		}

		::System::Void _BeforeSwtichLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__BEFORESWTICHLINE_OFFSET))(this);
		}

		::System::Void _OnSwitchLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__ONSWITCHLINE_OFFSET))(this);
		}

		::System::Void _SetupToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__SETUPTOAST_OFFSET))(this);
		}

		::System::Boolean _ShouldHideSwitchLineToast(::Class_1_66C20D6C355B068E_6* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_66C20D6C355B068E_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE__SHOULDHIDESWITCHLINETOAST_OFFSET))(this, a1);
		}
	};
}
