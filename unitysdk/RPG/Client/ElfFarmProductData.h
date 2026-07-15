#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantProductConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ELFFARMPRODUCTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC371360)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xC377750)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC377370)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISCROPS_OFFSET UNITYSDK_OFFSET(0xC377450)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISCURRENTTARGETRELATED_OFFSET UNITYSDK_OFFSET(0xC3778D0)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC377830)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMFIGURE_OFFSET UNITYSDK_OFFSET(0xC377620)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMICON_OFFSET UNITYSDK_OFFSET(0xC3774F0)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xC3721A0)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC377390)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC377310)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_ISUNLOCKINSPECIFICPROGRESS_OFFSET UNITYSDK_OFFSET(0xC373F90)
#define RPG_CLIENT_ELFFARMPRODUCTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC377380)
#define RPG_CLIENT_ELFFARMPRODUCTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC377300)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmProductData_TypeDefinitionIndex = 60893;

	class ElfFarmProductData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmProductData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsUnlockInSpecificProgress(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_ISUNLOCKINSPECIFICPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RestaurantProductConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantProductConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsCrops()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISCROPS_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::String* get_ItemIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMICON_OFFSET))(this);
		}

		::System::String* get_ItemFigure()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ITEMFIGURE_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentTargetRelated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMPRODUCTDATA_GET_ISCURRENTTARGETRELATED_OFFSET))(this);
		}
	};
}
