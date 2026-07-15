#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A62565171FE916F0_1;
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyRankingInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xC0D2510)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO_GET_GAMEID_OFFSET UNITYSDK_OFFSET(0xC0D2C10)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO_SET_GAMEID_OFFSET UNITYSDK_OFFSET(0xC0D2C20)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC0D2600)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO__INIT_OFFSET UNITYSDK_OFFSET(0xC0D2660)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO__SORT_OFFSET UNITYSDK_OFFSET(0xC0D2A60)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO__SYNC_OFFSET UNITYSDK_OFFSET(0xC0D2820)

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoyPlayerRankingListInfo_TypeDefinitionIndex = 71353;

	class ChenLingGameBoyPlayerRankingListInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyRankingInfo*>* RankingInfos; // 0x10
		::System::UInt32 _GameID_k__BackingField; // 0x18
		::System::Boolean IsHideRankingData; // 0x1C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo* Create(::System::UInt32 a1, ::Class_1_A62565171FE916F0_1* a2)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo*(*)(::System::UInt32, ::Class_1_A62565171FE916F0_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO__INIT_OFFSET))(this);
		}

		::System::Void _Sync(::Class_1_A62565171FE916F0_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A62565171FE916F0_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO__SYNC_OFFSET))(this, a1);
		}

		::System::Void _Sort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO__SORT_OFFSET))(this);
		}

		::System::UInt32 get_GameID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO_GET_GAMEID_OFFSET))(this);
		}

		::System::Void set_GameID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPLAYERRANKINGLISTINFO_SET_GAMEID_OFFSET))(this, a1);
		}
	};
}
