#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightMonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC796020)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC796060)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETBOSS_B__2_0_OFFSET UNITYSDK_OFFSET(0xC796070)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETELITE_B__3_0_OFFSET UNITYSDK_OFFSET(0xC7960B0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETMINION_B__4_0_OFFSET UNITYSDK_OFFSET(0xC7960F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterCampConfig___c_TypeDefinitionIndex = 62131;

	class GridFightMonsterCampConfig___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightMonsterCampConfig___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightMonsterCampConfig___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterCampConfig___c_TypeDefinitionIndex)->GetStaticField(0x2A4F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterCampConfig___c_TypeDefinitionIndex)->GetStaticField(0x2A4F8);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterCampConfig___c_TypeDefinitionIndex)->GetStaticField(0x2A500);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterCampConfig___c_TypeDefinitionIndex)->GetStaticField(0x2A508);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBoss_b__2_0(::RPG::Client::GridFightMonsterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETBOSS_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetElite_b__3_0(::RPG::Client::GridFightMonsterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETELITE_B__3_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetMinion_b__4_0(::RPG::Client::GridFightMonsterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___C__GETMINION_B__4_0_OFFSET))(this, a1);
		}
	};
}
