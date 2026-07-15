#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_656;
namespace RPG::Client { class MiniMapZone; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MINIMAPMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBC8140)
#define RPG_CLIENT_MINIMAPMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCBC8170)
#define RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_0_OFFSET UNITYSDK_OFFSET(0xCBC8180)
#define RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_1_OFFSET UNITYSDK_OFFSET(0xCBC86A0)
#define RPG_CLIENT_MINIMAPMANAGER___C___REGISTERZONEINTERNAL_B__25_0_OFFSET UNITYSDK_OFFSET(0xCBC88A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager___c_TypeDefinitionIndex = 57937;

	class MiniMapManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_656*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_656*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x51220);
		}
		static ::System::Comparison_1<::RPG::Client::MiniMapZone*>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::RPG::Client::MiniMapZone*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x51228);
		}
		static ::RPG::Client::MiniMapManager___c** StaticGet___9()
		{
			return (::RPG::Client::MiniMapManager___c**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x51230);
		}
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_656*>** StaticGet___9__20_1()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_656*>**)Il2CppClass::FromTypeDefinitionIndex(MiniMapManager___c_TypeDefinitionIndex)->GetStaticField(0x51238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMiniMapIcons_b__20_0(::Class_0_16E4307DCC419505_656* a1, ::Class_0_16E4307DCC419505_656* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_656*, ::Class_0_16E4307DCC419505_656*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetMiniMapIcons_b__20_1(::Class_0_16E4307DCC419505_656* a1, ::Class_0_16E4307DCC419505_656* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_656*, ::Class_0_16E4307DCC419505_656*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __RegisterZoneInternal_b__25_0(::RPG::Client::MiniMapZone* a1, ::RPG::Client::MiniMapZone* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MiniMapZone*, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C___REGISTERZONEINTERNAL_B__25_0_OFFSET))(this, a1, a2);
		}
	};
}
