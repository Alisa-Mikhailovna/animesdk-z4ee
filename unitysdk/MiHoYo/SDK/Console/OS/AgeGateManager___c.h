#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateGeneralErrorDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C218D0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C21910)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__HANDLEAGEGATEFROMERRORCODE_B__7_0_OFFSET UNITYSDK_OFFSET(0x19C21920)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c_TypeDefinitionIndex = 8728;

	class AgeGateManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::OS::AgeGateManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::OS::AgeGateManager___c**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager___c_TypeDefinitionIndex)->GetStaticField(0x1A7D0);
		}
		static ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager___c_TypeDefinitionIndex)->GetStaticField(0x1A7D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _HandleAgeGateFromErrorCode_b__7_0(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__HANDLEAGEGATEFROMERRORCODE_B__7_0_OFFSET))(this, a1);
		}
	};
}
