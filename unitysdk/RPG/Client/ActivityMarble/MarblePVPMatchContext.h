#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleMatchContext.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVPMode.h"
#include "unitysdk/RPG/Client/LobbyState.h"

class Class_1_C50F5982E5600913;
class Class_1_C9DFE5EE7107C629_9;
namespace RPG::Client::ActivityMarble { class MarblePVPManager; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CANCELSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0xBC12EC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CREATEPVPMATCH_OFFSET UNITYSDK_OFFSET(0xBC12DA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_CANSTART_OFFSET UNITYSDK_OFFSET(0xBC13050)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHED_OFFSET UNITYSDK_OFFSET(0xBC13000)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHING_OFFSET UNITYSDK_OFFSET(0xBC12FB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_MODE_OFFSET UNITYSDK_OFFSET(0xBC130A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xBC0BE40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_REQUESTSTARTGAME_OFFSET UNITYSDK_OFFSET(0xBC12F00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETINITINFO_OFFSET UNITYSDK_OFFSET(0xBC107D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETMODE_OFFSET UNITYSDK_OFFSET(0xBC0BC90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SET_MODE_OFFSET UNITYSDK_OFFSET(0xBC130B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0xBC12D30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0xBC0BD40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBC12AC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT__UPDATEMEMBERS_OFFSET UNITYSDK_OFFSET(0xBC12B00)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPMatchContext_TypeDefinitionIndex = 71297;

	class MarblePVPMatchContext : public ::RPG::Client::ActivityMarble::MarbleMatchContext
	{
	public:
		::Class_1_C9DFE5EE7107C629_9* _InitInfo; // 0x50
		::System::Boolean _PendingStartBattle; // 0x58
		::RPG::Client::ActivityMarble::MarblePVPMode _Mode_k__BackingField; // 0x5C
		::RPG::Client::LobbyState _CurrentStatus; // 0x60

		::System::Void _ctor(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateStatus(::RPG::Client::LobbyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_UPDATESTATUS_OFFSET))(this, a1);
		}

		::System::Void SetInitInfo(::Class_1_C9DFE5EE7107C629_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETINITINFO_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPMatchContext* CreatePVPMatch(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMatchContext*(*)(::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CREATEPVPMATCH_OFFSET))(a1);
		}

		::System::Void StartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_STARTBATTLE_OFFSET))(this);
		}

		::System::Void CancelStartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_CANCELSTARTBATTLE_OFFSET))(this);
		}

		::System::Void SetMode(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SETMODE_OFFSET))(this, a1);
		}

		::System::Void RequestStartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_REQUESTSTARTGAME_OFFSET))(this);
		}

		::System::Void _UpdateMembers(::System::Collections::Generic::IList_1<::Class_1_C50F5982E5600913*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_C50F5982E5600913*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT__UPDATEMEMBERS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMatching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHING_OFFSET))(this);
		}

		::System::Boolean get_IsMatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_ISMATCHED_OFFSET))(this);
		}

		::System::Boolean get_CanStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_CANSTART_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPManager* get_PVPMgr()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_PVPMGR_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarblePVPMode get_Mode()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::RPG::Client::ActivityMarble::MarblePVPMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMATCHCONTEXT_SET_MODE_OFFSET))(this, a1);
		}
	};
}
