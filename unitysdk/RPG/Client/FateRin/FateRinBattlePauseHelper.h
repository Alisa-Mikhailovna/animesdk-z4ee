#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Challenge { class FateRinBattlePauseChallengeViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURBATTLESTAGEID_OFFSET UNITYSDK_OFFSET(0xC4CCD20)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURFIGHTENEMYHOUGUDESC_OFFSET UNITYSDK_OFFSET(0xC4CCBB0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC4CCB10)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_ISINSTORYFIGHT_OFFSET UNITYSDK_OFFSET(0xC4CD200)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_RESTARTBATTLE_OFFSET UNITYSDK_OFFSET(0xC4CD370)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_TRYGETPAUSECHALLENGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC4CCFA0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0xC4CCBA0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMCHALLENGE_OFFSET UNITYSDK_OFFSET(0xC4CD820)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMHOUGUFIGHT_OFFSET UNITYSDK_OFFSET(0xC4CD9F0)
#define RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMSTORYFIGHT_OFFSET UNITYSDK_OFFSET(0xC4CDC30)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinBattlePauseHelper_TypeDefinitionIndex = 75656;

	class FateRinBattlePauseHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::FateRinBattlePauseHelper** StaticGet__Instance()
		{
			return (::RPG::Client::FateRin::FateRinBattlePauseHelper**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattlePauseHelper_TypeDefinitionIndex)->GetStaticField(0xC4E0);
		}
		::System::UInt32 _WillRestartFightID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::FateRinBattlePauseHelper* get_Instance()
		{
			return ((::RPG::Client::FateRin::FateRinBattlePauseHelper*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GET_INSTANCE_OFFSET))();
		}

		::System::String* GetCurFightEnemyHouguDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURFIGHTENEMYHOUGUDESC_OFFSET))(this);
		}

		::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeViewModel* TryGetPauseChallengeViewModel()
		{
			return ((::RPG::Client::FateRin::Challenge::FateRinBattlePauseChallengeViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_TRYGETPAUSECHALLENGEVIEWMODEL_OFFSET))(this);
		}

		::System::Boolean IsInStoryFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_ISINSTORYFIGHT_OFFSET))(this);
		}

		::System::UInt32 GetCurBattleStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_GETCURBATTLESTAGEID_OFFSET))(this);
		}

		::System::Void RestartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER_RESTARTBATTLE_OFFSET))(this);
		}

		::System::Void _OnBackToAdventurePhaseFromChallenge(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMCHALLENGE_OFFSET))(this, a1);
		}

		::System::Void _OnBackToAdventurePhaseFromHouguFight(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMHOUGUFIGHT_OFFSET))(this, a1);
		}

		::System::Void _OnBackToAdventurePhaseFromStoryFight(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINBATTLEPAUSEHELPER__ONBACKTOADVENTUREPHASEFROMSTORYFIGHT_OFFSET))(this, a1);
		}
	};
}
