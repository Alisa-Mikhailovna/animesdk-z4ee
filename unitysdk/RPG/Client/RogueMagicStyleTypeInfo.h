#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueMagicStyleTypeSelectRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD3D1750)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD3D16E0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD3D17F0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xD3D10F0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD3D1570)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD3D1420)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD3D1400)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xD3D18F0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xD3D1410)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD3D0C80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicStyleTypeInfo_TypeDefinitionIndex = 64441;

	class RogueMagicStyleTypeInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMagicStyleTypeSelectRow* _Row; // 0x10
		::RPG::GameCore::RogueMagicStyleType _Type_k__BackingField; // 0x18
		::RPG::Client::TextID _Name; // 0x20
		::RPG::Client::TextID _CommonTypeNameTextID; // 0x30

		::System::Void _ctor(::RPG::GameCore::RogueMagicStyleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicStyleType get_Type()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::RogueMagicStyleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicStyleTypeSelectRow* get_Row()
		{
			return ((::RPG::GameCore::RogueMagicStyleTypeSelectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_DESC_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISUNLOCK_OFFSET))(this);
		}
	};
}
