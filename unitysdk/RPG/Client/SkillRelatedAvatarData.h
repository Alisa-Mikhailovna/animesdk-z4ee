#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AvatarServantSkillLinkRow; }
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace System { class String; }

#define RPG_CLIENT_SKILLRELATEDAVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD5165A0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATARCARDCENTER_OFFSET UNITYSDK_OFFSET(0xD516870)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATARICONSIDE_OFFSET UNITYSDK_OFFSET(0xD516940)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xD516C50)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD516C70)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xD516C90)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xD516BB0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_RELATEDAVATARID_OFFSET UNITYSDK_OFFSET(0xD5167F0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xD516C00)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xD516B60)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLESKILLDESC_OFFSET UNITYSDK_OFFSET(0xD516AF0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xD516A10)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xD516850)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xD516A80)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xD516C60)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD516C80)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xD516860)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD516650)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA__INIT_OFFSET UNITYSDK_OFFSET(0xD516680)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillRelatedAvatarData_TypeDefinitionIndex = 59714;

	class SkillRelatedAvatarData : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x10
		::RPG::GameCore::AvatarServantSkillRow* _SkillRow; // 0x18
		::RPG::GameCore::AvatarServantSkillLinkRow* _Meta; // 0x20
		::System::UInt32 _SkillID_k__BackingField; // 0x28
		::System::UInt32 _Level; // 0x2C
		::System::Boolean _IsUnlocked_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::GameCore::AvatarServantSkillLinkRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillLinkRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::SkillRelatedAvatarData* Create(::RPG::GameCore::AvatarServantSkillLinkRow* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::SkillRelatedAvatarData*(*)(::RPG::GameCore::AvatarServantSkillLinkRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA__INIT_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_SKILLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RelatedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_RELATEDAVATARID_OFFSET))(this);
		}

		::System::String* get_AvatarCardCenter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATARCARDCENTER_OFFSET))(this);
		}

		::System::String* get_AvatarIconSide()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATARICONSIDE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SimpleSkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLESKILLDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLEPARAMLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SimpleExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_AVATAR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_ORDER_OFFSET))(this);
		}
	};
}
