#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

namespace RPG::Client { class SwordTrainingGameInstance; }
namespace System { class String; }

#define CLASS_2_367201AC24518DC1_METHOD_2_8E23425F959FF044_OFFSET UNITYSDK_OFFSET(0x14868140)
#define CLASS_2_367201AC24518DC1_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x14868630)
#define CLASS_2_367201AC24518DC1_METHOD_2_E72E7D79B56C15C6_OFFSET UNITYSDK_OFFSET(0x14868190)
#define CLASS_2_367201AC24518DC1__CTOR_OFFSET UNITYSDK_OFFSET(0x148686E0)

inline static constexpr unsigned int Class_2_367201AC24518DC1_TypeDefinitionIndex = 71442;

class Class_2_367201AC24518DC1 : public ::Class_1_D019640AABA5E1A8
{
public:
	// static const ::System::String* Field_2_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_367201AC24518DC1__CTOR_OFFSET))(this);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_8E23425F959FF044()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_367201AC24518DC1_METHOD_2_8E23425F959FF044_OFFSET))(this);
	}

	::System::Void Method_2_E72E7D79B56C15C6(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_367201AC24518DC1_METHOD_2_E72E7D79B56C15C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_367201AC24518DC1_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}
};
