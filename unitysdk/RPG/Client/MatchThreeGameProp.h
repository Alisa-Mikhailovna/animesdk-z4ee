#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMatchThreePropData; }

#define RPG_CLIENT_MATCHTHREEGAMEPROP_CREATE_OFFSET UNITYSDK_OFFSET(0xCB520A0)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_CANUSE_OFFSET UNITYSDK_OFFSET(0xCB525C0)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_DATA_OFFSET UNITYSDK_OFFSET(0xCB52600)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xCB525E0)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_PROPID_OFFSET UNITYSDK_OFFSET(0xCB51B00)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_PROPLEVEL_OFFSET UNITYSDK_OFFSET(0xCB51C30)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_REMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xCB525A0)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_INIT_OFFSET UNITYSDK_OFFSET(0xCB52620)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_SET_CANUSE_OFFSET UNITYSDK_OFFSET(0xCB525D0)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xCB525F0)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_SET_REMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xCB525B0)
#define RPG_CLIENT_MATCHTHREEGAMEPROP__CTOR_OFFSET UNITYSDK_OFFSET(0xCB52610)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGameProp_TypeDefinitionIndex = 63091;

	class MatchThreeGameProp : public ::System::Object
	{
	public:
		::RPG::Client::IMatchThreePropData* _Data_k__BackingField; // 0x10
		::System::UInt32 _RemainCount_k__BackingField; // 0x18
		::System::UInt32 _Index_k__BackingField; // 0x1C
		::System::Boolean _CanUse_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::IMatchThreePropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_PROPID_OFFSET))(this);
		}

		::System::UInt32 get_PropLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_PROPLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_RemainCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_REMAINCOUNT_OFFSET))(this);
		}

		::System::Void set_RemainCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_SET_REMAINCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_CanUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_CANUSE_OFFSET))(this);
		}

		::System::Void set_CanUse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_SET_CANUSE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_SET_INDEX_OFFSET))(this, a1);
		}

		::RPG::Client::IMatchThreePropData* get_Data()
		{
			return ((::RPG::Client::IMatchThreePropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_DATA_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeGameProp* Create(::RPG::Client::IMatchThreePropData* a1)
		{
			return ((::RPG::Client::MatchThreeGameProp*(*)(::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_CREATE_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_INIT_OFFSET))(this);
		}
	};
}
