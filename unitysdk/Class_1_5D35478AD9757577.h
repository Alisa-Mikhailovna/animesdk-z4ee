#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/System/Object.h"

class Class_1_60E3B7F7BA004DCE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5D35478AD9757577_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xADA8090)
#define CLASS_1_5D35478AD9757577_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xADA8010)
#define CLASS_1_5D35478AD9757577__CTOR_OFFSET UNITYSDK_OFFSET(0xADA80E0)

inline static constexpr unsigned int Class_1_5D35478AD9757577_TypeDefinitionIndex = 59264;

class Class_1_5D35478AD9757577 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_60E3B7F7BA004DCE*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::Enum_3_DB663931210BBC27_8 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D35478AD9757577__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D35478AD9757577_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D35478AD9757577_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
