#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SettingManager_HoekeySettingType.h"
#include "unitysdk/RPG/Client/SettingManager_WalkSwitchMode.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SETTINGMANAGER_CHECKISNEEDSETTINGHDR_OFFSET UNITYSDK_OFFSET(0xD4E96F0)
#define RPG_CLIENT_SETTINGMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4E92B0)
#define RPG_CLIENT_SETTINGMANAGER_GETEIGHTWHEELDEFAULTINDEXBYORDER_OFFSET UNITYSDK_OFFSET(0xD4E95D0)
#define RPG_CLIENT_SETTINGMANAGER_GETFOURWHEELDEFAULTINDEXBYORDER_OFFSET UNITYSDK_OFFSET(0xD4E9620)
#define RPG_CLIENT_SETTINGMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD4EA0D0)
#define RPG_CLIENT_SETTINGMANAGER_GET_ISMOBILEGAMEPADMODE_OFFSET UNITYSDK_OFFSET(0xD4E9FB0)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSDEFAULTMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xD4E9FD0)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSDEFAULTPAPERWHITE_OFFSET UNITYSDK_OFFSET(0xD4EA000)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSHIGHESTMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xD4E9FF0)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSHIGHESTPAPERWHITE_OFFSET UNITYSDK_OFFSET(0xD4EA020)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSLOWERMAXLUMINANCE_OFFSET UNITYSDK_OFFSET(0xD4E9FE0)
#define RPG_CLIENT_SETTINGMANAGER_GET_PSLOWESTPAPERWHITE_OFFSET UNITYSDK_OFFSET(0xD4EA010)
#define RPG_CLIENT_SETTINGMANAGER_GET_WALKSWITCHVALUE_OFFSET UNITYSDK_OFFSET(0xD4E9E70)
#define RPG_CLIENT_SETTINGMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xD4E9270)
#define RPG_CLIENT_SETTINGMANAGER_ISSUPPORTDLSS_OFFSET UNITYSDK_OFFSET(0xD4EA070)
#define RPG_CLIENT_SETTINGMANAGER_RESETACTIONBIND_OFFSET UNITYSDK_OFFSET(0xD4E9360)
#define RPG_CLIENT_SETTINGMANAGER_RESETEIGHTWHEELSETTING_OFFSET UNITYSDK_OFFSET(0xD4E9670)
#define RPG_CLIENT_SETTINGMANAGER_RESETFOURWHEELSETTING_OFFSET UNITYSDK_OFFSET(0xD4E96B0)
#define RPG_CLIENT_SETTINGMANAGER_SAVESETTINGS_OFFSET UNITYSDK_OFFSET(0xD4E92F0)
#define RPG_CLIENT_SETTINGMANAGER_SET_ISMOBILEGAMEPADMODE_OFFSET UNITYSDK_OFFSET(0xD4E9FC0)
#define RPG_CLIENT_SETTINGMANAGER_SET_WALKSWITCHVALUE_OFFSET UNITYSDK_OFFSET(0xD4E9E80)
#define RPG_CLIENT_SETTINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD4EA100)

namespace RPG::Client
{
	inline static constexpr unsigned int SettingManager_TypeDefinitionIndex = 65264;

	class SettingManager : public ::System::Object
	{
	public:
		// static const ::System::Single _HDRSettingThreshold; // 0x0
		::System::Single _PSLowestMaxLuminance; // 0x10
		::RPG::Client::SettingManager_WalkSwitchMode _WalkSwitchValue; // 0x14
		::System::Boolean _IsMobileGamePadMode; // 0x18
		::System::Single _PSHighestPaperRatio; // 0x1C
		::System::Single _PSHighestMaxLuminance; // 0x20
		::System::Single _PSLowestPaperWhite; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SaveSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_SAVESETTINGS_OFFSET))(this);
		}

		::System::Void ResetActionBind(::RPG::Client::SettingManager_HoekeySettingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SettingManager_HoekeySettingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_RESETACTIONBIND_OFFSET))(this, a1);
		}

		::System::Int32 GetEightWheelDefaultIndexByOrder(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GETEIGHTWHEELDEFAULTINDEXBYORDER_OFFSET))(this, a1);
		}

		::System::Int32 GetFourWheelDefaultIndexByOrder(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GETFOURWHEELDEFAULTINDEXBYORDER_OFFSET))(this, a1);
		}

		::System::Void ResetEightWheelSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_RESETEIGHTWHEELSETTING_OFFSET))(this);
		}

		::System::Void ResetFourWheelSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_RESETFOURWHEELSETTING_OFFSET))(this);
		}

		::System::Boolean CheckIsNeedSettingHDR()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_CHECKISNEEDSETTINGHDR_OFFSET))(this);
		}

		::RPG::Client::SettingManager_WalkSwitchMode get_WalkSwitchValue()
		{
			return ((::RPG::Client::SettingManager_WalkSwitchMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_WALKSWITCHVALUE_OFFSET))(this);
		}

		::System::Void set_WalkSwitchValue(::RPG::Client::SettingManager_WalkSwitchMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SettingManager_WalkSwitchMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_SET_WALKSWITCHVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMobileGamePadMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_ISMOBILEGAMEPADMODE_OFFSET))(this);
		}

		::System::Void set_IsMobileGamePadMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_SET_ISMOBILEGAMEPADMODE_OFFSET))(this, a1);
		}

		::System::Single get_PSDefaultMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSDEFAULTMAXLUMINANCE_OFFSET))(this);
		}

		::System::Single get_PSLowerMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSLOWERMAXLUMINANCE_OFFSET))(this);
		}

		::System::Single get_PSHighestMaxLuminance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSHIGHESTMAXLUMINANCE_OFFSET))(this);
		}

		::System::Single get_PSDefaultPaperWhite()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSDEFAULTPAPERWHITE_OFFSET))(this);
		}

		::System::Single get_PSLowestPaperWhite()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSLOWESTPAPERWHITE_OFFSET))(this);
		}

		::System::Single get_PSHighestPaperWhite()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_PSHIGHESTPAPERWHITE_OFFSET))(this);
		}

		::System::Boolean IsSupportDlss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_ISSUPPORTDLSS_OFFSET))(this);
		}

		static ::RPG::Client::SettingManager* get_Instance()
		{
			return ((::RPG::Client::SettingManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTINGMANAGER_GET_INSTANCE_OFFSET))();
		}
	};
}
