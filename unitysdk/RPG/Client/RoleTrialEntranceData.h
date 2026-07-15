#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarDemoEntranceConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ROLETRIALENTRANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD4AC060)
#define RPG_CLIENT_ROLETRIALENTRANCEDATA_GET_ROLETRIALAVATARBACKPATH_OFFSET UNITYSDK_OFFSET(0xD4AC270)
#define RPG_CLIENT_ROLETRIALENTRANCEDATA_GET_ROLETRIALAVATARFRONTPATH_OFFSET UNITYSDK_OFFSET(0xD4AC310)
#define RPG_CLIENT_ROLETRIALENTRANCEDATA_GET_ROLETRIALAVATARPATH_OFFSET UNITYSDK_OFFSET(0xD4AC1D0)
#define RPG_CLIENT_ROLETRIALENTRANCEDATA_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xD4AC0D0)
#define RPG_CLIENT_ROLETRIALENTRANCEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xD4AC170)
#define RPG_CLIENT_ROLETRIALENTRANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD4AC0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialEntranceData_TypeDefinitionIndex = 64874;

	class RoleTrialEntranceData : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALENTRANCEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RoleTrialEntranceData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RoleTrialEntranceData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALENTRANCEDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALENTRANCEDATA_GET_STAGEID_OFFSET))(this);
		}

		::System::String* get_RoleTrialAvatarPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALENTRANCEDATA_GET_ROLETRIALAVATARPATH_OFFSET))(this);
		}

		::System::String* get_RoleTrialAvatarBackPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALENTRANCEDATA_GET_ROLETRIALAVATARBACKPATH_OFFSET))(this);
		}

		::System::String* get_RoleTrialAvatarFrontPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALENTRANCEDATA_GET_ROLETRIALAVATARFRONTPATH_OFFSET))(this);
		}

		::RPG::GameCore::AvatarDemoEntranceConfigRow* get__Row()
		{
			return ((::RPG::GameCore::AvatarDemoEntranceConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALENTRANCEDATA_GET__ROW_OFFSET))(this);
		}
	};
}
