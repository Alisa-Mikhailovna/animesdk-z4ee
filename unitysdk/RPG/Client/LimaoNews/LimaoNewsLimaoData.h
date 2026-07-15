#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A5B7E8A042539401;
namespace RPG::Client::LimaoNews { class LimaoNewsUserData; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC93B820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_ISSHOWINMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC93BB60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_LIMAOID_OFFSET UNITYSDK_OFFSET(0xC93BB40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_NPCID_OFFSET UNITYSDK_OFFSET(0xC93B8F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0xC93B7A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_SET_ISSHOWINMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC93BB70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_SET_LIMAOID_OFFSET UNITYSDK_OFFSET(0xC93BB50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC93B8E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA__GETLIMAOROW_OFFSET UNITYSDK_OFFSET(0xC93B9B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA__GETUSERDATA_OFFSET UNITYSDK_OFFSET(0xC93B9F0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsLimaoData_TypeDefinitionIndex = 75414;

	class LimaoNewsLimaoData : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsUserData* _UserData; // 0x10
		::Class_1_A5B7E8A042539401* _LimaoRow; // 0x18
		::System::UInt32 _LimaoId_k__BackingField; // 0x20
		::System::Boolean _IsShowInMainPage_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsLimaoData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsLimaoData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_NpcID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_NPCID_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsUserData* get_UserData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_USERDATA_OFFSET))(this);
		}

		::Class_1_A5B7E8A042539401* _GetLimaoRow()
		{
			return ((::Class_1_A5B7E8A042539401*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA__GETLIMAOROW_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsUserData* _GetUserData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsUserData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA__GETUSERDATA_OFFSET))(this);
		}

		::System::UInt32 get_LimaoId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_LIMAOID_OFFSET))(this);
		}

		::System::Void set_LimaoId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_SET_LIMAOID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowInMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_GET_ISSHOWINMAINPAGE_OFFSET))(this);
		}

		::System::Void set_IsShowInMainPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLIMAODATA_SET_ISSHOWINMAINPAGE_OFFSET))(this, a1);
		}
	};
}
