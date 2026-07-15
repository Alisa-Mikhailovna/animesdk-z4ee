#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNewsForumOperationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_2B191171D22B4B5F_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1AF1C190)
#define CLASS_3_2B191171D22B4B5F_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1AF1C150)
#define CLASS_3_2B191171D22B4B5F__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF1C180)

inline static constexpr unsigned int Class_3_2B191171D22B4B5F_TypeDefinitionIndex = 9931;

class Class_3_2B191171D22B4B5F : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 Field_3_0; // 0x18
	::RPG::Client::LimaoNewsForumOperationType Field_3_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B191171D22B4B5F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2B191171D22B4B5F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2B191171D22B4B5F*&))((::PBYTE)hIl2Cpp + CLASS_3_2B191171D22B4B5F_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2B191171D22B4B5F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2B191171D22B4B5F*))((::PBYTE)hIl2Cpp + CLASS_3_2B191171D22B4B5F_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
