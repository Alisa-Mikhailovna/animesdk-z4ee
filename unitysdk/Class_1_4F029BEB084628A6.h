#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_0C0F9366B7D3B580;
class Class_2_1DB6C02CA182EEBA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4F029BEB084628A6_METHOD_1_B0F004E224D50870_OFFSET UNITYSDK_OFFSET(0xAD15170)
#define CLASS_1_4F029BEB084628A6_METHOD_1_B3DA8F522141CDDE_OFFSET UNITYSDK_OFFSET(0xAD15790)
#define CLASS_1_4F029BEB084628A6_METHOD_1_C2CB26097A748429_OFFSET UNITYSDK_OFFSET(0xAD15540)
#define CLASS_1_4F029BEB084628A6__CTOR_OFFSET UNITYSDK_OFFSET(0xAD154B0)

inline static constexpr unsigned int Class_1_4F029BEB084628A6_TypeDefinitionIndex = 53562;

class Class_1_4F029BEB084628A6 : public ::System::Object
{
public:
	::Class_2_1DB6C02CA182EEBA* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_1_1; // 0x18
	::Enum_3_01618AD0437C8486_1 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_5; // 0x2C
	::System::UInt32 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F029BEB084628A6__CTOR_OFFSET))(this);
	}

	static ::Class_1_4F029BEB084628A6* Method_1_B0F004E224D50870(::Class_1_0C0F9366B7D3B580* a1)
	{
		return ((::Class_1_4F029BEB084628A6*(*)(::Class_1_0C0F9366B7D3B580*))((::PBYTE)hIl2Cpp + CLASS_1_4F029BEB084628A6_METHOD_1_B0F004E224D50870_OFFSET))(a1);
	}

	::Class_1_0C0F9366B7D3B580* Method_1_C2CB26097A748429()
	{
		return ((::Class_1_0C0F9366B7D3B580*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F029BEB084628A6_METHOD_1_C2CB26097A748429_OFFSET))(this);
	}

	::Class_1_4F029BEB084628A6* Method_1_B3DA8F522141CDDE()
	{
		return ((::Class_1_4F029BEB084628A6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F029BEB084628A6_METHOD_1_B3DA8F522141CDDE_OFFSET))(this);
	}
};
