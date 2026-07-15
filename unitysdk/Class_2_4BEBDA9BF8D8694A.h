#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_648258D77F597F54.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4BEBDA9BF8D8694A_Class_1_5D9E8B61A63FE4D2;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_4BEBDA9BF8D8694A_GET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0xB966B80)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_59D66E8B78D34F93_OFFSET UNITYSDK_OFFSET(0xB965B10)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0xB965100)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xB966B30)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_C4533278489E08D3_OFFSET UNITYSDK_OFFSET(0xB965960)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_CD48C834B961DFED_OFFSET UNITYSDK_OFFSET(0xB966510)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xB964E70)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_FBA4254EF4E174E5_OFFSET UNITYSDK_OFFSET(0xB966100)
#define CLASS_2_4BEBDA9BF8D8694A__CTOR_OFFSET UNITYSDK_OFFSET(0xB966B90)

inline static constexpr unsigned int Class_2_4BEBDA9BF8D8694A_TypeDefinitionIndex = 67474;

class Class_2_4BEBDA9BF8D8694A : public ::Class_1_648258D77F597F54
{
public:
	::Class_2_4BEBDA9BF8D8694A_Class_1_5D9E8B61A63FE4D2* Field_2_0; // 0x30
	::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_2_2; // 0x40
	::Il2CppArray<::System::Nullable_1<::UnityEngine::Vector3>>* Field_2_3; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::TAUtils::SimpleTransform>* Field_2_4; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_5; // 0x58
	::UnityEngine::Vector3 Field_2_6; // 0x60
	::UnityEngine::Vector3 Field_2_7; // 0x6C
	::System::Int32 Field_2_8; // 0x78
	::UnityEngine::Vector3 Field_2_9; // 0x7C
	::System::Boolean Field_2_10; // 0x88
	::UnityEngine::Vector3 Field_2_11; // 0x8C
	::UnityEngine::Vector3 Field_2_12; // 0x98
	::System::Int32 Field_2_13; // 0xA4
	::System::Single Field_2_14; // 0xA8
	::System::Int32 Field_2_15; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Boolean Method_2_59D66E8B78D34F93(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_59D66E8B78D34F93_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C4533278489E08D3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_C4533278489E08D3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FBA4254EF4E174E5(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_FBA4254EF4E174E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD48C834B961DFED(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_CD48C834B961DFED_OFFSET))(this, a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Boolean get_EnableRuntimeTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_GET_ENABLERUNTIMETICK_OFFSET))(this);
	}
};
