#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED08D5C0F3E4BD73_EStationOpenState.h"
#include "unitysdk/Class_1_EE60750735AAF463_Struct_2_0EC4DCF5C3BC3D80.h"
#include "unitysdk/RPG/Client/Subway/EAirshipSubwayState.h"
#include "unitysdk/Struct_2_4402F405B21E2F67.h"
#include "unitysdk/SubwayScheduleData_SubwayMemberAnimWeightConfig.h"
#include "unitysdk/SubwayScheduleData_SubwayMemberTypeWeightConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_1CC5A5764D87DC25;
class SubwayScheduleData;
namespace RPG::Client::Subway { class AirlineSubwayWay; }
namespace RPG::Client::Subway { class AirshipSubway; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_EE60750735AAF463_CLEAR_OFFSET UNITYSDK_OFFSET(0x14C64130)
#define CLASS_1_EE60750735AAF463_METHOD_1_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x14C65BE0)
#define CLASS_1_EE60750735AAF463_METHOD_1_0A5CC2B5F8A75E93_OFFSET UNITYSDK_OFFSET(0x14C66A20)
#define CLASS_1_EE60750735AAF463_METHOD_1_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x14C642D0)
#define CLASS_1_EE60750735AAF463_METHOD_1_2B1380CB28524A16_OFFSET UNITYSDK_OFFSET(0x14C654E0)
#define CLASS_1_EE60750735AAF463_METHOD_1_3060617FE14209CC_OFFSET UNITYSDK_OFFSET(0x14C666B0)
#define CLASS_1_EE60750735AAF463_METHOD_1_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x14C655F0)
#define CLASS_1_EE60750735AAF463_METHOD_1_400DA3AA0A731C61_OFFSET UNITYSDK_OFFSET(0x14C649E0)
#define CLASS_1_EE60750735AAF463_METHOD_1_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x14C66840)
#define CLASS_1_EE60750735AAF463_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x14C66600)
#define CLASS_1_EE60750735AAF463_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x14C670E0)
#define CLASS_1_EE60750735AAF463_METHOD_1_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0x14C64890)
#define CLASS_1_EE60750735AAF463_METHOD_1_649CD725976E2285_OFFSET UNITYSDK_OFFSET(0x14C662B0)
#define CLASS_1_EE60750735AAF463_METHOD_1_6585A09F469D07CB_OFFSET UNITYSDK_OFFSET(0x14C66CB0)
#define CLASS_1_EE60750735AAF463_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x14C667A0)
#define CLASS_1_EE60750735AAF463_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x14C65330)
#define CLASS_1_EE60750735AAF463_METHOD_1_946E893B542F1A3F_OFFSET UNITYSDK_OFFSET(0x14C66030)
#define CLASS_1_EE60750735AAF463_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x14C655A0)
#define CLASS_1_EE60750735AAF463_METHOD_1_A55B7B7C8851EF52_OFFSET UNITYSDK_OFFSET(0x14C669C0)
#define CLASS_1_EE60750735AAF463_METHOD_1_B42B5D9A4A1521DC_OFFSET UNITYSDK_OFFSET(0x14C66D70)
#define CLASS_1_EE60750735AAF463_METHOD_1_D81F572FFC3BC22C_OFFSET UNITYSDK_OFFSET(0x14C64700)
#define CLASS_1_EE60750735AAF463_METHOD_1_EC2956354B919FE0_OFFSET UNITYSDK_OFFSET(0x14C668F0)
#define CLASS_1_EE60750735AAF463_METHOD_1_EF2769380DD25684_OFFSET UNITYSDK_OFFSET(0x14C645C0)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x14C670B0)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x14C670C0)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x14C670D0)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14C670A0)
#define CLASS_1_EE60750735AAF463__CTOR_OFFSET UNITYSDK_OFFSET(0x14C670F0)

inline static constexpr unsigned int Class_1_EE60750735AAF463_TypeDefinitionIndex = 76786;

class Class_1_EE60750735AAF463 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::Class_1_1CC5A5764D87DC25* Field_1_1; // 0x10
	::Il2CppArray<::SubwayScheduleData_SubwayMemberTypeWeightConfig>* Field_1_2; // 0x18
	::Il2CppArray<::SubwayScheduleData_SubwayMemberAnimWeightConfig>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::Class_1_EE60750735AAF463_Struct_2_0EC4DCF5C3BC3D80>* Field_1_4; // 0x28
	::RPG::Client::Subway::AirlineSubwayWay* Field_1_5; // 0x30
	::Il2CppArray<::Struct_2_4402F405B21E2F67>* Field_1_6; // 0x38
	::RPG::Client::Subway::AirshipSubway* Field_1_7; // 0x40
	::System::Single Field_1_8; // 0x48
	::System::Single Field_1_9; // 0x4C
	::System::Boolean Field_1_10; // 0x50
	::System::Single Field_1_11; // 0x54
	::System::Single Field_1_12; // 0x58
	::System::Single Field_1_13; // 0x5C
	::RPG::Client::Subway::EAirshipSubwayState Field_1_14; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_EF2769380DD25684(::RPG::Client::Subway::AirshipSubway* a1, ::Il2CppArray<::Struct_2_4402F405B21E2F67>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirshipSubway*, ::Il2CppArray<::Struct_2_4402F405B21E2F67>*))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_EF2769380DD25684_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D81F572FFC3BC22C(::RPG::Client::Subway::AirlineSubwayWay* a1, ::Class_1_1CC5A5764D87DC25* a2, ::SubwayScheduleData* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirlineSubwayWay*, ::Class_1_1CC5A5764D87DC25*, ::SubwayScheduleData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_D81F572FFC3BC22C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2B1380CB28524A16(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_2B1380CB28524A16_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_3BFE3B9EF8374F61_OFFSET))(this);
	}

	::System::Void Method_1_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_1713F44301AA802F_OFFSET))(this);
	}

	::System::Void Method_1_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_04F02FC65FAA2E0C_OFFSET))(this);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}

	::Class_1_ED08D5C0F3E4BD73_EStationOpenState Method_1_A55B7B7C8851EF52()
	{
		return ((::Class_1_ED08D5C0F3E4BD73_EStationOpenState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_A55B7B7C8851EF52_OFFSET))(this);
	}

	::System::Void Method_1_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_609FA3D38FA252B6_OFFSET))(this, a1);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_946E893B542F1A3F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_946E893B542F1A3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_1_3060617FE14209CC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_3060617FE14209CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC2956354B919FE0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_EC2956354B919FE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_400DA3AA0A731C61(::RPG::Client::Subway::AirshipSubway* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirshipSubway*))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_400DA3AA0A731C61_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_0A5CC2B5F8A75E93(::System::String* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_0A5CC2B5F8A75E93_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_6585A09F469D07CB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_6585A09F469D07CB_OFFSET))(this);
	}

	::System::Single Method_1_B42B5D9A4A1521DC(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_B42B5D9A4A1521DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_649CD725976E2285(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_649CD725976E2285_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
