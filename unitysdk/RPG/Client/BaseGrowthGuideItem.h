#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_835;

#define RPG_CLIENT_BASEGROWTHGUIDEITEM_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xBE29180)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_GOGROWTH_OFFSET UNITYSDK_OFFSET(0xBE291A0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_HASGROWTHCOMMAND_OFFSET UNITYSDK_OFFSET(0xBE29390)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWABLE_OFFSET UNITYSDK_OFFSET(0xBE292F0)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWTHCOMMAND_OFFSET UNITYSDK_OFFSET(0xBE29340)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM_SET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xBE29190)
#define RPG_CLIENT_BASEGROWTHGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xBE293E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGrowthGuideItem_TypeDefinitionIndex = 62623;

	class BaseGrowthGuideItem : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_835* _GrowthCommand; // 0x10
		::System::Boolean _IsGrowable_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Void set_IsGrowable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SET_ISGROWABLE_OFFSET))(this, a1);
		}

		::System::Void GoGrowth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_GOGROWTH_OFFSET))(this);
		}

		::System::Void SetGrowable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWABLE_OFFSET))(this, a1);
		}

		::System::Void SetGrowthCommand(::Class_0_16E4307DCC419505_835* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_835*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_SETGROWTHCOMMAND_OFFSET))(this, a1);
		}

		::System::Boolean HasGrowthCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGROWTHGUIDEITEM_HASGROWTHCOMMAND_OFFSET))(this);
		}
	};
}
