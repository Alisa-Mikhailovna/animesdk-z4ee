#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_0EB17C6B86E340AC_1_METHOD_4_006ABDD1DFAA24CE_OFFSET UNITYSDK_OFFSET(0x1AB6BE50)
#define CLASS_4_0EB17C6B86E340AC_1_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1AB6C020)
#define CLASS_4_0EB17C6B86E340AC_1_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1AB6BFF0)
#define CLASS_4_0EB17C6B86E340AC_1_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x1AB6BE90)
#define CLASS_4_0EB17C6B86E340AC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB6BE80)

inline static constexpr unsigned int Class_4_0EB17C6B86E340AC_1_TypeDefinitionIndex = 23313;

class Class_4_0EB17C6B86E340AC_1 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicString* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0EB17C6B86E340AC_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_006ABDD1DFAA24CE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_0EB17C6B86E340AC_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_0EB17C6B86E340AC_1*&))((::PBYTE)hIl2Cpp + CLASS_4_0EB17C6B86E340AC_1_METHOD_4_006ABDD1DFAA24CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_0EB17C6B86E340AC_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_0EB17C6B86E340AC_1*))((::PBYTE)hIl2Cpp + CLASS_4_0EB17C6B86E340AC_1_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_0EB17C6B86E340AC_1*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_0EB17C6B86E340AC_1*&))((::PBYTE)hIl2Cpp + CLASS_4_0EB17C6B86E340AC_1_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_0EB17C6B86E340AC_1* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_0EB17C6B86E340AC_1*))((::PBYTE)hIl2Cpp + CLASS_4_0EB17C6B86E340AC_1_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
