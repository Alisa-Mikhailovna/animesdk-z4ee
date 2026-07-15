#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersCommentRow; }
namespace System { class String; }

#define RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xC2CCCF0)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0xC2CCD60)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_ISMAINSTORYCOMMENT_OFFSET UNITYSDK_OFFSET(0xC2CCDD0)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC2C0A80)
#define RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC2C70A0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersGuestCommentData_TypeDefinitionIndex = 60829;

	class DrinkMakerCheersGuestCommentData : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerCheersCommentRow* _DrinkMakerCheersCommentRow; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_AvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_AVATARICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Comment()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_COMMENT_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsMainStoryComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSGUESTCOMMENTDATA_GET_ISMAINSTORYCOMMENT_OFFSET))(this);
		}
	};
}
