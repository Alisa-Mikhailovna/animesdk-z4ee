#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_CC1C2BAFAFD12197;

#define RPG_CLIENT_FATERIN_FATERINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4D2220)
#define RPG_CLIENT_FATERIN_FATERINMODULE_GETFATERINHANDBOOKFUNCISNEW_OFFSET UNITYSDK_OFFSET(0xC4D2870)
#define RPG_CLIENT_FATERIN_FATERINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC4D2080)
#define RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWBLACKTRANSFER_OFFSET UNITYSDK_OFFSET(0xC4CD7E0)
#define RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWCHALLENGEENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xC4D2390)
#define RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWHOUGUMAPPAGE_OFFSET UNITYSDK_OFFSET(0xC4D1960)
#define RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC4D1E50)
#define RPG_CLIENT_FATERIN_FATERINMODULE_MARKSHOWCARDREWARDREPLACEONNEXTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC4D2830)
#define RPG_CLIENT_FATERIN_FATERINMODULE_PREPAREMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC4D25A0)
#define RPG_CLIENT_FATERIN_FATERINMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xC4D23F0)
#define RPG_CLIENT_FATERIN_FATERINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC4D2A10)
#define RPG_CLIENT_FATERIN_FATERINMODULE__ONCARDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC4D22D0)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinModule_TypeDefinitionIndex = 75674;

	class FateRinModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::UInt32 _AutoShowChallengeFightID; // 0x10
		::System::Boolean _NeedAutoShowBlackTransfer; // 0x14
		::System::Boolean _ShowCardRewardReplaceOnNextUnlock; // 0x15
		::System::Boolean _NeedAutoShowHouguMapPage; // 0x16
		::System::Boolean _NeedAutoShowMainPage; // 0x17
		::System::Boolean _NeedAutoShowChallengeEntrancePage; // 0x18
		::System::Boolean _AutoShowChallengeIsFirstPassDeep; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnCardUnlocked(::Class_1_CC1C2BAFAFD12197* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CC1C2BAFAFD12197*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE__ONCARDUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void MarkNeedAutoShowMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWMAINPAGE_OFFSET))(this);
		}

		::System::Void MarkNeedAutoShowHouguMapPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWHOUGUMAPPAGE_OFFSET))(this);
		}

		::System::Void MarkNeedAutoShowChallengeEntrancePage(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWCHALLENGEENTRANCEPAGE_OFFSET))(this, a1, a2);
		}

		::System::Void MarkNeedAutoShowBlackTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_MARKNEEDAUTOSHOWBLACKTRANSFER_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void PrepareMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_PREPAREMISSIONDATA_OFFSET))(this);
		}

		::System::Void MarkShowCardRewardReplaceOnNextUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_MARKSHOWCARDREWARDREPLACEONNEXTUNLOCK_OFFSET))(this);
		}

		::System::Boolean GetFateRinHandbookFuncIsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINMODULE_GETFATERINHANDBOOKFUNCISNEW_OFFSET))(this);
		}
	};
}
