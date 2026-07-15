#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA98B00)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDA98B30)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_0_OFFSET UNITYSDK_OFFSET(0xDA98B40)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_1_OFFSET UNITYSDK_OFFSET(0xDA98BF0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_2_OFFSET UNITYSDK_OFFSET(0xDA98C90)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_3_OFFSET UNITYSDK_OFFSET(0xDA98CC0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_4_OFFSET UNITYSDK_OFFSET(0xDA98D30)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_5_OFFSET UNITYSDK_OFFSET(0xDA98D60)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_6_OFFSET UNITYSDK_OFFSET(0xDA98D90)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_7_OFFSET UNITYSDK_OFFSET(0xDA98E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityExtensions___c_TypeDefinitionIndex = 55224;

	class GameEntityExtensions___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameEntityExtensions___c** StaticGet___9()
		{
			return (::RPG::GameCore::GameEntityExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions___c_TypeDefinitionIndex)->GetStaticField(0x62C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__100_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_0_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__100_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_1_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__100_2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_2_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__100_3(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_3_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__100_4(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_4_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__100_5(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_5_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__100_6(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_6_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__100_7(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__100_7_OFFSET))(this, a1);
		}
	};
}
