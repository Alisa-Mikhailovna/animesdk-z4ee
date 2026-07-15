#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1A05043E9AD1C5D3_Enum_3_BFFEB49BA03EEE5D.h"
#include "unitysdk/RPG/Client/GridFightModifierEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_1A05043E9AD1C5D3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CREATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xC731710)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xC731C20)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_UID_OFFSET UNITYSDK_OFFSET(0xC731BD0)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xC731C30)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC732060)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xC731C40)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__GETEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xC731F80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameModifier_TypeDefinitionIndex = 62073;

	class GridFightGameModifier : public ::System::Object
	{
	public:
		::Class_1_1A05043E9AD1C5D3* _Info; // 0x10
		::System::Collections::Generic::Dictionary_2<::Class_1_1A05043E9AD1C5D3_Enum_3_BFFEB49BA03EEE5D, ::RPG::Client::GridFightModifierEffectType>* _EffectTypeMap; // 0x18
		::RPG::Client::GridFightModifierEffectType _EffectType_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightGameModifier* CreateModifier(::Class_1_1A05043E9AD1C5D3* a1)
		{
			return ((::RPG::Client::GridFightGameModifier*(*)(::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CREATEMODIFIER_OFFSET))(a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_UID_OFFSET))(this);
		}

		::RPG::Client::GridFightModifierEffectType get_EffectType()
		{
			return ((::RPG::Client::GridFightModifierEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::RPG::Client::GridFightModifierEffectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_SET_EFFECTTYPE_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_UPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightModifierEffectType _GetEffectType(::Class_1_1A05043E9AD1C5D3_Enum_3_BFFEB49BA03EEE5D a1)
		{
			return ((::RPG::Client::GridFightModifierEffectType(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3_Enum_3_BFFEB49BA03EEE5D))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__GETEFFECTTYPE_OFFSET))(this, a1);
		}
	};
}
