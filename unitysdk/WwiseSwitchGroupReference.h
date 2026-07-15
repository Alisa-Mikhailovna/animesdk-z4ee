#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"
#include "unitysdk/WwiseObjectType.h"

#define WWISESWITCHGROUPREFERENCE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1D263C80)
#define WWISESWITCHGROUPREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D263C90)

inline static constexpr unsigned int WwiseSwitchGroupReference_TypeDefinitionIndex = 42088;

class WwiseSwitchGroupReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHGROUPREFERENCE__CTOR_OFFSET))(this);
	}

	::WwiseObjectType get_WwiseObjectType()
	{
		return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHGROUPREFERENCE_GET_WWISEOBJECTTYPE_OFFSET))(this);
	}
};
