#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOUI3DMODELSHADOW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD31BA0)
#define RPG_CLIENT_MONOUI3DMODELSHADOW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD31B10)
#define RPG_CLIENT_MONOUI3DMODELSHADOW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD31A20)
#define RPG_CLIENT_MONOUI3DMODELSHADOW_SETSHADOWCASTINGENABLED_OFFSET UNITYSDK_OFFSET(0xCD31AB0)
#define RPG_CLIENT_MONOUI3DMODELSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0xCD31E50)
#define RPG_CLIENT_MONOUI3DMODELSHADOW__REFRESHSHADOW_OFFSET UNITYSDK_OFFSET(0xCD31C30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUI3DModelShadow_TypeDefinitionIndex = 69665;

	class MonoUI3DModelShadow : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsShadowCastingEnabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetShadowCastingEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW_SETSHADOWCASTINGENABLED_OFFSET))(this, a1);
		}

		::System::Void _RefreshShadow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUI3DMODELSHADOW__REFRESHSHADOW_OFFSET))(this, a1);
		}
	};
}
