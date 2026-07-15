#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class SDKUIDropdownControl; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19CD07A0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19CD0A10)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19CD0A70)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19CD0A20)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19CD0790)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD0450)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIDropdownControl__InitializeDropdownItems_d__25_TypeDefinitionIndex = 8628;

	class SDKUIDropdownControl__InitializeDropdownItems_d__25 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::UnityEngine::CanvasGroup* _dropDrownCanvas_5__2; // 0x18
		::UnityEngine::GameObject* _dropdownList_5__1; // 0x20
		::MiHoYo::SDK::Console::SDKUIDropdownControl* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
