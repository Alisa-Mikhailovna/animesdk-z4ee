#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_2.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B9E8C2EEAA5C96EC;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_20E36FD2269615D8_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A8FC150)
#define CLASS_1_20E36FD2269615D8_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A8FC200)
#define CLASS_1_20E36FD2269615D8_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A8FC2E0)
#define CLASS_1_20E36FD2269615D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FC380)

inline static constexpr unsigned int Class_1_20E36FD2269615D8_TypeDefinitionIndex = 40917;

class Class_1_20E36FD2269615D8 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::PoolHashSet_1<::System::Int32>* Field_1_1; // 0x18
	::RPG::PoolList_1<::System::Int32>* Field_1_2; // 0x20
	::RPG::GCFreeClosure::ClosureEvent_2<::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimLightningStateType> Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x38
	::System::Single Field_1_5; // 0x3C
	::RPG::GameCore::FiveDimLightningStateType Field_1_6; // 0x40
	::System::Single Field_1_7; // 0x44
	::UnityEngine::Vector3 Field_1_8; // 0x48
	::UnityEngine::Vector3 Field_1_9; // 0x54
	::System::Boolean Field_1_10; // 0x60
	::System::Boolean Field_1_11; // 0x61
	::UnityEngine::Vector3 Field_1_12; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20E36FD2269615D8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20E36FD2269615D8_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20E36FD2269615D8_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20E36FD2269615D8_ONRECYCLE_OFFSET))(this);
	}
};
