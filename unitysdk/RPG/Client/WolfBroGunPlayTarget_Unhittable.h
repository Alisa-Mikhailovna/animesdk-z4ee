#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0xD8BC950)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xD8BC910)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_METHOD_6_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0xD8BC990)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_METHOD_6_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xD8BC9E0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD8BCB20)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Unhittable_TypeDefinitionIndex = 65665;

	class WolfBroGunPlayTarget_Unhittable : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_ISBOOMABLE_OFFSET))(this);
		}

		::System::Boolean Method_6_A86A455D6AB5B836(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_METHOD_6_A86A455D6AB5B836_OFFSET))(this, a1);
		}

		::System::Void Method_6_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_METHOD_6_E3DE31A03057E055_OFFSET))(this);
		}
	};
}
