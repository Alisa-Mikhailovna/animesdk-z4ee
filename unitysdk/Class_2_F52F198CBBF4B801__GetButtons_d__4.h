#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1059;
class Class_2_F52F198CBBF4B801;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB68AF10)
#define CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB68B060)
#define CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB68AFF0)
#define CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB68B0D0)
#define CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB68B050)
#define CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB68B000)
#define CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB68AF00)
#define CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0xB68A1F0)

inline static constexpr unsigned int Class_2_F52F198CBBF4B801__GetButtons_d__4_TypeDefinitionIndex = 68714;

class Class_2_F52F198CBBF4B801__GetButtons_d__4 : public ::System::Object
{
public:
	::Class_2_F52F198CBBF4B801* __4__this; // 0x10
	::Class_0_16E4307DCC419505_1059* __2__current; // 0x18
	::RPG::Client::UISkillIndex __3__uiSkillIndex; // 0x20
	::System::Int32 __l__initialThreadId; // 0x24
	::System::Int32 __1__state; // 0x28
	::RPG::Client::UISkillIndex uiSkillIndex; // 0x2C
	::System::Boolean ignoreIsShow; // 0x30
	::System::Boolean __3__ignoreIsShow; // 0x31

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_MOVENEXT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1059* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillButton__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_1059*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLBUTTON__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_1059*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillButton__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_1059*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLBUTTON__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52F198CBBF4B801__GETBUTTONS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
