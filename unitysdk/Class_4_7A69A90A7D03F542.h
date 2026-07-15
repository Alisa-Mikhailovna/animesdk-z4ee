#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FateRinCardContentType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_7A69A90A7D03F542_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1AE554E0)
#define CLASS_4_7A69A90A7D03F542_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1AE554A0)
#define CLASS_4_7A69A90A7D03F542_METHOD_4_B193BE3C813F58CC_OFFSET UNITYSDK_OFFSET(0x1AE55200)
#define CLASS_4_7A69A90A7D03F542_METHOD_4_FE72CD80F88EC4C9_OFFSET UNITYSDK_OFFSET(0x1AE55250)
#define CLASS_4_7A69A90A7D03F542__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE55240)

inline static constexpr unsigned int Class_4_7A69A90A7D03F542_TypeDefinitionIndex = 19140;

class Class_4_7A69A90A7D03F542 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::DynamicFloat*>* Field_4_0; // 0x20
	::RPG::GameCore::FateRinCardContentType Field_4_1; // 0x28
	::RPG::GameCore::CompareType Field_4_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A69A90A7D03F542__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_B193BE3C813F58CC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7A69A90A7D03F542*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7A69A90A7D03F542*&))((::PBYTE)hIl2Cpp + CLASS_4_7A69A90A7D03F542_METHOD_4_B193BE3C813F58CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_FE72CD80F88EC4C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7A69A90A7D03F542* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7A69A90A7D03F542*))((::PBYTE)hIl2Cpp + CLASS_4_7A69A90A7D03F542_METHOD_4_FE72CD80F88EC4C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_7A69A90A7D03F542*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_7A69A90A7D03F542*&))((::PBYTE)hIl2Cpp + CLASS_4_7A69A90A7D03F542_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_7A69A90A7D03F542* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_7A69A90A7D03F542*))((::PBYTE)hIl2Cpp + CLASS_4_7A69A90A7D03F542_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
