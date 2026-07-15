#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/VersusBarEffectType.h"
#include "unitysdk/RPG/GameCore/VersusBarReasonTipType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8279BFFA57BC2D0E__CTOR_OFFSET UNITYSDK_OFFSET(0x14C0BB70)

inline static constexpr unsigned int Class_1_8279BFFA57BC2D0E_TypeDefinitionIndex = 53075;

class Class_1_8279BFFA57BC2D0E : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Nullable_1<::System::Boolean> Field_1_3; // 0x21
	::System::Nullable_1<::System::Boolean> Field_1_4; // 0x23
	::RPG::GameCore::VersusBarEffectType Field_1_5; // 0x28
	::RPG::GameCore::VersusBarReasonTipType Field_1_6; // 0x2C
	::RPG::Client::TextID Field_1_7; // 0x30
	::RPG::GameCore::FixPoint Field_1_8; // 0x40
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_1_9; // 0x48
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_1_10; // 0x58
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_1_11; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8279BFFA57BC2D0E__CTOR_OFFSET))(this);
	}
};
