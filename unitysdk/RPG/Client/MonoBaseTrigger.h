#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoTriggerRegion; }

#define RPG_CLIENT_MONOBASETRIGGER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCC32AE0)
#define RPG_CLIENT_MONOBASETRIGGER_START_OFFSET UNITYSDK_OFFSET(0xCC32990)
#define RPG_CLIENT_MONOBASETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC32B20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBaseTrigger_TypeDefinitionIndex = 65832;

	class MonoBaseTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoTriggerRegion* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBASETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBASETRIGGER_START_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBASETRIGGER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
