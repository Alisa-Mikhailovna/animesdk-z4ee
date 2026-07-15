#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_342C8260013D3499;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_9D50CD865666B27C_METHOD_3_D0B0E8495E8A13B8_OFFSET UNITYSDK_OFFSET(0x14860A90)
#define CLASS_3_9D50CD865666B27C_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x14861030)
#define CLASS_3_9D50CD865666B27C_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x14860B20)
#define CLASS_3_9D50CD865666B27C_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x14860BB0)
#define CLASS_3_9D50CD865666B27C__CTOR_OFFSET UNITYSDK_OFFSET(0x14861080)

inline static constexpr unsigned int Class_3_9D50CD865666B27C_TypeDefinitionIndex = 62924;

class Class_3_9D50CD865666B27C : public ::Class_2_980BB27C20DEC196
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	// static const ::System::Single Field_3_1; // 0x0
	::Class_1_342C8260013D3499* Field_3_2; // 0x28
	::RPG::Client::LittleGame::Match3::OpponentRole Field_3_3; // 0x30
	::UnityEngine::Vector2 Field_3_4; // 0x34
	::System::UInt32 Field_3_5; // 0x3C
	::System::Boolean Field_3_6; // 0x40
	::System::Boolean Field_3_7; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D50CD865666B27C__CTOR_OFFSET))(this);
	}

	static ::Class_3_9D50CD865666B27C* Method_3_D0B0E8495E8A13B8(::RPG::Client::MatchThreeBoard* a1, ::Class_1_342C8260013D3499* a2)
	{
		return ((::Class_3_9D50CD865666B27C*(*)(::RPG::Client::MatchThreeBoard*, ::Class_1_342C8260013D3499*))((::PBYTE)hIl2Cpp + CLASS_3_9D50CD865666B27C_METHOD_3_D0B0E8495E8A13B8_OFFSET))(a1, a2);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D50CD865666B27C_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D50CD865666B27C_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D50CD865666B27C_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
