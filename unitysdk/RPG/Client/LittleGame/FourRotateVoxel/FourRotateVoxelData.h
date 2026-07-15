#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xC9C59A0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_METHOD_5_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0xC9C5880)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC9C58E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC9C5780)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9C5A20)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelData_TypeDefinitionIndex = 72903;

	class FourRotateVoxelData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::Single>* FixUpdateFunction; // 0x18
		::System::Action_1<::System::Single>* LateFixUpdateFunction; // 0x20
		::UnityEngine::Coroutine* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_ONDISABLE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_5AFFA079DA8B20AA()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_METHOD_5_5AFFA079DA8B20AA_OFFSET))(this);
		}
	};
}
