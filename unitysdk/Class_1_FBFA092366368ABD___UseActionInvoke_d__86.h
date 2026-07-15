#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_620;
class Class_1_FBFA092366368ABD;
namespace System { class Delegate; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1446DD30)
#define CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1446E990)
#define CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1446E920)
#define CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1446EA20)
#define CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1446E980)
#define CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1446E930)
#define CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1446DD20)
#define CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86__CTOR_OFFSET UNITYSDK_OFFSET(0x14466A40)

inline static constexpr unsigned int Class_1_FBFA092366368ABD___UseActionInvoke_d__86_TypeDefinitionIndex = 56916;

class Class_1_FBFA092366368ABD___UseActionInvoke_d__86 : public ::System::Object
{
public:
	::System::Delegate* action; // 0x10
	::System::Delegate* __3__action; // 0x18
	::Class_0_16E4307DCC419505_620* __3__actionEvent; // 0x20
	::Class_1_FBFA092366368ABD* __4__this; // 0x28
	::Class_0_16E4307DCC419505_620* actionEvent; // 0x30
	::System::Object* __2__current; // 0x38
	::System::String* _lastMethodName_5__2; // 0x40
	::System::Int32 __l__initialThreadId; // 0x48
	::System::Boolean _isLog_5__3; // 0x4C
	::System::Int32 __1__state; // 0x50

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBFA092366368ABD___USEACTIONINVOKE_D__86_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
