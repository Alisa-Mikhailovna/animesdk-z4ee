#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define CLASS_3_460B59E6EC8A4DB8_METHOD_3_514ABAC4020261C0_OFFSET UNITYSDK_OFFSET(0x1AC0C2E0)
#define CLASS_3_460B59E6EC8A4DB8_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x1AC0C200)
#define CLASS_3_460B59E6EC8A4DB8__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC0C280)

inline static constexpr unsigned int Class_3_460B59E6EC8A4DB8_TypeDefinitionIndex = 23255;

class Class_3_460B59E6EC8A4DB8 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::Il2CppArray<::System::String*>* Field_3_4; // 0x38
	::System::String* Field_3_5; // 0x40
	::RPG::GameCore::MonsterEnergyBarCustomColor* Field_3_6; // 0x48
	::RPG::GameCore::DynamicFloat* Field_3_7; // 0x50
	::Il2CppArray<::RPG::GameCore::UITextNode*>* Field_3_8; // 0x58
	::System::String* Field_3_9; // 0x60
	::RPG::GameCore::DynamicFloat* Field_3_10; // 0x68
	::System::String* Field_3_11; // 0x70
	::RPG::GameCore::BoolEx Field_3_12; // 0x78
	::System::Int32 Field_3_13; // 0x7C
	::RPG::GameCore::MonsterEnergyBarType Field_3_14; // 0x80
	::System::Int32 Field_3_15; // 0x84
	::System::Int32 Field_3_16; // 0x88
	::RPG::GameCore::BoolEx Field_3_17; // 0x8C
	::RPG::GameCore::MonsterEnergyBarNumColor Field_3_18; // 0x90
	::RPG::GameCore::EnergyBarState Field_3_19; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_460B59E6EC8A4DB8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_460B59E6EC8A4DB8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_460B59E6EC8A4DB8*&))((::PBYTE)hIl2Cpp + CLASS_3_460B59E6EC8A4DB8_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_514ABAC4020261C0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_460B59E6EC8A4DB8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_460B59E6EC8A4DB8*))((::PBYTE)hIl2Cpp + CLASS_3_460B59E6EC8A4DB8_METHOD_3_514ABAC4020261C0_OFFSET))(a1, a2);
	}
};
