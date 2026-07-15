#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_4D052AB586FDB247_2;
class Class_1_DE6E491FE63D8E69_2;
class Class_1_E54B123A533AECA8;
namespace RPG::Client { class GridFightElationTraitEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitEffectElationProperty; }
namespace RPG::Client { class GridFightTraitEffectElationSkill; }
namespace RPG::GameCore { class GridFightTraitEffectLayerParamConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETITEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xC845810)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETORBCALLBACK_OFFSET UNITYSDK_OFFSET(0xC8457C0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_CLEARCALLBACK_OFFSET UNITYSDK_OFFSET(0xC845860)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_COMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0xC8460B0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0xC846890)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC846730)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xC8468F0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xC846750)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_ROUNDHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xC846960)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC846770)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xC8467D0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_STAR_OFFSET UNITYSDK_OFFSET(0xC846790)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xC846230)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0xC846000)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC845DE0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC846740)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xC846760)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_SKILLCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC846780)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_STAR_OFFSET UNITYSDK_OFFSET(0xC846680)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_TRACKEQUIPUPDATE_OFFSET UNITYSDK_OFFSET(0xC8461E0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xC8458B0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__REGISTERSUMMARIZER_OFFSET UNITYSDK_OFFSET(0xC845D10)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__UPDATEINTERNEL_OFFSET UNITYSDK_OFFSET(0xC845EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_TypeDefinitionIndex = 62458;

	class GridFightTraitElationEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* AdditionalProperties; // 0x30
		::System::Action_1<::RPG::Client::GridFightEquipItemData*>* _OnGetItem; // 0x38
		::System::Action_1<::RPG::Client::GridFightOrbEntityData*>* _OnGetOrb; // 0x40
		::RPG::Client::GridFightElationTraitEquipComponent* _EquipComponent_k__BackingField; // 0x48
		::RPG::Client::GridFightTraitEffectElationProperty* _PropertyProvider_k__BackingField; // 0x50
		::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* _ParamConfigRow; // 0x58
		::RPG::Client::GridFightTraitEffectElationSkill* _SkillComponent_k__BackingField; // 0x60
		::System::UInt32 _TrackEquipUpdate; // 0x68
		::System::UInt32 _Star; // 0x6C

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void AddGetOrbCallback(::System::Action_1<::RPG::Client::GridFightOrbEntityData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightOrbEntityData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETORBCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddGetItemCallback(::System::Action_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETITEMCALLBACK_OFFSET))(this, a1);
		}

		::System::Void ClearCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_CLEARCALLBACK_OFFSET))(this);
		}

		::System::Void OnUpdate(::Class_1_DE6E491FE63D8E69_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DE6E491FE63D8E69_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnUpdate_1(::Class_1_E54B123A533AECA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E54B123A533AECA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_1_OFFSET))(this, a1);
		}

		::System::Void _UpdateInternel(::Class_1_4D052AB586FDB247_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4D052AB586FDB247_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__UPDATEINTERNEL_OFFSET))(this, a1);
		}

		::System::Void CompositeEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_COMPOSITEEQUIP_OFFSET))(this, a1);
		}

		::System::Void TrackEquipUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_TRACKEQUIPUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterSummarizer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__REGISTERSUMMARIZER_OFFSET))(this);
		}

		::RPG::Client::GridFightElationTraitEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightElationTraitEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_EquipComponent(::RPG::Client::GridFightElationTraitEquipComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightElationTraitEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_EQUIPCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitEffectElationProperty* get_PropertyProvider()
		{
			return ((::RPG::Client::GridFightTraitEffectElationProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_PROPERTYPROVIDER_OFFSET))(this);
		}

		::System::Void set_PropertyProvider(::RPG::Client::GridFightTraitEffectElationProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectElationProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_PROPERTYPROVIDER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitEffectElationSkill* get_SkillComponent()
		{
			return ((::RPG::Client::GridFightTraitEffectElationSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLCOMPONENT_OFFSET))(this);
		}

		::System::Void set_SkillComponent(::RPG::Client::GridFightTraitEffectElationSkill* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectElationSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_SKILLCOMPONENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_STAR_OFFSET))(this, a1);
		}

		::System::String* get_SkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_EffectParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EFFECTPARAMS_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_ROUNDHEADICONPATH_OFFSET))(this);
		}
	};
}
