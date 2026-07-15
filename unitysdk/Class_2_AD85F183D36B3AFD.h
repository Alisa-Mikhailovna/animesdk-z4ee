#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/Class_2_AD85F183D36B3AFD_OverrideAspect.h"
#include "unitysdk/Class_2_AD85F183D36B3AFD_Struct_2_81071DD54CCF8EE9.h"
#include "unitysdk/Class_2_AD85F183D36B3AFD_Struct_2_A5FF422FCBA8618D.h"
#include "unitysdk/RPG/Client/OpenWorld/ItemOverrideReason.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceNotifyType.h"
#include "unitysdk/Struct_2_5674E7B417F2830A_1.h"

class Class_1_303D5A33D1401D59;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_AD85F183D36B3AFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD5E350)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xBD5E500)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_1CB1FB01B77423C6_OFFSET UNITYSDK_OFFSET(0xBD5D8F0)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_2BCCE168DA1FAC42_OFFSET UNITYSDK_OFFSET(0xBD5E9C0)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_396F2E6BD61E3D00_1_OFFSET UNITYSDK_OFFSET(0xBD5DD40)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_396F2E6BD61E3D00_OFFSET UNITYSDK_OFFSET(0xBD5DAB0)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_52A04EBF0FB72D33_OFFSET UNITYSDK_OFFSET(0xBD5DEF0)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_53FE75B00F3A21BF_OFFSET UNITYSDK_OFFSET(0xBD5D720)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_560693EFE7F5BA5D_OFFSET UNITYSDK_OFFSET(0xBD5F470)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_67EB166EF77791C4_OFFSET UNITYSDK_OFFSET(0xBD5F270)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_790DDEEF1C122D0D_OFFSET UNITYSDK_OFFSET(0xBD5F7D0)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_881CCFB5CB7FF9E8_OFFSET UNITYSDK_OFFSET(0xBD5EFF0)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_88FFF532E2266BDE_OFFSET UNITYSDK_OFFSET(0xBD5F0F0)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_8C02FB03C92D3BED_OFFSET UNITYSDK_OFFSET(0xBD5F540)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_A0AEF771E76B9F34_OFFSET UNITYSDK_OFFSET(0xBD5E830)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_A274A315FD041DD6_OFFSET UNITYSDK_OFFSET(0xBD5D4B0)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_A81567E48F82AE03_OFFSET UNITYSDK_OFFSET(0xBD5DDB0)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_ADABAFFB7E6CDBE9_OFFSET UNITYSDK_OFFSET(0xBD5EA70)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_B58F780F91D6F128_OFFSET UNITYSDK_OFFSET(0xBD5DB20)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_C2B03D0BAC58142C_OFFSET UNITYSDK_OFFSET(0xBD5E190)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_D47C8E435CD3708C_OFFSET UNITYSDK_OFFSET(0xBD5F890)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_DA27513043B27FD7_OFFSET UNITYSDK_OFFSET(0xBD5E080)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_E0FE6023AC32F0D5_OFFSET UNITYSDK_OFFSET(0xBD5E710)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_E6184566299DAB0F_OFFSET UNITYSDK_OFFSET(0xBD5E300)
#define CLASS_2_AD85F183D36B3AFD_METHOD_2_F815A7DF75FA4391_OFFSET UNITYSDK_OFFSET(0xBD5EC50)
#define CLASS_2_AD85F183D36B3AFD__CTOR_OFFSET UNITYSDK_OFFSET(0xBD5D180)

inline static constexpr unsigned int Class_2_AD85F183D36B3AFD_TypeDefinitionIndex = 70432;

class Class_2_AD85F183D36B3AFD : public ::Class_1_7256E7A2FB36A46D
{
public:
	// static const ::System::Int32 Field_2_0 = 0x3; // 0x0
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_2_AD85F183D36B3AFD_Struct_2_81071DD54CCF8EE9>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_3; // 0x28
	::System::Action_4<::Class_1_8A6989C352B0F0F0*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType>* Field_2_4; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::Class_2_AD85F183D36B3AFD_Struct_2_A5FF422FCBA8618D>* Field_2_6; // 0x40
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_2_7; // 0x48
	::System::Int32 Field_2_8; // 0x50

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_5674E7B417F2830A_1 Method_2_A274A315FD041DD6(::UnityEngine::GameObject* a1)
	{
		return ((::Struct_2_5674E7B417F2830A_1(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_A274A315FD041DD6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_396F2E6BD61E3D00(::Struct_2_5674E7B417F2830A_1 a1, ::RPG::Client::OpenWorld::ItemOverrideReason a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A_1, ::RPG::Client::OpenWorld::ItemOverrideReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_396F2E6BD61E3D00_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_396F2E6BD61E3D00_1(::Struct_2_5674E7B417F2830A_1 a1, ::RPG::Client::OpenWorld::ItemOverrideReason a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A_1, ::RPG::Client::OpenWorld::ItemOverrideReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_396F2E6BD61E3D00_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_B58F780F91D6F128(::Struct_2_5674E7B417F2830A_1 a1, ::RPG::Client::OpenWorld::ItemOverrideReason a2, ::System::Boolean a3, ::Class_2_AD85F183D36B3AFD_OverrideAspect a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A_1, ::RPG::Client::OpenWorld::ItemOverrideReason, ::System::Boolean, ::Class_2_AD85F183D36B3AFD_OverrideAspect))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_B58F780F91D6F128_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_C2B03D0BAC58142C(::Struct_2_5674E7B417F2830A_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A_1))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_C2B03D0BAC58142C_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_A81567E48F82AE03(::Struct_2_5674E7B417F2830A_1 a1, ::Class_2_AD85F183D36B3AFD_Struct_2_A5FF422FCBA8618D& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A_1, ::Class_2_AD85F183D36B3AFD_Struct_2_A5FF422FCBA8618D&))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_A81567E48F82AE03_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_2_E6184566299DAB0F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_E6184566299DAB0F_OFFSET))(a1);
	}

	::System::Void Method_2_53FE75B00F3A21BF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_53FE75B00F3A21BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0FE6023AC32F0D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_E0FE6023AC32F0D5_OFFSET))(this);
	}

	::System::Void Method_2_A0AEF771E76B9F34(::Class_1_8A6989C352B0F0F0* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_A0AEF771E76B9F34_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F815A7DF75FA4391(::Class_1_8A6989C352B0F0F0* a1, ::Class_1_303D5A33D1401D59* a2, ::UnityEngine::GameObject* a3, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_F815A7DF75FA4391_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2BCCE168DA1FAC42(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_2BCCE168DA1FAC42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_881CCFB5CB7FF9E8(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_881CCFB5CB7FF9E8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1CB1FB01B77423C6(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*&))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_1CB1FB01B77423C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_88FFF532E2266BDE(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_88FFF532E2266BDE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52A04EBF0FB72D33(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_2_AD85F183D36B3AFD_Struct_2_81071DD54CCF8EE9 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_2_AD85F183D36B3AFD_Struct_2_81071DD54CCF8EE9))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_52A04EBF0FB72D33_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ADABAFFB7E6CDBE9(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_ADABAFFB7E6CDBE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_8C02FB03C92D3BED(::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_8C02FB03C92D3BED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_790DDEEF1C122D0D(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_2_AD85F183D36B3AFD_OverrideAspect a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_2_AD85F183D36B3AFD_OverrideAspect))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_790DDEEF1C122D0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DA27513043B27FD7(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_2_AD85F183D36B3AFD_OverrideAspect a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_2_AD85F183D36B3AFD_OverrideAspect, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_DA27513043B27FD7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_560693EFE7F5BA5D(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_560693EFE7F5BA5D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D47C8E435CD3708C(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_D47C8E435CD3708C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_67EB166EF77791C4(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_METHOD_2_67EB166EF77791C4_OFFSET))(this, a1, a2, a3);
	}
};
