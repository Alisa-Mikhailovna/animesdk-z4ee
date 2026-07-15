#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleTriggerPad.h"

#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0xD1D57A0)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xD1D5800)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xD1D58A0)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xD1D5850)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD__CTOR_OFFSET UNITYSDK_OFFSET(0xD1D58F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleNormalPad_TypeDefinitionIndex = 74789;

	class PadsPuzzleNormalPad : public ::RPG::Client::Prop::PadsPuzzleTriggerPad
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD__CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLERESET_OFFSET))(this);
		}
	};
}
