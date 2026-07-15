#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_DELETESTRINGINCACHE_OFFSET UNITYSDK_OFFSET(0x19BFEA30)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_DELETESTRING_OFFSET UNITYSDK_OFFSET(0x19BFE730)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x19BFDFA0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19BFDE40)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_LOADSTRINGFROMCACHE_OFFSET UNITYSDK_OFFSET(0x19BFE680)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x19BFE330)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_SAVESTRINGTOCACHE_OFFSET UNITYSDK_OFFSET(0x19BFE2C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_SAVESTRING_OFFSET UNITYSDK_OFFSET(0x19BFE0B0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFDF20)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleDataStorageManager_TypeDefinitionIndex = 8626;

	class ConsoleDataStorageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleDataStorageManager** StaticGet__consoleInstance()
		{
			return (::MiHoYo::SDK::Console::ConsoleDataStorageManager**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDataStorageManager_TypeDefinitionIndex)->GetStaticField(0x19B30);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _dataCache; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::ConsoleDataStorageManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::ConsoleDataStorageManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::String* GetFilePath(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_GETFILEPATH_OFFSET))(this, a1);
		}

		::System::Void SaveString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_SAVESTRING_OFFSET))(this, a1, a2);
		}

		::System::String* LoadString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_LOADSTRING_OFFSET))(this, a1);
		}

		::System::Void DeleteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_DELETESTRING_OFFSET))(this, a1);
		}

		::System::Void DeleteStringInCache(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_DELETESTRINGINCACHE_OFFSET))(this, a1);
		}

		::System::Void SaveStringToCache(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_SAVESTRINGTOCACHE_OFFSET))(this, a1, a2);
		}

		::System::String* LoadStringFromCache(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_LOADSTRINGFROMCACHE_OFFSET))(this, a1);
		}
	};
}
