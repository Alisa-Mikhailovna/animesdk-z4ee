#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitCoreSelectBase.h"

class Class_1_E54B123A533AECA8;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitEffectIdConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETCOREROLEUIDS_OFFSET UNITYSDK_OFFSET(0xC841150)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0xC8410C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xC841110)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_COREMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xC841190)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_LASTCOREMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xC8411A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_NEEDPLAYEFFECT_OFFSET UNITYSDK_OFFSET(0xC840E20)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC840E60)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xC840B30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreRoleByEquipEffect_TypeDefinitionIndex = 62468;

	class GridFightTraitCoreRoleByEquipEffect : public ::RPG::Client::GridFightTraitCoreSelectBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CoreMemberUIDs_k__BackingField; // 0x30
		::RPG::GameCore::GridFightTraitEffectIdConfigRow* _EffectRow; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _LastCoreMemberUIDs_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_NeedPlayEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_NEEDPLAYEFFECT_OFFSET))(this);
		}

		::System::Void OnUpdate(::Class_1_E54B123A533AECA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E54B123A533AECA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWICON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWMEMBERUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCoreRoleUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETCOREROLEUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CoreMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_COREMEMBERUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LastCoreMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_LASTCOREMEMBERUIDS_OFFSET))(this);
		}
	};
}
