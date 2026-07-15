#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleStatusViewModel; }

#define CLASS_1_843465A2073CCD8F_COMPARE_OFFSET UNITYSDK_OFFSET(0x11973F40)
#define CLASS_1_843465A2073CCD8F__CCTOR_OFFSET UNITYSDK_OFFSET(0x11974110)
#define CLASS_1_843465A2073CCD8F__CTOR_OFFSET UNITYSDK_OFFSET(0x11974100)

inline static constexpr unsigned int Class_1_843465A2073CCD8F_TypeDefinitionIndex = 76031;

class Class_1_843465A2073CCD8F : public ::System::Object
{
public:
	static ::Class_1_843465A2073CCD8F** StaticGet_Field_1_0()
	{
		return (::Class_1_843465A2073CCD8F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_843465A2073CCD8F_TypeDefinitionIndex)->GetStaticField(0x5540);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843465A2073CCD8F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_843465A2073CCD8F__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_843465A2073CCD8F_COMPARE_OFFSET))(this, a1, a2);
	}
};
