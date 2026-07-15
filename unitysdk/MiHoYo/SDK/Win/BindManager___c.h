#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E717D0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19E71810)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__SHOWBINDTAPTAPVIEW_B__41_0_OFFSET UNITYSDK_OFFSET(0x19E71820)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c_TypeDefinitionIndex = 9060;

	class BindManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BindManager___c_TypeDefinitionIndex)->GetStaticField(0x2C8A0);
		}
		static ::MiHoYo::SDK::Win::BindManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::BindManager___c**)Il2CppClass::FromTypeDefinitionIndex(BindManager___c_TypeDefinitionIndex)->GetStaticField(0x2C8A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBindTapTapView_b__41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__SHOWBINDTAPTAPVIEW_B__41_0_OFFSET))(this);
		}
	};
}
