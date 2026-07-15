#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_GETABTESTKEY_OFFSET UNITYSDK_OFFSET(0x19C1AEB0)
#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19C0E7B0)
#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_LOADALLABTESTINFO_OFFSET UNITYSDK_OFFSET(0x19C0E820)
#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_REQUESTALLABTESTINFO_OFFSET UNITYSDK_OFFSET(0x19C0E830)
#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_SAVEABRESULT_OFFSET UNITYSDK_OFFSET(0x19C1AFA0)
#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1AEA0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int ABTestManager_TypeDefinitionIndex = 8724;

	class ABTestManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::OS::ABTestManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::OS::ABTestManager**)Il2CppClass::FromTypeDefinitionIndex(ABTestManager_TypeDefinitionIndex)->GetStaticField(0x1A750);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::OS::ABTestManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::OS::ABTestManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void RequestAllABTestInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_REQUESTALLABTESTINFO_OFFSET))(this);
		}

		::System::Void LoadAllABTestInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_LOADALLABTESTINFO_OFFSET))(this);
		}

		::System::String* GetABTestKey(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_GETABTESTKEY_OFFSET))(this, a1, a2);
		}

		::System::Boolean SaveABResult(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_SAVEABRESULT_OFFSET))(this, a1, a2);
		}
	};
}
