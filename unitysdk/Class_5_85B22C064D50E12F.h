#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_D4571C3006E08EAC.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

class Class_1_BAF6F107F0961F34;

#define CLASS_5_85B22C064D50E12F_METHOD_5_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x144B6040)
#define CLASS_5_85B22C064D50E12F_METHOD_5_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x144B60E0)
#define CLASS_5_85B22C064D50E12F__CTOR_OFFSET UNITYSDK_OFFSET(0x144B60F0)

inline static constexpr unsigned int Class_5_85B22C064D50E12F_TypeDefinitionIndex = 73035;

class Class_5_85B22C064D50E12F : public ::Class_4_D4571C3006E08EAC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_85B22C064D50E12F__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_0AB718BEE9EA06D7(::Class_1_BAF6F107F0961F34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAF6F107F0961F34*))((::PBYTE)hIl2Cpp + CLASS_5_85B22C064D50E12F_METHOD_5_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_5_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_85B22C064D50E12F_METHOD_5_F48B6E9D83D3B226_OFFSET))(this);
	}
};
