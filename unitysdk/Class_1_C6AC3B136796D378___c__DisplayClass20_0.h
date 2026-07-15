#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6AC3B136796D378;
class Class_2_46FD925988407D1E;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellWrapperMonoView; }

#define CLASS_1_C6AC3B136796D378___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x147D7EF0)
#define CLASS_1_C6AC3B136796D378___C__DISPLAYCLASS20_0___PLAYCELLAPPEARANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x147D7F00)

inline static constexpr unsigned int Class_1_C6AC3B136796D378___c__DisplayClass20_0_TypeDefinitionIndex = 74135;

class Class_1_C6AC3B136796D378___c__DisplayClass20_0 : public ::System::Object
{
public:
	::Class_2_46FD925988407D1E* cellEntity; // 0x10
	::Class_1_C6AC3B136796D378* __4__this; // 0x18
	::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* cellWrapperView; // 0x20
	::Class_2_46FD925988407D1E* sectionEntity; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6AC3B136796D378___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayCellAppearAnimation_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6AC3B136796D378___C__DISPLAYCLASS20_0___PLAYCELLAPPEARANIMATION_B__0_OFFSET))(this);
	}
};
