#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xBC80290)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xBC80160)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBC80150)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__HAVENEWUNLOCKLEVEL_OFFSET UNITYSDK_OFFSET(0xBC80410)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__HAVEREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0xBC80360)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__ONACTIVITYENDEDCUSTOM_OFFSET UNITYSDK_OFFSET(0xBC805D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionActivityData_TypeDefinitionIndex = 58849;

	class ActivityTelevisionActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void _OnActivityEndedCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__ONACTIVITYENDEDCUSTOM_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean _HaveNewUnlockLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__HAVENEWUNLOCKLEVEL_OFFSET))(this);
		}

		::System::Boolean _HaveRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__HAVEREWARDNOTTAKEN_OFFSET))(this);
		}
	};
}
