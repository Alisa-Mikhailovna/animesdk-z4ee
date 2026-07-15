#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_05F6758DFB00BCF4;
namespace RPG::Client { class ChenLingBattleStageData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC075050)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETFINISHSTAGECOUNT_OFFSET UNITYSDK_OFFSET(0xC079300)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETSTORYLINEDATAIDS_OFFSET UNITYSDK_OFFSET(0xC0795F0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETUNLOCKEDDECKIDS_OFFSET UNITYSDK_OFFSET(0xC072940)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTSTAGEID_OFFSET UNITYSDK_OFFSET(0xC077EA0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0xC079770)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTWAVE_OFFSET UNITYSDK_OFFSET(0xC077F90)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_ENDLESSMODEWAVERECORD_OFFSET UNITYSDK_OFFSET(0xC079870)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_HASINPROGRESSSTAGE_OFFSET UNITYSDK_OFFSET(0xC079710)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xC079890)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_STAGEDATAS_OFFSET UNITYSDK_OFFSET(0xC079730)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_STORYLINEDATAIDS_OFFSET UNITYSDK_OFFSET(0xC079830)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC074CE0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_ISCURRENTINENDLESSMODE_OFFSET UNITYSDK_OFFSET(0xC079630)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_ISFINISHEDALLSTAGE_OFFSET UNITYSDK_OFFSET(0xC079090)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SETCURRENTWAVE_OFFSET UNITYSDK_OFFSET(0xC073A30)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SETENDLESSMODEWAVERECORD_OFFSET UNITYSDK_OFFSET(0xC073E40)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SET_ENDLESSMODEWAVERECORD_OFFSET UNITYSDK_OFFSET(0xC079880)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SET_HASINPROGRESSSTAGE_OFFSET UNITYSDK_OFFSET(0xC079720)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SYNCCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0xC073A80)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SYNCCURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0xC074550)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO_TRYGETSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xC0791E0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC074CD0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCCURRENTSTAGEID_OFFSET UNITYSDK_OFFSET(0xC078E50)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCENDLESSDATAID_OFFSET UNITYSDK_OFFSET(0xC078D30)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCSTAGEDATAS_OFFSET UNITYSDK_OFFSET(0xC078970)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCSTORYLINEDATAIDS_OFFSET UNITYSDK_OFFSET(0xC078B80)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSETUNLOCKSTATE_1_OFFSET UNITYSDK_OFFSET(0xC079270)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xC078EA0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSYNCSTAGESTATES_OFFSET UNITYSDK_OFFSET(0xC078F80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleStageInfo_TypeDefinitionIndex = 58721;

	class ChenLingBattleStageInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _StoryLineDataIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleStageData*>* _StageDatas; // 0x18
		::System::Int32 _EndlessStageDataID; // 0x20
		::System::UInt32 _CurrentWave; // 0x24
		::System::Int32 _CurrentStageID; // 0x28
		::System::Boolean _HasInProgressStage_k__BackingField; // 0x2C
		::System::UInt32 _EndlessModeWaveRecord_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _SyncStageDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCSTAGEDATAS_OFFSET))(this);
		}

		::System::Void _SyncStoryLineDataIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCSTORYLINEDATAIDS_OFFSET))(this);
		}

		::System::Void _SyncEndlessDataID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCENDLESSDATAID_OFFSET))(this);
		}

		::System::Void SyncCurrentStage(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SYNCCURRENTSTAGE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncCurrentPhase(::Class_1_05F6758DFB00BCF4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_05F6758DFB00BCF4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SYNCCURRENTPHASE_OFFSET))(this, a1);
		}

		::System::Boolean IsFinishedAllStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_ISFINISHEDALLSTAGE_OFFSET))(this);
		}

		::System::Void _SyncCurrentStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__SYNCCURRENTSTAGEID_OFFSET))(this, a1);
		}

		::System::Void _TrySetUnlockState(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSETUNLOCKSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _TrySetUnlockState_1(::RPG::Client::ChenLingBattleStageData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleStageData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSETUNLOCKSTATE_1_OFFSET))(this, a1, a2);
		}

		::System::Void _TrySyncStageStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO__TRYSYNCSTAGESTATES_OFFSET))(this);
		}

		::System::Void SetCurrentWave(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SETCURRENTWAVE_OFFSET))(this, a1);
		}

		::System::Void SetEndlessModeWaveRecord(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SETENDLESSMODEWAVERECORD_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattleStageData* TryGetStageData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattleStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_TRYGETSTAGEDATA_OFFSET))(this, a1);
		}

		::System::Int32 GetFinishStageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETFINISHSTAGECOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetStoryLineDataIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETSTORYLINEDATAIDS_OFFSET))(this);
		}

		::System::Boolean IsCurrentInEndlessMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_ISCURRENTINENDLESSMODE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnlockedDeckIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GETUNLOCKEDDECKIDS_OFFSET))(this);
		}

		::System::Boolean get_HasInProgressStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_HASINPROGRESSSTAGE_OFFSET))(this);
		}

		::System::Void set_HasInProgressStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SET_HASINPROGRESSSTAGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleStageData*>* get_StageDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_STAGEDATAS_OFFSET))(this);
		}

		::System::Int32 get_CurrentStageID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTSTAGEID_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattleStageData* get_CurrentStage()
		{
			return ((::RPG::Client::ChenLingBattleStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTSTAGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StoryLineDataIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_STORYLINEDATAIDS_OFFSET))(this);
		}

		::System::UInt32 get_CurrentWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_CURRENTWAVE_OFFSET))(this);
		}

		::System::UInt32 get_EndlessModeWaveRecord()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_ENDLESSMODEWAVERECORD_OFFSET))(this);
		}

		::System::Void set_EndlessModeWaveRecord(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_SET_ENDLESSMODEWAVERECORD_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO_GET_MAXHP_OFFSET))(this);
		}
	};
}
