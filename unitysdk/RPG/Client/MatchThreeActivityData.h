#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class MatchThreeModule; }

#define RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET UNITYSDK_OFFSET(0xCB328C0)
#define RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xCB32AA0)
#define RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xCB32860)
#define RPG_CLIENT_MATCHTHREEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB327F0)
#define RPG_CLIENT_MATCHTHREEACTIVITYDATA__HASREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0xCB32950)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeActivityData_TypeDefinitionIndex = 62906;

	class MatchThreeActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::MatchThreeModule* _Module; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyGotoRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA__HASREWARDTOTAKE_OFFSET))(this);
		}
	};
}
