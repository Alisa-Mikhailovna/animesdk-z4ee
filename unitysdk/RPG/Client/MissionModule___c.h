#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_MISSIONMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC097E0)
#define RPG_CLIENT_MISSIONMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCC09810)
#define RPG_CLIENT_MISSIONMODULE___C___INITFUNCENTRYMISSIONANDSUBMISSION_B__126_0_OFFSET UNITYSDK_OFFSET(0xCC09890)
#define RPG_CLIENT_MISSIONMODULE___C___INITUNLOCKDATAMAINMISSIONANDSUBMISSION_B__123_0_OFFSET UNITYSDK_OFFSET(0xCC09820)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c_TypeDefinitionIndex = 63207;

	class MissionModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__123_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MissionModule___c_TypeDefinitionIndex)->GetStaticField(0x526B0);
		}
		static ::System::Action** StaticGet___9__126_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MissionModule___c_TypeDefinitionIndex)->GetStaticField(0x526B8);
		}
		static ::RPG::Client::MissionModule___c** StaticGet___9()
		{
			return (::RPG::Client::MissionModule___c**)Il2CppClass::FromTypeDefinitionIndex(MissionModule___c_TypeDefinitionIndex)->GetStaticField(0x526C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __InitUnlockDataMainMissionAndSubMission_b__123_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C___INITUNLOCKDATAMAINMISSIONANDSUBMISSION_B__123_0_OFFSET))(this);
		}

		::System::Void __InitFuncEntryMissionAndSubMission_b__126_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C___INITFUNCENTRYMISSIONANDSUBMISSION_B__126_0_OFFSET))(this);
		}
	};
}
