#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_892;
class Class_1_0A99AF1699F7F17E_28;
class Class_1_0A99AF1699F7F17E_29;
class Class_1_D17272E82AE804C2_1013;
class Class_1_D17272E82AE804C2_951;
class Class_1_D17272E82AE804C2_953;
class Class_1_E14A0A1A8B1F847C_6;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournGame; }
namespace RPG::Client { class IRogueTournPersonaStyleGiftInGame; }
namespace RPG::Client { class IRogueTournPersonaStyleInGame; }
namespace RPG::Client { class RogueTournPersonaGameStyleData; }
namespace RPG::Client { class RogueTournPersonaGameStyleGiftData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD462920)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GETGIFTSFORMENU_OFFSET UNITYSDK_OFFSET(0xD47C200)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_CURSTYLE_OFFSET UNITYSDK_OFFSET(0xD47C5B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_GAMEDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xD47C6D0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_GIFTS_OFFSET UNITYSDK_OFFSET(0xD47C5F0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET__GAMEDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xD47C710)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SET__GAMEDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xD47C720)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCADDGIFT_OFFSET UNITYSDK_OFFSET(0xD47BD40)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCEXPCURVE_OFFSET UNITYSDK_OFFSET(0xD47BCD0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCLEVELCHANGE_OFFSET UNITYSDK_OFFSET(0xD47BBC0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCSTYLESELECT_OFFSET UNITYSDK_OFFSET(0xD47BB70)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCUNCLAIMEDEXP_OFFSET UNITYSDK_OFFSET(0xD47BC50)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD4640E0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD4622D0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCCURSTYLE_OFFSET UNITYSDK_OFFSET(0xD47B3C0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCGIFTS_OFFSET UNITYSDK_OFFSET(0xD47B4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleInfo_TypeDefinitionIndex = 64751;

	class RogueTournPersonaStyleInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaGameStyleData* _CurStyle; // 0x10
		::Class_0_16E4307DCC419505_892* _BlackboardProxyFactory; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournPersonaGameStyleGiftData*>* _Gifts; // 0x20
		::System::UInt32 __GameDivisionLevel_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::IRogueTournGame* a1, ::Class_0_16E4307DCC419505_892* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGame*, ::Class_0_16E4307DCC419505_892*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_E14A0A1A8B1F847C_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncStyleSelect(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCSTYLESELECT_OFFSET))(this, a1);
		}

		::System::Void SyncLevelChange(::Class_1_D17272E82AE804C2_951* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_951*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCLEVELCHANGE_OFFSET))(this, a1);
		}

		::System::Void SyncUnclaimedExp(::Class_1_D17272E82AE804C2_953* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_953*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCUNCLAIMEDEXP_OFFSET))(this, a1);
		}

		::System::Void SyncExpCurve(::Class_1_0A99AF1699F7F17E_29* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCEXPCURVE_OFFSET))(this, a1);
		}

		::System::Void SyncAddGift(::Class_1_0A99AF1699F7F17E_28* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCADDGIFT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaStyleGiftInGame*>* GetGiftsForMenu()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaStyleGiftInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GETGIFTSFORMENU_OFFSET))(this);
		}

		::System::Void _SyncCurStyle(::Class_1_E14A0A1A8B1F847C_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCCURSTYLE_OFFSET))(this, a1);
		}

		::System::Void _SyncGifts(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1013*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1013*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCGIFTS_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournPersonaStyleInGame* get_CurStyle()
		{
			return ((::RPG::Client::IRogueTournPersonaStyleInGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_CURSTYLE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaStyleGiftInGame*>* get_Gifts()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaStyleGiftInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_GIFTS_OFFSET))(this);
		}

		::System::UInt32 get_GameDivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_GAMEDIVISIONLEVEL_OFFSET))(this);
		}

		::System::UInt32 get__GameDivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET__GAMEDIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set__GameDivisionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SET__GAMEDIVISIONLEVEL_OFFSET))(this, a1);
		}
	};
}
