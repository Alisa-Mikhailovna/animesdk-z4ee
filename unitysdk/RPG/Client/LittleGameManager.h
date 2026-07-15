#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4796C2DE3B2D6C2A;
class Class_1_4CD8A1ACD565F336;
class Class_1_E0103A0EA6CD0F4C;
class Class_2_7F7BFA8C5E418566;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAMEMANAGER_CHECKIFCONTAINERCANBELOADED_OFFSET UNITYSDK_OFFSET(0xC9EF1B0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9EF3A0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_GETCURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0xC9DF9F0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_GETLEVELGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0xC9EFD50)
#define RPG_CLIENT_LITTLEGAMEMANAGER_GET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0xC9EFEE0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_HASCURRENTGAME_OFFSET UNITYSDK_OFFSET(0xC9EFC50)
#define RPG_CLIENT_LITTLEGAMEMANAGER_ISCONTAINERLOADED_OFFSET UNITYSDK_OFFSET(0xC9EF130)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC9EFAD0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LOADCONTAINER_OFFSET UNITYSDK_OFFSET(0xC9EF030)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LOADONSTEP2_OFFSET UNITYSDK_OFFSET(0xC9EF770)
#define RPG_CLIENT_LITTLEGAMEMANAGER_SET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0xC9EFEF0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_STOPCURRENTGAME_OFFSET UNITYSDK_OFFSET(0xC9E6CF0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_STOPGAME_OFFSET UNITYSDK_OFFSET(0xC9EFBD0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_UNLOADCONTAINER_OFFSET UNITYSDK_OFFSET(0xC9EF0B0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC9EF7C0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__CLEARLEVELGRAPHCONFIGS_OFFSET UNITYSDK_OFFSET(0xC9EF5E0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EF370)
#define RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSELEVELINSTANCES_OFFSET UNITYSDK_OFFSET(0xC9EF2D0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC9EF570)
#define RPG_CLIENT_LITTLEGAMEMANAGER__INITLEVELINSTANCES_OFFSET UNITYSDK_OFFSET(0xC9EF220)
#define RPG_CLIENT_LITTLEGAMEMANAGER__LATEUPDATESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC9EFB60)
#define RPG_CLIENT_LITTLEGAMEMANAGER__PENDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC9EFD00)
#define RPG_CLIENT_LITTLEGAMEMANAGER__TRYSTARTPENDINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xC9EFCA0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__UPDATESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC9EF820)

namespace RPG::Client
{
	inline static constexpr unsigned int LittleGameManager_TypeDefinitionIndex = 57851;

	class LittleGameManager : public ::System::Object
	{
	public:
		::Class_1_E0103A0EA6CD0F4C* _PendingInstance; // 0x10
		::Class_1_4796C2DE3B2D6C2A* _LevelInstanceManager; // 0x18
		::RPG::PoolDictionary_2<::System::String*, ::RPG::GameCore::LevelGraphConfig*>* _LevelGraphConfigs; // 0x20
		::Class_2_7F7BFA8C5E418566* _AssetLoader_k__BackingField; // 0x28
		::Class_1_E0103A0EA6CD0F4C* _CurrentInstance; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean LoadContainer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LOADCONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Void UnloadContainer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_UNLOADCONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsContainerLoaded(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_ISCONTAINERLOADED_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckIfContainerCanBeLoaded(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_CHECKIFCONTAINERCANBELOADED_OFFSET))(this, a1, a2);
		}

		::System::Void _InitLevelInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__INITLEVELINSTANCES_OFFSET))(this);
		}

		::System::Void _DisposeLevelInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSELEVELINSTANCES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void LoadOnStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LOADONSTEP2_OFFSET))(this);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_UPDATE_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void StopGame(::Class_1_E0103A0EA6CD0F4C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E0103A0EA6CD0F4C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_STOPGAME_OFFSET))(this, a1);
		}

		::System::Void StopCurrentGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_STOPCURRENTGAME_OFFSET))(this);
		}

		::System::Boolean HasCurrentGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_HASCURRENTGAME_OFFSET))(this);
		}

		::Class_1_E0103A0EA6CD0F4C* GetCurrentInstance()
		{
			return ((::Class_1_E0103A0EA6CD0F4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_GETCURRENTINSTANCE_OFFSET))(this);
		}

		::System::Void _UpdateSingleInstance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__UPDATESINGLEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _LateUpdateSingleInstance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__LATEUPDATESINGLEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _DisposeSingleInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSESINGLEINSTANCE_OFFSET))(this);
		}

		::System::Void _PendGameInstance(::Class_1_E0103A0EA6CD0F4C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E0103A0EA6CD0F4C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__PENDGAMEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _TryStartPendingInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__TRYSTARTPENDINGINSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphConfig* GetLevelGraphConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_GETLEVELGRAPHCONFIG_OFFSET))(this, a1);
		}

		::System::Void _ClearLevelGraphConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__CLEARLEVELGRAPHCONFIGS_OFFSET))(this);
		}

		::Class_2_7F7BFA8C5E418566* get_AssetLoader()
		{
			return ((::Class_2_7F7BFA8C5E418566*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_GET_ASSETLOADER_OFFSET))(this);
		}

		::System::Void set_AssetLoader(::Class_2_7F7BFA8C5E418566* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7F7BFA8C5E418566*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_SET_ASSETLOADER_OFFSET))(this, a1);
		}
	};
}
