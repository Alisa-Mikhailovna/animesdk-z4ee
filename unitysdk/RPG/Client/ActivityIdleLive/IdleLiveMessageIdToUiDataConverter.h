#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageUiData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER_PRODUCEMESSAGEUIDATA_OFFSET UNITYSDK_OFFSET(0xBBB2BE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB2EC0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveMessageIdToUiDataConverter_TypeDefinitionIndex = 71764;

	class IdleLiveMessageIdToUiDataConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageUiData* ProduceMessageUiData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageUiData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER_PRODUCEMESSAGEUIDATA_OFFSET))(this, a1);
		}
	};
}
