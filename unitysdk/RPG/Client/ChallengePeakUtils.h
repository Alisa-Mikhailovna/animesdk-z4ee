#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakGameFlow; }
namespace System { class Action; }

#define RPG_CLIENT_CHALLENGEPEAKUTILS_CANTRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0xBFC3150)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_GETFLOW_OFFSET UNITYSDK_OFFSET(0xBFBFB50)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISBATTLETARGETFINISH_OFFSET UNITYSDK_OFFSET(0xBFC33E0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISCHALLENGEPEAKUNLOCK_OFFSET UNITYSDK_OFFSET(0xBFC2D20)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISINGAME_OFFSET UNITYSDK_OFFSET(0xBFC2CE0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISINLAUNCHERFLOOR_OFFSET UNITYSDK_OFFSET(0xBFC32C0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISTUTORIALMAINMISSIONSTART_OFFSET UNITYSDK_OFFSET(0xBFC2DB0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_STARTGAME_OFFSET UNITYSDK_OFFSET(0xBFC2E90)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_TRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0xBFC2FB0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS__DOSTARTGAME_OFFSET UNITYSDK_OFFSET(0xBFC30B0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET UNITYSDK_OFFSET(0xBFC3200)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakUtils_TypeDefinitionIndex = 60412;

	class ChallengePeakUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsInGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISINGAME_OFFSET))();
		}

		static ::RPG::Client::ChallengePeakGameFlow* GetFlow()
		{
			return ((::RPG::Client::ChallengePeakGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_GETFLOW_OFFSET))();
		}

		static ::System::Boolean IsChallengePeakUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISCHALLENGEPEAKUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsTutorialMainMissionStart()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISTUTORIALMAINMISSIONSTART_OFFSET))();
		}

		static ::System::Void StartGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_STARTGAME_OFFSET))();
		}

		static ::System::Void _DoStartGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS__DOSTARTGAME_OFFSET))();
		}

		static ::System::Void TransferToLauncher(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_TRANSFERTOLAUNCHER_OFFSET))(a1, a2);
		}

		static ::System::Boolean CanTransferToLauncher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_CANTRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Boolean IsInLauncherFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISINLAUNCHERFLOOR_OFFSET))();
		}

		static ::System::Void _GetLauncherTransferParam(::System::UInt32& a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsBattleTargetFinish(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISBATTLETARGETFINISH_OFFSET))(a1);
		}
	};
}
