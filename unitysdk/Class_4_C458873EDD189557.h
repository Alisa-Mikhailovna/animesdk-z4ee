#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_C458873EDD189557_METHOD_4_2925F5E32466503A_OFFSET UNITYSDK_OFFSET(0x1AE0D420)
#define CLASS_4_C458873EDD189557_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1AE0D650)
#define CLASS_4_C458873EDD189557_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1AE0D620)
#define CLASS_4_C458873EDD189557_METHOD_4_C65FDB2FAF4ABCC7_OFFSET UNITYSDK_OFFSET(0x1AE0D460)
#define CLASS_4_C458873EDD189557__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE0D450)

inline static constexpr unsigned int Class_4_C458873EDD189557_TypeDefinitionIndex = 20763;

class Class_4_C458873EDD189557 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::CompareType Field_4_0; // 0x20
	::System::UInt32 Field_4_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C458873EDD189557__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_2925F5E32466503A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C458873EDD189557*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C458873EDD189557*&))((::PBYTE)hIl2Cpp + CLASS_4_C458873EDD189557_METHOD_4_2925F5E32466503A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C65FDB2FAF4ABCC7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C458873EDD189557* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C458873EDD189557*))((::PBYTE)hIl2Cpp + CLASS_4_C458873EDD189557_METHOD_4_C65FDB2FAF4ABCC7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_C458873EDD189557*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C458873EDD189557*&))((::PBYTE)hIl2Cpp + CLASS_4_C458873EDD189557_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_C458873EDD189557* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_C458873EDD189557*))((::PBYTE)hIl2Cpp + CLASS_4_C458873EDD189557_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
