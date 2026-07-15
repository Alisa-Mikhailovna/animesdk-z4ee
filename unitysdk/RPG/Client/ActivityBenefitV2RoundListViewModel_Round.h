#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityBenefitV2RoundListViewModel_Round_StateType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

class Class_1_CC0F8AEEF044EF7C;
namespace RPG::Client { class ActivityBenefitV2Round; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xBAFD150)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xBAFC6B0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAFC130)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DRAW_OFFSET UNITYSDK_OFFSET(0xBAFCFB0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GETREMAININGTIMEBEFOREUNLOCK_OFFSET UNITYSDK_OFFSET(0xBAFCB80)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_ISSPECIALPRIZE_OFFSET UNITYSDK_OFFSET(0xBAFC770)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xBAFC820)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_SHOULDSHOWUNLOCKING_OFFSET UNITYSDK_OFFSET(0xBAFC9F0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_STATE_OFFSET UNITYSDK_OFFSET(0xBAFC690)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET__SEASONCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xBAFC5E0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xBAFD1B0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xBAFC710)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SETUNLOCKINGSEEN_OFFSET UNITYSDK_OFFSET(0xBAFCE40)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SET_STATE_OFFSET UNITYSDK_OFFSET(0xBAFC6A0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SYNCONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xBAFC570)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__CHECKSHOULDSHOWUNLOCKING_OFFSET UNITYSDK_OFFSET(0xBAFCA40)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xBAFBD80)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__GETSTATEFROMMODEL_OFFSET UNITYSDK_OFFSET(0xBAFD400)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__ONMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xBAFD210)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xBAFC980)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RoundListViewModel_Round_TypeDefinitionIndex = 58682;

	class ActivityBenefitV2RoundListViewModel_Round : public ::System::Object
	{
	public:
		::System::Action* OnDrawFinished; // 0x10
		::RPG::Client::ActivityBenefitV2Round* _Model; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems; // 0x20
		::System::Action* OnStateChanged; // 0x28
		::System::Int32 Index; // 0x30
		::System::UInt32 _SeasonConfigID; // 0x34
		::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType _State_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::ActivityBenefitV2Round* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::Client::ActivityBenefitV2Round*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_CC0F8AEEF044EF7C* get__SeasonConfigData()
		{
			return ((::Class_1_CC0F8AEEF044EF7C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET__SEASONCONFIGDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType get_State()
		{
			return ((::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SET_STATE_OFFSET))(this, a1);
		}

		::System::Void add_OnStateChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnStateChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpecialPrize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_ISSPECIALPRIZE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ShouldShowUnlocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GET_SHOULDSHOWUNLOCKING_OFFSET))(this);
		}

		::System::Boolean _CheckShouldShowUnlocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__CHECKSHOULDSHOWUNLOCKING_OFFSET))(this);
		}

		::System::Nullable_1<::System::TimeSpan> GetRemainingTimeBeforeUnlock()
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_GETREMAININGTIMEBEFOREUNLOCK_OFFSET))(this);
		}

		::System::Void SetUnlockingSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SETUNLOCKINGSEEN_OFFSET))(this);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_DRAW_OFFSET))(this);
		}

		::System::Void SyncOnDrawFinished(::RPG::Client::ActivityBenefitV2Round* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityBenefitV2Round*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_SYNCONDRAWFINISHED_OFFSET))(this, a1);
		}

		::System::Void add_OnDrawFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_ADD_ONDRAWFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnDrawFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND_REMOVE_ONDRAWFINISHED_OFFSET))(this, a1);
		}

		::System::Void _OnModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__ONMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__REFRESHSTATE_OFFSET))(this);
		}

		::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType _GetStateFromModel()
		{
			return ((::RPG::Client::ActivityBenefitV2RoundListViewModel_Round_StateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_ROUND__GETSTATEFROMMODEL_OFFSET))(this);
		}
	};
}
