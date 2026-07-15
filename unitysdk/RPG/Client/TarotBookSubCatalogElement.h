#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"

namespace RPG::GameCore::Booklet { class CatalogPageElementConfig; }

#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xD62F0D0)
#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xD62F220)
#define RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD62F300)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookSubCatalogElement_TypeDefinitionIndex = 69191;

	class TarotBookSubCatalogElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::CatalogPageElementConfig*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSUBCATALOGELEMENT__BEFOREDESTROY_OFFSET))(this);
		}
	};
}
