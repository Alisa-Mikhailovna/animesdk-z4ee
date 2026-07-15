#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_AA2DBA2F446EDD1D_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x145DC3B0)
#define CLASS_2_AA2DBA2F446EDD1D_1_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x145DC5F0)
#define CLASS_2_AA2DBA2F446EDD1D_1_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x145DC3C0)
#define CLASS_2_AA2DBA2F446EDD1D_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x145DC5B0)
#define CLASS_2_AA2DBA2F446EDD1D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x145DC6A0)

inline static constexpr unsigned int Class_2_AA2DBA2F446EDD1D_1_TypeDefinitionIndex = 53603;

class Class_2_AA2DBA2F446EDD1D_1 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::UInt32 Field_2_0; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DBA2F446EDD1D_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DBA2F446EDD1D_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DBA2F446EDD1D_1_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DBA2F446EDD1D_1_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DBA2F446EDD1D_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
