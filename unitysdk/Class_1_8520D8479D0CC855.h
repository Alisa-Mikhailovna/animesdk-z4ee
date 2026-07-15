#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_8520D8479D0CC855_GET_CURACTION_OFFSET UNITYSDK_OFFSET(0xB0FCEE0)
#define CLASS_1_8520D8479D0CC855_GET_ISCURACTIONRUNNING_OFFSET UNITYSDK_OFFSET(0xB0FCF20)
#define CLASS_1_8520D8479D0CC855_GET_MAXACTION_OFFSET UNITYSDK_OFFSET(0xB0FCF00)
#define CLASS_1_8520D8479D0CC855_METHOD_1_0D8DB2DC8B47A973_OFFSET UNITYSDK_OFFSET(0xB0FCB70)
#define CLASS_1_8520D8479D0CC855_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB0FCEA0)
#define CLASS_1_8520D8479D0CC855_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB0FCB20)
#define CLASS_1_8520D8479D0CC855_SET_CURACTION_OFFSET UNITYSDK_OFFSET(0xB0FCEF0)
#define CLASS_1_8520D8479D0CC855_SET_ISCURACTIONRUNNING_OFFSET UNITYSDK_OFFSET(0xB0FCF30)
#define CLASS_1_8520D8479D0CC855_SET_MAXACTION_OFFSET UNITYSDK_OFFSET(0xB0FCF10)
#define CLASS_1_8520D8479D0CC855__CTOR_OFFSET UNITYSDK_OFFSET(0xB0FCAD0)

inline static constexpr unsigned int Class_1_8520D8479D0CC855_TypeDefinitionIndex = 55070;

class Class_1_8520D8479D0CC855 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_0; // 0x10
	::System::Boolean _IsCurActionRunning_k__BackingField; // 0x18
	::System::Int32 _MaxAction_k__BackingField; // 0x1C
	::System::Int32 _CurAction_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_0D8DB2DC8B47A973()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_METHOD_1_0D8DB2DC8B47A973_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Int32 get_CurAction()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_GET_CURACTION_OFFSET))(this);
	}

	::System::Void set_CurAction(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_SET_CURACTION_OFFSET))(this, a1);
	}

	::System::Int32 get_MaxAction()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_GET_MAXACTION_OFFSET))(this);
	}

	::System::Void set_MaxAction(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_SET_MAXACTION_OFFSET))(this, a1);
	}

	::System::Boolean get_IsCurActionRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_GET_ISCURACTIONRUNNING_OFFSET))(this);
	}

	::System::Void set_IsCurActionRunning(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8520D8479D0CC855_SET_ISCURACTIONRUNNING_OFFSET))(this, a1);
	}
};
