#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_D4572BEF5503DAB0_METHOD_1_256B6E165124982E_1_OFFSET UNITYSDK_OFFSET(0xB0D8DD0)
#define CLASS_1_D4572BEF5503DAB0_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0xB0D8D30)
#define CLASS_1_D4572BEF5503DAB0_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xB0D8BE0)
#define CLASS_1_D4572BEF5503DAB0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB0D8A30)
#define CLASS_1_D4572BEF5503DAB0_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xB0D8C60)
#define CLASS_1_D4572BEF5503DAB0_METHOD_1_61113270C4B9E4F4_OFFSET UNITYSDK_OFFSET(0xB0D8A70)
#define CLASS_1_D4572BEF5503DAB0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB0D8D90)
#define CLASS_1_D4572BEF5503DAB0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D8A20)

inline static constexpr unsigned int Class_1_D4572BEF5503DAB0_TypeDefinitionIndex = 57747;

class Class_1_D4572BEF5503DAB0 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10
	::RPG::GameCore::EvolveBuildSeason Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::EvolveBuildSeason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + CLASS_1_D4572BEF5503DAB0__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4572BEF5503DAB0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_61113270C4B9E4F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4572BEF5503DAB0_METHOD_1_61113270C4B9E4F4_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4572BEF5503DAB0_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D4572BEF5503DAB0_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4572BEF5503DAB0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D4572BEF5503DAB0_METHOD_1_256B6E165124982E_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4572BEF5503DAB0_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
