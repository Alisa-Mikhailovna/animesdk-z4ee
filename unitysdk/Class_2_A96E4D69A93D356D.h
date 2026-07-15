#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_A96E4D69A93D356D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB0FEDA0)
#define CLASS_2_A96E4D69A93D356D_METHOD_2_98424AF87B0C53FF_OFFSET UNITYSDK_OFFSET(0xB0FEDF0)
#define CLASS_2_A96E4D69A93D356D__CTOR_OFFSET UNITYSDK_OFFSET(0xB0FEF50)

inline static constexpr unsigned int Class_2_A96E4D69A93D356D_TypeDefinitionIndex = 73149;

class Class_2_A96E4D69A93D356D : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96E4D69A93D356D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96E4D69A93D356D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_98424AF87B0C53FF(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A96E4D69A93D356D_METHOD_2_98424AF87B0C53FF_OFFSET))(this, a1);
	}
};
