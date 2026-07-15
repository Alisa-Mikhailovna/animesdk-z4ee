#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace System { class Object; }

#define CLASS_2_1D0888257A803214_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15222120)
#define CLASS_2_1D0888257A803214_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x15222240)
#define CLASS_2_1D0888257A803214_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x152230F0)
#define CLASS_2_1D0888257A803214__CTOR_OFFSET UNITYSDK_OFFSET(0x152220B0)

inline static constexpr unsigned int Class_2_1D0888257A803214_TypeDefinitionIndex = 54991;

class Class_2_1D0888257A803214 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D0888257A803214__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D0888257A803214_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1D0888257A803214_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D0888257A803214_RESETTODEFAULT_OFFSET))(this);
	}
};
