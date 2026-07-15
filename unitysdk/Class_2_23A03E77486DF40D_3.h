#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_194.h"

#define CLASS_2_23A03E77486DF40D_3_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x14CE4580)
#define CLASS_2_23A03E77486DF40D_3_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x14CE4590)
#define CLASS_2_23A03E77486DF40D_3__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE45A0)

inline static constexpr unsigned int Class_2_23A03E77486DF40D_3_TypeDefinitionIndex = 73626;

class Class_2_23A03E77486DF40D_3 : public ::Class_1_43BD383C98B4C0C5_194
{
public:
	::System::UInt32 _EventID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_3__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_EventID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_3_GET_EVENTID_OFFSET))(this);
	}

	::System::Void set_EventID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_3_SET_EVENTID_OFFSET))(this, a1);
	}
};
