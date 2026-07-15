#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCHAPTERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC92B470)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCHAPTERCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC92B290)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCHAPTERCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC92B210)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewChapterControl_TypeDefinitionIndex = 75469;

	class LimaoNewsInterviewChapterControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Text* _Text; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCHAPTERCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCHAPTERCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCHAPTERCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
