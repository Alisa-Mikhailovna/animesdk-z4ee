#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4A1FC46BD5076D6F.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_A77508CD926F7CFA_1_METHOD_3_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xCDBF0A0)
#define CLASS_3_A77508CD926F7CFA_1_METHOD_3_314529EC8BCA8BB3_OFFSET UNITYSDK_OFFSET(0xCDBEEF0)
#define CLASS_3_A77508CD926F7CFA_1_METHOD_3_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0xCDBEF60)
#define CLASS_3_A77508CD926F7CFA_1_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0xCDBF1D0)
#define CLASS_3_A77508CD926F7CFA_1__CTOR_OFFSET UNITYSDK_OFFSET(0xCDBF220)

inline static constexpr unsigned int Class_3_A77508CD926F7CFA_1_TypeDefinitionIndex = 73095;

class Class_3_A77508CD926F7CFA_1 : public ::Class_2_4A1FC46BD5076D6F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A77508CD926F7CFA_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_314529EC8BCA8BB3(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_A77508CD926F7CFA_1_METHOD_3_314529EC8BCA8BB3_OFFSET))(this, a1);
	}

	::System::Void Method_3_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A77508CD926F7CFA_1_METHOD_3_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void Method_3_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A77508CD926F7CFA_1_METHOD_3_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A77508CD926F7CFA_1_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
