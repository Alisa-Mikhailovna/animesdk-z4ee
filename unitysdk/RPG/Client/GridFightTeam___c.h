#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC825850)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC825890)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETBACKROLES_B__63_0_OFFSET UNITYSDK_OFFSET(0xC825950)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETBENCHROLES_B__65_0_OFFSET UNITYSDK_OFFSET(0xC825A10)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETFRONTROLES_B__62_0_OFFSET UNITYSDK_OFFSET(0xC8258F0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETMEMBERSBYTRAITID_B__33_0_OFFSET UNITYSDK_OFFSET(0xC8258D0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDNPCS_B__69_0_OFFSET UNITYSDK_OFFSET(0xC825AD0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDROLES_B__64_0_OFFSET UNITYSDK_OFFSET(0xC8259B0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETOVERCROWDROLES_B__66_0_OFFSET UNITYSDK_OFFSET(0xC825A70)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERCOUNT_B__85_0_OFFSET UNITYSDK_OFFSET(0xC825BF0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_0_OFFSET UNITYSDK_OFFSET(0xC8258A0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_1_OFFSET UNITYSDK_OFFSET(0xC8258C0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_BENCHMEMBERCOUNT_B__81_0_OFFSET UNITYSDK_OFFSET(0xC825B30)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_FRONTROLECOUNT_B__87_0_OFFSET UNITYSDK_OFFSET(0xC825C40)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ISOVERCROWD_B__89_0_OFFSET UNITYSDK_OFFSET(0xC825CA0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_OVERCROWDMEMBERCOUNT_B__83_0_OFFSET UNITYSDK_OFFSET(0xC825B90)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_UNLOCKEXPERTROLES_B__97_0_OFFSET UNITYSDK_OFFSET(0xC825D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c_TypeDefinitionIndex = 62241;

	class GridFightTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>** StaticGet___9__69_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D9B0);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D9B8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__85_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D9C0);
		}
		static ::RPG::Client::GridFightTeam___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTeam___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D9C8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__83_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D9D0);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D9D8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__89_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D9E0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__64_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D9E8);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__65_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D9F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2D9F8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2DA00);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2DA08);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__62_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2DA10);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>** StaticGet___9__97_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2DA18);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__87_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2DA20);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__81_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x2DA28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMember* _get_AllMembers_b__28_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_AllMembers_b__28_1(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMember* _GetMembersByTraitID_b__33_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETMEMBERSBYTRAITID_B__33_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFrontRoles_b__62_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETFRONTROLES_B__62_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetBackRoles_b__63_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETBACKROLES_B__63_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetOnBoardRoles_b__64_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDROLES_B__64_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetBenchRoles_b__65_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETBENCHROLES_B__65_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetOvercrowdRoles_b__66_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETOVERCROWDROLES_B__66_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetOnBoardNPCs_b__69_0(::RPG::Client::GridFightNPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDNPCS_B__69_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_BenchMemberCount_b__81_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_BENCHMEMBERCOUNT_B__81_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_OvercrowdMemberCount_b__83_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_OVERCROWDMEMBERCOUNT_B__83_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_AllMemberCount_b__85_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERCOUNT_B__85_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_FrontRoleCount_b__87_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_FRONTROLECOUNT_B__87_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsOvercrowd_b__89_0(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ISOVERCROWD_B__89_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _get_UnlockExpertRoles_b__97_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_UNLOCKEXPERTROLES_B__97_0_OFFSET))(this, a1);
		}
	};
}
