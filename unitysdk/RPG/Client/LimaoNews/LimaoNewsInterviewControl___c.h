#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC92C840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC92C880)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewControl___c_TypeDefinitionIndex = 75482;

	class LimaoNewsInterviewControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsInterviewControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsInterviewControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInterviewControl___c_TypeDefinitionIndex)->GetStaticField(0x36DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
