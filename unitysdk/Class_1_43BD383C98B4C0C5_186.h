#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D4E2A0605A71F3AC_FadingDoneActionType.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingConsequenceClass.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingDistanceTier.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingImmediateFinishReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingInvalidReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingLowRejectedReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriority.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriorityModifierFlags.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingSchedulerState.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingSizeTier.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_8A6989C352B0F0F0;
class Class_1_E7175D70942CF05A;

#define CLASS_1_43BD383C98B4C0C5_186__CTOR_OFFSET UNITYSDK_OFFSET(0xAD54150)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_186_TypeDefinitionIndex = 70551;

class Class_1_43BD383C98B4C0C5_186 : public ::System::Object
{
public:
	::Class_1_8A6989C352B0F0F0* Field_1_0; // 0x10
	::Class_1_E7175D70942CF05A* Field_1_1; // 0x18
	::Class_1_303D5A33D1401D59* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x29
	::System::Boolean Field_1_5; // 0x2A
	::System::Boolean Field_1_6; // 0x2B
	::System::Boolean Field_1_7; // 0x2C
	::System::Boolean Field_1_8; // 0x2D
	::System::Int32 Field_1_9; // 0x30
	::RPG::Client::OpenWorld::FadingDistanceTier Field_1_10; // 0x34
	::RPG::Client::OpenWorld::FadingImmediateFinishReason Field_1_11; // 0x38
	::System::Int32 Field_1_12; // 0x3C
	::System::Int32 Field_1_13; // 0x40
	::RPG::Client::OpenWorld::FadingLowRejectedReason Field_1_14; // 0x44
	::RPG::Client::OpenWorld::FadingSizeTier Field_1_15; // 0x48
	::System::Int32 Field_1_16; // 0x4C
	::System::Int32 Field_1_17; // 0x50
	::System::Int32 Field_1_18; // 0x54
	::System::Boolean Field_1_19; // 0x58
	::System::Boolean Field_1_20; // 0x59
	::System::Boolean Field_1_21; // 0x5A
	::System::Boolean Field_1_22; // 0x5B
	::RPG::Client::OpenWorld::FadingPriority Field_1_23; // 0x5C
	::RPG::Client::OpenWorld::FadingInvalidReason Field_1_24; // 0x60
	::RPG::Client::OpenWorld::FadingPriority Field_1_25; // 0x64
	::System::Boolean Field_1_26; // 0x68
	::System::Boolean Field_1_27; // 0x69
	::System::Boolean Field_1_28; // 0x6A
	::RPG::Client::OpenWorld::FadingConsequenceClass Field_1_29; // 0x6C
	::System::Int32 Field_1_30; // 0x70
	::Class_1_D4E2A0605A71F3AC_FadingDoneActionType Field_1_31; // 0x74
	::System::Int32 Field_1_32; // 0x78
	::System::Int32 Field_1_33; // 0x7C
	::System::Int32 Field_1_34; // 0x80
	::System::Int32 Field_1_35; // 0x84
	::RPG::Client::OpenWorld::FadingPriority Field_1_36; // 0x88
	::RPG::Client::OpenWorld::FadingSchedulerState Field_1_37; // 0x8C
	::RPG::Client::OpenWorld::FadingPriorityModifierFlags Field_1_38; // 0x90
	::System::Int32 Field_1_39; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_186__CTOR_OFFSET))(this);
	}
};
