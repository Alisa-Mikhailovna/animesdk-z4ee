#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

class Class_1_E54B123A533AECA8;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitEffectEnhanceSelectConfig; }
namespace RPG::Client { class GridFightTraitEnhanceChooseAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ACTION_OFFSET UNITYSDK_OFFSET(0xC847B60)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ENHANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xC847B40)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ISGETALL_OFFSET UNITYSDK_OFFSET(0xC847AF0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_OPTIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xC847AA0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET__OPTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xC847A50)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC847810)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0xC8478D0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SELECTENHANCE_OFFSET UNITYSDK_OFFSET(0xC847870)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ACTION_OFFSET UNITYSDK_OFFSET(0xC847B70)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ENHANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xC847B50)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xC8473F0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__GETCURRENTOPTIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xC847920)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__INITENHANCECONFIG_OFFSET UNITYSDK_OFFSET(0xC8475C0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___GETCURRENTOPTIONCONFIGLIST_B__4_0_OFFSET UNITYSDK_OFFSET(0xC847B80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEnhanceChooseEffect_TypeDefinitionIndex = 62472;

	class GridFightTraitEnhanceChooseEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::Client::GridFightTraitEnhanceChooseAction* _Action_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _EnhanceIdList_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>* _EnhanceConfigList; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::Class_1_E54B123A533AECA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E54B123A533AECA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void SelectEnhance(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SELECTENHANCE_OFFSET))(this, a1);
		}

		::System::Void RegisterAction(::RPG::Client::GridFightTraitEnhanceChooseAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEnhanceChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_REGISTERACTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>* _GetCurrentOptionConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__GETCURRENTOPTIONCONFIGLIST_OFFSET))(this);
		}

		::System::Void _InitEnhanceConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__INITENHANCECONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>* get_OptionConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_OPTIONCONFIGLIST_OFFSET))(this);
		}

		::System::Boolean get_IsGetAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ISGETALL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EnhanceIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ENHANCEIDLIST_OFFSET))(this);
		}

		::System::Void set_EnhanceIdList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ENHANCEIDLIST_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitEnhanceChooseAction* get_Action()
		{
			return ((::RPG::Client::GridFightTraitEnhanceChooseAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::Client::GridFightTraitEnhanceChooseAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEnhanceChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ACTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get__OptionIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET__OPTIONIDLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitEffectEnhanceSelectConfig* __GetCurrentOptionConfigList_b__4_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___GETCURRENTOPTIONCONFIGLIST_B__4_0_OFFSET))(this, a1);
		}
	};
}
