#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_904;
namespace System { class Type; }

#define CLASS_1_EBBBB7C89E723B02_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xB967B80)
#define CLASS_1_EBBBB7C89E723B02__CTOR_OFFSET UNITYSDK_OFFSET(0xB967B70)

inline static constexpr unsigned int Class_1_EBBBB7C89E723B02_TypeDefinitionIndex = 70041;

class Class_1_EBBBB7C89E723B02 : public ::System::Object
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_904*>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::Class_0_16E4307DCC419505_904*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_904*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBBBB7C89E723B02__CTOR_OFFSET))(this, a1);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_EBBBB7C89E723B02_GETCONTEXT_OFFSET))(this, a1);
	}
};
