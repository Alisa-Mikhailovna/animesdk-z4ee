#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xBB62120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETFULLDESC_OFFSET UNITYSDK_OFFSET(0xBB61F40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB61920)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int AmphoreusTarotData_TypeDefinitionIndex = 71806;

	class AmphoreusTarotData : public ::System::Object
	{
	public:
		::System::String* SmallIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* AbilityName; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* AbilityParams; // 0x28
		::RPG::GameCore::GenderType GenderLimit; // 0x30
		::System::UInt32 TriggerChapterId; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 ID; // 0x48
		::System::UInt32 TriggerNodeId; // 0x4C
		::RPG::Client::TextID Desc; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA__CTOR_OFFSET))(this);
		}

		::System::String* GetFullDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETFULLDESC_OFFSET))(this);
		}

		::System::String* GetEffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETEFFECTDESC_OFFSET))(this);
		}
	};
}
