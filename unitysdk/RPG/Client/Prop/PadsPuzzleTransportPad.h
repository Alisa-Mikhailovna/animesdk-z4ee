#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleTriggerPad.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0xD1D6840)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_METHOD_7_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0xD1D7060)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_METHOD_7_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xD1D6DD0)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xD1D6B30)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xD1D6D10)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xD1D6C50)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_TRIGGERTELEPORTEFFECT_OFFSET UNITYSDK_OFFSET(0xD1D2D60)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD__CTOR_OFFSET UNITYSDK_OFFSET(0xD1D7140)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleTransportPad_TypeDefinitionIndex = 74792;

	class PadsPuzzleTransportPad : public ::RPG::Client::Prop::PadsPuzzleTriggerPad
	{
	public:
		::RPG::Client::Prop::PadsPuzzleTransportPad* theOtherTransportPad; // 0x70
		::UnityEngine::GameObject* effect; // 0x78
		::System::Boolean alreadyTransported; // 0x80
		::UnityEngine::GameObject* Field_7_3; // 0x88
		::UnityEngine::Animator* Field_7_4; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD__CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLERESET_OFFSET))(this);
		}

		::System::Void TriggerTeleportEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_TRIGGERTELEPORTEFFECT_OFFSET))(this);
		}

		::System::Void Method_7_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_METHOD_7_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_7_0581090195E9C81F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_METHOD_7_0581090195E9C81F_OFFSET))(this);
		}
	};
}
