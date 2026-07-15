#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"

class Class_1_DFF28B1BAA582E14;
class Class_1_FD6F62630DBCC357;
namespace RPG::GameCore { class RtAbilityPropertyRangeGroup; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_2_A748484B623FEE2F_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0xB5842A0)
#define CLASS_2_A748484B623FEE2F_METHOD_2_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0xB5845D0)
#define CLASS_2_A748484B623FEE2F_METHOD_2_82CC903830655FEA_OFFSET UNITYSDK_OFFSET(0xB584B20)
#define CLASS_2_A748484B623FEE2F_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB584490)
#define CLASS_2_A748484B623FEE2F_METHOD_2_E89C9BED2693C517_OFFSET UNITYSDK_OFFSET(0xB5847C0)
#define CLASS_2_A748484B623FEE2F_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xB5842B0)
#define CLASS_2_A748484B623FEE2F__CTOR_OFFSET UNITYSDK_OFFSET(0xB584D60)

inline static constexpr unsigned int Class_2_A748484B623FEE2F_TypeDefinitionIndex = 51290;

class Class_2_A748484B623FEE2F : public ::Class_1_8A0BE42C657CE107
{
public:
	::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::Class_1_FD6F62630DBCC357*>* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A748484B623FEE2F__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A748484B623FEE2F_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A748484B623FEE2F_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A748484B623FEE2F_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_E89C9BED2693C517(::Il2CppArray<::RPG::GameCore::RtAbilityPropertyRangeGroup*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtAbilityPropertyRangeGroup*>*))((::PBYTE)hIl2Cpp + CLASS_2_A748484B623FEE2F_METHOD_2_E89C9BED2693C517_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A748484B623FEE2F_METHOD_2_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_2_82CC903830655FEA(::Class_1_DFF28B1BAA582E14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFF28B1BAA582E14*))((::PBYTE)hIl2Cpp + CLASS_2_A748484B623FEE2F_METHOD_2_82CC903830655FEA_OFFSET))(this, a1);
	}
};
