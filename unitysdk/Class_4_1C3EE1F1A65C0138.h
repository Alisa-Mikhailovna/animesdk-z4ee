#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_1C3EE1F1A65C0138_METHOD_4_659A18F107B0F4EB_OFFSET UNITYSDK_OFFSET(0x1AB47FE0)
#define CLASS_4_1C3EE1F1A65C0138_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x1AB47DB0)
#define CLASS_4_1C3EE1F1A65C0138_METHOD_4_CB465EAED8BA1FD8_OFFSET UNITYSDK_OFFSET(0x1AB47D10)
#define CLASS_4_1C3EE1F1A65C0138_METHOD_4_F33253E40A4719A6_OFFSET UNITYSDK_OFFSET(0x1AB47F80)
#define CLASS_4_1C3EE1F1A65C0138__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB47D70)

inline static constexpr unsigned int Class_4_1C3EE1F1A65C0138_TypeDefinitionIndex = 23251;

class Class_4_1C3EE1F1A65C0138 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::ILBattleCharacterLocation>* Field_4_0; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C3EE1F1A65C0138__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_CB465EAED8BA1FD8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1C3EE1F1A65C0138*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1C3EE1F1A65C0138*&))((::PBYTE)hIl2Cpp + CLASS_4_1C3EE1F1A65C0138_METHOD_4_CB465EAED8BA1FD8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1C3EE1F1A65C0138* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1C3EE1F1A65C0138*))((::PBYTE)hIl2Cpp + CLASS_4_1C3EE1F1A65C0138_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F33253E40A4719A6(::SimpleJSON::JSONNode* a1, ::Class_4_1C3EE1F1A65C0138*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1C3EE1F1A65C0138*&))((::PBYTE)hIl2Cpp + CLASS_4_1C3EE1F1A65C0138_METHOD_4_F33253E40A4719A6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_659A18F107B0F4EB(::SimpleJSON::JSONNode* a1, ::Class_4_1C3EE1F1A65C0138* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_1C3EE1F1A65C0138*))((::PBYTE)hIl2Cpp + CLASS_4_1C3EE1F1A65C0138_METHOD_4_659A18F107B0F4EB_OFFSET))(a1, a2);
	}
};
