#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xC7CFA00)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_DETAILPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xC7D0130)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xC7D01D0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC7D0150)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xC7D0190)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISGRIDFIGHTONLY_OFFSET UNITYSDK_OFFSET(0xC7D00F0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xC7D0170)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xC7D01B0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xC7D0110)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC7D00D0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_DETAILPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xC7D0140)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xC7D01E0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC7D0160)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xC7D01A0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISGRIDFIGHTONLY_OFFSET UNITYSDK_OFFSET(0xC7D0100)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xC7D0180)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xC7D01C0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xC7D0120)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xC7D00E0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC7CFFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePropertyConfig_TypeDefinitionIndex = 61605;

	class GridFightRolePropertyConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::GridFightRolePropertyConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::GridFightRolePropertyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRolePropertyConfig_TypeDefinitionIndex)->GetStaticField(0x29040);
		}
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::String* _MiniIconPath_k__BackingField; // 0x18
		::RPG::Client::TextID _PropertyName_k__BackingField; // 0x20
		::RPG::Client::TextID _DetailPropertyName_k__BackingField; // 0x30
		::System::UInt32 _ExtraEffectID_k__BackingField; // 0x40
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x44
		::System::Boolean _IsDisplay_k__BackingField; // 0x48
		::System::Boolean _IsGridFightOnly_k__BackingField; // 0x49
		::System::UInt32 _Order_k__BackingField; // 0x4C

		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightRolePropertyConfig* GetConfig(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGridFightOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISGRIDFIGHTONLY_OFFSET))(this);
		}

		::System::Void set_IsGridFightOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISGRIDFIGHTONLY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DetailPropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_DETAILPROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_DetailPropertyName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_DETAILPROPERTYNAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Void set_MiniIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_MINIICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Void set_IsDisplay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISDISPLAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ORDER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_EXTRAEFFECTID_OFFSET))(this);
		}

		::System::Void set_ExtraEffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_EXTRAEFFECTID_OFFSET))(this, a1);
		}
	};
}
