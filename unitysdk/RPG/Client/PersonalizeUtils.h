#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PERSONALIZEUTILS_CANDISPLAYINLOCK_OFFSET UNITYSDK_OFFSET(0xCF61270)
#define RPG_CLIENT_PERSONALIZEUTILS_GETEQUIPPEDPHONECASEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xCF64600)
#define RPG_CLIENT_PERSONALIZEUTILS_GETPHONETHEMEIMAGEL_OFFSET UNITYSDK_OFFSET(0xCF64590)
#define RPG_CLIENT_PERSONALIZEUTILS_GETPHONETHEMEIMAGER_OFFSET UNITYSDK_OFFSET(0xCF64870)

namespace RPG::Client
{
	inline static constexpr unsigned int PersonalizeUtils_TypeDefinitionIndex = 63496;

	class PersonalizeUtils : public ::System::Object
	{
	public:
		static ::System::Boolean CanDisplayInLock(::RPG::GameCore::PersonalizeShowType a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PersonalizeShowType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEUTILS_CANDISPLAYINLOCK_OFFSET))(a1, a2);
		}

		static ::System::String* GetPhoneThemeImageL(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEUTILS_GETPHONETHEMEIMAGEL_OFFSET))(a1);
		}

		static ::System::String* GetEquippedPhoneCasePrefabPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEUTILS_GETEQUIPPEDPHONECASEPREFABPATH_OFFSET))(a1);
		}

		static ::System::String* GetPhoneThemeImageR(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZEUTILS_GETPHONETHEMEIMAGER_OFFSET))(a1);
		}
	};
}
