#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS_GET_KEY_OFFSET UNITYSDK_OFFSET(0xAC52B30)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS_SET_KEY_OFFSET UNITYSDK_OFFSET(0xAC52B40)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xAC52B50)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationRemoveAttributeOptions_TypeDefinitionIndex = 43572;

	class LobbyModificationRemoveAttributeOptions : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEATTRIBUTEOPTIONS_SET_KEY_OFFSET))(this, a1);
		}
	};
}
