#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FormationData; }
namespace System { class String; }

#define CLASS_1_7B1192E630B791F8_METHOD_1_6E674C2018642F21_OFFSET UNITYSDK_OFFSET(0x14A076A0)
#define CLASS_1_7B1192E630B791F8_METHOD_1_B1F221756A23BBFE_OFFSET UNITYSDK_OFFSET(0x14A07650)
#define CLASS_1_7B1192E630B791F8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14A077D0)
#define CLASS_1_7B1192E630B791F8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14A07640)
#define CLASS_1_7B1192E630B791F8__CTOR_OFFSET UNITYSDK_OFFSET(0x14A075E0)

inline static constexpr unsigned int Class_1_7B1192E630B791F8_TypeDefinitionIndex = 53984;

class Class_1_7B1192E630B791F8 : public ::System::Object
{
public:
	::RPG::GameCore::FormationData* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7B1192E630B791F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::FormationData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FormationData*))((::PBYTE)hIl2Cpp + CLASS_1_7B1192E630B791F8__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1F221756A23BBFE(::RPG::GameCore::FormationData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FormationData*))((::PBYTE)hIl2Cpp + CLASS_1_7B1192E630B791F8_METHOD_1_B1F221756A23BBFE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FormationData* Method_1_6E674C2018642F21()
	{
		return ((::RPG::GameCore::FormationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B1192E630B791F8_METHOD_1_6E674C2018642F21_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B1192E630B791F8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
