#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_D1002630455E15C8.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_6_7D221612275AA3EC_3_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x14CF9390)
#define CLASS_6_7D221612275AA3EC_3__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF93A0)

inline static constexpr unsigned int Class_6_7D221612275AA3EC_3_TypeDefinitionIndex = 73057;

class Class_6_7D221612275AA3EC_3 : public ::Class_5_D1002630455E15C8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_7D221612275AA3EC_3__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_6_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_7D221612275AA3EC_3_METHOD_6_F48B6E9D83D3B226_OFFSET))(this);
	}
};
