#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_10F56A639581CEB1_7;
class Class_1_10F56A639581CEB1_8;
class Class_1_333B902B2174BECA_3;
class Class_1_D17272E82AE804C2_209;
class Class_1_D17272E82AE804C2_210;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_284C37A401CEA586_GET_ADJUSTCOUNT_OFFSET UNITYSDK_OFFSET(0xB011AE0)
#define CLASS_1_284C37A401CEA586_GET_BUSINESSTIME_OFFSET UNITYSDK_OFFSET(0xB011B20)
#define CLASS_1_284C37A401CEA586_GET_FEVERCNTTODAY_OFFSET UNITYSDK_OFFSET(0xB011AC0)
#define CLASS_1_284C37A401CEA586_GET_FEVER_OFFSET UNITYSDK_OFFSET(0xB011B40)
#define CLASS_1_284C37A401CEA586_GET_HAPPYPROGRESS_OFFSET UNITYSDK_OFFSET(0xB011AA0)
#define CLASS_1_284C37A401CEA586_GET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0xB011B00)
#define CLASS_1_284C37A401CEA586_METHOD_1_0D95214C1FCF51C2_OFFSET UNITYSDK_OFFSET(0xB0105C0)
#define CLASS_1_284C37A401CEA586_METHOD_1_125D74FE4581932B_OFFSET UNITYSDK_OFFSET(0xB011310)
#define CLASS_1_284C37A401CEA586_METHOD_1_4208FFAB895D1B53_OFFSET UNITYSDK_OFFSET(0xB010B30)
#define CLASS_1_284C37A401CEA586_METHOD_1_6B1CB6DCE3FD42B9_OFFSET UNITYSDK_OFFSET(0xB0119F0)
#define CLASS_1_284C37A401CEA586_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xB011A50)
#define CLASS_1_284C37A401CEA586_METHOD_1_8445B418B6EDF422_OFFSET UNITYSDK_OFFSET(0xB0116F0)
#define CLASS_1_284C37A401CEA586_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xB010350)
#define CLASS_1_284C37A401CEA586_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB010540)
#define CLASS_1_284C37A401CEA586_METHOD_1_98B9F7939DBB6FBD_OFFSET UNITYSDK_OFFSET(0xB010780)
#define CLASS_1_284C37A401CEA586_METHOD_1_B8319ACF63A51404_OFFSET UNITYSDK_OFFSET(0xB010CD0)
#define CLASS_1_284C37A401CEA586_METHOD_1_C401240752BDEFA5_OFFSET UNITYSDK_OFFSET(0xB011840)
#define CLASS_1_284C37A401CEA586_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB0119B0)
#define CLASS_1_284C37A401CEA586_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB011970)
#define CLASS_1_284C37A401CEA586_SET_ADJUSTCOUNT_OFFSET UNITYSDK_OFFSET(0xB011AF0)
#define CLASS_1_284C37A401CEA586_SET_BUSINESSTIME_OFFSET UNITYSDK_OFFSET(0xB011B30)
#define CLASS_1_284C37A401CEA586_SET_FEVERCNTTODAY_OFFSET UNITYSDK_OFFSET(0xB011AD0)
#define CLASS_1_284C37A401CEA586_SET_FEVER_OFFSET UNITYSDK_OFFSET(0xB011B50)
#define CLASS_1_284C37A401CEA586_SET_HAPPYPROGRESS_OFFSET UNITYSDK_OFFSET(0xB011AB0)
#define CLASS_1_284C37A401CEA586_SET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0xB011B10)
#define CLASS_1_284C37A401CEA586__CTOR_OFFSET UNITYSDK_OFFSET(0xB011B60)

inline static constexpr unsigned int Class_1_284C37A401CEA586_TypeDefinitionIndex = 73780;

class Class_1_284C37A401CEA586 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_10F56A639581CEB1_8*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_210*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_209*>* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_10F56A639581CEB1_7*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_333B902B2174BECA_3*>* Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x40
	::System::UInt32 _AdjustCount_k__BackingField; // 0x44
	::System::Single Field_1_8; // 0x48
	::System::UInt32 _PlayTime_k__BackingField; // 0x4C
	::System::UInt32 _FeverCntToday_k__BackingField; // 0x50
	::System::Boolean Field_1_11; // 0x54
	::System::Boolean Field_1_12; // 0x55
	::System::Double _HappyProgress_k__BackingField; // 0x58
	::System::UInt32 _BusinessTime_k__BackingField; // 0x60
	::System::UInt32 _Fever_k__BackingField; // 0x64
	::System::Single Field_1_16; // 0x68
	::System::Single Field_1_17; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_0D95214C1FCF51C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_0D95214C1FCF51C2_OFFSET))(this);
	}

	::System::Void Method_1_98B9F7939DBB6FBD(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_98B9F7939DBB6FBD_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_4208FFAB895D1B53(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_4208FFAB895D1B53_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8319ACF63A51404(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_B8319ACF63A51404_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_125D74FE4581932B(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_125D74FE4581932B_OFFSET))(this, a1);
	}

	::System::Void Method_1_8445B418B6EDF422(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_8445B418B6EDF422_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C401240752BDEFA5(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_C401240752BDEFA5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_6B1CB6DCE3FD42B9(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_6B1CB6DCE3FD42B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Double get_HappyProgress()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_GET_HAPPYPROGRESS_OFFSET))(this);
	}

	::System::Void set_HappyProgress(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_SET_HAPPYPROGRESS_OFFSET))(this, a1);
	}

	::System::UInt32 get_FeverCntToday()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_GET_FEVERCNTTODAY_OFFSET))(this);
	}

	::System::Void set_FeverCntToday(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_SET_FEVERCNTTODAY_OFFSET))(this, a1);
	}

	::System::UInt32 get_AdjustCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_GET_ADJUSTCOUNT_OFFSET))(this);
	}

	::System::Void set_AdjustCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_SET_ADJUSTCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_PlayTime()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_GET_PLAYTIME_OFFSET))(this);
	}

	::System::Void set_PlayTime(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_SET_PLAYTIME_OFFSET))(this, a1);
	}

	::System::UInt32 get_BusinessTime()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_GET_BUSINESSTIME_OFFSET))(this);
	}

	::System::Void set_BusinessTime(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_SET_BUSINESSTIME_OFFSET))(this, a1);
	}

	::System::UInt32 get_Fever()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_GET_FEVER_OFFSET))(this);
	}

	::System::Void set_Fever(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_284C37A401CEA586_SET_FEVER_OFFSET))(this, a1);
	}
};
