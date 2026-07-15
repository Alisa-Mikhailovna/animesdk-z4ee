#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_408;
class Class_0_16E4307DCC419505_410;
class Class_0_16E4307DCC419505_413;
class Class_1_C85C4DAB350DD5FC_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_DBE82A6B0A6E1344_GET_SKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xB0A0070)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_06934619F4D05213_OFFSET UNITYSDK_OFFSET(0xB0A0570)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0xB0A04E0)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_4CA8B5F8462FA46F_OFFSET UNITYSDK_OFFSET(0xB0A0BC0)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_E5D433C7A574E387_OFFSET UNITYSDK_OFFSET(0xB0A03C0)
#define CLASS_1_DBE82A6B0A6E1344_SET_SKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xB0A0080)
#define CLASS_1_DBE82A6B0A6E1344__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A0090)

inline static constexpr unsigned int Class_1_DBE82A6B0A6E1344_TypeDefinitionIndex = 49575;

class Class_1_DBE82A6B0A6E1344 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_413* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_408* _SkillRowDataProvider_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C85C4DAB350DD5FC_1*>* Field_1_2; // 0x20
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_410*>* Field_1_3; // 0x28

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::Class_0_16E4307DCC419505_413* a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_410*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::Class_0_16E4307DCC419505_413*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_410*>*))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_408* get_SkillRowDataProvider()
	{
		return ((::Class_0_16E4307DCC419505_408*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_GET_SKILLROWDATAPROVIDER_OFFSET))(this);
	}

	::System::Void set_SkillRowDataProvider(::Class_0_16E4307DCC419505_408* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_408*))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_SET_SKILLROWDATAPROVIDER_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_METHOD_1_389486378BEF2498_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_06934619F4D05213(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_METHOD_1_06934619F4D05213_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Method_1_4CA8B5F8462FA46F()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_METHOD_1_4CA8B5F8462FA46F_OFFSET))(this);
	}

	::System::Void Method_1_E5D433C7A574E387(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_METHOD_1_E5D433C7A574E387_OFFSET))(this, a1);
	}
};
