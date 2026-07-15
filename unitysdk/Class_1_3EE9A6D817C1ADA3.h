#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_DFB5A9B3A6CD66C9;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace System { class Action; }

#define CLASS_1_3EE9A6D817C1ADA3_ADD_ONRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xBFD9360)
#define CLASS_1_3EE9A6D817C1ADA3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFD9810)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_13FE76C7C96BEC2E_OFFSET UNITYSDK_OFFSET(0xBFD92B0)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_5F1CE4B44626D198_OFFSET UNITYSDK_OFFSET(0xBFD92F0)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xBFD95D0)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xBFD9A00)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_1_OFFSET UNITYSDK_OFFSET(0xBFD9A90)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xBFD99B0)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_FD407F543E29DD0C_OFFSET UNITYSDK_OFFSET(0xBFD9680)
#define CLASS_1_3EE9A6D817C1ADA3_REMOVE_ONRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xBFD93C0)
#define CLASS_1_3EE9A6D817C1ADA3__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD9420)

inline static constexpr unsigned int Class_1_3EE9A6D817C1ADA3_TypeDefinitionIndex = 76610;

class Class_1_3EE9A6D817C1ADA3 : public ::System::Object
{
public:
	::Class_1_DFB5A9B3A6CD66C9* Field_1_0; // 0x10
	::System::Action* OnRecordChanged; // 0x18
	::Class_1_06E38C65842C3B24* Field_1_2; // 0x20
	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_06E38C65842C3B24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Method_1_13FE76C7C96BEC2E()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_13FE76C7C96BEC2E_OFFSET))(this);
	}

	::System::Void Method_1_5F1CE4B44626D198(::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_5F1CE4B44626D198_OFFSET))(this, a1);
	}

	::System::Void add_OnRecordChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_ADD_ONRECORDCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnRecordChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_REMOVE_ONRECORDCHANGED_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_FD407F543E29DD0C(::Class_1_DFB5A9B3A6CD66C9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFB5A9B3A6CD66C9*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_FD407F543E29DD0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_1_OFFSET))(this);
	}
};
