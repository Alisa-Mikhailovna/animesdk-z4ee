#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_2_3682D2543E306C5D;
namespace RPG::Client { class PingPongModule_PingPongAddPointUIInfo; }
namespace RPG::Client { class PingPongModule_PingPongUIInfo; }

#define RPG_CLIENT_PINGPONGMODULE_GETADDPOINTUIINFO_OFFSET UNITYSDK_OFFSET(0xCF9E990)
#define RPG_CLIENT_PINGPONGMODULE_GETPINGPONGUIINFO_OFFSET UNITYSDK_OFFSET(0xCF9E930)
#define RPG_CLIENT_PINGPONGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCF9E800)
#define RPG_CLIENT_PINGPONGMODULE_REGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0xCF9E890)
#define RPG_CLIENT_PINGPONGMODULE_UNREGISTERGAMECONTROLLER_OFFSET UNITYSDK_OFFSET(0xCF9E8E0)
#define RPG_CLIENT_PINGPONGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCF9E9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_TypeDefinitionIndex = 63509;

	class PingPongModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::PingPongModule_PingPongAddPointUIInfo* _AddPointUIInfo; // 0x10
		::RPG::Client::PingPongModule_PingPongUIInfo* _UIInfo; // 0x18
		::Class_2_3682D2543E306C5D* _GameInstance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_INIT_OFFSET))(this);
		}

		::System::Void RegisterGameController(::Class_2_3682D2543E306C5D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3682D2543E306C5D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_REGISTERGAMECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void UnregisterGameController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_UNREGISTERGAMECONTROLLER_OFFSET))(this);
		}

		::RPG::Client::PingPongModule_PingPongUIInfo* GetPingPongUIInfo()
		{
			return ((::RPG::Client::PingPongModule_PingPongUIInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_GETPINGPONGUIINFO_OFFSET))(this);
		}

		::RPG::Client::PingPongModule_PingPongAddPointUIInfo* GetAddPointUIInfo()
		{
			return ((::RPG::Client::PingPongModule_PingPongAddPointUIInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_GETADDPOINTUIINFO_OFFSET))(this);
		}
	};
}
