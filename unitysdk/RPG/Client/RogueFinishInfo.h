#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_78;
class Class_1_355B625488677C80_1;
class Class_1_AC5EB11E1CEB57E7;
class Class_1_D17272E82AE804C2_902;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemList; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AddNewAvatarInfo; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueBuffData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEFINISHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3936B0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_AREAFIRSTPASSSCORE_OFFSET UNITYSDK_OFFSET(0xD393BD0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_AVATARREWARDS_OFFSET UNITYSDK_OFFSET(0xD393C70)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0xD393C50)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xD393B30)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD393B70)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD393B90)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDAVATARS_OFFSET UNITYSDK_OFFSET(0xD393CD0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0xD393C90)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xD393CB0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_ROGUEAREAID_OFFSET UNITYSDK_OFFSET(0xD393B50)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_ROOMSCORE_OFFSET UNITYSDK_OFFSET(0xD393BF0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0xD393C30)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD393BB0)
#define RPG_CLIENT_ROGUEFINISHINFO_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xD393C10)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_AREAFIRSTPASSSCORE_OFFSET UNITYSDK_OFFSET(0xD393BE0)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_AVATARREWARDS_OFFSET UNITYSDK_OFFSET(0xD393C80)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0xD393C60)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xD393B40)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD393B80)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD393BA0)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0xD393CA0)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xD393CC0)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_ROGUEAREAID_OFFSET UNITYSDK_OFFSET(0xD393B60)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_ROOMSCORE_OFFSET UNITYSDK_OFFSET(0xD393C00)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0xD393C40)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD393BC0)
#define RPG_CLIENT_ROGUEFINISHINFO_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xD393C20)
#define RPG_CLIENT_ROGUEFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD3932E0)
#define RPG_CLIENT_ROGUEFINISHINFO__INITBASEINFO_OFFSET UNITYSDK_OFFSET(0xD393380)
#define RPG_CLIENT_ROGUEFINISHINFO__INITFIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0xD393580)
#define RPG_CLIENT_ROGUEFINISHINFO__INITRECORDAVATARS_OFFSET UNITYSDK_OFFSET(0xD393A40)
#define RPG_CLIENT_ROGUEFINISHINFO__INITRECORDBUFFS_OFFSET UNITYSDK_OFFSET(0xD393800)
#define RPG_CLIENT_ROGUEFINISHINFO__INITRECORDINFO_OFFSET UNITYSDK_OFFSET(0xD393500)
#define RPG_CLIENT_ROGUEFINISHINFO__INITRECORDMIRACLES_OFFSET UNITYSDK_OFFSET(0xD393980)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFinishInfo_TypeDefinitionIndex = 64458;

	class RogueFinishInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RecordMiracleIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_78*>* _RecordAvatars; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FirstRewards_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _RecordBuffDatas_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* _AvatarRewards_k__BackingField; // 0x30
		::System::UInt32 _RoomScore_k__BackingField; // 0x38
		::System::UInt32 _TalentCoin_k__BackingField; // 0x3C
		::System::UInt32 _AreaFirstPassScore_k__BackingField; // 0x40
		::System::Boolean _IsWin_k__BackingField; // 0x44
		::System::UInt32 _ReachRoomCount_k__BackingField; // 0x48
		::System::UInt32 _TotalRoomCount_k__BackingField; // 0x4C
		::System::UInt32 _PassRoomCount_k__BackingField; // 0x50
		::System::UInt32 _TotalScore_k__BackingField; // 0x54
		::System::UInt32 _RogueAreaID_k__BackingField; // 0x58

		::System::Void _ctor(::Class_1_355B625488677C80_1* a1, ::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355B625488677C80_1*, ::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitBaseInfo(::Class_1_355B625488677C80_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355B625488677C80_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITBASEINFO_OFFSET))(this, a1);
		}

		::System::Void _InitFirstRewards(::Proto::ItemList* a1, ::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*, ::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITFIRSTREWARDS_OFFSET))(this, a1, a2);
		}

		::System::Void _InitRecordInfo(::Class_1_AC5EB11E1CEB57E7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AC5EB11E1CEB57E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITRECORDINFO_OFFSET))(this, a1);
		}

		::System::Void _InitRecordBuffs(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_902*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_902*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITRECORDBUFFS_OFFSET))(this, a1);
		}

		::System::Void _InitRecordMiracles(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITRECORDMIRACLES_OFFSET))(this, a1);
		}

		::System::Void _InitRecordAvatars(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_78*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_78*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO__INITRECORDAVATARS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_ROGUEAREAID_OFFSET))(this);
		}

		::System::Void set_RogueAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_ROGUEAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_PASSROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_PASSROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReachRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_REACHROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_ReachRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_REACHROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_TOTALROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_TOTALROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaFirstPassScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_AREAFIRSTPASSSCORE_OFFSET))(this);
		}

		::System::Void set_AreaFirstPassScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_AREAFIRSTPASSSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoomScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_ROOMSCORE_OFFSET))(this);
		}

		::System::Void set_RoomScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_ROOMSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_TOTALSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TalentCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_TALENTCOIN_OFFSET))(this);
		}

		::System::Void set_TalentCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_TALENTCOIN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_FirstRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_FIRSTREWARDS_OFFSET))(this);
		}

		::System::Void set_FirstRewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_FIRSTREWARDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* get_AvatarRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_AVATARREWARDS_OFFSET))(this);
		}

		::System::Void set_AvatarRewards(::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_AVATARREWARDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_RecordBuffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDBUFFDATAS_OFFSET))(this);
		}

		::System::Void set_RecordBuffDatas(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_RECORDBUFFDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecordMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_RecordMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_SET_RECORDMIRACLEIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_RecordAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO_GET_RECORDAVATARS_OFFSET))(this);
		}
	};
}
