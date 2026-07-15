#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TAPTAP_SDK_UIBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1CD8A560)
#define TAPTAP_SDK_UIBASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1CD8A990)
#define TAPTAP_SDK_UIBASE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1CD8FD00)
#define TAPTAP_SDK_UIBASE_ONRESUME_OFFSET UNITYSDK_OFFSET(0x1CD8FD30)
#define TAPTAP_SDK_UIBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8FD60)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIBase_TypeDefinitionIndex = 7075;

	class UIBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_ONENTER_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_ONRESUME_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIBASE_ONEXIT_OFFSET))(this);
		}
	};
}
