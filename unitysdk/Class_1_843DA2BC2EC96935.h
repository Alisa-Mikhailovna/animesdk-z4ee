#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2AB9BCA81E3BF60F;
class Class_1_44C728FE0F443B70;
class Class_1_5F51D4049EA87B7B;
class Class_1_D0AE2E76E734D5CA;

#define CLASS_1_843DA2BC2EC96935_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1456A230)
#define CLASS_1_843DA2BC2EC96935_METHOD_1_7DB49B5407C8FD68_1_OFFSET UNITYSDK_OFFSET(0x1456A360)
#define CLASS_1_843DA2BC2EC96935_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1456A280)
#define CLASS_1_843DA2BC2EC96935__CTOR_OFFSET UNITYSDK_OFFSET(0x1456A440)

inline static constexpr unsigned int Class_1_843DA2BC2EC96935_TypeDefinitionIndex = 54326;

class Class_1_843DA2BC2EC96935 : public ::System::Object
{
public:
	::Class_1_D0AE2E76E734D5CA* Field_1_0; // 0x10
	::Class_1_5F51D4049EA87B7B* Field_1_1; // 0x18
	::Class_1_44C728FE0F443B70* Field_1_2; // 0x20
	::Class_1_2AB9BCA81E3BF60F* Field_1_3; // 0x28
	::System::UInt64 Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x3C
	::System::Boolean Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DA2BC2EC96935__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DA2BC2EC96935_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DA2BC2EC96935_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843DA2BC2EC96935_METHOD_1_7DB49B5407C8FD68_1_OFFSET))(this);
	}
};
