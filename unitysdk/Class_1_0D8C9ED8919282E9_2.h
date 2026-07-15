#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0D8C9ED8919282E9_2_GET_FIGHTID_OFFSET UNITYSDK_OFFSET(0xAD59CB0)
#define CLASS_1_0D8C9ED8919282E9_2_GET_ISBEST_OFFSET UNITYSDK_OFFSET(0xAD59D50)
#define CLASS_1_0D8C9ED8919282E9_2_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xAD59CD0)
#define CLASS_1_0D8C9ED8919282E9_2_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAD59D10)
#define CLASS_1_0D8C9ED8919282E9_2_GET_PASSEDLEVELBEFORE_OFFSET UNITYSDK_OFFSET(0xAD59CF0)
#define CLASS_1_0D8C9ED8919282E9_2_GET_ROUND_OFFSET UNITYSDK_OFFSET(0xAD59D30)
#define CLASS_1_0D8C9ED8919282E9_2_SET_FIGHTID_OFFSET UNITYSDK_OFFSET(0xAD59CC0)
#define CLASS_1_0D8C9ED8919282E9_2_SET_ISBEST_OFFSET UNITYSDK_OFFSET(0xAD59D60)
#define CLASS_1_0D8C9ED8919282E9_2_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xAD59CE0)
#define CLASS_1_0D8C9ED8919282E9_2_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAD59D20)
#define CLASS_1_0D8C9ED8919282E9_2_SET_PASSEDLEVELBEFORE_OFFSET UNITYSDK_OFFSET(0xAD59D00)
#define CLASS_1_0D8C9ED8919282E9_2_SET_ROUND_OFFSET UNITYSDK_OFFSET(0xAD59D40)
#define CLASS_1_0D8C9ED8919282E9_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAD59D70)

inline static constexpr unsigned int Class_1_0D8C9ED8919282E9_2_TypeDefinitionIndex = 76063;

class Class_1_0D8C9ED8919282E9_2 : public ::System::Object
{
public:
	::System::UInt32 _PassedLevelBefore_k__BackingField; // 0x10
	::System::Boolean _IsWin_k__BackingField; // 0x14
	::System::Boolean _IsBest_k__BackingField; // 0x15
	::System::UInt32 _FightID_k__BackingField; // 0x18
	::System::UInt32 _Round_k__BackingField; // 0x1C
	::System::UInt32 _Level_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_FightID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_GET_FIGHTID_OFFSET))(this);
	}

	::System::Void set_FightID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_SET_FIGHTID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsWin()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_GET_ISWIN_OFFSET))(this);
	}

	::System::Void set_IsWin(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_SET_ISWIN_OFFSET))(this, a1);
	}

	::System::UInt32 get_PassedLevelBefore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_GET_PASSEDLEVELBEFORE_OFFSET))(this);
	}

	::System::Void set_PassedLevelBefore(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_SET_PASSEDLEVELBEFORE_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_Round()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_GET_ROUND_OFFSET))(this);
	}

	::System::Void set_Round(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_SET_ROUND_OFFSET))(this, a1);
	}

	::System::Boolean get_IsBest()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_GET_ISBEST_OFFSET))(this);
	}

	::System::Void set_IsBest(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_2_SET_ISBEST_OFFSET))(this, a1);
	}
};
