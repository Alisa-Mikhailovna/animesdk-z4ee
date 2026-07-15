#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MarbleRandomBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_MARBLEHEXINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xCB2A340)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ALLYICONPATH_OFFSET UNITYSDK_OFFSET(0xCB2AB00)
#define RPG_CLIENT_MARBLEHEXINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCB2ABC0)
#define RPG_CLIENT_MARBLEHEXINFO_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xCB2A960)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0xCB2AB20)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xCB2A9C0)
#define RPG_CLIENT_MARBLEHEXINFO_GET_HEXID_OFFSET UNITYSDK_OFFSET(0xCB2A940)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCB2AA20)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xCB2A9A0)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ISENEMY_OFFSET UNITYSDK_OFFSET(0xCB2A980)
#define RPG_CLIENT_MARBLEHEXINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCB2AA00)
#define RPG_CLIENT_MARBLEHEXINFO_GET_SEALID_OFFSET UNITYSDK_OFFSET(0xCB2A9E0)
#define RPG_CLIENT_MARBLEHEXINFO_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xCB2ABA0)
#define RPG_CLIENT_MARBLEHEXINFO_GET_SMALLALLYICONPATH_OFFSET UNITYSDK_OFFSET(0xCB2AB40)
#define RPG_CLIENT_MARBLEHEXINFO_GET_SMALLENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0xCB2AB60)
#define RPG_CLIENT_MARBLEHEXINFO_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xCB2AA90)
#define RPG_CLIENT_MARBLEHEXINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xCB2AB80)
#define RPG_CLIENT_MARBLEHEXINFO_SET_ALLYICONPATH_OFFSET UNITYSDK_OFFSET(0xCB2AB10)
#define RPG_CLIENT_MARBLEHEXINFO_SET_DESC_OFFSET UNITYSDK_OFFSET(0xCB2ABD0)
#define RPG_CLIENT_MARBLEHEXINFO_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xCB2A970)
#define RPG_CLIENT_MARBLEHEXINFO_SET_ENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0xCB2AB30)
#define RPG_CLIENT_MARBLEHEXINFO_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xCB2A9D0)
#define RPG_CLIENT_MARBLEHEXINFO_SET_HEXID_OFFSET UNITYSDK_OFFSET(0xCB2A950)
#define RPG_CLIENT_MARBLEHEXINFO_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xCB2A9B0)
#define RPG_CLIENT_MARBLEHEXINFO_SET_ISENEMY_OFFSET UNITYSDK_OFFSET(0xCB2A990)
#define RPG_CLIENT_MARBLEHEXINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCB2AA10)
#define RPG_CLIENT_MARBLEHEXINFO_SET_SEALID_OFFSET UNITYSDK_OFFSET(0xCB2A9F0)
#define RPG_CLIENT_MARBLEHEXINFO_SET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xCB2ABB0)
#define RPG_CLIENT_MARBLEHEXINFO_SET_SMALLALLYICONPATH_OFFSET UNITYSDK_OFFSET(0xCB2AB50)
#define RPG_CLIENT_MARBLEHEXINFO_SET_SMALLENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0xCB2AB70)
#define RPG_CLIENT_MARBLEHEXINFO_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xCB2AB90)
#define RPG_CLIENT_MARBLEHEXINFO__CREATELEVELUPHEXINFO_OFFSET UNITYSDK_OFFSET(0xCB2A400)
#define RPG_CLIENT_MARBLEHEXINFO__CREATENORMALHEXINFO_OFFSET UNITYSDK_OFFSET(0xCB2A7F0)
#define RPG_CLIENT_MARBLEHEXINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCB2A330)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleHexInfo_TypeDefinitionIndex = 62883;

	class MarbleHexInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _SEAL_LEVEL_UP_EFFECT = 0x1; // 0x0
		::System::String* _SmallEnemyIconPath_k__BackingField; // 0x10
		::System::String* _Desc_k__BackingField; // 0x18
		::System::String* _EnemyIconPath_k__BackingField; // 0x20
		::System::String* _AllyIconPath_k__BackingField; // 0x28
		::System::String* _SmallAllyIconPath_k__BackingField; // 0x30
		::System::UInt32 _SealID_k__BackingField; // 0x38
		::System::UInt32 _Level_k__BackingField; // 0x3C
		::System::UInt32 _EntityID_k__BackingField; // 0x40
		::System::UInt32 _HexID_k__BackingField; // 0x44
		::RPG::Client::TextID _Title_k__BackingField; // 0x48
		::System::Boolean _IsActive_k__BackingField; // 0x58
		::System::Boolean _IsEnemy_k__BackingField; // 0x59
		::System::UInt32 _EffectType_k__BackingField; // 0x5C
		::RPG::Client::TextID _SkillName_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MarbleHexInfo* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::MarbleHexInfo*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::MarbleHexInfo* _CreateLevelUpHexInfo(::RPG::GameCore::MarbleRandomBuffRow* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::MarbleHexInfo*(*)(::RPG::GameCore::MarbleRandomBuffRow*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO__CREATELEVELUPHEXINFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::MarbleHexInfo* _CreateNormalHexInfo(::RPG::GameCore::MarbleRandomBuffRow* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::MarbleHexInfo*(*)(::RPG::GameCore::MarbleRandomBuffRow*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO__CREATENORMALHEXINFO_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 get_HexID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_HEXID_OFFSET))(this);
		}

		::System::Void set_HexID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_HEXID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EffectType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_EFFECTTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ISENEMY_OFFSET))(this);
		}

		::System::Void set_IsEnemy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_ISENEMY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_ENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SealID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_SEALID_OFFSET))(this);
		}

		::System::Void set_SealID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_SEALID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_AllyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ALLYICONPATH_OFFSET))(this);
		}

		::System::Void set_AllyIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_ALLYICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_EnemyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ENEMYICONPATH_OFFSET))(this);
		}

		::System::Void set_EnemyIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_ENEMYICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_SmallAllyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_SMALLALLYICONPATH_OFFSET))(this);
		}

		::System::Void set_SmallAllyIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_SMALLALLYICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_SmallEnemyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_SMALLENEMYICONPATH_OFFSET))(this);
		}

		::System::Void set_SmallEnemyIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_SMALLENEMYICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_SKILLNAME_OFFSET))(this);
		}

		::System::Void set_SkillName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_SKILLNAME_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_DESC_OFFSET))(this, a1);
		}
	};
}
