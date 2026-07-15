#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/Struct_2_D2305C6B6C29E31F_1.h"
#include "unitysdk/System/Object.h"

class Class_1_6770BC9DDC5C458C;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPosTypeConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarSkillConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarTagConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xBB62370)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xBB6D9E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0xBB6DA20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARPOSTYPE_OFFSET UNITYSDK_OFFSET(0xBB6D890)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_DESCLIST_OFFSET UNITYSDK_OFFSET(0xBB6D960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xBB6DA60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARTEXT_OFFSET UNITYSDK_OFFSET(0xBB6D9A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARVOICEEVENT_OFFSET UNITYSDK_OFFSET(0xBB6D9C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBB6DA40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xBB6DA80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_POSTYPECONFIG_OFFSET UNITYSDK_OFFSET(0xBB6D8E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_PROPERTYCONFIGS_OFFSET UNITYSDK_OFFSET(0xBB6D940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITYCONFIG_OFFSET UNITYSDK_OFFSET(0xBB6D920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xBB6DA00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xBB6DAA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0xBB6DAC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SKILLCONFIGS_OFFSET UNITYSDK_OFFSET(0xBB6D900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_TAGCONFIGS_OFFSET UNITYSDK_OFFSET(0xBB6D980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xBB6D9F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0xBB6DA30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_DESCLIST_OFFSET UNITYSDK_OFFSET(0xBB6D970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xBB6DA70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARTEXT_OFFSET UNITYSDK_OFFSET(0xBB6D9B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARVOICEEVENT_OFFSET UNITYSDK_OFFSET(0xBB6D9D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBB6DA50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xBB6DA90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_POSTYPECONFIG_OFFSET UNITYSDK_OFFSET(0xBB6D8F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_PROPERTYCONFIGS_OFFSET UNITYSDK_OFFSET(0xBB6D950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITYCONFIG_OFFSET UNITYSDK_OFFSET(0xBB6D930)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xBB6DA10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xBB6DAB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0xBB6DAD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SKILLCONFIGS_OFFSET UNITYSDK_OFFSET(0xBB6D910)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_TAGCONFIGS_OFFSET UNITYSDK_OFFSET(0xBB6D990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBB6D7B0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarConfig_TypeDefinitionIndex = 71463;

	class IdleLiveAvatarConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>* _SkillConfigs_k__BackingField; // 0x10
		::System::String* _MiniIconPath_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _DescList_k__BackingField; // 0x20
		::System::String* _GachaAvatarVoiceEvent_k__BackingField; // 0x28
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig* _PosTypeConfig_k__BackingField; // 0x30
		::System::String* _FigurePath_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::Struct_2_D2305C6B6C29E31F_1>* _PropertyConfigs_k__BackingField; // 0x40
		::Class_1_6770BC9DDC5C458C* _RarityConfig_k__BackingField; // 0x48
		::System::String* _RoundIconPath_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>* _TagConfigs_k__BackingField; // 0x58
		::System::String* _ShopIconPath_k__BackingField; // 0x60
		::System::String* _IconPath_k__BackingField; // 0x68
		::System::UInt32 _Rarity_k__BackingField; // 0x70
		::System::UInt32 _AvatarId_k__BackingField; // 0x74
		::RPG::Client::TextID _GachaAvatarText_k__BackingField; // 0x78
		::RPG::Client::TextID _AvatarName_k__BackingField; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_CREATE_OFFSET))(a1);
		}

		::RPG::GameCore::ILBattleCharacterLocation get_AvatarPosType()
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARPOSTYPE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig* get_PosTypeConfig()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_POSTYPECONFIG_OFFSET))(this);
		}

		::System::Void set_PosTypeConfig(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPosTypeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_POSTYPECONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>* get_SkillConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SKILLCONFIGS_OFFSET))(this);
		}

		::System::Void set_SkillConfigs(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SKILLCONFIGS_OFFSET))(this, a1);
		}

		::Class_1_6770BC9DDC5C458C* get_RarityConfig()
		{
			return ((::Class_1_6770BC9DDC5C458C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITYCONFIG_OFFSET))(this);
		}

		::System::Void set_RarityConfig(::Class_1_6770BC9DDC5C458C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6770BC9DDC5C458C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITYCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::Struct_2_D2305C6B6C29E31F_1>* get_PropertyConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::Struct_2_D2305C6B6C29E31F_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_PROPERTYCONFIGS_OFFSET))(this);
		}

		::System::Void set_PropertyConfigs(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::Struct_2_D2305C6B6C29E31F_1>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::Struct_2_D2305C6B6C29E31F_1>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_PROPERTYCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* get_DescList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_DESCLIST_OFFSET))(this);
		}

		::System::Void set_DescList(::System::Collections::Generic::List_1<::RPG::Client::TextID>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_DESCLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>* get_TagConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_TAGCONFIGS_OFFSET))(this);
		}

		::System::Void set_TagConfigs(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_TAGCONFIGS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_GachaAvatarText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARTEXT_OFFSET))(this);
		}

		::System::Void set_GachaAvatarText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARTEXT_OFFSET))(this, a1);
		}

		::System::String* get_GachaAvatarVoiceEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_GACHAAVATARVOICEEVENT_OFFSET))(this);
		}

		::System::Void set_GachaAvatarVoiceEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_GACHAAVATARVOICEEVENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_RARITY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_AvatarName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_AVATARNAME_OFFSET))(this);
		}

		::System::Void set_AvatarName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_AVATARNAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_FIGUREPATH_OFFSET))(this);
		}

		::System::Void set_FigurePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_FIGUREPATH_OFFSET))(this, a1);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Void set_MiniIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_MINIICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::Void set_RoundIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_ROUNDICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_GET_SHOPICONPATH_OFFSET))(this);
		}

		::System::Void set_ShopIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARCONFIG_SET_SHOPICONPATH_OFFSET))(this, a1);
		}
	};
}
