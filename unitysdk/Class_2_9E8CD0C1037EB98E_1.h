#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_9E8CD0C1037EB98E_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A917AD0)
#define CLASS_2_9E8CD0C1037EB98E_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A917A30)
#define CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A917BD0)

inline static constexpr unsigned int Class_2_9E8CD0C1037EB98E_1_TypeDefinitionIndex = 40931;

class Class_2_9E8CD0C1037EB98E_1 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_2_0; // 0x338
	::System::Single Field_2_1; // 0x340
	::UnityEngine::Vector3 Field_2_2; // 0x344
	::UnityEngine::Vector3 Field_2_3; // 0x350
	::UnityEngine::Vector3 Field_2_4; // 0x35C
	::System::Single Field_2_5; // 0x368
	::System::Int32 Field_2_6; // 0x36C
	::System::Boolean Field_2_7; // 0x370
	::System::Boolean Field_2_8; // 0x371
	::System::Boolean Field_2_9; // 0x372
	::System::Boolean Field_2_10; // 0x373
	::System::Boolean Field_2_11; // 0x374
	::System::Boolean Field_2_12; // 0x375
	::System::Boolean Field_2_13; // 0x376
	::System::Boolean Field_2_14; // 0x377
	::System::Boolean Field_2_15; // 0x378
	::System::Boolean Field_2_16; // 0x379

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1_CLEAR_OFFSET))(this);
	}
};
