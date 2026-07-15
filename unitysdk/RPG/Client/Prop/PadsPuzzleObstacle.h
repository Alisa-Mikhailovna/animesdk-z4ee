#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzlePadBase.h"

#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_INITSTATE_OFFSET UNITYSDK_OFFSET(0xD1D5900)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xD1D5A20)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xD1D5BA0)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xD1D5A70)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD1D5C50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleObstacle_TypeDefinitionIndex = 74790;

	class PadsPuzzleObstacle : public ::RPG::Client::Prop::PadsPuzzlePadBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE__CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLERESET_OFFSET))(this);
		}
	};
}
