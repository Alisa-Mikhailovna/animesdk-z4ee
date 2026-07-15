#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Text.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_DEVUITEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1E0AC0)
#define RPG_CLIENT_DEVUITEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1E0C00)
#define RPG_CLIENT_DEVUITEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xC1E0A00)
#define RPG_CLIENT_DEVUITEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC1E0DA0)
#define RPG_CLIENT_DEVUITEXT__ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0xC1E0D00)

namespace RPG::Client
{
	inline static constexpr unsigned int DevUIText_TypeDefinitionIndex = 69249;

	class DevUIText : public ::UnityEngine::UI::Text
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUITEXT__CTOR_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUITEXT_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUITEXT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUITEXT_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnUITextLanguageChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUITEXT__ONUITEXTLANGUAGECHANGE_OFFSET))(this, a1);
		}
	};
}
