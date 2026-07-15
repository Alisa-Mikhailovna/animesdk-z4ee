#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLAYERSETTINGITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xD0B1B50)
#define RPG_CLIENT_PLAYERSETTINGITEM_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xD0B1BE0)
#define RPG_CLIENT_PLAYERSETTINGITEM_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xD0B1B90)
#define RPG_CLIENT_PLAYERSETTINGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD0B1BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerSettingItem_TypeDefinitionIndex = 63744;

	class PlayerSettingItem : public ::System::Object
	{
	public:
		::System::Object* _Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGITEM__CTOR_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGITEM_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGITEM_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void set_DefaultValue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGITEM_SET_DEFAULTVALUE_OFFSET))(this, a1);
		}
	};
}
