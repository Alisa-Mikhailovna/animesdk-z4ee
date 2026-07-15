#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_47C66A3BEB7A5F01;
namespace RPG::Client { class MainMissionData; }

#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCC1B200)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0__TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_B__1_OFFSET UNITYSDK_OFFSET(0xCC1F650)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils___c__DisplayClass10_0_TypeDefinitionIndex = 63248;

	class MissionUtils___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::MainMissionData* trackingMission; // 0x10
		::Class_2_47C66A3BEB7A5F01* frvInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryAssistWayPointOneClickCompleteTransfer_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0__TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_B__1_OFFSET))(this);
		}
	};
}
