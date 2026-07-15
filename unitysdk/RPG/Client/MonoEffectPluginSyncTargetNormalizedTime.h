#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginSyncTargetNormalizedTime_SyncAnimatorInfo.h"

class Class_2_EBD2E97EDDC48B89;
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xCCC9070)
#define RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xCCC9120)
#define RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xCCC9250)
#define RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xCCC9030)
#define RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xCCC91C0)
#define RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_SETOVERRIDETARGET_OFFSET UNITYSDK_OFFSET(0xCCC9330)
#define RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_TICK_OFFSET UNITYSDK_OFFSET(0xCCC92C0)
#define RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xCCC93B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSyncTargetNormalizedTime_TypeDefinitionIndex = 66976;

	class MonoEffectPluginSyncTargetNormalizedTime : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Class_2_EBD2E97EDDC48B89* Field_6_0; // 0x28
		::System::Boolean SyncOnce; // 0x30
		::System::Boolean SyncCasterAnimeState; // 0x31
		::System::String* TargetAnimeState; // 0x38
		::System::Int32 TargetAnimeLayer; // 0x40
		::System::Int32 EffectDefaultAnimeLayer; // 0x44
		::Il2CppArray<::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime_SyncAnimatorInfo>* SyncInfos; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_TICK_OFFSET))(this, a1);
		}

		::System::Void SetOverrideTarget(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSYNCTARGETNORMALIZEDTIME_SETOVERRIDETARGET_OFFSET))(this, a1);
		}
	};
}
