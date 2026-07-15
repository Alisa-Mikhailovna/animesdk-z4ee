#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceHandbookCatItem; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF2ACB0)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF2ACF0)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO___C___SYNCLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0xBF2AD00)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHandbookInfo___c_TypeDefinitionIndex = 60266;

	class CakeRaceHandbookInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::CakeRaceHandbookCatItem*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::Client::CakeRaceHandbookCatItem*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceHandbookInfo___c_TypeDefinitionIndex)->GetStaticField(0x5E2B0);
		}
		static ::RPG::Client::CakeRaceHandbookInfo___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRaceHandbookInfo___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceHandbookInfo___c_TypeDefinitionIndex)->GetStaticField(0x5E2B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncList_b__11_0(::RPG::Client::CakeRaceHandbookCatItem* a1, ::RPG::Client::CakeRaceHandbookCatItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO___C___SYNCLIST_B__11_0_OFFSET))(this, a1, a2);
		}
	};
}
