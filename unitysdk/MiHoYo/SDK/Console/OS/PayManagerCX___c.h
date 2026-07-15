#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C3B510)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C3B550)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__REQUESTDETECTPAY_B__17_0_OFFSET UNITYSDK_OFFSET(0x19C3B560)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerCX___c_TypeDefinitionIndex = 8771;

	class PayManagerCX___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::OS::PayManagerCX___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::OS::PayManagerCX___c**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCX___c_TypeDefinitionIndex)->GetStaticField(0x1B6C0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__17_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerCX___c_TypeDefinitionIndex)->GetStaticField(0x1B6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDetectPay_b__17_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__REQUESTDETECTPAY_B__17_0_OFFSET))(this, a1);
		}
	};
}
