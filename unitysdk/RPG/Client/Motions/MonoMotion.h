#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1C0124822CFB2AD3;

#define RPG_CLIENT_MOTIONS_MONOMOTION_START_OFFSET UNITYSDK_OFFSET(0xCD7CEF0)
#define RPG_CLIENT_MOTIONS_MONOMOTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD7CF70)
#define RPG_CLIENT_MOTIONS_MONOMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCD7D000)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoMotion_TypeDefinitionIndex = 70126;

	class MonoMotion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_1C0124822CFB2AD3* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOMOTION__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOMOTION_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOMOTION_UPDATE_OFFSET))(this);
		}
	};
}
