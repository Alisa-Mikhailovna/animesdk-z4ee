#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_7BAB19742BC77DDC_METHOD_2_548CC421CE51729C_OFFSET UNITYSDK_OFFSET(0x14496C50)
#define CLASS_2_7BAB19742BC77DDC_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x14496B80)
#define CLASS_2_7BAB19742BC77DDC__CTOR_OFFSET UNITYSDK_OFFSET(0x14496D30)

inline static constexpr unsigned int Class_2_7BAB19742BC77DDC_TypeDefinitionIndex = 73158;

class Class_2_7BAB19742BC77DDC : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BAB19742BC77DDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BAB19742BC77DDC_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_548CC421CE51729C(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7BAB19742BC77DDC_METHOD_2_548CC421CE51729C_OFFSET))(this, a1);
	}
};
