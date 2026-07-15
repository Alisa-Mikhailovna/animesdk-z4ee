#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/NewSolverManager.h"

namespace RPG::Client::FullBody { class IKSolver; }

#define RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xC663E10)
#define RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xC663F60)
#define RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xC664060)
#define RPG_CLIENT_FULLBODY_NEWIK__CTOR_OFFSET UNITYSDK_OFFSET(0xC6641D0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int NewIK_TypeDefinitionIndex = 70874;

	class NewIK : public ::RPG::Client::FullBody::NewSolverManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_0B7E3489D2C0938B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_0B7E3489D2C0938B_OFFSET))(this);
		}

		::System::Void Method_6_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_6_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_4307B2A4B4A12C1A_OFFSET))(this);
		}
	};
}
