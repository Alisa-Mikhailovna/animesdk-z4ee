#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"

class Class_1_7FF19F6206AF6DD7_13;
class Class_1_DB550A66A78E02FD;
namespace Proto { class ItemList; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_B654C9D1B5DDEC27_ADD_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xB994060)
#define CLASS_2_B654C9D1B5DDEC27_ADD_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xB993E00)
#define CLASS_2_B654C9D1B5DDEC27_ADD_ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0xB993BA0)
#define CLASS_2_B654C9D1B5DDEC27_METHOD_2_3EF33FD8BF224359_1_OFFSET UNITYSDK_OFFSET(0xB993EC0)
#define CLASS_2_B654C9D1B5DDEC27_METHOD_2_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0xB993C60)
#define CLASS_2_B654C9D1B5DDEC27_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xB993A60)
#define CLASS_2_B654C9D1B5DDEC27_REMOVE_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xB9940C0)
#define CLASS_2_B654C9D1B5DDEC27_REMOVE_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xB993E60)
#define CLASS_2_B654C9D1B5DDEC27_REMOVE_ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0xB993C00)
#define CLASS_2_B654C9D1B5DDEC27__CTOR_OFFSET UNITYSDK_OFFSET(0xB993A50)
#define CLASS_2_B654C9D1B5DDEC27__REQUESTGETDATA_B__3_0_OFFSET UNITYSDK_OFFSET(0xB994120)

inline static constexpr unsigned int Class_2_B654C9D1B5DDEC27_TypeDefinitionIndex = 58660;

class Class_2_B654C9D1B5DDEC27 : public ::Class_1_5E4ED920015DC82D
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x265D; // 0x0
	// static const ::System::UInt16 Field_2_1 = 0x2661; // 0x0
	// static const ::System::UInt16 Field_2_2 = 0x2662; // 0x0
	::Class_1_DB550A66A78E02FD* Field_2_3; // 0x20
	::System::Action_1<::System::Int32>* OnDrawFinished; // 0x28
	::System::Action* OnGetDataFinished; // 0x30
	::System::Action_2<::System::Int32, ::Proto::ItemList*>* OnClaimRewardFinished; // 0x38

	::System::Void _ctor(::Class_1_DB550A66A78E02FD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB550A66A78E02FD*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void add_OnGetDataFinished(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_ADD_ONGETDATAFINISHED_OFFSET))(this, a1);
	}

	::System::Void remove_OnGetDataFinished(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_REMOVE_ONGETDATAFINISHED_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_METHOD_2_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Void add_OnDrawFinished(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_ADD_ONDRAWFINISHED_OFFSET))(this, a1);
	}

	::System::Void remove_OnDrawFinished(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_REMOVE_ONDRAWFINISHED_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EF33FD8BF224359_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_METHOD_2_3EF33FD8BF224359_1_OFFSET))(this, a1);
	}

	::System::Void add_OnClaimRewardFinished(::System::Action_2<::System::Int32, ::Proto::ItemList*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_ADD_ONCLAIMREWARDFINISHED_OFFSET))(this, a1);
	}

	::System::Void remove_OnClaimRewardFinished(::System::Action_2<::System::Int32, ::Proto::ItemList*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27_REMOVE_ONCLAIMREWARDFINISHED_OFFSET))(this, a1);
	}

	::System::Void _RequestGetData_b__3_0(::Class_1_7FF19F6206AF6DD7_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_13*))((::PBYTE)hIl2Cpp + CLASS_2_B654C9D1B5DDEC27__REQUESTGETDATA_B__3_0_OFFSET))(this, a1);
	}
};
