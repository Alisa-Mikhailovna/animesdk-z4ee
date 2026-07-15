#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_336;
namespace RPG::Client { class Map; }

#define RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xBC9C2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureMapTestInitParams_TypeDefinitionIndex = 58222;

	class AdventureMapTestInitParams : public ::System::Object
	{
	public:
		::RPG::Client::Map* Map; // 0x10
		::Class_0_16E4307DCC419505_336* DefaultEnvProfile; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
