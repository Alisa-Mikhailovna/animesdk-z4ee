#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF1ECF0)
#define CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS69_0___SYNCSTACKFOLLOWNODESTOANCHOR_B__0_OFFSET UNITYSDK_OFFSET(0xAF20580)

inline static constexpr unsigned int Class_2_4A2CC7F50E9E7872___c__DisplayClass69_0_TypeDefinitionIndex = 72830;

class Class_2_4A2CC7F50E9E7872___c__DisplayClass69_0 : public ::System::Object
{
public:
	::UnityEngine::Vector3 anchor; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
	}

	::System::Void __SyncStackFollowNodesToAnchor_b__0(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS69_0___SYNCSTACKFOLLOWNODESTOANCHOR_B__0_OFFSET))(this, a1, a2);
	}
};
