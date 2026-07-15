#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD19FBF0)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD19FEA0)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD19FC30)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A02A0)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE__SWITCHNODES_OFFSET UNITYSDK_OFFSET(0xD19FC80)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE__SWITCHTODEFAULTNODES_OFFSET UNITYSDK_OFFSET(0xD1A00C0)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE__SWITCHTOSCENETVNODES_OFFSET UNITYSDK_OFFSET(0xD19FEE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MultiPlayerArcadeScreenNode_TypeDefinitionIndex = 74231;

	class MultiPlayerArcadeScreenNode : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* defaultNodes; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* sceneTVNodes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE_ONDESTROY_OFFSET))(this);
		}

		::System::Void _SwitchNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE__SWITCHNODES_OFFSET))(this);
		}

		::System::Void _SwitchToDefaultNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE__SWITCHTODEFAULTNODES_OFFSET))(this);
		}

		::System::Void _SwitchToSceneTVNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADESCREENNODE__SWITCHTOSCENETVNODES_OFFSET))(this);
		}
	};
}
