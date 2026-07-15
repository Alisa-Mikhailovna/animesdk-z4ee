#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IGridFightTraitEditEffect; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC835970)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8359B0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__14_0_OFFSET UNITYSDK_OFFSET(0xC835A90)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__14_1_OFFSET UNITYSDK_OFFSET(0xC835AF0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETMEMBERSONBOARD_B__12_0_OFFSET UNITYSDK_OFFSET(0xC8359C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETSHOWNEFFECTLIST_B__13_0_OFFSET UNITYSDK_OFFSET(0xC835A30)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GET_TRAITPROJECTION_B__32_0_OFFSET UNITYSDK_OFFSET(0xC835B50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait___c_TypeDefinitionIndex = 62502;

	class GridFightTrait___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x2DD70);
		}
		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x2DD78);
		}
		static ::RPG::Client::GridFightTrait___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTrait___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x2DD80);
		}
		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitEditEffect*>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitEditEffect*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x2DD88);
		}
		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitShowEffect*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitShowEffect*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x2DD90);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x2DD98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMembersOnBoard_b__12_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETMEMBERSONBOARD_B__12_0_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitShowEffect* _GetShownEffectList_b__13_0(::RPG::Client::IGridFightTraitEffect* a1)
		{
			return ((::RPG::Client::IGridFightTraitShowEffect*(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETSHOWNEFFECTLIST_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetEditEffectList_b__14_0(::RPG::Client::IGridFightTraitEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__14_0_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitEditEffect* _GetEditEffectList_b__14_1(::RPG::Client::IGridFightTraitEffect* a1)
		{
			return ((::RPG::Client::IGridFightTraitEditEffect*(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__14_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_TraitProjection_b__32_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GET_TRAITPROJECTION_B__32_0_OFFSET))(this, a1);
		}
	};
}
