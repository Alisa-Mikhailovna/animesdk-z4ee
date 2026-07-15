#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B319B4A0CF2C66A4;
namespace RPG::Client { class DesignDataMgr; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_GLOBALCONFIGMANAGER_ASYNCLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xC68F9A0)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC68F4B0)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_ENSURESTARTUPTEXTMAP_OFFSET UNITYSDK_OFFSET(0xC68FB20)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xC68F3B0)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xC68F810)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADSTARTUPCONFIG_OFFSET UNITYSDK_OFFSET(0xC68F590)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xC68F7C0)
#define RPG_CLIENT_GLOBALCONFIGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC68F320)
#define RPG_CLIENT_GLOBALCONFIGMANAGER__LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xC68F770)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalConfigManager_TypeDefinitionIndex = 57376;

	class GlobalConfigManager : public ::System::Object
	{
	public:
		::Class_2_B319B4A0CF2C66A4* LuaBundleMgr; // 0x10
		::RPG::Client::DesignDataMgr* DesignDataMgr; // 0x18
		::System::Boolean IsLoadingDesignData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncLoadStartupConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADSTARTUPCONFIG_OFFSET))(this);
		}

		::System::Void _LoadAllConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER__LOADALLCONFIG_OFFSET))(this);
		}

		::System::Void UnloadAllConfig(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_UNLOADALLCONFIG_OFFSET))(this, a1);
		}

		::System::Void SyncLoadAllConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADALLCONFIG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* AsyncLoadAllConfig()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_ASYNCLOADALLCONFIG_OFFSET))(this);
		}

		::System::Void EnsureStartupTextmap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_ENSURESTARTUPTEXTMAP_OFFSET))(this);
		}
	};
}
