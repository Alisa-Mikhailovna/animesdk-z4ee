#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_570;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarConfig; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBBA04B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA_GET_AVATARCONFIG_OFFSET UNITYSDK_OFFSET(0xBBA05D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA_GET_STAR_OFFSET UNITYSDK_OFFSET(0xBBA05F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA_SET_AVATARCONFIG_OFFSET UNITYSDK_OFFSET(0xBBA05E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA_SET_STAR_OFFSET UNITYSDK_OFFSET(0xBBA0600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBBA05C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaResultAvatarItemData_TypeDefinitionIndex = 71652;

	class IdleLiveGachaResultAvatarItemData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* _AvatarConfig_k__BackingField; // 0x10
		::System::UInt32 _Star_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaResultAvatarItemData* Create(::Class_1_D17272E82AE804C2_570* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaResultAvatarItemData*(*)(::Class_1_D17272E82AE804C2_570*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* get_AvatarConfig()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA_GET_AVATARCONFIG_OFFSET))(this);
		}

		::System::Void set_AvatarConfig(::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA_SET_AVATARCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULTAVATARITEMDATA_SET_STAR_OFFSET))(this, a1);
		}
	};
}
