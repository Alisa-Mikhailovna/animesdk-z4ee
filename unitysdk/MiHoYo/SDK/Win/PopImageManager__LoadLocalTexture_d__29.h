#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class PopImageManager; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19C87410)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19C875F0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19C87650)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19C87600)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C87400)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29__CTOR_OFFSET UNITYSDK_OFFSET(0x19C87280)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PopImageManager__LoadLocalTexture_d__29_TypeDefinitionIndex = 9139;

	class PopImageManager__LoadLocalTexture_d__29 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::PopImageManager* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* url; // 0x20
		::System::String* _name_5__1; // 0x28
		::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _localRequest_5__3; // 0x38
		::System::String* _filePath_5__2; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
