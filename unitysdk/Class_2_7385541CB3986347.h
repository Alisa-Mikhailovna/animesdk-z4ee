#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_7385541CB3986347_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9421A0)
#define CLASS_2_7385541CB3986347_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A942040)
#define CLASS_2_7385541CB3986347__CTOR_OFFSET UNITYSDK_OFFSET(0x1A942270)

inline static constexpr unsigned int Class_2_7385541CB3986347_TypeDefinitionIndex = 40934;

class Class_2_7385541CB3986347 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::System::Int32>* Field_2_0; // 0x338
	::RPG::PoolList_1<::System::Int32>* Field_2_1; // 0x340
	::System::Boolean Field_2_2; // 0x348
	::System::Boolean Field_2_3; // 0x349
	::System::Boolean Field_2_4; // 0x34A
	::System::Boolean Field_2_5; // 0x34B
	::System::Boolean Field_2_6; // 0x34C
	::System::Int32 Field_2_7; // 0x350
	::System::Int32 Field_2_8; // 0x354
	::System::Int32 Field_2_9; // 0x358
	::System::Int32 Field_2_10; // 0x35C
	::System::Int32 Field_2_11; // 0x360
	::UnityEngine::Vector3 Field_2_12; // 0x364
	::System::Int32 Field_2_13; // 0x370
	::UnityEngine::Vector3 Field_2_14; // 0x374
	::RPG::GameCore::FiveDimOrthoDirection Field_2_15; // 0x380
	::System::Single Field_2_16; // 0x384
	::System::Single Field_2_17; // 0x388
	::System::Int32 Field_2_18; // 0x38C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7385541CB3986347__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7385541CB3986347_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7385541CB3986347_CLEAR_OFFSET))(this);
	}
};
