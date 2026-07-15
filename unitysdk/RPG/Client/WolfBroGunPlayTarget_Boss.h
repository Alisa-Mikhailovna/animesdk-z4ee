#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BF31F3092BDFD9E;
class Class_1_482F3423DE650EAD;
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_GET_BOSSSCORE_OFFSET UNITYSDK_OFFSET(0xD8B8A10)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_INIT_OFFSET UNITYSDK_OFFSET(0xD8B80B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0xD8B8440)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xD8B8390)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_KILL_OFFSET UNITYSDK_OFFSET(0xD8B7FC0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xD8B8050)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_A86A455D6AB5B836_1_OFFSET UNITYSDK_OFFSET(0xD8B8870)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0xD8B8820)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xD8B8170)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0xD8B88C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xD8B8250)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ONHIT_OFFSET UNITYSDK_OFFSET(0xD8B84D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_SET_BOSSSCORE_OFFSET UNITYSDK_OFFSET(0xD8B8A20)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS__CTOR_OFFSET UNITYSDK_OFFSET(0xD8B8A30)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Boss_TypeDefinitionIndex = 65652;

	class WolfBroGunPlayTarget_Boss : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* OnHits; // 0xD8
		::System::Single _BossScore_k__BackingField; // 0xE0
		::System::Action* OnBossHit; // 0xE8
		::System::Int32 Field_6_3; // 0xF0
		::System::Int32 Field_6_4; // 0xF4
		::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>* Field_6_5; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS__CTOR_OFFSET))(this);
		}

		::System::Void Kill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_KILL_OFFSET))(this);
		}

		::System::Void Init(::Class_1_2BF31F3092BDFD9E* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_AD23FDCC7576BB32(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_AD23FDCC7576BB32_OFFSET))(this, a1);
		}

		::System::Void Method_6_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISBOOMABLE_OFFSET))(this);
		}

		::System::Boolean OnHit(::UnityEngine::Vector3 a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ONHIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_A86A455D6AB5B836(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_A86A455D6AB5B836_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_A86A455D6AB5B836_1(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_A86A455D6AB5B836_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_19CCC07C980409E4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_19CCC07C980409E4_OFFSET))(this, a1);
		}

		::System::Void Method_6_B961D33AD47A2113()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_B961D33AD47A2113_OFFSET))(this);
		}

		::System::Single get_BossScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_GET_BOSSSCORE_OFFSET))(this);
		}

		::System::Void set_BossScore(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_SET_BOSSSCORE_OFFSET))(this, a1);
		}
	};
}
