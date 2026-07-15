#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB3E6AE176160DE3_1;
class Class_1_D17272E82AE804C2_806;

#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD010200)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD0106D0)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET UNITYSDK_OFFSET(0xD0102A0)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD010760)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultItemData_TypeDefinitionIndex = 63646;

	class PlanetFesGachaResultItemData : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 ItemNum; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create(::Class_1_D17272E82AE804C2_806* a1)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::Class_1_D17272E82AE804C2_806*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create_1(::Class_1_BB3E6AE176160DE3_1* a1)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::Class_1_BB3E6AE176160DE3_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET))(a1);
		}

		::System::Void Merge(::RPG::Client::PlanetFesGachaResultItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesGachaResultItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET))(this, a1);
		}
	};
}
