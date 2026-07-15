#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::PixAir { class PixAirPlaneStatusViewModel; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCFDEBB0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFDF110)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCFDDEF0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCFDDE10)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL__REFRESHDISPLAY_OFFSET UNITYSDK_OFFSET(0xCFDE970)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL__UPDATEHPBAR_OFFSET UNITYSDK_OFFSET(0xCFDEF80)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneStatusControl_TypeDefinitionIndex = 75218;

	class PixAirPlaneStatusControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Slider* _HPBar; // 0x38
		::UnityEngine::UI::Text* _TextHPInfo; // 0x40
		::UnityEngine::UI::Text* _TextShield; // 0x48
		::UnityEngine::UI::Text* _TextBurnCount; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _RefreshDisplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL__REFRESHDISPLAY_OFFSET))(this);
		}

		::System::Void _UpdateHPBar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL__UPDATEHPBAR_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirPlaneStatusViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirPlaneStatusViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
