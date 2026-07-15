#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools { class ScreenRecorder; }

#define RPGTOOLS_SCREENRECORDER__RECORD_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDC8EF20)
#define RPGTOOLS_SCREENRECORDER__RECORD_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC8F060)
#define RPGTOOLS_SCREENRECORDER__RECORD_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDC8F0C0)
#define RPGTOOLS_SCREENRECORDER__RECORD_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDC8F070)
#define RPGTOOLS_SCREENRECORDER__RECORD_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC8EF10)
#define RPGTOOLS_SCREENRECORDER__RECORD_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0xDC8E810)

namespace RPGTools
{
	inline static constexpr unsigned int ScreenRecorder__Record_d__24_TypeDefinitionIndex = 46013;

	class ScreenRecorder__Record_d__24 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPGTools::ScreenRecorder* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER__RECORD_D__24__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER__RECORD_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER__RECORD_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER__RECORD_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER__RECORD_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER__RECORD_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
