#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournHexData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xD440E30)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0xD442440)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD4422B0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0xD4424A0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_HEXID_OFFSET UNITYSDK_OFFSET(0xD440EC0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ICON_OFFSET UNITYSDK_OFFSET(0xD442260)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD4421C0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD442200)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD442170)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD442160)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookHexDataItem_TypeDefinitionIndex = 64667;

	class RogueTournHandbookHexDataItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournHexData* _HexData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournHandbookHexDataItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournHandbookHexDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::Void SyncUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_SYNCUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_HexID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_HEXID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ICON_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_BGDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}
	};
}
