#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_EBB10EC01CCC4716_11;
namespace RPG::GameCore { class AetherDividePassiveSkillRow; }
namespace RPG::GameCore { class AetherPassiveSkillTypeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0xBCF60C0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xBCF6730)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_BELONGAETHERMONSTERAVATARID_OFFSET UNITYSDK_OFFSET(0xBCF68B0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0xBCF6890)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PARAMARRAY_OFFSET UNITYSDK_OFFSET(0xBCF6680)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLDESC_OFFSET UNITYSDK_OFFSET(0xBCF6520)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLNAME_OFFSET UNITYSDK_OFFSET(0xBCF63C0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLTYPE_OFFSET UNITYSDK_OFFSET(0xBCF6280)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SIMPLEPARAMARRAY_OFFSET UNITYSDK_OFFSET(0xBCF65D0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SIMPLEPASSIVESKILLDESC_OFFSET UNITYSDK_OFFSET(0xBCF6470)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLICONPATH_OFFSET UNITYSDK_OFFSET(0xBCF6330)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLITEMROW_OFFSET UNITYSDK_OFFSET(0xBCF6190)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLRARITY_OFFSET UNITYSDK_OFFSET(0xBCF67E0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLTYPEROW_OFFSET UNITYSDK_OFFSET(0xBCF6200)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SETISNEW_OFFSET UNITYSDK_OFFSET(0xBCF6120)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_BELONGAETHERMONSTERAVATARID_OFFSET UNITYSDK_OFFSET(0xBCF68C0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0xBCF68A0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xBCF5FD0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBCF5F40)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA__UPDATEPROPERTYMODIFERDICT_OFFSET UNITYSDK_OFFSET(0xBCF6080)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherSkillCoreItemData_TypeDefinitionIndex = 62756;

	class AetherSkillCoreItemData : public ::RPG::Client::ItemData
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* PropertyDataDict; // 0x40
		::RPG::GameCore::AetherPassiveSkillTypeRow* _SkillTypeRow; // 0x48
		::RPG::GameCore::AetherDividePassiveSkillRow* _SkillItemRow; // 0x50
		::System::UInt32 _BelongAetherMonsterAvatarID_k__BackingField; // 0x58
		::System::Boolean _IsProtected_k__BackingField; // 0x5C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_EBB10EC01CCC4716_11* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetPropertyValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GETPROPERTYVALUE_OFFSET))(this, a1);
		}

		::System::Void SetIsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SETISNEW_OFFSET))(this, a1);
		}

		::System::Void _UpdatePropertyModiferDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA__UPDATEPROPERTYMODIFERDICT_OFFSET))(this);
		}

		::RPG::GameCore::AetherDividePassiveSkillRow* get_SkillItemRow()
		{
			return ((::RPG::GameCore::AetherDividePassiveSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLITEMROW_OFFSET))(this);
		}

		::RPG::GameCore::AetherPassiveSkillTypeRow* get_SkillTypeRow()
		{
			return ((::RPG::GameCore::AetherPassiveSkillTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLTYPEROW_OFFSET))(this);
		}

		::System::String* get_SkillIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLICONPATH_OFFSET))(this);
		}

		::System::String* get_PassiveSkillName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLNAME_OFFSET))(this);
		}

		::System::String* get_SimplePassiveSkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SIMPLEPASSIVESKILLDESC_OFFSET))(this);
		}

		::System::String* get_PassiveSkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SIMPLEPARAMARRAY_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PARAMARRAY_OFFSET))(this);
		}

		::System::String* get_AbilityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_ABILITYNAME_OFFSET))(this);
		}

		::RPG::GameCore::AetherPassiveSkillType get_PassiveSkillType()
		{
			return ((::RPG::GameCore::AetherPassiveSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLTYPE_OFFSET))(this);
		}

		::System::UInt32 get_SkillRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLRARITY_OFFSET))(this);
		}

		::System::Boolean get_IsProtected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_ISPROTECTED_OFFSET))(this);
		}

		::System::Void set_IsProtected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_ISPROTECTED_OFFSET))(this, a1);
		}

		::System::UInt32 get_BelongAetherMonsterAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_BELONGAETHERMONSTERAVATARID_OFFSET))(this);
		}

		::System::Void set_BelongAetherMonsterAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_BELONGAETHERMONSTERAVATARID_OFFSET))(this, a1);
		}
	};
}
