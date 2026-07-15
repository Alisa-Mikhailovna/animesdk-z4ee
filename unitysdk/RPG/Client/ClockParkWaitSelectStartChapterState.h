#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ENABLEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xC189DF0)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0xC189CA0)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0xC189D70)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xC189DB0)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_SETSELECTEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0xC189E30)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC189E80)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__INITWAITSELECTCHAPTERS_OFFSET UNITYSDK_OFFSET(0xC189B80)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC189C40)
#define RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__ONENTER_OFFSET UNITYSDK_OFFSET(0xC189B30)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkWaitSelectStartChapterState_TypeDefinitionIndex = 58766;

	class ClockParkWaitSelectStartChapterState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _WaitSelectChapterIDs; // 0x18
		::System::UInt32 _SelectedChapterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__ONENTER_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__ONDISPOSE_OFFSET))(this);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowAttributeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ISSHOWATTRIBUTEINFO_OFFSET))(this);
		}

		::System::Boolean IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean EnableDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_ENABLEDICEPLACEMENT_OFFSET))(this);
		}

		::System::Void SetSelectedChapterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE_SETSELECTEDCHAPTERID_OFFSET))(this, a1);
		}

		::System::Void _InitWaitSelectChapters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKWAITSELECTSTARTCHAPTERSTATE__INITWAITSELECTCHAPTERS_OFFSET))(this);
		}
	};
}
