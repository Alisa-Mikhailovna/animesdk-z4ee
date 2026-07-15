#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ConsoleKeyInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class IConsoleDriver; }
namespace System { class String; }

#define SYSTEM_CONSOLEDRIVER_CREATENULLCONSOLEDRIVER_OFFSET UNITYSDK_OFFSET(0x1A0828F0)
#define SYSTEM_CONSOLEDRIVER_CREATETERMINFODRIVER_OFFSET UNITYSDK_OFFSET(0x1A082980)
#define SYSTEM_CONSOLEDRIVER_CREATEWINDOWSCONSOLEDRIVER_OFFSET UNITYSDK_OFFSET(0x1A082930)
#define SYSTEM_CONSOLEDRIVER_GET_ISCONSOLE_OFFSET UNITYSDK_OFFSET(0x1A081830)
#define SYSTEM_CONSOLEDRIVER_INTERNALKEYAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A0829F0)
#define SYSTEM_CONSOLEDRIVER_ISATTY_OFFSET UNITYSDK_OFFSET(0x1A0829D0)
#define SYSTEM_CONSOLEDRIVER_READKEY_OFFSET UNITYSDK_OFFSET(0x1A081FD0)
#define SYSTEM_CONSOLEDRIVER_SETECHO_OFFSET UNITYSDK_OFFSET(0x1A082A10)
#define SYSTEM_CONSOLEDRIVER_TTYSETUP_OFFSET UNITYSDK_OFFSET(0x1A082A00)
#define SYSTEM_CONSOLEDRIVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0828A0)

namespace System
{
	inline static constexpr unsigned int ConsoleDriver_TypeDefinitionIndex = 383;

	class ConsoleDriver : public ::System::Object
	{
	public:
		static ::System::IConsoleDriver** StaticGet_driver()
		{
			return (::System::IConsoleDriver**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDriver_TypeDefinitionIndex)->GetStaticField(0x4560);
		}
		static ::System::Boolean* StaticGet_called_isatty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConsoleDriver_TypeDefinitionIndex)->GetStaticField(0x2C60);
		}
		static ::System::Boolean* StaticGet_is_console()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConsoleDriver_TypeDefinitionIndex)->GetStaticField(0x2C61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER__CCTOR_OFFSET))();
		}

		static ::System::IConsoleDriver* CreateNullConsoleDriver()
		{
			return ((::System::IConsoleDriver*(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_CREATENULLCONSOLEDRIVER_OFFSET))();
		}

		static ::System::IConsoleDriver* CreateWindowsConsoleDriver()
		{
			return ((::System::IConsoleDriver*(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_CREATEWINDOWSCONSOLEDRIVER_OFFSET))();
		}

		static ::System::IConsoleDriver* CreateTermInfoDriver(::System::String* a1)
		{
			return ((::System::IConsoleDriver*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_CREATETERMINFODRIVER_OFFSET))(a1);
		}

		static ::System::ConsoleKeyInfo ReadKey(::System::Boolean a1)
		{
			return ((::System::ConsoleKeyInfo(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_READKEY_OFFSET))(a1);
		}

		static ::System::Boolean get_IsConsole()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_GET_ISCONSOLE_OFFSET))();
		}

		static ::System::Boolean Isatty(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_ISATTY_OFFSET))(a1);
		}

		static ::System::Int32 InternalKeyAvailable(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_INTERNALKEYAVAILABLE_OFFSET))(a1);
		}

		static ::System::Boolean TtySetup(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Byte>*& a3, ::System::Int32*& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*&, ::System::Int32*&))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_TTYSETUP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean SetEcho(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLEDRIVER_SETECHO_OFFSET))(a1);
		}
	};
}
