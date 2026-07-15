#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PunkLordData; }

#define RPG_CLIENT_PUNKLORDINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD271990)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_CURSETTLEDDAMAGE_OFFSET UNITYSDK_OFFSET(0xD272650)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_ENDDATETIME_OFFSET UNITYSDK_OFFSET(0xD272670)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_ISENTEREDBATTLE_OFFSET UNITYSDK_OFFSET(0xD272690)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_ISPOWERATTACK_OFFSET UNITYSDK_OFFSET(0xD272630)
#define RPG_CLIENT_PUNKLORDINSTANCE_GET_PUNKLORDDATAREF_OFFSET UNITYSDK_OFFSET(0xD272610)
#define RPG_CLIENT_PUNKLORDINSTANCE_KILLEDBYOTHERS_OFFSET UNITYSDK_OFFSET(0xD272040)
#define RPG_CLIENT_PUNKLORDINSTANCE_REFRESHBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xD271AF0)
#define RPG_CLIENT_PUNKLORDINSTANCE_SETENDDATETIME_OFFSET UNITYSDK_OFFSET(0xD271E30)
#define RPG_CLIENT_PUNKLORDINSTANCE_SETTLE_OFFSET UNITYSDK_OFFSET(0xD271BE0)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_CURSETTLEDDAMAGE_OFFSET UNITYSDK_OFFSET(0xD272660)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_ENDDATETIME_OFFSET UNITYSDK_OFFSET(0xD272680)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_ISPOWERATTACK_OFFSET UNITYSDK_OFFSET(0xD272640)
#define RPG_CLIENT_PUNKLORDINSTANCE_SET_PUNKLORDDATAREF_OFFSET UNITYSDK_OFFSET(0xD272620)
#define RPG_CLIENT_PUNKLORDINSTANCE_TIMEOUT_OFFSET UNITYSDK_OFFSET(0xD271E80)
#define RPG_CLIENT_PUNKLORDINSTANCE__ADDPUNKLORDINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0xD271880)
#define RPG_CLIENT_PUNKLORDINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xD2717E0)
#define RPG_CLIENT_PUNKLORDINSTANCE__DELAYSETTLE_OFFSET UNITYSDK_OFFSET(0xD271DF0)
#define RPG_CLIENT_PUNKLORDINSTANCE__DOSETTLE_OFFSET UNITYSDK_OFFSET(0xD271D50)
#define RPG_CLIENT_PUNKLORDINSTANCE__NOTIFYPUNKLORDSCORERESULT_OFFSET UNITYSDK_OFFSET(0xD272230)
#define RPG_CLIENT_PUNKLORDINSTANCE__ONBATTLEPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xD272280)
#define RPG_CLIENT_PUNKLORDINSTANCE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xD2722D0)
#define RPG_CLIENT_PUNKLORDINSTANCE__REFRESHBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xD271B40)
#define RPG_CLIENT_PUNKLORDINSTANCE__REMOVEPUNKLORDINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0xD2719E0)
#define RPG_CLIENT_PUNKLORDINSTANCE__SHOWPOWERATTACKTOAST_OFFSET UNITYSDK_OFFSET(0xD2724C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordInstance_TypeDefinitionIndex = 63768;

	class PunkLordInstance : public ::System::Object
	{
	public:
		::RPG::Client::PunkLordData* _PunkLordDataRef_k__BackingField; // 0x10
		::RPG::Client::DateTimePro _EndDateTime_k__BackingField; // 0x18
		::System::Boolean _IsWaitDelaySettle; // 0x20
		::System::Boolean _IsPowerAttack_k__BackingField; // 0x21
		::System::Boolean _IsFirstEnterPunkLordMaze; // 0x22
		::System::Boolean _IsSettled; // 0x23
		::System::Boolean _IsEnteredBattle; // 0x24
		::System::UInt32 _CurSettledDamage_k__BackingField; // 0x28
		::RPG::Client::TextID _TextID_Time_Out; // 0x30

		::System::Void _ctor(::RPG::Client::PunkLordData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshBattleRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_REFRESHBATTLERECORD_OFFSET))(this);
		}

		::System::Void Settle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SETTLE_OFFSET))(this, a1);
		}

		::System::Void SetEndDateTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SETENDDATETIME_OFFSET))(this, a1);
		}

		::System::Void TimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_TIMEOUT_OFFSET))(this);
		}

		::System::Void KilledByOthers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_KILLEDBYOTHERS_OFFSET))(this);
		}

		::System::Void _DoSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__DOSETTLE_OFFSET))(this);
		}

		::System::Void _DelaySettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__DELAYSETTLE_OFFSET))(this);
		}

		::System::Void _OnBattlePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__ONBATTLEPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshBattleRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__REFRESHBATTLERECORD_OFFSET))(this);
		}

		::System::Void _NotifyPunkLordScoreResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__NOTIFYPUNKLORDSCORERESULT_OFFSET))(this);
		}

		::System::Void _AddPunkLordInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__ADDPUNKLORDINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _RemovePunkLordInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__REMOVEPUNKLORDINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _ShowPowerAttackToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE__SHOWPOWERATTACKTOAST_OFFSET))(this);
		}

		::RPG::Client::PunkLordData* get_PunkLordDataRef()
		{
			return ((::RPG::Client::PunkLordData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_PUNKLORDDATAREF_OFFSET))(this);
		}

		::System::Void set_PunkLordDataRef(::RPG::Client::PunkLordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_PUNKLORDDATAREF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPowerAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_ISPOWERATTACK_OFFSET))(this);
		}

		::System::Void set_IsPowerAttack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_ISPOWERATTACK_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSettledDamage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_CURSETTLEDDAMAGE_OFFSET))(this);
		}

		::System::Void set_CurSettledDamage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_CURSETTLEDDAMAGE_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_EndDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_ENDDATETIME_OFFSET))(this);
		}

		::System::Void set_EndDateTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_SET_ENDDATETIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnteredBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE_GET_ISENTEREDBATTLE_OFFSET))(this);
		}
	};
}
