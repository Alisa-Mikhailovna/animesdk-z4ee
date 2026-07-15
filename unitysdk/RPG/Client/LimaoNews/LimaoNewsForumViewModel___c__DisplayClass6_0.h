#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsPostViewModel; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC929550)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS6_0__REFRESHPOST_B__0_OFFSET UNITYSDK_OFFSET(0xC92A1A0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsForumViewModel___c__DisplayClass6_0_TypeDefinitionIndex = 75529;

	class LimaoNewsForumViewModel___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 postID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshPost_b__0(::RPG::Client::LimaoNews::LimaoNewsPostViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS6_0__REFRESHPOST_B__0_OFFSET))(this, a1);
		}
	};
}
