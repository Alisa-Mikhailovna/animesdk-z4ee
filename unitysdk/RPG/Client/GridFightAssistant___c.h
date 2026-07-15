#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_802;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__BOUGHTEXP_B__3_0_OFFSET UNITYSDK_OFFSET(0xC6A4EA0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC6A4D40)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC6A4D80)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__GETALLMESSAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0xC6A5200)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__TICKROUND_B__6_0_OFFSET UNITYSDK_OFFSET(0xC6A50E0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDEQUIP_B__4_0_OFFSET UNITYSDK_OFFSET(0xC6A4FC0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDORB_B__2_0_OFFSET UNITYSDK_OFFSET(0xC6A4D90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAssistant___c_TypeDefinitionIndex = 61442;

	class GridFightAssistant___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_0_16E4307DCC419505_802*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_802*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1DA70);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_802*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_802*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1DA78);
		}
		static ::RPG::Client::GridFightAssistant___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightAssistant___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1DA80);
		}
		static ::System::Action_1<::Class_0_16E4307DCC419505_802*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_802*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1DA88);
		}
		static ::System::Action_1<::Class_0_16E4307DCC419505_802*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_802*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1DA90);
		}
		static ::System::Action_1<::Class_0_16E4307DCC419505_802*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_802*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1DA98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__CTOR_OFFSET))(this);
		}

		::System::Void _UsedOrb_b__2_0(::Class_0_16E4307DCC419505_802* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_802*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDORB_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _BoughtExp_b__3_0(::Class_0_16E4307DCC419505_802* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_802*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__BOUGHTEXP_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _UsedEquip_b__4_0(::Class_0_16E4307DCC419505_802* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_802*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDEQUIP_B__4_0_OFFSET))(this, a1);
		}

		::System::Void _TickRound_b__6_0(::Class_0_16E4307DCC419505_802* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_802*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__TICKROUND_B__6_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetAllMessage_b__7_0(::Class_0_16E4307DCC419505_802* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_802*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__GETALLMESSAGE_B__7_0_OFFSET))(this, a1);
		}
	};
}
