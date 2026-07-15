#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTalkType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelTalkData; }

#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD106AA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBubbleData_TypeDefinitionIndex = 74323;

	class ChimeraDuelBubbleData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelTalkData* TalkData; // 0x10
		::System::Int32 UniqueID; // 0x18
		::System::Single Duration; // 0x1C
		::RPG::GameCore::ChimeraDuelTalkType TalkType; // 0x20
		::System::UInt32 ConfigID; // 0x24
		::RPG::GameCore::ChimeraDuelTeamType TeamType; // 0x28
		::System::Boolean IsEvilTalk; // 0x2C
		::System::Boolean IsFollowTimeScale; // 0x2D

		::System::Void _ctor(::RPG::Client::ChimeraDuelTalkData* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Single a4, ::RPG::GameCore::ChimeraDuelTeamType a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelTalkData*, ::System::UInt32, ::System::Int32, ::System::Single, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
