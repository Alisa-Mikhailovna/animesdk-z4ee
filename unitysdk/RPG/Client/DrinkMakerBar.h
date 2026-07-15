#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_35;
class Class_1_3AD2528CD53B1639_4;
class Class_1_3AD2528CD53B1639_5;
class Class_1_7E9AC8675DA072FB;
namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::Client { class DrinkMakerBarRequest; }
namespace RPG::GameCore { class DrinkMakerChatRow; }
namespace RPG::GameCore { class DrinkMakerDayRow; }
namespace RPG::GameCore { class DrinkMakerGuestRow; }
namespace RPG::GameCore { class DrinkMakerGuestSequenceRow; }
namespace RPG::GameCore { class DrinkMakerRequestRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBAR_BACKTOBUSINESSDAYBARTEND_OFFSET UNITYSDK_OFFSET(0xC2AF850)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CHATID_OFFSET UNITYSDK_OFFSET(0xC2AEB30)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURCHATROW_OFFSET UNITYSDK_OFFSET(0xC2AFBC0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURDAYROW_OFFSET UNITYSDK_OFFSET(0xC2AFAE0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURGUESTROW_OFFSET UNITYSDK_OFFSET(0xC2AFC30)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURREQUESTROW_OFFSET UNITYSDK_OFFSET(0xC2AFBE0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0xC2AFCC0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEROW_OFFSET UNITYSDK_OFFSET(0xC2AFB50)
#define RPG_CLIENT_DRINKMAKERBAR_GET_CUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0xC2AFD00)
#define RPG_CLIENT_DRINKMAKERBAR_GET_DAY_OFFSET UNITYSDK_OFFSET(0xC2AEAE0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_FREEPHASEMISSIONID_OFFSET UNITYSDK_OFFSET(0xC2AFD40)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISFREEPHASE_OFFSET UNITYSDK_OFFSET(0xC2AFD80)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISINGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0xC2AFFC0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISMIXTAGUNLOCK_OFFSET UNITYSDK_OFFSET(0xC2AFE90)
#define RPG_CLIENT_DRINKMAKERBAR_GET_ISTODAYFINISHED_OFFSET UNITYSDK_OFFSET(0xC2AFCE0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_LASTSEQUENCEID_OFFSET UNITYSDK_OFFSET(0xC2AFD20)
#define RPG_CLIENT_DRINKMAKERBAR_GET_LASTSERVICERESULTS_OFFSET UNITYSDK_OFFSET(0xC2AFCA0)
#define RPG_CLIENT_DRINKMAKERBAR_GET_MIXTAGUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xC2AFD60)
#define RPG_CLIENT_DRINKMAKERBAR_GET_SEQUENCEID_OFFSET UNITYSDK_OFFSET(0xC2AEA90)
#define RPG_CLIENT_DRINKMAKERBAR_GET_TODAYGUESTROWS_OFFSET UNITYSDK_OFFSET(0xC2AFC80)
#define RPG_CLIENT_DRINKMAKERBAR_ISCURBUSINESSDAYGUESTFINISH_OFFSET UNITYSDK_OFFSET(0xC2AEB80)
#define RPG_CLIENT_DRINKMAKERBAR_REFRESHCUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0xC2AF890)
#define RPG_CLIENT_DRINKMAKERBAR_SETGUIDEMISSIONBARTENDDATA_OFFSET UNITYSDK_OFFSET(0xC2AF710)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CURCHATROW_OFFSET UNITYSDK_OFFSET(0xC2AFBD0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CURSEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0xC2AFCD0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_CUSTOMDRINK_OFFSET UNITYSDK_OFFSET(0xC2AFD10)
#define RPG_CLIENT_DRINKMAKERBAR_SET_FREEPHASEMISSIONID_OFFSET UNITYSDK_OFFSET(0xC2AFD50)
#define RPG_CLIENT_DRINKMAKERBAR_SET_ISINGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0xC2AFFD0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_ISTODAYFINISHED_OFFSET UNITYSDK_OFFSET(0xC2AFCF0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_LASTSEQUENCEID_OFFSET UNITYSDK_OFFSET(0xC2AFD30)
#define RPG_CLIENT_DRINKMAKERBAR_SET_LASTSERVICERESULTS_OFFSET UNITYSDK_OFFSET(0xC2AFCB0)
#define RPG_CLIENT_DRINKMAKERBAR_SET_MIXTAGUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xC2AFD70)
#define RPG_CLIENT_DRINKMAKERBAR_SET_TODAYGUESTROWS_OFFSET UNITYSDK_OFFSET(0xC2AFC90)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_1_OFFSET UNITYSDK_OFFSET(0xC2AF0C0)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_2_OFFSET UNITYSDK_OFFSET(0xC2AF130)
#define RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xC2AEBD0)
#define RPG_CLIENT_DRINKMAKERBAR__CTOR_OFFSET UNITYSDK_OFFSET(0xC2AE980)
#define RPG_CLIENT_DRINKMAKERBAR__ISFREEPHASEUNLOCK_OFFSET UNITYSDK_OFFSET(0xC2AFDD0)
#define RPG_CLIENT_DRINKMAKERBAR__ISMIXTAGUNLOCK_OFFSET UNITYSDK_OFFSET(0xC2AFEE0)
#define RPG_CLIENT_DRINKMAKERBAR__UPDATEGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC2AEC20)
#define RPG_CLIENT_DRINKMAKERBAR__UPDATERESULTDATA_OFFSET UNITYSDK_OFFSET(0xC2AF200)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBar_TypeDefinitionIndex = 60797;

	class DrinkMakerBar : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerRequestRow* _BusinessDayRequestRow; // 0x10
		::RPG::Client::DrinkMakerBarDrink* _CustomDrink_k__BackingField; // 0x18
		::RPG::GameCore::DrinkMakerGuestRow* _BusinessDayGuestRow; // 0x20
		::Class_1_3AD2528CD53B1639_4* _ServerData; // 0x28
		::RPG::GameCore::DrinkMakerGuestRow* _GuideMissionGuestRow; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>* _TodayGuestRows_k__BackingField; // 0x38
		::RPG::GameCore::DrinkMakerRequestRow* _GuideMissionRequestRow; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* _LastServiceResults_k__BackingField; // 0x48
		::RPG::GameCore::DrinkMakerChatRow* _CurChatRow_k__BackingField; // 0x50
		::System::UInt32 _FreePhaseMissionID_k__BackingField; // 0x58
		::System::Boolean _IsInGuideMission_k__BackingField; // 0x5C
		::System::Boolean _IsTodayFinished_k__BackingField; // 0x5D
		::System::UInt32 _MixTagUnlockSubMissionID_k__BackingField; // 0x60
		::System::UInt32 _LastSequenceID_k__BackingField; // 0x64
		::System::UInt32 _CurSequenceIndex_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SequenceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_SEQUENCEID_OFFSET))(this);
		}

		::System::UInt32 get_Day()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_DAY_OFFSET))(this);
		}

		::System::UInt32 get_ChatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CHATID_OFFSET))(this);
		}

		::System::Boolean IsCurBusinessDayGuestFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_ISCURBUSINESSDAYGUESTFINISH_OFFSET))(this);
		}

		::System::Void UpdateData(::Class_1_3AD2528CD53B1639_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateData_1(::Class_1_21C7581DFE99F091_35* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_1_OFFSET))(this, a1);
		}

		::System::Void UpdateData_2(::Class_1_3AD2528CD53B1639_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_UPDATEDATA_2_OFFSET))(this, a1);
		}

		::System::Void SetGuideMissionBartendData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SETGUIDEMISSIONBARTENDDATA_OFFSET))(this, a1);
		}

		::System::Void BackToBusinessDayBartend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_BACKTOBUSINESSDAYBARTEND_OFFSET))(this);
		}

		::System::Void RefreshCustomDrink(::Class_1_7E9AC8675DA072FB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7E9AC8675DA072FB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_REFRESHCUSTOMDRINK_OFFSET))(this, a1);
		}

		::RPG::GameCore::DrinkMakerDayRow* get_CurDayRow()
		{
			return ((::RPG::GameCore::DrinkMakerDayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURDAYROW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerGuestSequenceRow* get_CurSequenceRow()
		{
			return ((::RPG::GameCore::DrinkMakerGuestSequenceRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEROW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerChatRow* get_CurChatRow()
		{
			return ((::RPG::GameCore::DrinkMakerChatRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURCHATROW_OFFSET))(this);
		}

		::System::Void set_CurChatRow(::RPG::GameCore::DrinkMakerChatRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerChatRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CURCHATROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::DrinkMakerRequestRow* get_CurRequestRow()
		{
			return ((::RPG::GameCore::DrinkMakerRequestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURREQUESTROW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerGuestRow* get_CurGuestRow()
		{
			return ((::RPG::GameCore::DrinkMakerGuestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURGUESTROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>* get_TodayGuestRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_TODAYGUESTROWS_OFFSET))(this);
		}

		::System::Void set_TodayGuestRows(::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerGuestRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_TODAYGUESTROWS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* get_LastServiceResults()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_LASTSERVICERESULTS_OFFSET))(this);
		}

		::System::Void set_LastServiceResults(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarRequest*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_LASTSERVICERESULTS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSequenceIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CURSEQUENCEINDEX_OFFSET))(this);
		}

		::System::Void set_CurSequenceIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CURSEQUENCEINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTodayFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISTODAYFINISHED_OFFSET))(this);
		}

		::System::Void set_IsTodayFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_ISTODAYFINISHED_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBarDrink* get_CustomDrink()
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_CUSTOMDRINK_OFFSET))(this);
		}

		::System::Void set_CustomDrink(::RPG::Client::DrinkMakerBarDrink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_CUSTOMDRINK_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastSequenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_LASTSEQUENCEID_OFFSET))(this);
		}

		::System::Void set_LastSequenceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_LASTSEQUENCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FreePhaseMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_FREEPHASEMISSIONID_OFFSET))(this);
		}

		::System::Void set_FreePhaseMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_FREEPHASEMISSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MixTagUnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_MIXTAGUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_MixTagUnlockSubMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_MIXTAGUNLOCKSUBMISSIONID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFreePhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISFREEPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsMixTagUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISMIXTAGUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsInGuideMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_GET_ISINGUIDEMISSION_OFFSET))(this);
		}

		::System::Void set_IsInGuideMission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR_SET_ISINGUIDEMISSION_OFFSET))(this, a1);
		}

		::System::Void _UpdateGameplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__UPDATEGAMEPLAYDATA_OFFSET))(this);
		}

		::System::Void _UpdateResultData(::Class_1_3AD2528CD53B1639_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__UPDATERESULTDATA_OFFSET))(this, a1);
		}

		::System::Boolean _IsFreePhaseUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__ISFREEPHASEUNLOCK_OFFSET))(this);
		}

		::System::Boolean _IsMixTagUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBAR__ISMIXTAGUNLOCK_OFFSET))(this);
		}
	};
}
