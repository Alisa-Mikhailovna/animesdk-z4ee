#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_FD3F8F5859288507_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A900670)
#define CLASS_1_FD3F8F5859288507__CTOR_OFFSET UNITYSDK_OFFSET(0x1A900710)

inline static constexpr unsigned int Class_1_FD3F8F5859288507_TypeDefinitionIndex = 40816;

class Class_1_FD3F8F5859288507 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::GameCore::FiveDimBaseEventAction*>* Field_1_0; // 0x10
	::UnityEngine::AnimationCurve* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x24
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD3F8F5859288507__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD3F8F5859288507_CLEAR_OFFSET))(this);
	}
};
